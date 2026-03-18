/*
 * XREFs of ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18001D2C4
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180011E00 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x180129770 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x1801298E0 (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 * Callees:
 *     ?Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z @ 0x18001D34C (-Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z.c)
 */

char __fastcall FastRegion::Internal::CRgnData::Intersects(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  _DWORD *v2; // r10
  char *v3; // rsi
  char *v4; // rbp
  int v5; // eax
  char *v6; // r10
  char *v7; // r11
  const struct FastRegion::Internal::CStripe *v8; // rdi
  const struct FastRegion::Internal::CStripe *v9; // rbx
  _DWORD *v10; // r10
  _DWORD *v11; // r11
  bool v13; // zf
  int v14; // eax
  bool v15; // zf
  char *v16; // r11

  v2 = (_DWORD *)((char *)a1 + 12);
  v3 = (char *)a1 + 8 * *(int *)a1 + 12;
  v4 = (char *)a2 + 8 * *(int *)a2 + 12;
  v5 = *((_DWORD *)a2 + 3);
  if ( *((_DWORD *)a1 + 3) < v5 )
  {
    v6 = (char *)a1 + 20;
    while ( *(_DWORD *)v6 < v5 )
    {
      v6 += 8;
      if ( v6 == v3 )
        return 0;
    }
    if ( *(_DWORD *)v6 > v5 )
      goto LABEL_4;
    v6 += 8;
    v7 = (char *)a2 + 20;
    v13 = v6 == v3;
  }
  else
  {
    if ( *((_DWORD *)a1 + 3) <= v5 )
    {
      v6 = (char *)a1 + 20;
LABEL_4:
      v7 = (char *)a2 + 20;
      goto LABEL_5;
    }
    v7 = (char *)a2 + 20;
    while ( 1 )
    {
      v14 = *(_DWORD *)v7;
      if ( *v2 < *(_DWORD *)v7 )
      {
        v6 = (char *)a1 + 20;
        goto LABEL_5;
      }
      v7 += 8;
      if ( *v2 <= v14 )
        break;
      if ( v7 == v4 )
        return 0;
    }
    v6 = (char *)a1 + 20;
    v13 = v7 == v4;
  }
  if ( v13 )
    return 0;
LABEL_5:
  v8 = (const struct FastRegion::Internal::CStripe *)(v7 - 8);
  v9 = (const struct FastRegion::Internal::CStripe *)(v6 - 8);
  while ( !FastRegion::Internal::CStripe::Intersects(v9, v8) )
  {
    if ( *v10 >= *v11 )
    {
      if ( *v10 > *v11 )
      {
        v16 = (char *)(v11 + 2);
        v8 = (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8);
      }
      else
      {
        v9 = (const struct FastRegion::Internal::CStripe *)((char *)v9 + 8);
        v16 = (char *)(v11 + 2);
        v8 = (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8);
        if ( v10 + 2 == (_DWORD *)v3 )
          return 0;
      }
      v15 = v16 == v4;
    }
    else
    {
      v9 = (const struct FastRegion::Internal::CStripe *)((char *)v9 + 8);
      v15 = v10 + 2 == (_DWORD *)v3;
    }
    if ( v15 )
      return 0;
  }
  return 1;
}
