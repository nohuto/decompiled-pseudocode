/*
 * XREFs of KiTimer2TypeFlagsToEtwFlags @ 0x1401DAC10
 * Callers:
 *     KiExpireTimer2 @ 0x1400EC080 (KiExpireTimer2.c)
 *     KiTraceSetTimer2 @ 0x1401DADC8 (KiTraceSetTimer2.c)
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
