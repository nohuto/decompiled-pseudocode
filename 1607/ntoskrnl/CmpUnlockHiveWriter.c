/*
 * XREFs of CmpUnlockHiveWriter @ 0x140564B84
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A9A8 (CmpMarkEntireIndexDirty.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpUnlockHiveWriter(__int64 a1)
{
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
}
