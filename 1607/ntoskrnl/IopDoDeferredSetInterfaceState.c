/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x1404E7110
 * Callers:
 *     PipProcessStartPhase2 @ 0x1404E7068 (PipProcessStartPhase2.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1400B0660 (PpMarkDeviceStackExtensionFlag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  const void ***v3; // rbx
  const void **v4; // rdi
  const void ***v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v3 = (const void ***)(a1 + 608);
  while ( *v3 != (const void **)v3 )
  {
    v4 = *v3;
    v5 = (const void ***)**v3;
    if ( (*v3)[1] != v3 || v5[1] != v4 )
      __fastfail(3u);
    *v3 = (const void **)v5;
    v5[1] = (const void **)v3;
    IopProcessSetInterfaceState(v4 + 2, 1, 0);
    ExFreePoolWithTag((PVOID)v4[3], 0);
    ExFreePoolWithTag(v4, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return 0LL;
}
