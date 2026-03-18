/*
 * XREFs of ?RoundToPow2@@YAII@Z @ 0x18001368C
 * Callers:
 *     ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x180013540 (-CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMod.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18008BF20 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x18008C200 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundToPow2(unsigned int a1)
{
  __int64 result; // rax

  result = 1024LL;
  if ( a1 > 0x400 )
    result = 0x80000000LL;
  while ( ((unsigned int)result & a1) == 0 )
    result = (unsigned int)result >> 1;
  if ( a1 != (_DWORD)result )
    return (unsigned int)(2 * result);
  return result;
}
