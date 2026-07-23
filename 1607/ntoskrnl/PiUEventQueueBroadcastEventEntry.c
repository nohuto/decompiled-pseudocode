/*
 * XREFs of PiUEventQueueBroadcastEventEntry @ 0x1404887EC
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140489978 (PiUEventProcessBroadcastNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

void __fastcall PiUEventQueueBroadcastEventEntry(__int64 a1)
{
  PVOID *v2; // rbx
  bool v3; // si
  __int64 *v4; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v6; // ecx
  char *v7; // rcx
  __int64 v8; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
  v2 = (PVOID *)PiUEventBroadcastEventQueue;
  v3 = PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue;
  while ( v2 != &PiUEventBroadcastEventQueue )
  {
    v6 = *((_DWORD *)v2 + 5);
    if ( v6 == *(_DWORD *)(a1 + 20) && *((_DWORD *)v2 + 6) == *(_DWORD *)(a1 + 24) )
    {
      if ( v6 == 3 )
      {
        v7 = *(char **)((char *)v2 + 28) - *(_QWORD *)(a1 + 28);
        if ( !v7 )
          v7 = *(char **)((char *)v2 + 36) - *(_QWORD *)(a1 + 36);
        if ( !v7 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 44));
          RtlInitUnicodeString(&String2, (PCWSTR)v2 + 22);
          if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
          {
LABEL_12:
            *((_BYTE *)v2 + 16) = 0;
            break;
          }
        }
      }
      else
      {
        if ( v6 != 2 )
          goto LABEL_12;
        v8 = *(_QWORD *)(a1 + 28) - *(_QWORD *)((char *)v2 + 28);
        if ( !v8 )
          v8 = *(_QWORD *)(a1 + 36) - *(_QWORD *)((char *)v2 + 36);
        if ( !v8 )
          goto LABEL_12;
      }
    }
    v2 = (PVOID *)*v2;
  }
  *(_BYTE *)(a1 + 16) = 1;
  v4 = (__int64 *)qword_140320088;
  if ( *(PVOID **)qword_140320088 != &PiUEventBroadcastEventQueue )
    __fastfail(3u);
  *(_QWORD *)a1 = &PiUEventBroadcastEventQueue;
  *(_QWORD *)(a1 + 8) = v4;
  *v4 = a1;
  qword_140320088 = a1;
  KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
  if ( v3 )
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
