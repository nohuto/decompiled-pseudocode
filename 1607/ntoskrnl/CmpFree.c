/*
 * XREFs of CmpFree @ 0x1404F7940
 * Callers:
 *     CmpDeleteHive @ 0x14010C288 (CmpDeleteHive.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1404F7960 (CmpReleaseGlobalQuota.c)
 */

void __fastcall CmpFree(void *a1, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(a1, 0);
}
