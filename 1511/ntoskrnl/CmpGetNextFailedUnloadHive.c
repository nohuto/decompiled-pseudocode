/*
 * XREFs of CmpGetNextFailedUnloadHive @ 0x1400F24E8
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 * Callees:
 *     CmpUnlockHiveList @ 0x1403BAB54 (CmpUnlockHiveList.c)
 *     CmpLockHiveListShared @ 0x1404C2A40 (CmpLockHiveListShared.c)
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
