/*
 * XREFs of ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C350
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000DC74 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000CED0 (-IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rsi
  bool (__fastcall *v5)(CDxHandleBitmapRealization *__hidden); // rbp
  bool IsOverlayCompatible; // al

  v1 = *((_QWORD *)this + 51);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 112);
    v5 = *(bool (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(v1 + 112) + 64LL);
    if ( v5 == CDxHandleBitmapRealization::IsOverlayCompatible )
      IsOverlayCompatible = CDxHandleBitmapRealization::IsOverlayCompatible(v4);
    else
      IsOverlayCompatible = v5(v4);
    if ( IsOverlayCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 50) + 104LL) > 1u;
  }
  return v2;
}
