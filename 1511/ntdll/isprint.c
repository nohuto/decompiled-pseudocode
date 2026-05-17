/*
 * XREFs of isprint @ 0x180095E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18013F1C0[v1] & 0x157;
}
