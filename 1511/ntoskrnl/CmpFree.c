/*
 * XREFs of CmpFree @ 0x1403D8324
 * Callers:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     HvFreeHivePartial @ 0x140488090 (HvFreeHivePartial.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1403D8344 (CmpReleaseGlobalQuota.c)
 */

void __fastcall CmpFree(void *a1, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(a1, 0);
}
