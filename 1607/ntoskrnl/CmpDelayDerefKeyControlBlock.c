/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x14043735C
 * Callers:
 *     CmpDiscardKcb @ 0x14000ADEC (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140436D30 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404372D8 (CmpCleanUpKcbValueCache.c)
 *     CmpFindSubKeyByNumberEx @ 0x140438CE0 (CmpFindSubKeyByNumberEx.c)
 *     CmEnumerateKey @ 0x1404390C0 (CmEnumerateKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF3F0 (CmpTerminateServerSiloCallback.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140601238 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404DC994 (CmpArmDelayDerefKCBWorker.c)
 */

void __fastcall CmpDelayDerefKeyControlBlock(__int64 a1)
{
  unsigned __int32 v1; // r8d
  unsigned __int32 v3; // edx
  char v4; // di
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  bool v7; // zf

  v1 = *(_DWORD *)a1;
  while ( v1 > 1 )
  {
    v3 = v1 - 1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v1 - 1, v1);
    if ( v1 == v3 + 1 )
      return;
  }
  v4 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  *(_BYTE *)(a1 + 56) |= 1u;
  v5 = (_QWORD *)qword_140322B38;
  v6 = (_QWORD *)(a1 + 216);
  if ( *(__int64 **)qword_140322B38 != &CmpDelayDerefKCBListHead )
    __fastfail(3u);
  v7 = CmpDelayDerefKCBWorkItemActive == 0;
  *v6 = &CmpDelayDerefKCBListHead;
  v6[1] = v5;
  *v5 = v6;
  qword_140322B38 = (__int64)v6;
  if ( v7 )
  {
    CmpDelayDerefKCBWorkItemActive = 1;
    v4 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  if ( v4 )
    CmpArmDelayDerefKCBWorker();
}
