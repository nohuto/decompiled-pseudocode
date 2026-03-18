/*
 * XREFs of isprint @ 0x14017294C
 * Callers:
 *     SmSanitizeString @ 0x1402569F8 (SmSanitizeString.c)
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 0x157;
}
