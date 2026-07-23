/*
 * XREFs of CmpUnlockDeletedHashEntryByKcb @ 0x1403FAF00
 * Callers:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpUnlockDeletedHashEntryByKcb(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // edx
  signed __int64 v4; // rcx
  __int64 *v5; // rbx
  signed __int64 v6; // rax
  __int64 v7; // rtt

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9);
  v4 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v2 + 2816)
            + 24
            * ((unsigned int)(*(_DWORD *)(v2 + 2824) - 1) & ((unsigned int)(101027 * v3) ^ ((unsigned __int64)(unsigned int)(101027 * v3) >> 9)))
            + 8) = 0LL;
  v5 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 2816LL)
                 + 24
                 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 2824LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) >> 9))));
  _m_prefetchw(v5);
  v6 = *v5;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v6 - 16;
  if ( (v6 & 2) != 0 || (v7 = *v5, v7 != _InterlockedCompareExchange64(v5, v4, v6)) )
    ExfReleasePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return CmpDereferenceHive(v2);
}
