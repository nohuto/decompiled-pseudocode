/*
 * XREFs of ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18005C694
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800116C0 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005C884 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18002ABF0 (-HasContent@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x18008E730 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DoesImageOcclude(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CGdiSpriteBitmap **),
        char a3,
        _BYTE *a4)
{
  CGdiSpriteBitmap *v5; // rbx
  _BOOL8 (__fastcall *v6)(CGdiSpriteBitmap *); // rax
  bool HasContent; // al
  bool (__fastcall *v8)(CImageSource *__hidden); // rax
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
    v6 = *(_BOOL8 (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v11 + 80LL);
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
