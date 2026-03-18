/*
 * XREFs of VfEvtIoResume @ 0x1C00CFAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoResume(WDFQUEUE__ *Queue, WDFREQUEST__ *Request)
{
  BOOLEAN v4; // bl
  char *TypedContext; // rdi
  void (__fastcall *v6)(WDFQUEUE__ *, WDFREQUEST__ *); // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v8; // al
  __int64 v9; // rdi

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v6 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))*((_QWORD *)TypedContext + 9);
  if ( v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( KeGetCurrentIrql() <= 1u )
      v4 = KeAreApcsDisabled();
    v6(Queue, Request);
    v8 = KeGetCurrentIrql();
    if ( CurrentIrql != v8 )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
        WDF_VERIFIER_IRQL_MISMATCH,
        CurrentIrql,
        v8);
    v9 = *(_QWORD *)TypedContext;
    if ( KeGetCurrentIrql() <= 1u && v4 != KeAreApcsDisabled() )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(v9 - 416),
        WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
        (ULONG_PTR)v6,
        0LL);
  }
}
