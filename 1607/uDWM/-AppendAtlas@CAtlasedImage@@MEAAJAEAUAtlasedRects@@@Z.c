/*
 * XREFs of ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x18002B640
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002AF60 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlas(CAtlasedImage *this, struct AtlasedRects *a2)
{
  struct CBitmapSource *v2; // r8
  int appended; // eax
  unsigned int v4; // ebx

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  if ( !v2 )
    return 0LL;
  appended = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, a2, v2);
  v4 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x331u);
  return v4;
}
