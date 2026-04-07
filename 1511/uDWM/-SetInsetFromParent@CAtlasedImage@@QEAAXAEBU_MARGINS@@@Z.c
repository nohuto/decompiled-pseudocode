/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18002BDD8
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180014EB8 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001F510 (-Initialize@CButton@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x180083050 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(CAtlasedImage *this, const struct _MARGINS *a2)
{
  __int128 v2; // xmm0
  CVisual *v3; // rbx
  void (__fastcall *v4)(CVisual *, int); // rdi

  if ( *((_DWORD *)this + 8) != a2->cxLeftWidth
    || *((_DWORD *)this + 9) != a2->cxRightWidth
    || *((_DWORD *)this + 10) != a2->cyTopHeight
    || *((_DWORD *)this + 11) != a2->cyBottomHeight )
  {
    v2 = (__int128)*a2;
    *((_DWORD *)this + 24) |= 1u;
    v3 = (CVisual *)*((_QWORD *)this + 10);
    *((_OWORD *)this + 2) = v2;
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
      if ( v4 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v3, 4096);
      else
        v4(v3, 4096);
    }
  }
}
