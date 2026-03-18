/*
 * XREFs of ?Initialize@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00EFF20
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0003C40 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::Initialize(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_OWORD *)this + 6) = _xmm;
    *((_OWORD *)this + 7) = _xmm;
    *((_OWORD *)this + 8) = _xmm;
    *((_OWORD *)this + 9) = _xmm;
    *((_OWORD *)this + 10) = 0LL;
  }
  *((_DWORD *)this + 44) = 1;
  *((_DWORD *)this + 45) = 0;
  return result;
}
