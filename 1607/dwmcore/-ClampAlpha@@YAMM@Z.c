/*
 * XREFs of ?ClampAlpha@@YAMM@Z @ 0x1800BF300
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18018D3EC (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall ClampAlpha(float a1)
{
  float result; // xmm0_4

  result = FLOAT_1_0;
  if ( a1 <= 1.0 )
    return fmaxf(a1, 0.0);
  return result;
}
