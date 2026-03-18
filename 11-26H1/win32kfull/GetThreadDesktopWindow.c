/*
 * XREFs of GetThreadDesktopWindow @ 0x140009BD0
 * Callers:
 *     fnHkINLPCBTCREATESTRUCT @ 0x140009398 (fnHkINLPCBTCREATESTRUCT.c)
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSelectPalette @ 0x1401AEB50 (NtUserSelectPalette.c)
 *     _SelectPalette @ 0x1401D49D0 (_SelectPalette.c)
 *     NtUserBuildHwndList @ 0x14020DC00 (NtUserBuildHwndList.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     RemoteRedrawRectangle @ 0x1402CB024 (RemoteRedrawRectangle.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1402F0AF8 (xxxDrawAnimatedRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rax

  v1 = 0LL;
  if ( a1
    || (CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread()) != 0LL
    && (a1 = *CurrentThreadWin32Thread) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 496);
    if ( v3 )
      return *(_QWORD *)(v3 + 24);
  }
  return v1;
}
