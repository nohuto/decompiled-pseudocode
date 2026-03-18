/*
 * XREFs of imp_WdfRequestGetIoQueue @ 0x1C0003750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C002288C (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFQUEUE__ *__fastcall imp_WdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  FxRequest *v3; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoQueue *m_IoQueue; // rdx
  FxIoQueue *CurrentQueue; // rax
  _QWORD *_a1; // r10
  FxRequest *pRequest; // [rsp+48h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v3 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxRequest *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4104 )
  {
    pRequest = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v3 = pRequest;
  }
  m_Globals = v3->m_Globals;
  if ( v3->m_Completed || (m_IoQueue = v3->m_IoQueue) == 0LL )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0x10u, 0x45u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request);
    return 0LL;
  }
  if ( !v3->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v3);
    if ( *(FxIoQueue **)(*(_QWORD *)(_a1[12] + 656LL) + 144LL) == CurrentQueue )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x46u, WPP_FxRequestApi_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(m_Globals);
      return 0LL;
    }
  }
  if ( m_IoQueue->m_ObjectSize )
    return (WDFQUEUE__ *)((unsigned __int64)m_IoQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
