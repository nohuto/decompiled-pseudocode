/*
 * XREFs of ?Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DBBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C00D8BA0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffectMarshaler::Initialize(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 24) = 1077936128;
  }
  *((_DWORD *)this + 25) = 2;
  *((_DWORD *)this + 26) = 0;
  return result;
}
