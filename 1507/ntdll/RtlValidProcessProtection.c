/*
 * XREFs of RtlValidProcessProtection @ 0x1800CBE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlValidProcessProtection(unsigned __int8 a1)
{
  if ( a1 > 0x31u )
  {
    if ( a1 == 65 || a1 > 0x50u && (a1 <= 0x52u || a1 > 0x60u && a1 <= 0x62u) )
      return 1;
  }
  else if ( a1 == 49 || !a1 || a1 == 8 || a1 == 18 || a1 == 33 )
  {
    return 1;
  }
  return 0;
}
