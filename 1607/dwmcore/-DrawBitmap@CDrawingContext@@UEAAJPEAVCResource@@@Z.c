/*
 * XREFs of ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180069410
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180143450 (-Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180032E90 (-IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006AFA0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct CResource *a2)
{
  bool (__fastcall *v4)(__int64, int); // rax
  bool v5; // al
  char *v6; // rbx
  CCachedVisualImage *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx

  v4 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
  if ( v4 == CCachedVisualImage::IsOfType )
    v5 = CCachedVisualImage::IsOfType((__int64)a2, 56);
  else
    v5 = v4((__int64)a2, 56);
  if ( v5 )
  {
    v6 = (char *)a2 - 16;
    if ( v6 )
      v7 = (CCachedVisualImage *)(v6 + 8);
    else
      v7 = 0LL;
    v8 = CDrawingContext::DrawBitmap(this, v7);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x11A7u);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v9;
}
