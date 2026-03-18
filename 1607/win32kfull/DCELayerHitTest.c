/*
 * XREFs of DCELayerHitTest @ 0x1C010E858
 * Callers:
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01DB850 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0221AA8 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C0052EA4 (GrePtInSprite.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 */

_BOOL8 __fastcall DCELayerHitTest(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  BOOL v4; // ebx
  int v5; // eax
  _BOOL8 result; // rax

  v2 = 32;
  result = 0;
  if ( (*(_BYTE *)(a1 + 48) & 0x20) == 0 )
  {
    if ( *(_QWORD *)(a1 + 208) && !PtInRect((_DWORD *)(a1 + 112), a2) )
      return 1;
    if ( ((unsigned __int8)v2 & *(_BYTE *)(a1 + 51)) != 0 && ((unsigned __int8)v2 & *(_BYTE *)(a1 + 50)) != 0 )
      return 1;
    v4 = *(_WORD *)(a1 + 308) >= 0x602u;
    v5 = IsWindowDesktopComposed(a1);
    if ( (unsigned int)GrePtInSprite((HDEV)*gpDispInfo, *(HWND *)a1, a2, SHIDWORD(a2), v4, v5) )
      return 1;
  }
  return result;
}
