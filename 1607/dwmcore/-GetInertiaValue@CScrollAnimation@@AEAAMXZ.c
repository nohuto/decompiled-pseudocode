/*
 * XREFs of ?GetInertiaValue@CScrollAnimation@@AEAAMXZ @ 0x18015DF38
 * Callers:
 *     ?GetInertiaDelta@CScrollAnimation@@AEAAMXZ @ 0x18015DEE8 (-GetInertiaDelta@CScrollAnimation@@AEAAMXZ.c)
 * Callees:
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 *     ?ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ @ 0x1801918E0 (-ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ.c)
 */

float __fastcall CScrollAnimation::GetInertiaValue(CScrollAnimation *this)
{
  bool v2; // dl
  float v3; // xmm0_4
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 106) - 2) <= 1 )
  {
    if ( (*((_BYTE *)this + 468) & 0x20) == 0 )
      goto LABEL_6;
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  CScrollAnimation::StartInertia(this, v2);
LABEL_6:
  if ( (*((_BYTE *)this + 468) & 0x10) != 0 )
    return *((float *)this + 126);
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL) - *((_QWORD *)this + 55);
  v3 = Components::Animations::TimeDelta::ToSeconds((Components::Animations::TimeDelta *)&v5);
  return CScrollAnimation::ValueAtTime(this, v3);
}
