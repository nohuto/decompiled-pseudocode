/*
 * XREFs of ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001C510
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001FC50 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800204B0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::CloneVisualTree(CTopLevelAtlasedRectsVisual *this, struct CVisual **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax

  if ( *((_BYTE *)this + 304) )
  {
    v2 = CCanvas::CloneVisualTree(this, a2);
    v3 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x7Bu);
  }
  else
  {
    v5 = CAtlasedRectsVisual::CloneVisualTree(this, a2);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x7Fu);
  }
  return v3;
}
