/*
 * XREFs of RtlValidProcessProtection @ 0x1800DCB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidProcessProtection(PS_PROTECTION ProcessProtection)
{
  if ( ProcessProtection.Level > 0x31u )
  {
    if ( ProcessProtection.Level == 65 )
      return 1;
    if ( ProcessProtection.Level <= 0x50u )
      return 0;
    if ( ProcessProtection.Level <= 0x52u )
      return 1;
    if ( ProcessProtection.Level <= 0x60u )
      return 0;
    if ( ProcessProtection.Level <= 0x62u )
      return 1;
    return ProcessProtection.Level == 114;
  }
  else
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
}
