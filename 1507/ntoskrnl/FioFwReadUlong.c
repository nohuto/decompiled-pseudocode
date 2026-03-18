/*
 * XREFs of FioFwReadUlong @ 0x1407FE678
 * Callers:
 *     BgpFoInitialize @ 0x1407FDC5C (BgpFoInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FioFwReadUlong(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // r8

  v2 = *(unsigned int **)(a1 + 16);
  if ( (unsigned __int64)(v2 + 1) > *(_QWORD *)a1 + (unsigned __int64)*(unsigned int *)(a1 + 8) )
    return 3221225489LL;
  *a2 = *v2;
  *(_QWORD *)(a1 + 16) = v2 + 1;
  *a2 = _byteswap_ulong(*a2);
  return 0LL;
}
