/*
 * XREFs of ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x180013510
 * Callers:
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x1800131C0 (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180013314 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
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
