/*
 * XREFs of ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DDED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0003C40 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CBrightnessEffectMarshaler::Initialize(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 25) = 0;
    *((_DWORD *)this + 22) = 1065353216;
    *((_DWORD *)this + 23) = 1065353216;
  }
  return result;
}
