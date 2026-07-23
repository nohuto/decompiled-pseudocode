/*
 * XREFs of HvpIncrementCellReferenceCount @ 0x14002D23C
 * Callers:
 *     HvpMapEntryGetBlockAddress @ 0x14002CF00 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpIncrementCellReferenceCount(PVOID *a1)
{
  LOBYTE(a1) = 8;
  CmpMarkLockTryAcquired(a1);
}
