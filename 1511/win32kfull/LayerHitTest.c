/*
 * XREFs of LayerHitTest @ 0x1C00FE990
 * Callers:
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     xxxWindowHitTest2 @ 0x1C00962A0 (xxxWindowHitTest2.c)
 *     _ChildWindowFromPointEx @ 0x1C01451D0 (_ChildWindowFromPointEx.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022BDE0 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C003BB90 (GrePtInSprite.c)
 */

_BOOL8 __fastcall LayerHitTest(__int64 a1, __int64 a2)
{
  BOOL v4; // ebx
  int v5; // eax

  if ( (*(_BYTE *)(a1 + 48) & 0x20) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 51) & 0x20) != 0 && (*(_BYTE *)(a1 + 50) & 0x20) != 0 )
    return 1LL;
  v4 = *(_WORD *)(a1 + 308) >= 0x602u;
  v5 = IsWindowDesktopComposed(a1);
  return (unsigned int)GrePtInSprite((HDEV)*gpDispInfo, *(HWND *)a1, a2, SHIDWORD(a2), v4, v5) != 0;
}
