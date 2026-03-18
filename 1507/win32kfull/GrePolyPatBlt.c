/*
 * XREFs of GrePolyPatBlt @ 0x1C00865E0
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     DrawBox @ 0x1C0050D40 (DrawBox.c)
 *     _DrawIconEx @ 0x1C005137C (_DrawIconEx.c)
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0052498 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     DrawEdge @ 0x1C0094D78 (DrawEdge.c)
 *     DrawFrame @ 0x1C00F9D40 (DrawFrame.c)
 *     DrawGrip @ 0x1C00FAFCC (DrawGrip.c)
 *     DrawSize @ 0x1C0232E48 (DrawSize.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C023E778 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C0241C80 (xxxMenuBarDraw.c)
 *     ClientFrame @ 0x1C0249FCC (ClientFrame.c)
 *     DrawDiagonalLine @ 0x1C024A1D4 (DrawDiagonalLine.c)
 * Callees:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086C10 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4)
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
