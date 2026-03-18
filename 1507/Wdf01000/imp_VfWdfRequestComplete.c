/*
 * XREFs of imp_VfWdfRequestComplete @ 0x1C00CC610
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Template_cpp @ 0x1C006B0B0 (Template_cpp.c)
 */

void __fastcall imp_VfWdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, int Status)
{
  FxObject *v5; // rcx
  char v6; // r8
  FxObject *v8; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rdi
  __int64 Offset; // rdx
  __int64 v12; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  const void *RegHandle; // rcx
  void *PPObject; // [rsp+30h] [rbp-20h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-18h] BYREF

  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  ActivityId.Data1 = 0;
  v5 = (FxObject *)(~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL);
  v6 = (unsigned __int8)Request & 7;
  v8 = v5;
  if ( (v6 & 1) != 0 )
    v8 = (FxObject *)((char *)v5 - LOWORD(v5->__vftable));
  m_Globals = v8->m_Globals;
  if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
    if ( !Request )
      FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
    LOWORD(Offset) = 0;
    if ( (v6 & 1) != 0 )
    {
      Offset = LOWORD(v5->__vftable);
      v5 = (FxObject *)((char *)v5 - Offset);
    }
    if ( v5->m_Type == 4104 )
    {
      PPObject = v5;
    }
    else
    {
      FxObjectHandleGetPtrQI(v5, &PPObject, Request, 0x1008u, Offset);
      v5 = (FxObject *)PPObject;
    }
    if ( (unsigned int)IoGetActivityIdIrp(*(_QWORD *)&v5[1].m_SpinLock.m_DbgFlagIsInitialized, &ActivityId) == -1073741275 )
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
        **(_BYTE **)(*(_QWORD *)(v12 + 152) + 184LL),
        Method,
        RegHandle);
    }
  }
  WdfVersion.Functions.pfnWdfRequestComplete(DriverGlobals, Request, Status);
}
