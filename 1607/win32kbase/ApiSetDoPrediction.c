/*
 * XREFs of ApiSetDoPrediction @ 0x1C00DE7BC
 * Callers:
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C00DDF28 (rimPredictionPolicyUpdateStateAndApply.c)
 * Callees:
 *     IsDoPredictionSupported_0 @ 0x1C0002D30 (IsDoPredictionSupported_0.c)
 *     DoPrediction_0 @ 0x1C0002D38 (DoPrediction_0.c)
 */

__int64 __fastcall ApiSetDoPrediction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 *a7)
{
  __int64 result; // rax

  if ( (int)IsDoPredictionSupported_0() >= 0 )
    return DoPrediction_0();
  *a6 = a2;
  result = a3;
  *a7 = a3;
  return result;
}
