/*
 * XREFs of KiTimer2TypeFlagsToEtwFlags @ 0x1401CAD40
 * Callers:
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KiTraceSetTimer2 @ 0x1401CAF00 (KiTraceSetTimer2.c)
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
    return v1 | 0x10;
  return v1;
}
