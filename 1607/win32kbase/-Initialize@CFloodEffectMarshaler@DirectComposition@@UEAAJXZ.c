/*
 * XREFs of ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00F08D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0003C40 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CFloodEffectMarshaler::Initialize(DirectComposition::CFloodEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_OWORD *)this + 6) = xmmword_1C0106238;
  }
  return result;
}
