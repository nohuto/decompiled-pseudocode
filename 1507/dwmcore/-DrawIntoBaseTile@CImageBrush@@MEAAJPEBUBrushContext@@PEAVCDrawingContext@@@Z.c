/*
 * XREFs of ?DrawIntoBaseTile@CImageBrush@@MEAAJPEBUBrushContext@@PEAVCDrawingContext@@@Z @ 0x180120470
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18002D438 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageBrush::DrawIntoBaseTile(
        CImageBrush *this,
        const struct BrushContext *a2,
        struct CDrawingContext *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  CBitmapResource *v8; // rdx
  int v9; // eax

  v5 = CDrawingContext::ApplyRenderStateInternal(a3, 0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *((_QWORD *)this + 64);
    if ( v7 )
      v8 = (CBitmapResource *)(v7 + 8);
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
