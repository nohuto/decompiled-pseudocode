/*
 * XREFs of KiTimer2TypeFlagsToEtwFlags @ 0x1401DAA3C
 * Callers:
 *     KiExpireTimer2 @ 0x1400E9EF0 (KiExpireTimer2.c)
 *     KiTraceSetTimer2 @ 0x1401DABF4 (KiTraceSetTimer2.c)
 * Callees:
 *     <none>
 */

char __fastcall KiTimer2TypeFlagsToEtwFlags(char a1)
{
  char result; // al

  result = 0;
  if ( (a1 & 2) != 0 )
    result = 4;
  if ( (a1 & 4) != 0 )
    result |= 8u;
  if ( (a1 & 8) != 0 )
    return result | 0x10;
  return result;
}
