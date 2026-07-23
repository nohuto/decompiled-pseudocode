/*
 * XREFs of ExpGetNonMatchingSuiteMask @ 0x1406ACB04
 * Callers:
 *     ExGetSuiteMask @ 0x140576034 (ExGetSuiteMask.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetNonMatchingSuiteMask(int a1)
{
  __int64 result; // rax
  int *v2; // rdx
  __int64 v3; // r8

  result = 0LL;
  v2 = &dword_1406EC904;
  v3 = 51LL;
  do
  {
    if ( *(v2 - 1) != a1 )
      result = *v2 | (unsigned int)result;
    v2 += 3;
    --v3;
  }
  while ( v3 );
  return result;
}
