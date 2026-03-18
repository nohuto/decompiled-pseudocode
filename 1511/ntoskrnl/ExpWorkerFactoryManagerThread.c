/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x14013631C
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x14002E790 (KeRegisterObjectNotification.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1400C67C0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeTimeOutQueueWaiters @ 0x1400C6848 (KeTimeOutQueueWaiters.c)
 *     KeRemoveQueue @ 0x1400F4D38 (KeRemoveQueue.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rax
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int v4; // r8d
  unsigned int Flink; // eax
  char v6; // di
  PSLIST_ENTRY v7; // rdi
  PSLIST_ENTRY v8; // rbx
  __int64 v9; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v1 = KeRemoveQueue(&ExpWorkerFactoryManagerQueue, 0, 0LL);
      if ( v1 != (PLIST_ENTRY)&ExpWorkerFactoryThreadCreationBlock )
        break;
      ExpWorkerFactoryThreadCreationState = 0;
      v7 = RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
      while ( v7 )
      {
        v8 = v7;
        v7 = v7->Next;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v8[1].Next, &v11);
        LODWORD(v8[9].Next) &= ~8u;
        LOBYTE(v9) = 1;
        ExpWorkerFactoryCheckCreate(v8, &v11, v9);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      KeRegisterObjectNotification(
        (__int64)&ExpWorkerFactoryThreadCreationTimer,
        (__int64)&ExpWorkerFactoryManagerQueue,
        (__int64)&ExpWorkerFactoryThreadCreationBlock);
    }
    if ( !LODWORD(v1[3].Flink) )
      break;
    v2 = (PLIST_ENTRY)((char *)v1 - 296);
    Blink = v1[-18].Blink;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Blink, &LockHandle);
    if ( !LODWORD(v2[8].Blink) )
    {
      v4 = (unsigned int)v2[7].Blink;
      Flink = (unsigned int)v2[7].Flink;
      if ( v4 > Flink )
        KeTimeOutQueueWaiters((__int64)Blink->Blink, -(__int64)v2[6].Blink, v4 - Flink);
    }
    if ( BYTE1(Blink[2].Flink) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      KeRegisterObjectNotification((__int64)&v2[10], (__int64)&ExpWorkerFactoryManagerQueue, (__int64)&v2[18].Blink);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 )
LABEL_12:
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  v2 = v1 - 22;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v1[-21].Flink, &LockHandle);
  LODWORD(v2[9].Flink) &= ~0x400u;
  if ( ((__int64)v2[9].Flink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(v2) )
    ExpWorkerFactoryCheckCreate(v2, &LockHandle, 0LL);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  goto LABEL_12;
}
