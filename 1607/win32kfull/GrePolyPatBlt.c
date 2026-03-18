/*
 * XREFs of GrePolyPatBlt @ 0x1C00AE914
 * Callers:
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00AE2D8 (-UT_InvertCaret@@YAXXZ.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     DrawBox @ 0x1C00B0628 (DrawBox.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     DrawGrip @ 0x1C00B12F4 (DrawGrip.c)
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00B4828 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     DrawFrame @ 0x1C0123204 (DrawFrame.c)
 *     DrawSize @ 0x1C022BED4 (DrawSize.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C02362D8 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C0238258 (xxxMenuBarDraw.c)
 *     ClientFrame @ 0x1C02463DC (ClientFrame.c)
 *     DrawDiagonalLine @ 0x1C02465E0 (DrawDiagonalLine.c)
 * Callees:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0035FA0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, int a2, struct _POLYPATBLT *a3, int a4)
{
  unsigned int v7; // ebx
  _QWORD v9[6]; // [rsp+50h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v7 = 0;
  if ( v9[0] )
    v7 = GrePolyPatBltInternal(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 40LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 32LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 44LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 36LL));
  else
    EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v7;
}
