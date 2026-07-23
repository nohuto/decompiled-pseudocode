/*
 * XREFs of CmpUnlockHashEntry @ 0x140436D90
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpDelayCloseWorker @ 0x1404245C0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405185D4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140518740 (CmpPerformSingleKcbCacheLookup.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CmpDeleteHive @ 0x14010C288 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntry(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rbx
  signed __int64 v4; // rcx
  signed __int64 v5; // rax
  __int64 v6; // rtt
  __int64 result; // rax

  v3 = (__int64 *)(*(_QWORD *)(a1 + 2800)
                 + 24
                 * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9))));
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
