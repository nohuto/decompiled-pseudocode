/*
 * XREFs of VfEvtDeviceUsageNotificationEx @ 0x1C00CF000
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceUsageNotificationEx(
        WDFDEVICE__ *Device,
        unsigned int NotificationType,
        unsigned __int8 IsInNotificationPath)
{
  unsigned int v6; // ebx
  char *TypedContext; // rdi
  __int64 v8; // r8
  __int64 (__fastcall *v9)(WDFDEVICE__ *, _QWORD, __int64); // rbp
  BOOLEAN v10; // si
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v12; // al
  __int64 v13; // rdi

  v6 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v9 = (__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD, __int64))*((_QWORD *)TypedContext + 18);
  if ( v9 )
  {
    v10 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( KeGetCurrentIrql() <= 1u )
      v10 = KeAreApcsDisabled();
    LOBYTE(v8) = IsInNotificationPath;
    v6 = v9(Device, NotificationType, v8);
    v12 = KeGetCurrentIrql();
    if ( CurrentIrql != v12 )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
        WDF_VERIFIER_IRQL_MISMATCH,
        CurrentIrql,
        v12);
    v13 = *(_QWORD *)TypedContext;
    if ( KeGetCurrentIrql() <= 1u && v10 != KeAreApcsDisabled() )
      FxVerifierBugCheckWorker(
        (_FX_DRIVER_GLOBALS *)(v13 - 416),
        WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
        (ULONG_PTR)v9,
        0LL);
  }
  return v6;
}
