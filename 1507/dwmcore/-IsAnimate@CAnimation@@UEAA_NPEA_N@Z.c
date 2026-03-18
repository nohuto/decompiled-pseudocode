/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x180047050
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180045720 (-OnEndComposition@CCrossThreadComposition@@MEAAJXZ.c)
 * Callees:
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x180046D40 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CAnimation::IsAnimate(CAnimation *this, bool *a2)
{
  __int64 (__fastcall *v4)(CAnimation *); // rbp
  char HasEnded; // al
  bool result; // al
  char v7; // al

  v4 = *(__int64 (__fastcall **)(CAnimation *))(*((_QWORD *)this - 5) + 104LL);
  if ( v4 == CAnimation::HasEnded )
    HasEnded = CAnimation::HasEnded((CAnimation *)((char *)this - 40));
  else
    HasEnded = v4((CAnimation *)((char *)this - 40));
  result = 0;
  if ( !HasEnded )
  {
    if ( *((_DWORD *)this + 8) )
    {
      v7 = *((_BYTE *)this + 56);
      if ( (v7 & 4) == 0 && (v7 & 0x11) != 0x11 )
        result = 1;
    }
  }
  if ( a2 )
    *a2 = result;
  return result;
}
