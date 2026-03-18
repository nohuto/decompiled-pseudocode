/*
 * XREFs of CmpFree @ 0x1404A08B0
 * Callers:
 *     CmpDeleteHive @ 0x1400D2458 (CmpDeleteHive.c)
 *     HvFreeHivePartial @ 0x14044D4F0 (HvFreeHivePartial.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1404A08D0 (CmpReleaseGlobalQuota.c)
 */

void __fastcall CmpFree(void *a1, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(a1, 0);
}
