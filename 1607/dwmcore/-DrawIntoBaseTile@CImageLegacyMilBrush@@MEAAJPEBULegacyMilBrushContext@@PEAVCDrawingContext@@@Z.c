/*
 * XREFs of ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x180157EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006AFA0 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::DrawIntoBaseTile(
        CImageLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CDrawingContext *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  CCachedVisualImage *v8; // rdx
  int v9; // eax

  v5 = CDrawingContext::ApplyRenderStateInternal(a3, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1F3u);
  }
  else
  {
    v7 = *((_QWORD *)this + 74);
    if ( v7 )
      v8 = (CCachedVisualImage *)(v7 + 8);
    else
      v8 = 0LL;
    v9 = CDrawingContext::DrawBitmap(a3, v8, 0);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1FBu);
    else
      *((_DWORD *)this + 110) = 1;
  }
  return v6;
}
