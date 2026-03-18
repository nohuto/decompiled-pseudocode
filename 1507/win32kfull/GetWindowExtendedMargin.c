/*
 * XREFs of GetWindowExtendedMargin @ 0x1C0044788
 * Callers:
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C004444C (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C2F4C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01C3AA0 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C02057A8 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall GetWindowExtendedMargin(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  *a2 = 0LL;
  v4 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1)
    && (unsigned int)GetWindowCompositionInfo(v3, v6)
    && ((_WORD)v7 || __PAIR32__(WORD1(v7), 0) != HIWORD(v7)) )
  {
    v4 = 1;
    *a2 = v7;
  }
  return v4;
}
