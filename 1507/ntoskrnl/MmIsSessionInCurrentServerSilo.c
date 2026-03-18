/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x140220A64
 * Callers:
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(int a1)
{
  bool v3; // bl
  void *CurrentServerSilo; // rdi
  __int64 *i; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)MmGetSessionId(KeGetCurrentThread()->ApcState.Process) == a1 )
    return 1;
  v3 = 0;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  for ( i = (__int64 *)qword_14034FC10; i != &qword_14034FC10; i = (__int64 *)*i )
  {
    if ( (void *)i[980] == CurrentServerSilo && *((_DWORD *)i - 34) == a1 )
    {
      if ( (*((_DWORD *)i - 35) & 2) == 0 )
        v3 = *(i - 16) != (_QWORD)(i - 16);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( CurrentServerSilo )
    ObfDereferenceObjectWithTag(CurrentServerSilo, 0x746C6644u);
  return v3;
}
