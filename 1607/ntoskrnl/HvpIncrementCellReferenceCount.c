/*
 * XREFs of HvpIncrementCellReferenceCount @ 0x14002D6BC
 * Callers:
 *     HvpMapEntryGetBlockAddress @ 0x14002D380 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D660 (HvpMapEntryGetBinAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpIncrementCellReferenceCount(PVOID *a1)
{
  LOBYTE(a1) = 8;
  CmpMarkLockTryAcquired(a1);
}
