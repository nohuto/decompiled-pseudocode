/*
 * XREFs of isspace @ 0x14017296C
 * Callers:
 *     CmpGetToken @ 0x1407D92F8 (CmpGetToken.c)
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 8;
}
