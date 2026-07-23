/*
 * XREFs of PfRequestRangeCheck @ 0x1403EF7BC
 * Callers:
 *     PfPrefetchRequestVerifyRanges @ 0x1403EF3F8 (PfPrefetchRequestVerifyRanges.c)
 *     PfPrefetchRequestVerify @ 0x1403EF4D8 (PfPrefetchRequestVerify.c)
 *     PfPrefetchRequestVerifyPath @ 0x1403EF734 (PfPrefetchRequestVerifyPath.c)
 * Callees:
 *     <none>
 */

char __fastcall PfRequestRangeCheck(unsigned int *a1, unsigned int a2, int a3, int a4, int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // edx

  if ( a2 < *a1 )
    return 0;
  v5 = a1[1];
  if ( a2 >= v5 )
  {
    if ( a3 )
      return 0;
  }
  v6 = a3 + a2;
  if ( v6 < *a1 || v6 > v5 || ((a4 - 1) & v6) != 0 )
    return 0;
  if ( a5 )
    *a1 = v6;
  return 1;
}
