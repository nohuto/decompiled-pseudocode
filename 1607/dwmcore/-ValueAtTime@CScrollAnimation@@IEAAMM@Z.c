/*
 * XREFs of ?ValueAtTime@CScrollAnimation@@IEAAMM@Z @ 0x18015EEE0
 * Callers:
 *     ?GetInertiaValue@CScrollAnimation@@AEAAMXZ @ 0x18015DF38 (-GetInertiaValue@CScrollAnimation@@AEAAMXZ.c)
 * Callees:
 *     ?ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z @ 0x18015EF40 (-ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z.c)
 *     ?ValueAtTimeInertiaDisabled@CScrollAnimation@@IEAAMPEA_N@Z @ 0x18015F114 (-ValueAtTimeInertiaDisabled@CScrollAnimation@@IEAAMPEA_N@Z.c)
 *     ?ValueAtTimeInertiaModifier@CScrollAnimation@@IEAAMMPEA_N@Z @ 0x18015F140 (-ValueAtTimeInertiaModifier@CScrollAnimation@@IEAAMMPEA_N@Z.c)
 */

float __fastcall CScrollAnimation::ValueAtTime(CScrollAnimation *this, float a2)
{
  bool v2; // zf
  float result; // xmm0_4
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_BYTE *)this + 468) & 8) == 0;
  v5 = 0;
  if ( v2 )
  {
    result = CScrollAnimation::ValueAtTimeInertiaDisabled(this, &v5);
  }
  else if ( *((_DWORD *)this + 124) )
  {
    result = CScrollAnimation::ValueAtTimeInertiaModifier(this, a2, &v5);
  }
  else
  {
    result = CScrollAnimation::ValueAtTimeDefault(this, a2, &v5);
  }
  if ( v5 )
  {
    *((_BYTE *)this + 468) |= 0x10u;
    *((float *)this + 126) = result;
  }
  return result;
}
