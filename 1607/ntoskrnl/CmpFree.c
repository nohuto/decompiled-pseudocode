/*
 * XREFs of CmpFree @ 0x140514550
 * Callers:
 *     CmpDeleteHive @ 0x140088098 (CmpDeleteHive.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     HvFreeHivePartial @ 0x140481AF0 (HvFreeHivePartial.c)
 *     HvFreeHive @ 0x1405142C4 (HvFreeHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x140514570 (CmpReleaseGlobalQuota.c)
 */

void __fastcall CmpFree(void *a1, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(a1, 0);
}
