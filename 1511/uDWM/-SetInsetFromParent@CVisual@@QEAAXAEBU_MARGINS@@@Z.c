/*
 * XREFs of ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180023F2C
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180014318 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x180014840 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024570 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800269A0 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180026C90 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180027DF8 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180029888 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18002A440 (-Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CVisual::SetInsetFromParent(CVisual *this, const struct _MARGINS *a2)
{
  void (__fastcall *v2)(CVisual *, int); // rdi

  if ( *((_DWORD *)this + 32) != a2->cyTopHeight
    || *((_DWORD *)this + 30) != a2->cxLeftWidth
    || *((_DWORD *)this + 31) != a2->cxRightWidth
    || *((_DWORD *)this + 33) != a2->cyBottomHeight )
  {
    v2 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
    *(struct _MARGINS *)((char *)this + 120) = *a2;
    if ( v2 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 2);
    else
      v2(this, 2);
  }
}
