/*
 * XREFs of ?HasInteraction@CScrollAnimation@@IEBA_NXZ @ 0x18015E09C
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 *     ?GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ @ 0x18015FA00 (-GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScrollAnimation::HasInteraction(CScrollAnimation *this)
{
  __int64 *v1; // rdx
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 54);
  result = 0;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
  {
    if ( v1 )
      v4 = *v1;
    else
      v4 = 0LL;
    return *(_QWORD *)(v4 + 552) != 0LL;
  }
  return result;
}
