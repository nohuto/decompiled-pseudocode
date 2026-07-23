/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x14043622C
 * Callers:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF4A4 (CmpTerminateServerSiloCallback.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1406012EC (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404BFF98 (CmpArmDelayDerefKCBWorker.c)
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
  v5 = (_QWORD *)qword_140322B58;
  v6 = (_QWORD *)(a1 + 216);
  if ( *(__int64 **)qword_140322B58 != &CmpDelayDerefKCBListHead )
    __fastfail(3u);
  v7 = CmpDelayDerefKCBWorkItemActive == 0;
  *v6 = &CmpDelayDerefKCBListHead;
  v6[1] = v5;
  *v5 = v6;
  qword_140322B58 = (__int64)v6;
  if ( v7 )
  {
    CmpDelayDerefKCBWorkItemActive = 1;
    v4 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  if ( v4 )
    CmpArmDelayDerefKCBWorker();
}
