/*
 * XREFs of RtlValidProcessProtection @ 0x1800CBE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidProcessProtection(PS_PROTECTION ProcessProtection)
{
  if ( ProcessProtection.Level > 0x31u )
  {
    if ( ProcessProtection.Level == 65
      || ProcessProtection.Level > 0x50u
      && (ProcessProtection.Level <= 0x52u || ProcessProtection.Level > 0x60u && ProcessProtection.Level <= 0x62u) )
    {
      return 1;
    }
  }
  else if ( ProcessProtection.Level == 49
         || !ProcessProtection.Level
         || ProcessProtection.Level == 8
         || ProcessProtection.Level == 18
         || ProcessProtection.Level == 33 )
  {
    return 1;
  }
  return 0;
}
