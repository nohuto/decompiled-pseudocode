/*
 * XREFs of ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00F0FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0003C40 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::Initialize(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_OWORD *)this + 6) = xmmword_1C0106248;
  }
  *((_DWORD *)this + 28) = 0;
  return result;
}
