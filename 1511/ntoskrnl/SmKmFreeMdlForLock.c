/*
 * XREFs of SmKmFreeMdlForLock @ 0x14011098C
 * Callers:
 *     SmFpCleanup @ 0x1400F6A78 (SmFpCleanup.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400F8ECC (SmAcquireReleaseCharges.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *a1)
{
  SmAcquireReleaseCharges(a1[10], 3, 1LL);
  ExFreePoolWithTag(a1, 0);
}
