/*
 * XREFs of VfEvtDeviceQueryStop @ 0x1C00CE6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceQueryStop(WDFDEVICE__ *Device)
{
  unsigned int v2; // ebx
  char *TypedContext; // rdi
  __int64 (__fastcall *v4)(WDFDEVICE__ *); // rsi
  BOOLEAN v5; // bp
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v7; // al
  __int64 v8; // rdi

  v2 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v4 = (__int64 (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 15);
  if ( v4 )
  {
    v5 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( KeGetCurrentIrql() <= 1u )
      v5 = KeAreApcsDisabled();
    v2 = v4(Device);
    v7 = KeGetCurrentIrql();
    if ( CurrentIrql != v7 )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
        WDF_VERIFIER_IRQL_MISMATCH,
        CurrentIrql,
        v7);
    v8 = *(_QWORD *)TypedContext;
    if ( KeGetCurrentIrql() <= 1u && v5 != KeAreApcsDisabled() )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(v8 - 416),
        WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
        (ULONG_PTR)v4,
        0LL);
  }
  return v2;
}
