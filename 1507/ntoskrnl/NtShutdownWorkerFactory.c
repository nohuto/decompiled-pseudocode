/*
 * XREFs of NtShutdownWorkerFactory @ 0x14012B508
 * Callers:
 *     <none>
 * Callees:
 *     ExpShutdownWorkerFactory @ 0x14002DA50 (ExpShutdownWorkerFactory.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  KPROCESSOR_MODE PreviousMode; // r9
  int v4; // esi
  _DWORD *v5; // rbx
  _DWORD *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)PendingWorkerCount & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(PendingWorkerCount + 1) > MmUserProbeAddress || PendingWorkerCount + 1 < PendingWorkerCount )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v4 = ObReferenceObjectByHandle(WorkerFactoryHandle, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    ExpShutdownWorkerFactory((PKSPIN_LOCK *)Object);
    _InterlockedExchangeAdd(PendingWorkerCount, v5[32]);
    v6 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v6[32] = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  return v4;
}
