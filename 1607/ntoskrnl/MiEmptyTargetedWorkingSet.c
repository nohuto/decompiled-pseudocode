/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x1401E954C
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x1401E9FC8 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x14007BF2C (MiReturnWsToExpansionList.c)
 */

__int64 __fastcall MiEmptyTargetedWorkingSet(ULONG_PTR a1, char a2)
{
  ULONG_PTR v4; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
  v4 = a1 + 24;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v6 = *(_QWORD *)v4;
    v7 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v7 != v4 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)v4 = 0LL;
    *(_BYTE *)(a1 + 185) = *(_BYTE *)(a1 + 185) & 0xF9 | 2;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    MiEmptyWorkingSet(a1, a2, 0);
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
    *(_BYTE *)(a1 + 185) &= 0xF9u;
    MiReturnWsToExpansionList(a1);
  }
  return KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
}
