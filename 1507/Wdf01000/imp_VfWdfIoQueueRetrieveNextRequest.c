/*
 * XREFs of imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00CB6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Template_cpp @ 0x1C006B0B0 (Template_cpp.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ **OutRequest)
{
  unsigned int v4; // edi
  void *v5; // r11
  unsigned __int64 v6; // rcx
  FxObject *v7; // rcx
  FxObject *v8; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 Offset; // rdx
  FxDeviceBase *m_DeviceBase; // rdx
  __int64 v13; // rcx
  const void *RegHandle; // rdx
  void *PPObject; // [rsp+30h] [rbp-20h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-18h] BYREF

  v4 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveNextRequest)(
         DriverGlobals,
         Queue);
  if ( !v4 )
  {
    v5 = *OutRequest;
    v6 = (unsigned __int64)*OutRequest;
    ActivityId.Data1 = 0;
    *(_QWORD *)&ActivityId.Data2 = 0LL;
    v7 = (FxObject *)(~v6 & 0xFFFFFFFFFFFFFFF8uLL);
    *(_DWORD *)&ActivityId.Data4[4] = 0;
    v8 = v7;
    if ( ((unsigned __int8)v5 & 1) != 0 )
      v8 = (FxObject *)((char *)v7 - LOWORD(v7->__vftable));
    m_Globals = v8->m_Globals;
    if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
      if ( !v5 )
        FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
      LOWORD(Offset) = 0;
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        Offset = LOWORD(v7->__vftable);
        v7 = (FxObject *)((char *)v7 - Offset);
      }
      if ( v7->m_Type == 4104 )
      {
        PPObject = v7;
      }
      else
      {
        FxObjectHandleGetPtrQI(v7, &PPObject, v5, 0x1008u, Offset);
        v7 = (FxObject *)PPObject;
      }
      if ( (unsigned int)IoGetActivityIdIrp(*(_QWORD *)&v7[1].m_SpinLock.m_DbgFlagIsInitialized, &ActivityId) == -1073741275 )
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
          *(_QWORD *)(*(_QWORD *)(v13 + 152) + 184LL),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v13 + 152) + 184LL),
          Method,
          RegHandle);
      }
    }
  }
  return v4;
}
