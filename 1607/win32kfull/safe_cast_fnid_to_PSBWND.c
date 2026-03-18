/*
 * XREFs of safe_cast_fnid_to_PSBWND @ 0x1C01CBCEC
 * Callers:
 *     xxxEnableScrollBar @ 0x1C00FFF6C (xxxEnableScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C022ABA0 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022B0C0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PSBWND(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29A )
      return a1;
  }
  return result;
}
