/*
 * XREFs of CmpAddToDelayedClose @ 0x1403FB440
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall CmpAddToDelayedClose(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // di
  bool v4; // bl
  signed __int32 v5; // eax

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = CmpDelayedLRUListHead;
  *(_QWORD *)(a1 + 216) = CmpDelayedLRUListHead;
  *(_QWORD *)(a1 + 224) = &CmpDelayedLRUListHead;
  if ( *(__int64 **)(v2 + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *(_QWORD *)(v2 + 8) = a1 + 216;
  CmpDelayedLRUListHead = a1 + 216;
  *(_DWORD *)(a1 + 8) |= 2u;
  ++qword_1406FC028;
  v3 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
  v4 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
  *(&CmpDelayedCloseTableLock + 1) = 0LL;
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
  if ( v5 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v5);
  __writecr8(v3);
  KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
  if ( v4 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
    ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
}
