/*
 * XREFs of _anonymous_namespace_::operator_ @ 0x18018B1B0
 * Callers:
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x18018B220 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 * Callees:
 *     <none>
 */

float *__fastcall anonymous_namespace_::operator_(float *a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float *result; // rax

  v3 = a2[1] - a3[1];
  *a1 = *a2 - *a3;
  v4 = a2[3] - a3[3];
  a1[1] = v3;
  v5 = a3[2];
  a1[3] = v4;
  if ( v5 == 0.0 )
    v6 = a2[2];
  else
    v6 = a2[2] / v5;
  a1[2] = v6;
  result = a1;
  a1[4] = a2[4] - a3[4];
  return result;
}
