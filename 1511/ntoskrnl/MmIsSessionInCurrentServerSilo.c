/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x1401DBD8C
 * Callers:
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 * Callees:
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(int a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  bool v4; // di
  __int64 v5; // rax
  void *ServerSiloForSilo; // rax
  void *v7; // rbx
  __int64 *i; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)MmGetSessionId(KeGetCurrentThread()->ApcState.Process) == a1 )
    return 1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
  ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v5);
  v7 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  for ( i = (__int64 *)qword_1402FF750; i != &qword_1402FF750; i = (__int64 *)*i )
  {
    if ( (void *)i[980] == v7 && *((_DWORD *)i - 34) == a1 )
    {
      if ( (*((_DWORD *)i - 35) & 2) == 0 )
        v4 = *(i - 16) != (_QWORD)(i - 16);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
    ObfDereferenceObject(v7);
  return v4;
}
