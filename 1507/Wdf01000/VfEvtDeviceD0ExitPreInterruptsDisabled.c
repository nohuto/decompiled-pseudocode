/*
 * XREFs of VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00CE350
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceD0ExitPreInterruptsDisabled(WDFDEVICE__ *Device, unsigned int TargetState)
{
  unsigned int v4; // ebx
  char *TypedContext; // rdi
  __int64 (__fastcall *v6)(WDFDEVICE__ *, _QWORD); // rbp
  BOOLEAN v7; // si
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v9; // al
  __int64 v10; // rdi

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))*((_QWORD *)TypedContext + 5);
  if ( v6 )
  {
    v7 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( KeGetCurrentIrql() <= 1u )
      v7 = KeAreApcsDisabled();
    v4 = v6(Device, TargetState);
    v9 = KeGetCurrentIrql();
    if ( CurrentIrql != v9 )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
        WDF_VERIFIER_IRQL_MISMATCH,
        CurrentIrql,
        v9);
    v10 = *(_QWORD *)TypedContext;
    if ( KeGetCurrentIrql() <= 1u && v7 != KeAreApcsDisabled() )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(v10 - 416),
        WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
        (ULONG_PTR)v6,
        0LL);
  }
  return v4;
}
