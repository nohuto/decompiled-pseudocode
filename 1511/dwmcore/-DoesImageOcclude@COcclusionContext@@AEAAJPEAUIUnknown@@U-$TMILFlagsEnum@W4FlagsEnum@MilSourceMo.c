/*
 * XREFs of ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x180055AB8
 * Callers:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000A884 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180055C9C (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18005C4F0 (-HasContent@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x1800851E0 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 */

__int64 __fastcall COcclusionContext::DoesImageOcclude(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CGdiSpriteBitmap **),
        char a3,
        _BYTE *a4)
{
  CGdiSpriteBitmap *v5; // rdi
  bool (__fastcall *v6)(CGdiSpriteBitmap *__hidden); // rbx
  bool HasContent; // al
  bool (__fastcall *v8)(CImageSource *__hidden); // rbx
  bool IsOpaque; // al
  CGdiSpriteBitmap *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  *a4 = 0;
  if ( !a2 || (a3 & 2) != 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  if ( (**a2)(a2, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, &v11) >= 0 )
  {
    v5 = v11;
    v6 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v11 + 80LL);
    if ( v6 == CGdiSpriteBitmap::HasContent )
    {
      HasContent = CGdiSpriteBitmap::HasContent(v11);
    }
    else
    {
      HasContent = v6(v11);
      v5 = v11;
    }
    if ( !HasContent )
      goto LABEL_13;
    v8 = *(bool (__fastcall **)(CImageSource *__hidden))(*(_QWORD *)v5 + 96LL);
    if ( v8 == CImageSource::IsOpaque )
      IsOpaque = CImageSource::IsOpaque(v5);
    else
      IsOpaque = v8(v5);
    if ( IsOpaque )
      *a4 = 1;
  }
  v5 = v11;
LABEL_13:
  if ( v5 )
    (*(void (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
