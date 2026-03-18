/*
 * XREFs of CmpUnlockDeletedHashEntryByKcb @ 0x1404470F4
 * Callers:
 *     CmpMarkKcbDeletedAndCache @ 0x1404470AC (CmpMarkKcbDeletedAndCache.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpUnlockDeletedHashEntryByKcb(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // edx
  signed __int64 v4; // rcx
  signed __int64 *v5; // rbx
  signed __int64 v6; // rax
  unsigned __int64 v7; // rdx
  signed __int64 v8; // rtt

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9);
  v4 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v2 + 2816)
            + 24
            * ((unsigned int)(*(_DWORD *)(v2 + 2824) - 1) & ((unsigned int)(101027 * v3) ^ ((unsigned __int64)(unsigned int)(101027 * v3) >> 9)))
            + 8) = 0LL;
  v5 = (signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2816LL)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 2824LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) >> 9))));
  _m_prefetchw(v5);
  v6 = *v5;
  v7 = *v5 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v7 > 0x10 )
    v4 = v6 - 16;
  if ( (v6 & 2) != 0 || (v8 = *v5, v8 != _InterlockedCompareExchange64(v5, v4, v6)) )
    ExfReleasePushLock(v5, v7);
  KeAbPostRelease((ULONG_PTR)v5);
  return CmpDereferenceHive(v2);
}
