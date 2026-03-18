/*
 * XREFs of imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00CB520
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Template_cpp @ 0x1C006B0B0 (Template_cpp.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveFoundRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *FoundRequest,
        WDFREQUEST__ **OutRequest)
{
  unsigned int v5; // edi
  void *v6; // r11
  unsigned __int64 v7; // rcx
  FxObject *v8; // rcx
  FxObject *v9; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 Offset; // rdx
  FxDeviceBase *m_DeviceBase; // rdx
  __int64 v14; // rcx
  const void *RegHandle; // rdx
  void *PPObject; // [rsp+30h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-20h] BYREF

  v5 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveFoundRequest)(
         DriverGlobals,
         Queue,
         FoundRequest);
  if ( !v5 )
  {
    v6 = *OutRequest;
    v7 = (unsigned __int64)*OutRequest;
    ActivityId.Data1 = 0;
    *(_QWORD *)&ActivityId.Data2 = 0LL;
    v8 = (FxObject *)(~v7 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_DWORD *)&ActivityId.Data4[4] = 0;
    v9 = v8;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      v9 = (FxObject *)((char *)v8 - LOWORD(v8->__vftable));
    m_Globals = v9->m_Globals;
    if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
      if ( !v6 )
        FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
      LOWORD(Offset) = 0;
      if ( ((unsigned __int8)v6 & 1) != 0 )
      {
        Offset = LOWORD(v8->__vftable);
        v8 = (FxObject *)((char *)v8 - Offset);
      }
      if ( v8->m_Type == 4104 )
      {
        PPObject = v8;
      }
      else
      {
        FxObjectHandleGetPtrQI(v8, &PPObject, v6, 0x1008u, Offset);
        v8 = (FxObject *)PPObject;
      }
      if ( (unsigned int)IoGetActivityIdIrp(*(_QWORD *)&v8[1].m_SpinLock.m_DbgFlagIsInitialized, &ActivityId) == -1073741275 )
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
          *(_QWORD *)(*(_QWORD *)(v14 + 152) + 184LL),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v14 + 152) + 184LL),
          Method,
          RegHandle);
      }
    }
  }
  return v5;
}
