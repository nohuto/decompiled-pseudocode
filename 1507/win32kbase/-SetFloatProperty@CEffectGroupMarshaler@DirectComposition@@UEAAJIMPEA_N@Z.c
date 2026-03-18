/*
 * XREFs of ?SetFloatProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0028900
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
  float v5; // xmm0_4
  bool v6; // cl

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  v5 = 0.0;
  if ( a3 < 0.0 || (v5 = FLOAT_1_0, a3 > 1.0) )
    a3 = v5;
  if ( *((float *)this + 10) == a3 )
  {
    v6 = 0;
  }
  else
  {
    *((float *)this + 10) = a3;
    v6 = 1;
  }
  *a4 = v6;
  return result;
}
