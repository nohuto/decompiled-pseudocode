/*
 * XREFs of ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?UpdateLayout@CCanvas@@UEAAJXZ @ 0x18001F9A0 (-UpdateLayout@CCanvas@@UEAAJXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJXZ @ 0x180025180 (-UpdateLayout@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180027DF8 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003B660 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180046E74 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180047050 (-Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18004E5B0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800799E0 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18008358C (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z @ 0x180083F40 (-Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800840F0 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800881C0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180088E90 (-Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008B080 (-Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008B704 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008BE28 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008C1B0 (-Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18008C374 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18008C770 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180092B00 (-Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::SetSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  bool v3; // zf
  void (__fastcall *v4)(CThumbnailVisual *, int); // rdi
  LONG cx; // eax
  struct tagSIZE v6; // rbx
  int v7; // ecx
  void (__fastcall *v9)(CVisual *__hidden); // rdi

  if ( this[14].cx == a2->cx && this[14].cy == a2->cy )
    return 0LL;
  v3 = (this[10].cy & 1) == 0;
  this[14] = *a2;
  if ( !v3 )
    (*(void (__fastcall **)(struct tagSIZE *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
  v4 = *(void (__fastcall **)(CThumbnailVisual *, int))(*(_QWORD *)this + 24LL);
  if ( (char *)v4 != (char *)CVisual::SetDirtyFlags )
  {
    if ( v4 == CThumbnailVisual::SetDirtyFlags )
    {
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 2);
      return 0LL;
    }
    v4((CThumbnailVisual *)this, 2);
    return 0LL;
  }
  cx = this[10].cx;
  if ( (cx & 2) != 0 )
    return 0LL;
  this[10].cx = cx | 2;
  v6 = this[3];
  if ( !*(_QWORD *)&v6 )
    return 0LL;
  do
  {
    v7 = *(_DWORD *)(*(_QWORD *)&v6 + 80LL);
    if ( (v7 & 1) != 0 )
      break;
    v9 = *(void (__fastcall **)(CVisual *__hidden))(**(_QWORD **)&v6 + 32LL);
    if ( v9 == CVisual::SetDirtyChildren )
      *(_DWORD *)(*(_QWORD *)&v6 + 80LL) = v7 | 1;
    else
      v9(*(CVisual **)&v6);
    v6 = *(struct tagSIZE *)(*(_QWORD *)&v6 + 24LL);
  }
  while ( v6 );
  return 0LL;
}
