/*
 * XREFs of VfEvtDeviceReleaseHardware @ 0x1C00CE870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Template_pp @ 0x1C006B12C (Template_pp.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceReleaseHardware(unsigned __int64 Device, WDFCMRESLIST__ *ResourcesTranslated)
{
  unsigned int v4; // edi
  char *TypedContext; // r14
  __int64 (__fastcall *v6)(unsigned __int64, WDFCMRESLIST__ *); // rbp
  char *v7; // rbx
  char *v8; // rcx
  __int64 v9; // rdx
  const void *v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 Flink_low; // rcx
  BOOLEAN v15; // bl
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v17; // al
  __int64 v18; // rsi
  _GUID activityId; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(unsigned __int64, WDFCMRESLIST__ *))*((_QWORD *)TypedContext + 7);
  if ( v6 )
  {
    activityId.Data1 = 0;
    *(_QWORD *)&activityId.Data2 = 0LL;
    *(_DWORD *)&activityId.Data4[4] = 0;
    v7 = (char *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = v7;
    if ( (Device & 1) != 0 )
      v8 = &v7[-*(unsigned __int16 *)v7];
    v9 = *((_QWORD *)v8 + 2);
    if ( (*(_DWORD *)(v9 + 392) & 0xF00000) != 0 )
    {
      v10 = *(const void **)(*(_QWORD *)(v9 + 72) + 168LL);
      EtwActivityIdControl(3u, &activityId);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
        Template_pp(v11, &FX_POWER_HW_RELEASE_START, &activityId, v10, (const void *)Device);
      v12 = v6(Device, ResourcesTranslated);
      Flink_low = LODWORD(WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink);
      v4 = v12;
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
      {
        if ( (Device & 1) != 0 )
        {
          Flink_low = *(unsigned __int16 *)v7;
          v7 -= Flink_low;
        }
        Template_pp(
          Flink_low,
          &FX_POWER_HW_RELEASE_STOP,
          &activityId,
          *(const void **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 72LL) + 168LL),
          (const void *)Device);
      }
    }
    else
    {
      v15 = 0;
      CurrentIrql = KeGetCurrentIrql();
      if ( KeGetCurrentIrql() <= 1u )
        v15 = KeAreApcsDisabled();
      v4 = v6(Device, ResourcesTranslated);
      v17 = KeGetCurrentIrql();
      if ( CurrentIrql != v17 )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
          WDF_VERIFIER_IRQL_MISMATCH,
          CurrentIrql,
          v17);
      v18 = *(_QWORD *)TypedContext;
      if ( KeGetCurrentIrql() <= 1u && v15 != KeAreApcsDisabled() )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(v18 - 416),
          WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
          (ULONG_PTR)v6,
          0LL);
    }
  }
  return v4;
}
