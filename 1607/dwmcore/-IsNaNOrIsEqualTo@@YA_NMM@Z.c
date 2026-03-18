/*
 * XREFs of ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x180018538
 * Callers:
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x18001821C (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x18001835C (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 * Callees:
 *     <none>
 */

char __fastcall IsNaNOrIsEqualTo(float a1, float a2)
{
  int v2; // eax
  char v3; // cl

  if ( a1 == a2 )
    return 1;
  v2 = _isnan(a1);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
