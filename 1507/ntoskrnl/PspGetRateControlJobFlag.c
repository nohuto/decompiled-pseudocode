/*
 * XREFs of PspGetRateControlJobFlag @ 0x140559DBC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspRemoveRateControl @ 0x1406C4960 (PspRemoveRateControl.c)
 *     PspSetEffectiveRateControlJob @ 0x1406C4B1C (PspSetEffectiveRateControlJob.c)
 *     PspSetJobRateControl @ 0x1406C4C78 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x1406C4E6C (PspSetNetRateControl.c)
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
