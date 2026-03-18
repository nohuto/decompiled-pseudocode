/*
 * XREFs of ?ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ @ 0x1801918E0
 * Callers:
 *     ?GetInertiaValue@CScrollAnimation@@AEAAMXZ @ 0x18015DF38 (-GetInertiaValue@CScrollAnimation@@AEAAMXZ.c)
 * Callees:
 *     ?ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ @ 0x1800B1A60 (-ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ.c)
 */

float __fastcall Components::Animations::TimeDelta::ToSeconds(Components::Animations::TimeDelta *this)
{
  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return FLOAT_3_4028235e38;
  else
    return (float)(int)Components::Animations::TimeDelta::ToMicroseconds(this) / 1000000.0;
}
