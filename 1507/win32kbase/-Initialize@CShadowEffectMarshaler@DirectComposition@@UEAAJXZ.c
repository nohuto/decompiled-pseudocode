/*
 * XREFs of ?Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00DC4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C00D8BA0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::Initialize(
        DirectComposition::CShadowEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 24) = 1077936128;
    *(_OWORD *)((char *)this + 100) = xmmword_1C00EE640;
  }
  *((_DWORD *)this + 29) = 0;
  return result;
}
