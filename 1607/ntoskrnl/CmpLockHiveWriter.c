/*
 * XREFs of CmpLockHiveWriter @ 0x1405646A8
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A8F4 (CmpMarkEntireIndexDirty.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpLockHiveWriter(__int64 a1)
{
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
}
