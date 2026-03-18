/*
 * XREFs of VfEvtDeviceSelfManagedIoFlush @ 0x1C00CEB10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceSelfManagedIoFlush(WDFDEVICE__ *Device)
{
  BOOLEAN v2; // bl
  char *TypedContext; // rdi
  void (__fastcall *v4)(WDFDEVICE__ *); // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v6; // al
  __int64 v7; // rdi

  v2 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v4 = (void (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 9);
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( KeGetCurrentIrql() <= 1u )
      v2 = KeAreApcsDisabled();
    v4(Device);
    v6 = KeGetCurrentIrql();
    if ( CurrentIrql != v6 )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
        WDF_VERIFIER_IRQL_MISMATCH,
        CurrentIrql,
        v6);
    v7 = *(_QWORD *)TypedContext;
    if ( KeGetCurrentIrql() <= 1u && v2 != KeAreApcsDisabled() )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(v7 - 416),
        WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
        (ULONG_PTR)v4,
        0LL);
  }
}
