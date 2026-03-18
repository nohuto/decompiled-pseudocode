/*
 * XREFs of GrePolyPatBlt @ 0x1C003C84C
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00146B4 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     DrawBox @ 0x1C0014AB0 (DrawBox.c)
 *     _DrawIconEx @ 0x1C00150EC (_DrawIconEx.c)
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     DrawEdge @ 0x1C0071B9C (DrawEdge.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970 (-UT_InvertCaret@@YAXXZ.c)
 *     DrawFrame @ 0x1C00CC21C (DrawFrame.c)
 *     DrawGrip @ 0x1C01042BC (DrawGrip.c)
 *     DrawSize @ 0x1C0233278 (DrawSize.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C023E928 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C0241E10 (xxxMenuBarDraw.c)
 *     ClientFrame @ 0x1C0249F8C (ClientFrame.c)
 *     DrawDiagonalLine @ 0x1C024A194 (DrawDiagonalLine.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0040258 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  _QWORD v9[2]; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  v9[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v5 = GrePolyPatBltInternal(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 40LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 32LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 44LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 36LL));
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}
