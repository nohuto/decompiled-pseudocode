/*
 * XREFs of CmpAddToDelayedClose @ 0x1404BCE64
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140437B40 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 */

void __fastcall CmpAddToDelayedClose(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  bool v4; // bl

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = CmpDelayedLRUListHead;
  v3 = (_QWORD *)(a1 + 216);
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v3 = CmpDelayedLRUListHead;
  *(_QWORD *)(a1 + 224) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v2 + 8) = v3;
  CmpDelayedLRUListHead = a1 + 216;
  *(_BYTE *)(a1 + 56) |= 2u;
  ++qword_1407481D8;
  v4 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  if ( v4 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}
