/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x14050D724
 * Callers:
 *     PipProcessStartPhase2 @ 0x14050CFC4 (PipProcessStartPhase2.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14010AE28 (PpMarkDeviceStackExtensionFlag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING **v3; // rbx
  UNICODE_STRING *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v3 = (UNICODE_STRING **)(a1 + 608);
  while ( *v3 != (UNICODE_STRING *)v3 )
  {
    v4 = *v3;
    v5 = *(_QWORD *)&(*v3)->Length;
    if ( (UNICODE_STRING **)(*v3)->Buffer != v3 || *(UNICODE_STRING **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (UNICODE_STRING *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    IopProcessSetInterfaceState(v4 + 1, 1, 0);
    ExFreePoolWithTag(v4[1].Buffer, 0);
    ExFreePoolWithTag(v4, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return 0LL;
}
