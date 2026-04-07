/*
 * XREFs of ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18002B728
 * Callers:
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001C310 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180036E3C (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x1800837E0 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CAtlasedImage::SetInsetFromParent(CAtlasedImage *this, const struct _MARGINS *a2)
{
  __int128 v2; // xmm0
  CVisual *v3; // rcx
  void (__fastcall *v4)(CVisual *, int); // rax

  if ( *((_DWORD *)this + 8) != a2->cxLeftWidth
    || *((_DWORD *)this + 9) != a2->cxRightWidth
    || *((_DWORD *)this + 10) != a2->cyTopHeight
    || *((_DWORD *)this + 11) != a2->cyBottomHeight )
  {
    v2 = (__int128)*a2;
    *((_DWORD *)this + 24) |= 1u;
    *((_OWORD *)this + 2) = v2;
    v3 = (CVisual *)*((_QWORD *)this + 10);
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
