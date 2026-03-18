/*
 * XREFs of ?ClampValueToBoundaries@CScrollAnimation@@AEBAMM@Z @ 0x18015DDDC
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z @ 0x18015E958 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z.c)
 *     ?ValueAtTimeInertiaDisabled@CScrollAnimation@@IEAAMPEA_N@Z @ 0x18015F114 (-ValueAtTimeInertiaDisabled@CScrollAnimation@@IEAAMPEA_N@Z.c)
 * Callees:
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18014AC40 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

float __fastcall CScrollAnimation::ClampValueToBoundaries(CScrollAnimation *this, float a2)
{
  _DWORD **v2; // rax
  _DWORD *v4; // rcx
  float v6; // [rsp+30h] [rbp+8h] BYREF
  float v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_DWORD **)*((_QWORD *)this + 54);
  v4 = 0LL;
  if ( v2 )
    v4 = *v2;
  CInteractionTracker::GetScrollRange(v4, *((_DWORD *)this + 72), &v7, &v6);
  return fminf(fmaxf(a2, v7), v6);
}
