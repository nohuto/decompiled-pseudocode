/*
 * XREFs of CmpLockHiveWriter @ 0x140564BE8
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A9A8 (CmpMarkEntireIndexDirty.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpLockHiveWriter(__int64 a1)
{
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
}
