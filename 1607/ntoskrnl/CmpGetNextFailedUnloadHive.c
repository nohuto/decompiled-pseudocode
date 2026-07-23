/*
 * XREFs of CmpGetNextFailedUnloadHive @ 0x140081E5C
 * Callers:
 *     CmpDoReconcileNextHive @ 0x14047F42C (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x14047C1D8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1405183C8 (CmpUnlockHiveList.c)
 */

__int64 __fastcall CmpGetNextFailedUnloadHive(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rdi

  v1 = 0LL;
  v2 = &CmpFailedUnloadListHead;
  if ( a1 )
    v2 = (__int64 *)(a1 + 2760);
  CmpLockHiveListShared();
  if ( (__int64 *)*v2 != &CmpFailedUnloadListHead )
    v1 = *v2 - 2760;
  CmpUnlockHiveList();
  return v1;
}
