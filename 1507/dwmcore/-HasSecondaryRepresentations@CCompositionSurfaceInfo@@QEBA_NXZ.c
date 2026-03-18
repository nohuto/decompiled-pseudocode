/*
 * XREFs of ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x180007434
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CCompositionSurfaceInfo::HasSecondaryRepresentations(CCompositionSurfaceInfo *this)
{
  unsigned int v1; // r15d
  char v2; // bp
  char result; // al
  unsigned int v4; // esi
  __int64 v6; // r14
  char v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 56);
  v2 = 0;
  result = 0;
  v8 = 0;
  v4 = 0;
  v7 = 0;
  if ( v1 )
  {
    v6 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD, char *, char *))(**(_QWORD **)(v6 + *((_QWORD *)this + 25)) + 16LL))(
        *(_QWORD *)(v6 + *((_QWORD *)this + 25)),
        &v8,
        &v7);
      result = v7;
      if ( v7 )
        break;
      if ( v8 )
      {
        if ( v2 )
          return 1;
        v2 = 1;
      }
      ++v4;
      v6 += 8LL;
    }
    while ( v4 < v1 );
  }
  return result;
}
