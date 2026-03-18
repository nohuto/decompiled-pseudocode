/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x1401654EC
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x14002E0E0 (KeRegisterObjectNotification.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14006C640 (ExpWorkerFactoryCheckCreate.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14006D694 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KeTimeOutQueueWaiters @ 0x140120854 (KeTimeOutQueueWaiters.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int v3; // r8d
  unsigned int Flink; // eax
  char v5; // di
  PSLIST_ENTRY v6; // rdi
  PSLIST_ENTRY v7; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+48h] [rbp-20h] BYREF
  PLIST_ENTRY EntryArray; // [rsp+78h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      KeRemoveQueueEx(&ExpWorkerFactoryManagerQueue, 0, 0, 0LL, &EntryArray, 1u);
      if ( EntryArray != (PLIST_ENTRY)&ExpWorkerFactoryThreadCreationBlock )
        break;
      ExpWorkerFactoryThreadCreationState = 0;
      v6 = RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
      while ( v6 )
      {
        v7 = v6;
        v6 = v6->Next;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v7[1].Next, &v9);
        LODWORD(v7[9].Next) &= ~8u;
        ExpWorkerFactoryCheckCreate(v7, &v9, 1);
        ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      }
      KeRegisterObjectNotification(
        (__int64)&ExpWorkerFactoryThreadCreationTimer,
        (__int64)&ExpWorkerFactoryManagerQueue,
        (__int64)&ExpWorkerFactoryThreadCreationBlock);
    }
    if ( !LODWORD(EntryArray[3].Flink) )
      break;
    v1 = (PLIST_ENTRY)((char *)EntryArray - 296);
    Blink = EntryArray[-18].Blink;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Blink, &LockHandle);
    if ( !LODWORD(v1[8].Blink) )
    {
      v3 = (unsigned int)v1[7].Blink;
      Flink = (unsigned int)v1[7].Flink;
      if ( v3 > Flink )
        KeTimeOutQueueWaiters((__int64)Blink->Blink, -(__int64)v1[6].Blink, v3 - Flink);
    }
    if ( BYTE1(Blink[2].Flink) )
    {
      v5 = 1;
    }
    else
    {
      v5 = 0;
      KeRegisterObjectNotification((__int64)&v1[10], (__int64)&ExpWorkerFactoryManagerQueue, (__int64)&v1[18].Blink);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v5 )
LABEL_12:
      ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  }
  v1 = EntryArray - 22;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)EntryArray[-21].Flink, &LockHandle);
  LODWORD(v1[9].Flink) &= ~0x400u;
  if ( ((__int64)v1[9].Flink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(v1) )
    ExpWorkerFactoryCheckCreate(v1, &LockHandle, 0);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  goto LABEL_12;
}
