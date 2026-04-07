/*
 * XREFs of ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x180028CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x1800285E0 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0x350u);
  return v4;
}
