/*
 * XREFs of GetThreadDesktopWindow @ 0x1C01066F8
 * Callers:
 *     xxxWindowFromPoint @ 0x1C006D6BC (xxxWindowFromPoint.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00775CC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     GetLastTopMostWindow @ 0x1C00A8B9C (GetLastTopMostWindow.c)
 *     _SelectPalette @ 0x1C01045F0 (_SelectPalette.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C010FDF0 (fnHkINLPCBTCREATESTRUCT.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0117C3C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C020E370 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax

  v4 = 0LL;
  v5 = a1;
  if ( a1 )
    goto LABEL_5;
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  if ( v5 )
  {
LABEL_5:
    v7 = *(_QWORD *)(v5 + 416);
    if ( v7 )
      return *(_QWORD *)(v7 + 16);
  }
  return v4;
}
