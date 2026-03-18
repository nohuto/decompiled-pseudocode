/*
 * XREFs of VfEvtIoDeviceControl @ 0x1C00CF3E0
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

void __fastcall VfEvtIoDeviceControl(
        WDFQUEUE__ *Queue,
        unsigned __int64 Request,
        unsigned __int64 OutputBufferLength,
        void *InputBufferLength,
        unsigned int IoControlCode)
{
  BOOLEAN v9; // bl
  char *TypedContext; // rdi
  void (__fastcall *v11)(WDFQUEUE__ *, unsigned __int64, unsigned __int64, void *, unsigned int); // r15
  FxObject *v12; // rcx
  FxObject *v13; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rdi
  __int64 Offset; // rdx
  __int64 v17; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  const void *RegHandle; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v21; // al
  __int64 v22; // rdi
  void *PPObject; // [rsp+30h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-20h] BYREF

  PPObject = InputBufferLength;
  v9 = 0;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v11 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64, unsigned __int64, void *, unsigned int))*((_QWORD *)TypedContext + 6);
  if ( v11 )
  {
    ActivityId.Data1 = 0;
    *(_QWORD *)&ActivityId.Data2 = 0LL;
    *(_DWORD *)&ActivityId.Data4[4] = 0;
    v12 = (FxObject *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v12;
    if ( (Request & 1) != 0 )
      v13 = (FxObject *)((char *)v12 - LOWORD(v12->__vftable));
    m_Globals = v13->m_Globals;
    if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
      if ( !Request )
        FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
      LOWORD(Offset) = 0;
      if ( (Request & 1) != 0 )
      {
        Offset = LOWORD(v12->__vftable);
        v12 = (FxObject *)((char *)v12 - Offset);
      }
      if ( v12->m_Type == 4104 )
      {
        PPObject = v12;
      }
      else
      {
        FxObjectHandleGetPtrQI(v12, &PPObject, (void *)Request, 0x1008u, Offset);
        v12 = (FxObject *)PPObject;
      }
      if ( (unsigned int)IoGetActivityIdIrp(*(_QWORD *)&v12[1].m_SpinLock.m_DbgFlagIsInitialized, &ActivityId) == -1073741275 )
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
          **(_BYTE **)(*(_QWORD *)(v17 + 152) + 184LL),
          Method,
          RegHandle);
      }
      v11(Queue, Request, OutputBufferLength, InputBufferLength, IoControlCode);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( KeGetCurrentIrql() <= 1u )
        v9 = KeAreApcsDisabled();
      v11(Queue, Request, OutputBufferLength, PPObject, IoControlCode);
      v21 = KeGetCurrentIrql();
      if ( CurrentIrql != v21 )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(*(_QWORD *)TypedContext - 416LL),
          WDF_VERIFIER_IRQL_MISMATCH,
          CurrentIrql,
          v21);
      v22 = *(_QWORD *)TypedContext;
      if ( KeGetCurrentIrql() <= 1u && v9 != KeAreApcsDisabled() )
        FxVerifierBugCheckWorker(
          (_FX_DRIVER_GLOBALS *)(v22 - 416),
          WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
          (ULONG_PTR)v11,
          0LL);
    }
  }
}
