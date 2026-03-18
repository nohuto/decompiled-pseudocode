/*
 * XREFs of GetStyleWindow @ 0x1400463E0
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1400452D8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 *     UnredirectDCEs @ 0x14012E3C8 (UnredirectDCEs.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     xxxDesktopPaintCallback @ 0x14025A350 (xxxDesktopPaintCallback.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     NtUserLockWindowUpdate @ 0x140279BF0 (NtUserLockWindowUpdate.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1402B6350 (NtUserHwndSetRedirectionInfo.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r10
  __int64 v3; // r8

  v2 = a1;
  if ( !a1 )
    return a1;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( ((unsigned __int8)a2 & *(_BYTE *)(v3 + BYTE1(a2) + 16)) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      return a1;
  }
  if ( a1 != v2 && (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return a1;
}
