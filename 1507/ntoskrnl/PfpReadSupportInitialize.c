/*
 * XREFs of PfpReadSupportInitialize @ 0x140013934
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14042DB8C (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1406AF06C (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
