/*
 * XREFs of ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x18000BB08
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?GetVisualListenersInfo@CCompositionSurfaceBitmap@@UEAAXPEA_N0@Z @ 0x18000C0B0 (-GetVisualListenersInfo@CCompositionSurfaceBitmap@@UEAAXPEA_N0@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CCompositionSurfaceInfo::HasSecondaryRepresentations(CCompositionSurfaceInfo *this)
{
  unsigned int v1; // esi
  bool result; // al
  unsigned int v3; // ebx
  __int64 v5; // rdi
  void (__fastcall *v6)(CCompositionSurfaceBitmap *__hidden, bool *, bool *); // r15
  bool v7; // [rsp+50h] [rbp+8h] BYREF
  bool v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 54);
  result = 0;
  v3 = 0;
  v8 = 0;
  v7 = 0;
  if ( v1 )
  {
    v5 = 0LL;
    do
    {
      v6 = ***(void (__fastcall ****)(CCompositionSurfaceBitmap *__hidden, bool *, bool *))(v5 + *((_QWORD *)this + 24));
      if ( v6 == CCompositionSurfaceBitmap::GetVisualListenersInfo )
        CCompositionSurfaceBitmap::GetVisualListenersInfo(
          *(CCompositionSurfaceBitmap **)(v5 + *((_QWORD *)this + 24)),
          &v8,
          &v7);
      else
        v6(*(CCompositionSurfaceBitmap **)(v5 + *((_QWORD *)this + 24)), &v8, &v7);
      result = v7;
      if ( v7 )
        break;
      ++v3;
      v5 += 8LL;
    }
    while ( v3 < v1 );
  }
  return result;
}
