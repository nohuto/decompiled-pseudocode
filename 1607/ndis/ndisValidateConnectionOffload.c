/*
 * XREFs of ndisValidateConnectionOffload @ 0x1C00D6CD0
 * Callers:
 *     ndisMSetOffloadAttributes @ 0x1C00B1D10 (ndisMSetOffloadAttributes.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateConnectionOffload(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)a1 != 0x80 )
    return 0;
  result = 1;
  if ( !*(_BYTE *)(a1 + 1) || *(_WORD *)(a1 + 2) < 0x14u )
    return 0;
  return result;
}
