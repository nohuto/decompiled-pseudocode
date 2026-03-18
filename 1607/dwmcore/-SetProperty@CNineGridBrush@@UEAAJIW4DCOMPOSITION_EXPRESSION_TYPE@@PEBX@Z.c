/*
 * XREFs of ?SetProperty@CNineGridBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x18013FDE4 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CNineGridBrush::SetProperty(CResource *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v7; // xmm1_4
  float *InsetFieldPointer; // rax
  CSpriteVisualContent *v9; // rcx

  v4 = 0;
  if ( a3 == 18 && (v7 = *a4, (InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(a1, a2)) != 0LL) )
  {
    if ( *InsetFieldPointer != v7 )
    {
      *InsetFieldPointer = v7;
      CSpriteVisualContent::ReleasePrimitiveCaches(v9);
      CResource::InvalidateAnimationSources(a1, a2);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF0u);
  }
  return v4;
}
