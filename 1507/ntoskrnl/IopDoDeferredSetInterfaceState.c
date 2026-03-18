/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x140550270
 * Callers:
 *     PipProcessStartPhase2 @ 0x1405501C8 (PipProcessStartPhase2.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14012B9FC (PpMarkDeviceStackExtensionFlag.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING **v3; // rbx
  UNICODE_STRING *v4; // rdi
  __int64 v5; // rax
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax

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
    IopProcessSetInterfaceState(v4 + 1, 1, 0LL);
    ExFreePoolWithTag(v4[1].Buffer, 0);
    ExFreePoolWithTag(v4, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
