/*
 * XREFs of HvpDecrementCellReferenceCount @ 0x14002D424
 * Callers:
 *     HvpMapEntryReleaseBinAddress @ 0x14002D400 (HvpMapEntryReleaseBinAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpDecrementCellReferenceCount(PVOID *a1)
{
  LOBYTE(a1) = 8;
  CmpMarkLockTryAcquired(a1);
}
