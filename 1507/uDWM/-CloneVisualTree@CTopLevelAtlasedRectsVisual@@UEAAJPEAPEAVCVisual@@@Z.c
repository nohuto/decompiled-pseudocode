/*
 * XREFs of ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180016E20
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001D4E0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x180019D00 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001AC60 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::CloneVisualTree(CTopLevelAtlasedRectsVisual *this, struct CVisual **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax

  if ( *((_BYTE *)this + 304) )
  {
    v5 = CCanvas::CloneVisualTree(this, a2);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x7Bu);
  }
  else
  {
    v2 = CAtlasedRectsVisual::CloneVisualTree(this, a2);
    v3 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x7Fu);
  }
  return v3;
}
