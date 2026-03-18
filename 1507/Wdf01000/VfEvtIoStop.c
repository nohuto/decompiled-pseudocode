/*
 * XREFs of VfEvtIoStop @ 0x1C00CFB80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Template_pp @ 0x1C006B12C (Template_pp.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoStop(unsigned __int64 Queue, WDFREQUEST__ *Request, unsigned int ActionFlags)
{
  BOOLEAN v4; // di
  char *TypedContext; // rsi
  void (__fastcall *v6)(unsigned __int64, WDFREQUEST__ *, _QWORD); // r14
  FxObject *v7; // rbx
  FxObject *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  __int64 Offset; // rdx
  FxObject *v11; // rcx
  FxDeviceBase *m_DeviceBase; // r14
  const void *v13; // r14
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // r14
  FxDeviceBase *v18; // rcx
  const void *v19; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v21; // al
  __int64 v22; // rbx
  void *PPObject; // [rsp+38h] [rbp-38h] BYREF
  WDFREQUEST__ *v25; // [rsp+40h] [rbp-30h]
  void (__fastcall *v26)(unsigned __int64, WDFREQUEST__ *, _QWORD); // [rsp+48h] [rbp-28h]
  _GUID activityId; // [rsp+50h] [rbp-20h] BYREF

  v25 = Request;
  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v6 = (void (__fastcall *)(unsigned __int64, WDFREQUEST__ *, _QWORD))*((_QWORD *)TypedContext + 8);
  v26 = v6;
  if ( v6 )
  {
    activityId.Data1 = 0;
    *(_QWORD *)&activityId.Data2 = 0LL;
    *(_DWORD *)&activityId.Data4[4] = 0;
    v7 = (FxObject *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = v7;
    if ( (Queue & 1) != 0 )
      v8 = (FxObject *)((char *)v7 - LOWORD(v7->__vftable));
    m_Globals = v8->m_Globals;
    if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      if ( !Queue )
        FxVerifierBugCheckWorker(v8->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
      LOWORD(Offset) = 0;
      v11 = (FxObject *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (Queue & 1) != 0 )
      {
        Offset = LOWORD(v7->__vftable);
        v11 = (FxObject *)((char *)v7 - Offset);
      }
      if ( v11->m_Type == 4099 )
      {
        PPObject = v11;
      }
      else
      {
        FxObjectHandleGetPtrQI(v11, &PPObject, (void *)Queue, 0x1003u, Offset);
        v11 = (FxObject *)PPObject;
      }
      m_DeviceBase = v11->m_DeviceBase;
      if ( m_DeviceBase->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
      EtwActivityIdControl(3u, &activityId);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
        Template_pp(v15, &FX_EVTIOSTOP_START, &activityId, Method, v13);
      v26(Queue, v25, ActionFlags);
      v16 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (Queue & 1) != 0 )
        v16 = (unsigned __int64)v7 - LOWORD(v7->__vftable);
      v17 = *(_QWORD *)(v16 + 16);
      LOWORD(v16) = 0;
      if ( (Queue & 1) != 0 )
      {
        v16 = LOWORD(v7->__vftable);
        v7 = (FxObject *)((char *)v7 - v16);
      }
      if ( v7->m_Type == 4099 )
      {
        PPObject = v7;
      }
      else
      {
        FxObjectHandleGetPtrQI(v7, &PPObject, (void *)Queue, 0x1003u, v16);
        v7 = (FxObject *)PPObject;
      }
      v18 = v7->m_DeviceBase;
      if ( v18->m_ObjectSize )
        v19 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v19 = 0LL;
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
        Template_pp(
          (unsigned __int64)v19,
          &FX_EVTIOSTOP_STOP,
          &activityId,
          *(const void **)(*(_QWORD *)(v17 + 72) + 168LL),
          v19);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( KeGetCurrentIrql() <= 1u )
        v4 = KeAreApcsDisabled();
      v6(Queue, v25, ActionFlags);
      v21 = KeGetCurrentIrql();
      if ( CurrentIrql != v21 )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
          WDF_VERIFIER_IRQL_MISMATCH,
          CurrentIrql,
          v21);
      v22 = *(_QWORD *)TypedContext;
      if ( KeGetCurrentIrql() <= 1u && v4 != KeAreApcsDisabled() )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(v22 - 416),
          WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
          (ULONG_PTR)v6,
          0LL);
    }
  }
}
