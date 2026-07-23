/*
 * XREFs of PnpDisableDeviceInterfaces @ 0x14048367C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140085A68 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoSetDeviceInterfaceState @ 0x1403EFF24 (IoSetDeviceInterfaceState.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404D946C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PnpDisableDeviceInterfaces(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS MatchingFilteredDeviceInterfaceList; // edi
  unsigned int v5; // esi
  const WCHAR *i; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF

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
                                              PiPnpRtlCtx,
                                              0,
                                              v13,
                                              1,
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
          IoSetDeviceInterfaceState(&DestinationString, 0);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  PnpUnicodeStringToWstrFree(v13, a1);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
