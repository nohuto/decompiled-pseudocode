/*
 * XREFs of IopCompareReqAlternativePriority @ 0x14057D6D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopCompareReqAlternativePriority(unsigned int **a1, unsigned int **a2)
{
  unsigned int *v2; // r8
  unsigned int *v3; // r9
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx

  v2 = *a1;
  v3 = *a2;
  v4 = **a1;
  v5 = **a2;
  if ( v5 != v4 )
    return v5 < v4 ? 1 : -1;
  v6 = v2[1];
  v7 = v3[1];
  if ( v6 > v7 )
    return 1LL;
  if ( v6 >= v7 )
    return v2 < v3 ? -1 : 1;
  return 0xFFFFFFFFLL;
}
