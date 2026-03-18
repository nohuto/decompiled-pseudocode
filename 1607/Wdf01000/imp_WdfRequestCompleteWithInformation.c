/*
 * XREFs of imp_WdfRequestCompleteWithInformation @ 0x1C00031C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001C200 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0074D28 (WPP_IFR_SF_qqxd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00C86A8 (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestCompleteWithInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        int RequestStatus,
        unsigned __int64 Information)
{
  __int64 Offset; // rcx
  FxRequest *v7; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rbp
  _IRP *globals; // rsi
  __int64 level; // rdi
  const void *_a4; // rax
  FxRequest *pRequest; // [rsp+78h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  LOWORD(Offset) = 0;
  v7 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxRequest *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4104 )
  {
    pRequest = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v7 = pRequest;
  }
  m_Globals = v7->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(m_Globals, v7) < 0 )
      return;
    v7 = pRequest;
  }
  v7->m_Irp.m_Irp->IoStatus.Information = Information;
  m_DeviceBase = v7->m_DeviceBase;
  if ( v7->m_Globals->FxVerboseOn )
  {
    globals = v7->m_Irp.m_Irp;
    level = globals->IoStatus.Information;
    _a4 = FxObject::GetObjectHandleUnchecked(v7);
    WPP_IFR_SF_qqxd(v7->m_Globals, 5u, 0x10u, 0xBu, WPP_FxRequest_hpp_Traceguids, _a4, globals, level, RequestStatus);
  }
  if ( m_DeviceBase )
    v7->m_PriorityBoost = HIBYTE(m_DeviceBase[1].m_Globals);
  else
    v7->m_PriorityBoost = 0;
  FxRequest::CompleteInternal(v7, RequestStatus);
}
