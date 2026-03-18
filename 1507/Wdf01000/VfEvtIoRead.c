/*
 * XREFs of VfEvtIoRead @ 0x1C00CF880
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Template_cpp @ 0x1C006B0B0 (Template_cpp.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00CDE0C (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoRead(WDFQUEUE__ *Queue, unsigned __int64 Request, unsigned __int64 Length)
{
  BOOLEAN v6; // bl
  char *TypedContext; // rdi
  void (__fastcall *v8)(WDFQUEUE__ *, unsigned __int64, unsigned __int64); // r15
  FxObject *v9; // rcx
  FxObject *v10; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rdi
  __int64 Offset; // rdx
  __int64 v14; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  const void *RegHandle; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v18; // al
  __int64 v19; // rdi
  void *PPObject; // [rsp+30h] [rbp-20h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-18h] BYREF

  v6 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v8 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64, unsigned __int64))*((_QWORD *)TypedContext + 4);
  if ( v8 )
  {
    ActivityId.Data1 = 0;
    *(_QWORD *)&ActivityId.Data2 = 0LL;
    *(_DWORD *)&ActivityId.Data4[4] = 0;
    v9 = (FxObject *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    v10 = v9;
    if ( (Request & 1) != 0 )
      v10 = (FxObject *)((char *)v9 - LOWORD(v9->__vftable));
    m_Globals = v10->m_Globals;
    if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
      if ( !Request )
        FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
      LOWORD(Offset) = 0;
      if ( (Request & 1) != 0 )
      {
        Offset = LOWORD(v9->__vftable);
        v9 = (FxObject *)((char *)v9 - Offset);
      }
      if ( v9->m_Type == 4104 )
      {
        PPObject = v9;
      }
      else
      {
        FxObjectHandleGetPtrQI(v9, &PPObject, (void *)Request, 0x1008u, Offset);
        v9 = (FxObject *)PPObject;
      }
      if ( (unsigned int)IoGetActivityIdIrp(*(_QWORD *)&v9[1].m_SpinLock.m_DbgFlagIsInitialized, &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
      {
        m_DeviceBase = FxRequest::GetCurrentQueue((FxRequest *)PPObject)->m_DeviceBase;
        if ( m_DeviceBase->m_ObjectSize )
          RegHandle = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          RegHandle = 0LL;
        Template_cpp(
          (unsigned __int64)RegHandle,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v14 + 152) + 184LL),
          Method,
          RegHandle);
      }
      v8(Queue, Request, Length);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( KeGetCurrentIrql() <= 1u )
        v6 = KeAreApcsDisabled();
      v8(Queue, Request, Length);
      v18 = KeGetCurrentIrql();
      if ( CurrentIrql != v18 )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
          WDF_VERIFIER_IRQL_MISMATCH,
          CurrentIrql,
          v18);
      v19 = *(_QWORD *)TypedContext;
      if ( KeGetCurrentIrql() <= 1u && v6 != KeAreApcsDisabled() )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(v19 - 416),
          WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
          (ULONG_PTR)v8,
          0LL);
    }
  }
}
