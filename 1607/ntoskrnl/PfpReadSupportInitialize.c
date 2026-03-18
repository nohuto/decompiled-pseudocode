/*
 * XREFs of PfpReadSupportInitialize @ 0x1400AC8BC
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14042B7B4 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140668CA0 (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
