/*
 * XREFs of imp_WdfRequestGetIoQueue @ 0x1C00232C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x1C00203D8 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

WDFQUEUE__ *__fastcall imp_WdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  FxRequest *v3; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxRequest *v6; // r10
  unsigned __int64 v7; // rax
  FxIoQueue *CurrentQueue; // rax
  int v10; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+50h] [rbp+18h] BYREF

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
  if ( !FxRequest::GetCurrentQueue(v3) )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0x10u, 0x45u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request);
    return 0LL;
  }
  if ( !v6->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    CurrentQueue = FxRequest::GetCurrentQueue(v6);
    if ( *(FxIoQueue **)(v6->m_DeviceBase[3].m_SpinLock.m_Lock + 144) == CurrentQueue )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x46u, WPP_FxRequestApi_cpp_Traceguids, v6);
      v10 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v10,
        m_Globals->Public.DriverName,
        (const char *)&v10);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 0LL;
    }
  }
  v7 = (unsigned __int64)FxRequest::GetCurrentQueue(v6);
  if ( *(_WORD *)(v7 + 10) )
    return (WDFQUEUE__ *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
