/*
 * XREFs of CiTransitionTimerResolutionState @ 0x1C0001D20
 * Callers:
 *     CiSchedulerCompleteTimerResolutionTransition @ 0x1C0001610 (CiSchedulerCompleteTimerResolutionTransition.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSchedulerTaskIndexYield @ 0x1C0001FA0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiTransitionTimerResolutionState(int a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    if ( (int)a2 > 2 )
      return a2;
    if ( !a2 )
      return 2LL;
    goto LABEL_18;
  }
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 && (a2 == 3 || !a2 || a2 - 1 < 2) )
          return 0LL;
        return a2;
      }
LABEL_18:
      if ( a2 == 1 )
        return 3LL;
      return a2;
    }
    if ( a2 <= 1 )
      return 1LL;
    if ( a2 != 2 )
      return a2;
    return 3LL;
  }
  else
  {
    if ( (int)a2 > 2 || !a2 )
      return a2;
    if ( a2 == 1 )
      return 3LL;
    if ( a2 != 2 )
      return a2;
    return 0LL;
  }
}
