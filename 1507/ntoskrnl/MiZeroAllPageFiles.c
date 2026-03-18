/*
 * XREFs of MiZeroAllPageFiles @ 0x140402E6C
 * Callers:
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiZeroPageFile @ 0x14020DB5C (MiZeroPageFile.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 MiZeroAllPageFiles()
{
  ULONG v0; // edi
  ULONG v1; // esi
  __int64 v2; // r15
  struct _KEVENT *v3; // rbp
  __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v6; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  v0 = Count;
  v1 = Count;
  VfZeroAllPagesRunning = 1;
  if ( Count )
  {
    do
    {
      v2 = v1 - 1;
      v3 = (struct _KEVENT *)&Object[3 * v2 + 16];
      KeInitializeEvent(v3, NotificationEvent, 0);
      v4 = *(_QWORD *)&MiSystemPartition[4 * v2 + 2672];
      Object[v2] = v3;
      if ( (*(_BYTE *)(v4 + 164) & 0x40) != 0
        || (PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x775A6D4Du),
            (v6 = PoolWithTag) == 0LL) )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v2 + 16], 0, 0);
      }
      else
      {
        PoolWithTag[1].List.Flink = *(struct _LIST_ENTRY **)&MiSystemPartition[4 * v2 + 2672];
        PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)v3;
        if ( v1 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v2 + 16], 0, 0);
          MiZeroPageFile(v6);
        }
        else
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiZeroPageFile;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
        }
      }
      --v1;
    }
    while ( (_DWORD)v2 );
  }
  if ( v0 > 1 )
    KeWaitForMultipleObjects(v0, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
