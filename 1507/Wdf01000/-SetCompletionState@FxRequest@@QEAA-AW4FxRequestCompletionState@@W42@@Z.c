/*
 * XREFs of ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0007544
 * Callers:
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000721C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00329A0 (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0094CBC (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0095C5C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00978DC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxRequest::SetCompletionState(FxRequest *this, FxRequestCompletionState NewState)
{
  unsigned int m_CompletionState; // edi
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v7; // rax
  unsigned int v8; // ecx
  FxTagTracker *v9; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( this->m_Completed )
  {
    m_CompletionState = 0;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, _a1);
    m_Globals = this->m_Globals;
    v10 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v10,
      m_Globals->Public.DriverName,
      (const char *)&v10);
    if ( *(_BYTE *)(v7 + 318) )
      DbgBreakPoint();
  }
  else
  {
    m_CompletionState = this->m_CompletionState;
    this->m_CompletionState = NewState;
    if ( NewState )
    {
      if ( !m_CompletionState )
      {
        v8 = _InterlockedIncrement(&this->m_Refcnt);
        v9 = SLOBYTE(this->m_ObjectFlags) >= 0 ? 0LL : (FxTagTracker *)this[-1].m_ForwardProgressList.Blink;
        if ( v9 )
          FxTagTracker::UpdateTagHistory(
            v9,
            (void *)0x74617453,
            1812,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v8);
      }
    }
    else if ( m_CompletionState )
    {
      this->Release(this, (void *)1952543827, 1805, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  return m_CompletionState;
}
