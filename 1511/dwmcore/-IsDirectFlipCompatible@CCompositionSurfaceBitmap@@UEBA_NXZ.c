/*
 * XREFs of ?IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C260
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000CEA0 (-IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rsi
  bool (__fastcall *v5)(CDxHandleBitmapRealization *__hidden); // rbp
  bool IsDirectFlipCompatible; // al

  v1 = *((_QWORD *)this + 51);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 112);
    v5 = *(bool (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(v1 + 112) + 80LL);
    if ( v5 == CDxHandleBitmapRealization::IsDirectFlipCompatible )
      IsDirectFlipCompatible = CDxHandleBitmapRealization::IsDirectFlipCompatible(v4);
    else
      IsDirectFlipCompatible = v5(v4);
    if ( IsDirectFlipCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 50) + 104LL) > 1u;
  }
  return v2;
}
