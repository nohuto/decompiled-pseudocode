/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x140499A00
 * Callers:
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049979C (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140499880 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 * Callees:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall CmpUnlockHashEntryByIndex(__int64 a1, unsigned int a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 result; // rax

  v3 = (signed __int64 *)(*(_QWORD *)(a1 + 2800) + 24LL * a2);
  v4 = 0LL;
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v5 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v5 - 16;
  if ( (v5 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v4, v5)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(a1);
  return result;
}
