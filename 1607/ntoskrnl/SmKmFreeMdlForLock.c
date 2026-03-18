/*
 * XREFs of SmKmFreeMdlForLock @ 0x140124930
 * Callers:
 *     SmFpCleanup @ 0x140003DB8 (SmFpCleanup.c)
 *     SmFpFree @ 0x14011ADA8 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140003C90 (SmAcquireReleaseCharges.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *a1)
{
  SmAcquireReleaseCharges(a1[10], 3, 1);
  ExFreePoolWithTag(a1, 0);
}
