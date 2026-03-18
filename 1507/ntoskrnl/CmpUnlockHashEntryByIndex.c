/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x140447B68
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpCleanUpKCBCacheTable @ 0x1404EDAE0 (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404EDBF8 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTree @ 0x140656F6C (CmpSearchKeyControlBlockTree.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpUnlockHashEntryByIndex(__int64 a1, unsigned int a2)
{
  signed __int64 *v3; // rbx
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  v3 = (signed __int64 *)(*(_QWORD *)(a1 + 2800) + 24LL * a2);
  v4 = 0LL;
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v5 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v5 - 16;
  if ( (v5 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v4, v5)) )
    ExfReleasePushLock(v3, v4);
  KeAbPostRelease((ULONG_PTR)v3);
  return CmpDereferenceHive(a1);
}
