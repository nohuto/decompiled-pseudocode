/*
 * XREFs of isalpha @ 0x180097140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isalpha(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18014C150[v1] & 0x103;
}
