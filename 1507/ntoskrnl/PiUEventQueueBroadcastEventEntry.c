/*
 * XREFs of PiUEventQueueBroadcastEventEntry @ 0x14045D730
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14045DC54 (PiUEventProcessBroadcastNotifications.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

void __fastcall PiUEventQueueBroadcastEventEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  PVOID *v8; // rbx
  int v9; // eax
  bool v10; // si
  PVOID **v11; // rax
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v15; // ecx
  char *v16; // rcx
  __int64 v17; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = KeAbPreAcquire((ULONG_PTR)&PiUEventBroadcastEventQueueLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventBroadcastEventQueueLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = (PVOID *)PiUEventBroadcastEventQueue;
  qword_14034AF88 = (__int64)KeGetCurrentThread();
  v9 = CurrentIrql;
  v10 = PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue;
  dword_14034AFB0 = v9;
  while ( v8 != &PiUEventBroadcastEventQueue )
  {
    v15 = *((_DWORD *)v8 + 5);
    if ( v15 == *(_DWORD *)(a1 + 20) && *((_DWORD *)v8 + 6) == *(_DWORD *)(a1 + 24) )
    {
      if ( v15 == 3 )
      {
        v16 = *(char **)((char *)v8 + 28) - *(_QWORD *)(a1 + 28);
        if ( !v16 )
          v16 = *(char **)((char *)v8 + 36) - *(_QWORD *)(a1 + 36);
        if ( !v16 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 44));
          RtlInitUnicodeString(&String2, (PCWSTR)v8 + 22);
          if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
          {
LABEL_18:
            *((_BYTE *)v8 + 16) = 0;
            break;
          }
        }
      }
      else
      {
        if ( v15 != 2 )
          goto LABEL_18;
        v17 = *(_QWORD *)(a1 + 28) - *(_QWORD *)((char *)v8 + 28);
        if ( !v17 )
          v17 = *(_QWORD *)(a1 + 36) - *(_QWORD *)((char *)v8 + 36);
        if ( !v17 )
          goto LABEL_18;
      }
    }
    v8 = (PVOID *)*v8;
  }
  *(_BYTE *)(a1 + 16) = 1;
  v11 = (PVOID **)qword_14034AFC8;
  *(_QWORD *)a1 = &PiUEventBroadcastEventQueue;
  *(_QWORD *)(a1 + 8) = v11;
  if ( *v11 != &PiUEventBroadcastEventQueue )
    __fastfail(3u);
  *v11 = (PVOID *)a1;
  qword_14034AF88 = 0LL;
  v12 = dword_14034AFB0;
  qword_14034AFC8 = a1;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)&PiUEventBroadcastEventQueueLock);
  if ( v10 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PiUEventBroadcastEventWorker;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, BackgroundWorkQueue);
    }
  }
}
