/*
 * XREFs of ExpWorkerFactoryInitialization @ 0x1407BB3A4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x14079EB74 (ExpInitSystemPhase1.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KeInitializeQueue @ 0x14007DEC4 (KeInitializeQueue.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 */

__int64 ExpWorkerFactoryInitialization()
{
  int v0; // eax
  int ObjectType; // ebx
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF
  HANDLE ThreadHandle; // [rsp+D0h] [rbp+67h] BYREF

  v0 = ExpWorkerFactoryThreadCreationTimeoutInSeconds;
  if ( ExpWorkerFactoryThreadCreationTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadCreationTimeoutInSeconds > 0x258 )
    {
      v0 = 600;
      ExpWorkerFactoryThreadCreationTimeoutInSeconds = 600;
    }
  }
  else
  {
    v0 = 1;
    ExpWorkerFactoryThreadCreationTimeoutInSeconds = 1;
  }
  if ( ExpWorkerFactoryThreadIdleTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadIdleTimeoutInSeconds > 0x258 )
      ExpWorkerFactoryThreadIdleTimeoutInSeconds = 600;
  }
  else
  {
    ExpWorkerFactoryThreadIdleTimeoutInSeconds = 1;
  }
  ExpWorkerFactoryDeferredMediumTimeout = -1200000LL;
  ExpWorkerFactoryDeferredLongTimeout = -10000000LL * v0;
  ExpWorkerFactoryDeferredShortTimeout.QuadPart = -300000LL;
  InitializeSListHead(&ExpWorkerFactoryThreadCreationList);
  KeInitializeQueue(&ExpWorkerFactoryManagerQueue, 0);
  ExpWorkerFactoryThreadCreationTimer.Header.LockNV = 9;
  ExpWorkerFactoryThreadCreationTimer.Header.SignalState = 0;
  ExpWorkerFactoryThreadCreationTimer.DueTime.QuadPart = 0LL;
  ExpWorkerFactoryThreadCreationTimer.Period = 0;
  ExpWorkerFactoryThreadCreationTimer.Processor = 0;
  ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead.Blink = &ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead;
  ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead.Flink = &ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead;
  KeRegisterObjectNotification(
    (__int64)&ExpWorkerFactoryThreadCreationTimer,
    (__int64)&ExpWorkerFactoryManagerQueue,
    (__int64)&ExpWorkerFactoryThreadCreationBlock);
  ExpWorkerFactoryThreadCreationState = 0;
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  v3[8] = ExpCloseWorkerFactory;
  LODWORD(v3[1]) = 256;
  v3[9] = ExpDeleteWorkerFactory;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 416;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpWorkerFactoryMapping;
  HIDWORD(v3[3]) = 983295;
  ObjectType = ObCreateObjectType(
                 (const UNICODE_STRING *)&qword_1407D58C0,
                 (__int64)v3,
                 0LL,
                 (__int64)&ExpWorkerFactoryObjectType);
  if ( ObjectType >= 0 )
  {
    ObjectType = PsCreateSystemThread(
                   &ThreadHandle,
                   0x1FFFFFu,
                   0LL,
                   0LL,
                   0LL,
                   (PKSTART_ROUTINE)ExpWorkerFactoryManagerThread,
                   0LL);
    if ( ObjectType >= 0 )
      ZwClose(ThreadHandle);
  }
  return (unsigned int)ObjectType;
}
