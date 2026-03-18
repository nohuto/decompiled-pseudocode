/*
 * XREFs of ?SetRemarshalingFlags@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DD440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14)
    || 1.0 != *((float *)this + 24)
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((_DWORD *)this + 28) )
  {
    return 1LL;
  }
  return result;
}
