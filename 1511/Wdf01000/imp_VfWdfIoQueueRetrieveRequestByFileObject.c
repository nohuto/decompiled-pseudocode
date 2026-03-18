/*
 * XREFs of imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00B57C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C002288C (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     Template_cpp @ 0x1C006301C (Template_cpp.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveRequestByFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFFILEOBJECT__ *FileObject,
        WDFREQUEST__ **OutRequest)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int16 *v8; // rdx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  FxDeviceBase *m_DeviceBase; // rdx
  __int64 v12; // rcx
  const void *RegHandle; // rdx
  void *PPObject; // [rsp+30h] [rbp-38h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-30h] BYREF

  v5 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, WDFFILEOBJECT__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveRequestByFileObject)(
         DriverGlobals,
         Queue,
         FileObject);
  if ( !v5 )
  {
    v6 = (unsigned __int64)*OutRequest;
    v7 = (unsigned __int64)*OutRequest;
    ActivityId.Data1 = 0;
    *(_QWORD *)&ActivityId.Data2 = 0LL;
    *(_DWORD *)&ActivityId.Data4[4] = 0;
    v8 = (unsigned __int16 *)(~v7 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v6 & 1) != 0 )
      v8 = (unsigned __int16 *)((char *)v8 - *v8);
    v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v8 + 2);
    if ( (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v9->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v9, v6, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
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
          *(_QWORD *)(*(_QWORD *)(v12 + 152) + 184LL),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v12 + 152) + 184LL),
          _Arg2,
          RegHandle);
      }
    }
  }
  return v5;
}
