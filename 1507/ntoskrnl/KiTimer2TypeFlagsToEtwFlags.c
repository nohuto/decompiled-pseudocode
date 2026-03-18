/*
 * XREFs of KiTimer2TypeFlagsToEtwFlags @ 0x1402098F0
 * Callers:
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     KiTraceSetTimer2 @ 0x140209AB0 (KiTraceSetTimer2.c)
 * Callees:
 *     <none>
 */

char __fastcall KiTimer2TypeFlagsToEtwFlags(char a1)
{
  char v1; // dl

  v1 = 0;
  if ( (a1 & 2) != 0 )
    v1 = 4;
  if ( (a1 & 4) != 0 )
    v1 |= 8u;
  if ( (a1 & 8) != 0 )
    v1 |= 0x10u;
  if ( (a1 & 0x10) != 0 )
    return v1 | 0x20;
  return v1;
}
