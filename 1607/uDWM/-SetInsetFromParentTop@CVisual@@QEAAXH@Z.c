/*
 * XREFs of ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180025004 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180038858 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800480A4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18004ED20 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006F968 (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800847FC (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180088280 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x180088C6C (-_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008A46C (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008A9C4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008B0C8 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18008B604 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18008B9F0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetInsetFromParentTop(CVisual *this, int a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CVisual *, int); // rax

  if ( *((_DWORD *)this + 32) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 32) = a2;
    v3 = *(void (__fastcall **)(CVisual *, int))(v2 + 24);
    if ( v3 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 2);
    else
      v3(this, 2);
  }
}
