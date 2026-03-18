/*
 * XREFs of SmKmFreeMdlForLock @ 0x14014B838
 * Callers:
 *     SmFpCleanup @ 0x1400DAA84 (SmFpCleanup.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400D958C (SmAcquireReleaseCharges.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *a1)
{
  SmAcquireReleaseCharges(a1[10], 3, 1LL);
  ExFreePoolWithTag(a1, 0);
}
