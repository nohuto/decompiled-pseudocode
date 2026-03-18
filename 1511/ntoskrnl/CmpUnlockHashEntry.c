/*
 * XREFs of CmpUnlockHashEntry @ 0x1403FB980
 * Callers:
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDelayCloseWorker @ 0x1403F9EB0 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 * Callees:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
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
