/*
 * XREFs of ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800292D4
 * Callers:
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18001A4D4 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180035DD0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x18003625C (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18007B620 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAtlasedImage::SetSize(CAtlasedImage *this, const struct tagSIZE *a2)
{
  __int64 v2; // rax
  CVisual *v3; // rbx
  void (__fastcall *v4)(CVisual *, int); // rdi

  if ( *((_DWORD *)this + 6) != a2->cx || *((_DWORD *)this + 7) != a2->cy )
  {
    v2 = (__int64)*a2;
    *((_DWORD *)this + 24) |= 1u;
    v3 = (CVisual *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 3) = v2;
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v3 + 24LL);
      if ( v4 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v3, 0x2000);
      else
        v4(v3, 0x2000);
    }
  }
}
