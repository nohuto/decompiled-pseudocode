/*
 * XREFs of PspGetRateControlJobFlag @ 0x1404C26B0
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     PspRemoveRateControl @ 0x1406423B4 (PspRemoveRateControl.c)
 *     PspSetEffectiveRateControlJob @ 0x1406425E8 (PspSetEffectiveRateControlJob.c)
 *     PspSetJobRateControl @ 0x140642730 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetRateControlJobFlag(int a1, int a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
      return 0x10000000LL;
    else
      return 0x8000000LL;
  }
  else
  {
    result = 0x4000000LL;
    if ( !a2 )
      return 0x2000000LL;
  }
  return result;
}
