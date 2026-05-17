/*
 * XREFs of RtlValidProcessProtection @ 0x1800DCA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlValidProcessProtection(unsigned __int8 a1)
{
  if ( a1 > 0x31u )
  {
    if ( a1 == 65 )
      return 1;
    if ( a1 <= 0x50u )
      return 0;
    if ( a1 <= 0x52u )
      return 1;
    if ( a1 <= 0x60u )
      return 0;
    if ( a1 <= 0x62u )
      return 1;
    return a1 == 114;
  }
  else
  {
    if ( a1 == 49 || !a1 || a1 == 8 || a1 == 18 )
      return 1;
    return a1 == 33;
  }
}
