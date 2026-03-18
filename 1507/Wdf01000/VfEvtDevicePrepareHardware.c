/*
 * XREFs of VfEvtDevicePrepareHardware @ 0x1C00CE430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Template_pp @ 0x1C006B12C (Template_pp.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDevicePrepareHardware(
        unsigned __int64 Device,
        WDFCMRESLIST__ *ResourcesRaw,
        WDFCMRESLIST__ *ResourcesTranslated)
{
  unsigned int v6; // edi
  char *TypedContext; // r14
  __int64 (__fastcall *v8)(unsigned __int64, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // r15
  char *v9; // rbx
  char *v10; // rcx
  __int64 v11; // rdx
  const void *v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned __int64 Flink_low; // rcx
  BOOLEAN v17; // bl
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v19; // al
  __int64 v20; // rsi
  _GUID activityId; // [rsp+30h] [rbp-58h] BYREF

  v6 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v8 = (__int64 (__fastcall *)(unsigned __int64, WDFCMRESLIST__ *, WDFCMRESLIST__ *))*((_QWORD *)TypedContext + 6);
  if ( v8 )
  {
    activityId.Data1 = 0;
    *(_QWORD *)&activityId.Data2 = 0LL;
    *(_DWORD *)&activityId.Data4[4] = 0;
    v9 = (char *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
    v10 = v9;
    if ( (Device & 1) != 0 )
      v10 = &v9[-*(unsigned __int16 *)v9];
    v11 = *((_QWORD *)v10 + 2);
    if ( (*(_DWORD *)(v11 + 392) & 0xF00000) != 0 )
    {
      v12 = *(const void **)(*(_QWORD *)(v11 + 72) + 168LL);
      EtwActivityIdControl(3u, &activityId);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
        Template_pp(v13, &FX_POWER_HW_PREPARE_START, &activityId, v12, (const void *)Device);
      v14 = v8(Device, ResourcesRaw, ResourcesTranslated);
      Flink_low = LODWORD(WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink);
      v6 = v14;
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
      {
        if ( (Device & 1) != 0 )
        {
          Flink_low = *(unsigned __int16 *)v9;
          v9 -= Flink_low;
        }
        Template_pp(
          Flink_low,
          &FX_POWER_HW_PREPARE_STOP,
          &activityId,
          *(const void **)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 72LL) + 168LL),
          (const void *)Device);
      }
    }
    else
    {
      v17 = 0;
      CurrentIrql = KeGetCurrentIrql();
      if ( KeGetCurrentIrql() <= 1u )
        v17 = KeAreApcsDisabled();
      v6 = v8(Device, ResourcesRaw, ResourcesTranslated);
      v19 = KeGetCurrentIrql();
      if ( CurrentIrql != v19 )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
          WDF_VERIFIER_IRQL_MISMATCH,
          CurrentIrql,
          v19);
      v20 = *(_QWORD *)TypedContext;
      if ( KeGetCurrentIrql() <= 1u && v17 != KeAreApcsDisabled() )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(v20 - 416),
          WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
          (ULONG_PTR)v8,
          0LL);
    }
  }
  return v6;
}
