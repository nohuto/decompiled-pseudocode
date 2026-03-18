/*
 * XREFs of ?GetFloatAnimatableProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0004E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CEffectGroupMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CEffectGroupMarshaler *this,
        int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  *a3 = *((float *)this + 10);
  return result;
}
