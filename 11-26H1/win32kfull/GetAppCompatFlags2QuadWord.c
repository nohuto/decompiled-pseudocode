/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1400A8130
 * Callers:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140094B10 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     InitializeMonitorInfo @ 0x1400A6978 (InitializeMonitorInfo.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x1400A8060 (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x140134268 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax

  if ( !a1 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(0LL);
    if ( CurrentThreadWin32Thread )
      a1 = *CurrentThreadWin32Thread;
    else
      a1 = 0LL;
  }
  return *(_QWORD *)(a1 + 680);
}
