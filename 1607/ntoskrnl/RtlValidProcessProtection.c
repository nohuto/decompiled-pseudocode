/*
 * XREFs of RtlValidProcessProtection @ 0x1404F1338
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1404599E8 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlValidProcessProtection(unsigned __int8 a1)
{
  if ( a1 <= 0x31u )
  {
    if ( a1 == 49 || !a1 || a1 == 8 || a1 == 18 )
      return 1;
    return a1 == 33;
  }
  if ( a1 == 65 )
    return 1;
  if ( a1 > 0x50u )
  {
    if ( a1 <= 0x52u )
      return 1;
    if ( a1 > 0x60u )
    {
      if ( a1 <= 0x62u )
        return 1;
      return a1 == 114;
    }
  }
  return 0;
}
