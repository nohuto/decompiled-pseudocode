/*
 * XREFs of fmod_0 @ 0x1800BC88A
 * Callers:
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800126B0 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066D90 (-GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18011A858 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl fmod_0(double X, double Y)
{
  return fmod(X, Y);
}
