/*
 * XREFs of GetThreadDesktopWindow @ 0x1C007BD60
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C004061C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0062824 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserBuildHwndList @ 0x1C007BA50 (NtUserBuildHwndList.c)
 *     GetLastTopMostWindow @ 0x1C0081574 (GetLastTopMostWindow.c)
 *     _SelectPalette @ 0x1C00E0AA0 (_SelectPalette.c)
 *     xxxWindowFromPoint @ 0x1C00E4128 (xxxWindowFromPoint.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00E8704 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02157B0 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
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
    v4 = *(_QWORD *)(v2 + 424);
    if ( v4 )
      return *(_QWORD *)(v4 + 16);
  }
  return v1;
}
