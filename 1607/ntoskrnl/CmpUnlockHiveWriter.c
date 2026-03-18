/*
 * XREFs of CmpUnlockHiveWriter @ 0x140564644
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A8F4 (CmpMarkEntireIndexDirty.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpUnlockHiveWriter(__int64 a1)
{
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
}
