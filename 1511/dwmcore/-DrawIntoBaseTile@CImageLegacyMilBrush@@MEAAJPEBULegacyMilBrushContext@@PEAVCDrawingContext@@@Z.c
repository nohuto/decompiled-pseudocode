/*
 * XREFs of ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x180135740
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800427B4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::DrawIntoBaseTile(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CDrawingContext *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int (__fastcall ***v8)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rdx
  int v9; // eax

  v5 = CDrawingContext::ApplyRenderStateInternal(a3, 0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *((_QWORD *)this + 64);
    if ( v7 )
      v8 = (int (__fastcall ***)(CBitmapResource *, GUID *, CCompositionSurfaceBitmap **))(v7 + 8);
    else
      v8 = 0LL;
    v9 = CDrawingContext::DrawBitmap(a3, v8, 0);
    v6 = v9;
    if ( v9 >= 0 )
      *((_DWORD *)this + 90) = 1;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1FCu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1F4u);
  }
  return v6;
}
