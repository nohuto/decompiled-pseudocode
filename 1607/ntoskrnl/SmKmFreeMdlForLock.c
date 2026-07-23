/*
 * XREFs of SmKmFreeMdlForLock @ 0x140124EA0
 * Callers:
 *     SmFpCleanup @ 0x140003F2C (SmFpCleanup.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140003E04 (SmAcquireReleaseCharges.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *a1)
{
  SmAcquireReleaseCharges(a1[10], 3, 1);
  ExFreePoolWithTag(a1, 0);
}
