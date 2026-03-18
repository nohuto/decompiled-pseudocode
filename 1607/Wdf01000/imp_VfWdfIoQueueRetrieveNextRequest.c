/*
 * XREFs of imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00C4690
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C001B8B0 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     Template_cpp @ 0x1C0071A2C (Template_cpp.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ **OutRequest)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int16 *v7; // rdx
  _FX_DRIVER_GLOBALS *v8; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  FxDeviceBase *m_DeviceBase; // rdx
  __int64 v11; // rcx
  const void *RegHandle; // rdx
  void *PPObject; // [rsp+30h] [rbp-38h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-30h] BYREF

  v4 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveNextRequest)(
         DriverGlobals,
         Queue);
  if ( !v4 )
  {
    v5 = (unsigned __int64)*OutRequest;
    v6 = (unsigned __int64)*OutRequest;
    ActivityId.Data1 = 0;
    *(_QWORD *)&ActivityId.Data2 = 0LL;
    *(_DWORD *)&ActivityId.Data4[4] = 0;
    v7 = (unsigned __int16 *)(~v6 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v5 & 1) != 0 )
      v7 = (unsigned __int16 *)((char *)v7 - *v7);
    v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v7 + 2);
    if ( (v8->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v8->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v8, v5, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink & 1) != 0 )
      {
        m_DeviceBase = FxRequest::GetCurrentQueue((FxRequest *)PPObject)->m_DeviceBase;
        if ( m_DeviceBase->m_ObjectSize )
          RegHandle = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          RegHandle = 0LL;
        Template_cpp(
          *(_QWORD *)(*(_QWORD *)(v11 + 152) + 184LL),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v11 + 152) + 184LL),
          _Arg2,
          RegHandle);
      }
    }
  }
  return v4;
}
