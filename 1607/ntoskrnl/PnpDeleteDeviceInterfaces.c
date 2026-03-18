/*
 * XREFs of PnpDeleteDeviceInterfaces @ 0x14062B908
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404F64E0 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PnpUnicodeStringToWstrFree @ 0x140500F80 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140500FB4 (PnpUnicodeStringToWstr.c)
 *     _CmDeleteDeviceInterface @ 0x1406D7DE0 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PnpDeleteDeviceInterfaces(unsigned __int16 *a1)
{
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int MatchingFilteredDeviceInterfaceList; // edi
  unsigned int v5; // esi
  const WCHAR *i; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+10h] BYREF
  void *v13; // [rsp+90h] [rbp+18h] BYREF

  v13 = 0LL;
  PoolWithTag = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v13, 0LL, a1);
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    v12 = 4096;
    MatchingFilteredDeviceInterfaceList = -1073741789;
    v5 = 0;
    while ( v5 < 5 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x20207050u);
      if ( !PoolWithTag )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        break;
      }
      ++v5;
      MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              0LL,
                                              (__int64)v13,
                                              0,
                                              0LL,
                                              0LL,
                                              (__int64)PoolWithTag,
                                              v12,
                                              (__int64)&v12,
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  PnpUnicodeStringToWstrFree(v13, (__int64)a1);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
