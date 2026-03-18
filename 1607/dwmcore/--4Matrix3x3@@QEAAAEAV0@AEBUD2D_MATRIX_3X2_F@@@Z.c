/*
 * XREFs of ??4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180110A0C
 * Callers:
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B4D4 (-ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUInt.c)
 *     ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0 (-RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Matrix3x3::operator=(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax

  if ( a1 )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[2] = 0;
    a1[1] = v2;
    a1[3] = a2[2];
    v3 = a2[3];
    a1[5] = 0;
    a1[4] = v3;
    a1[6] = a2[4];
    a1[7] = a2[5];
    a1[8] = 1065353216;
  }
  return a1;
}
