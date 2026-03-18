/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x1404F16E8
 * Callers:
 *     PipProcessStartPhase2 @ 0x1404F1A4C (PipProcessStartPhase2.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140107730 (PpMarkDeviceStackExtensionFlag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID **v3; // rbx
  PVOID *v4; // rdi
  PVOID **v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v3 = (PVOID **)(a1 + 608);
  while ( *v3 != (PVOID *)v3 )
  {
    v4 = *v3;
    v5 = (PVOID **)**v3;
    if ( (*v3)[1] != v3 || v5[1] != v4 )
      __fastfail(3u);
    *v3 = (PVOID *)v5;
    v5[1] = (PVOID *)v3;
    IopProcessSetInterfaceState((__int64)(v4 + 2), 1, 0);
    ExFreePoolWithTag(v4[3], 0);
    ExFreePoolWithTag(v4, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
