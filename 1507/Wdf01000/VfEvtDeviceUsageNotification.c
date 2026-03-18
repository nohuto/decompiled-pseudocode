/*
 * XREFs of VfEvtDeviceUsageNotification @ 0x1C00CEF20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceUsageNotification(
        WDFDEVICE__ *Device,
        unsigned int NotificationType,
        unsigned __int8 IsInNotificationPath)
{
  BOOLEAN v6; // bl
  char *TypedContext; // rdi
  __int64 v8; // r8
  void (__fastcall *v9)(WDFDEVICE__ *, _QWORD, __int64); // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v11; // al
  __int64 v12; // rdi

  v6 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v9 = (void (__fastcall *)(WDFDEVICE__ *, _QWORD, __int64))*((_QWORD *)TypedContext + 16);
  if ( v9 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( KeGetCurrentIrql() <= 1u )
      v6 = KeAreApcsDisabled();
    LOBYTE(v8) = IsInNotificationPath;
    v9(Device, NotificationType, v8);
    v11 = KeGetCurrentIrql();
    if ( CurrentIrql != v11 )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
        WDF_VERIFIER_IRQL_MISMATCH,
        CurrentIrql,
        v11);
    v12 = *(_QWORD *)TypedContext;
    if ( KeGetCurrentIrql() <= 1u && v6 != KeAreApcsDisabled() )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(v12 - 416),
        WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
        (ULONG_PTR)v9,
        0LL);
  }
}
