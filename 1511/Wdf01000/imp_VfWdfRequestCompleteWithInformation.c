/*
 * XREFs of imp_VfWdfRequestCompleteWithInformation @ 0x1C00B66C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C002288C (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     Template_cpp @ 0x1C006301C (Template_cpp.c)
 */

void __fastcall imp_VfWdfRequestCompleteWithInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        int Status,
        unsigned __int64 Information)
{
  unsigned __int16 *v5; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rdi
  __int64 v11; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  const void *RegHandle; // rcx
  void *PPObject; // [rsp+30h] [rbp-58h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-50h] BYREF

  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  ActivityId.Data1 = 0;
  v5 = (unsigned __int16 *)(~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( ((unsigned __int8)Request & 1) != 0 )
    v5 = (unsigned __int16 *)((char *)v5 - *v5);
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v5 + 2);
  if ( (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    _Arg2 = v9->Driver->m_DriverDeviceAdd.Method;
    FxObjectHandleGetPtr(v9, (unsigned __int64)Request, 0x1008u, &PPObject);
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
        (unsigned __int64)RegHandle,
        &FX_REQUEST_COMPLETE,
        &ActivityId,
        **(_BYTE **)(*(_QWORD *)(v11 + 152) + 184LL),
        _Arg2,
        RegHandle);
    }
  }
  WdfVersion.Functions.pfnWdfRequestCompleteWithInformation(DriverGlobals, Request, Status, Information);
}
