/*
 * XREFs of RtlValidProcessProtection @ 0x1404D342C
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidProcessProtection(PS_PROTECTION ProcessProtection)
{
  if ( ProcessProtection.Level <= 0x31u )
  {
    if ( ProcessProtection.Level == 49
      || !ProcessProtection.Level
      || ProcessProtection.Level == 8
      || ProcessProtection.Level == 18 )
    {
      return 1;
    }
    return ProcessProtection.Level == 33;
  }
  if ( ProcessProtection.Level == 65 )
    return 1;
  if ( ProcessProtection.Level > 0x50u )
  {
    if ( ProcessProtection.Level <= 0x52u )
      return 1;
    if ( ProcessProtection.Level > 0x60u )
    {
      if ( ProcessProtection.Level <= 0x62u )
        return 1;
      return ProcessProtection.Level == 114;
    }
  }
  return 0;
}
