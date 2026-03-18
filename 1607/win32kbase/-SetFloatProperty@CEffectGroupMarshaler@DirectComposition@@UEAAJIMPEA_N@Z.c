/*
 * XREFs of ?SetFloatProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C007AE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CEffectGroupMarshaler::SetFloatProperty(
        DirectComposition::CEffectGroupMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  float v5; // xmm1_4
  bool v6; // cl

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  v5 = FLOAT_1_0;
  if ( a3 <= 1.0 )
    v5 = fmaxf(a3, 0.0);
  if ( *((float *)this + 10) == v5 )
  {
    v6 = 0;
  }
  else
  {
    *((float *)this + 10) = v5;
    v6 = 1;
  }
  *a4 = v6;
  return result;
}
