/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x14013DCFC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeTimeOutQueueWaiters @ 0x1400A6788 (KeTimeOutQueueWaiters.c)
 *     KeRemoveQueue @ 0x1400A6C30 (KeRemoveQueue.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1400F6478 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F6D70 (ExpWorkerFactoryCheckCreate.c)
 *     RtlpInterlockedFlushSList @ 0x1401673F0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rax
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v4; // r8d
  unsigned int Blink; // eax
  char v6; // di
  PSLIST_ENTRY v7; // rdi
  PSLIST_ENTRY v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+38h] [rbp-20h] BYREF

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
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v8[1].Next, &v10);
        *((_DWORD *)&v8[9].Next + 2) &= ~8u;
        ExpWorkerFactoryCheckCreate(v8, &v10, 1);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      KeRegisterObjectNotification(
        (__int64)&ExpWorkerFactoryThreadCreationTimer,
        (__int64)&ExpWorkerFactoryManagerQueue,
        (__int64)&ExpWorkerFactoryThreadCreationBlock);
    }
    if ( !LODWORD(v1[3].Flink) )
      break;
    v2 = v1 - 19;
    Flink = v1[-18].Flink;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Flink, &LockHandle);
    if ( !LODWORD(v2[9].Flink) )
    {
      v4 = (unsigned int)v2[8].Flink;
      Blink = (unsigned int)v2[7].Blink;
      if ( v4 > Blink )
        KeTimeOutQueueWaiters((__int64)Flink->Blink, -(__int64)v2[7].Flink, v4 - Blink);
    }
    if ( BYTE1(Flink[2].Flink) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      KeRegisterObjectNotification((__int64)&v2[10].Blink, (__int64)&ExpWorkerFactoryManagerQueue, (__int64)&v2[19]);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 )
LABEL_12:
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  v2 = (PLIST_ENTRY)((char *)v1 - 360);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v1[-22].Blink, &LockHandle);
  LODWORD(v2[9].Blink) &= ~0x400u;
  if ( ((__int64)v2[9].Blink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(v2) )
    ExpWorkerFactoryCheckCreate(v2, &LockHandle, 0);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  goto LABEL_12;
}
