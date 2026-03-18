/*
 * XREFs of PoQueueShutdownWorkItem @ 0x1406B50C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

NTSTATUS __stdcall PoQueueShutdownWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  __int64 v1; // r9
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *v6; // rax
  NTSTATUS v7; // ebx
  unsigned __int8 v8; // di
  signed __int32 v9; // eax

  v3 = KeAbPreAcquire((ULONG_PTR)&PopShutdownListMutex, 0LL, 0LL, v1);
  v4 = v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopShutdownListMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopShutdownListMutex, v3);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  qword_14032F148 = (__int64)KeGetCurrentThread();
  dword_14032F170 = CurrentIrql;
  if ( PopShutdownListAvailable )
  {
    v6 = (struct _LIST_ENTRY *)qword_14032F1A8;
    WorkItem->List.Flink = (struct _LIST_ENTRY *)&PopShutdownQueue;
    WorkItem->List.Blink = v6;
    if ( (__int64 *)v6->Flink != &PopShutdownQueue )
      __fastfail(3u);
    v6->Flink = &WorkItem->List;
    v7 = 0;
    qword_14032F1A8 = (__int64)WorkItem;
  }
  else
  {
    v7 = -1073741077;
  }
  qword_14032F148 = 0LL;
  v8 = dword_14032F170;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)&PopShutdownListMutex, 1, 0);
  if ( v9 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopShutdownListMutex, v9);
  __writecr8(v8);
  KeAbPostRelease((ULONG_PTR)&PopShutdownListMutex);
  return v7;
}
