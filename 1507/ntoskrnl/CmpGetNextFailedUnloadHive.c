/*
 * XREFs of CmpGetNextFailedUnloadHive @ 0x1400D26EC
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 * Callees:
 *     CmpUnlockHiveList @ 0x1404EA638 (CmpUnlockHiveList.c)
 *     CmpLockHiveListShared @ 0x1404EB500 (CmpLockHiveListShared.c)
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
