/*
 * XREFs of PnpDeleteDeviceInterfaces @ 0x14067C4CC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404587AC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmDeleteDeviceInterface @ 0x140712A50 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PnpDeleteDeviceInterfaces(unsigned __int16 *a1)
{
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int MatchingFilteredDeviceInterfaceList; // edi
  unsigned int v5; // esi
  const WCHAR *i; // rsi
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+10h] BYREF
  void *v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = 0LL;
  PoolWithTag = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v12, 0LL, a1);
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    v11 = 4096;
    MatchingFilteredDeviceInterfaceList = -1073741789;
    v5 = 0;
    while ( v5 < 5 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v11, 0x20207050u);
      if ( !PoolWithTag )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        break;
      }
      ++v5;
      MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              0LL,
                                              (__int64)v12,
                                              0,
                                              0LL,
                                              0LL,
                                              (__int64)PoolWithTag,
                                              v11,
                                              (__int64)&v11,
                                              0);
      if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
        break;
    }
    if ( MatchingFilteredDeviceInterfaceList >= 0 )
    {
      for ( i = (const WCHAR *)PoolWithTag; *i; i += ((unsigned __int64)DestinationString.Length + 2) >> 1 )
      {
        MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, i);
        if ( MatchingFilteredDeviceInterfaceList >= 0 )
          CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, DestinationString.Buffer, 0LL);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  PnpUnicodeStringToWstrFree(v12, (__int64)a1);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
