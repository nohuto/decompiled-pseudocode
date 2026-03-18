/*
 * XREFs of ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18003EBA0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180126C50 (-Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800427B4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005A930 (-IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct CResource *a2)
{
  __int64 (__fastcall *v4)(struct CResource *, __int64); // rdi
  char v5; // al
  char *v6; // rbx
  CBitmapResource *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx

  v4 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v4 == (char *)CCachedVisualImage::IsOfType )
    v5 = CCachedVisualImage::IsOfType(a2, 55LL);
  else
    v5 = v4(a2, 55LL);
  if ( v5 )
  {
    v6 = (char *)a2 - 16;
    if ( v6 )
      v7 = (CBitmapResource *)(v6 + 8);
    else
      v7 = 0LL;
    v8 = CDrawingContext::DrawBitmap(this, v7);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x11EFu);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v9;
}
