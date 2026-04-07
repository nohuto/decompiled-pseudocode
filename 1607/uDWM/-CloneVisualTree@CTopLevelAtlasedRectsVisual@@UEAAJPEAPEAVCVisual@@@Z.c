/*
 * XREFs of ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180019550
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001CA30 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001D2A0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x69u);
  }
  else
  {
    v5 = CAtlasedRectsVisual::CloneVisualTree(this, a2);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6Du);
  }
  return v3;
}
