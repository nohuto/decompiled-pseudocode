/*
 * XREFs of GetThreadDesktopWindow @ 0x1C006E690
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserBuildHwndList @ 0x1C006D080 (NtUserBuildHwndList.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006D350 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C7790 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C00C7B04 (GetLastTopMostWindow.c)
 *     _SelectPalette @ 0x1C00E4700 (_SelectPalette.c)
 *     xxxWindowFromPoint @ 0x1C00E5B9C (xxxWindowFromPoint.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C011E51C (fnHkINLPCBTCREATESTRUCT.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0215660 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C0227878 (xxxDrawAnimatedRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax

  v1 = 0LL;
  v2 = a1;
  if ( a1 )
    goto LABEL_5;
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( v2 )
  {
LABEL_5:
    v4 = *(_QWORD *)(v2 + 416);
    if ( v4 )
      return *(_QWORD *)(v4 + 16);
  }
  return v1;
}
