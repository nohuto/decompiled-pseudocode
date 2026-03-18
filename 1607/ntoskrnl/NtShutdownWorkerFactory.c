/*
 * XREFs of NtShutdownWorkerFactory @ 0x1400F9F94
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     ExpShutdownWorkerFactory @ 0x1400F9688 (ExpShutdownWorkerFactory.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x1404BBBFC (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtShutdownWorkerFactory(void *a1, volatile signed __int32 *a2)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v4; // esi
  PVOID v5; // rbx
  _DWORD *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a2 + 1) > 0x7FFFFFFF0000LL || a2 + 1 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v4 = ObReferenceObjectByHandle(a1, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    ExpShutdownWorkerFactory((PKSPIN_LOCK *)Object);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v5 + 13);
    _InterlockedExchangeAdd(a2, *((_DWORD *)v5 + 34));
    v6 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v6[34] = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  return (unsigned int)v4;
}
