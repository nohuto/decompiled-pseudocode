/*
 * XREFs of MmGetSessionObjectById @ 0x1401EC9D8
 * Callers:
 *     SeSetSessionIdToken @ 0x14047AA4C (SeSetSessionIdToken.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     IoRegisterContainerNotification @ 0x14057C124 (IoRegisterContainerNotification.c)
 *     IoGetContainerInformation @ 0x140624414 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x140692774 (SeExchangePrimaryToken.c)
 *     SepSetTokenSessionById @ 0x1406930B0 (SepSetTokenSessionById.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionById @ 0x1400765C0 (MmGetSessionById.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall MmGetSessionObjectById(unsigned int a1, __int64 a2, __int64 a3)
{
  void *v3; // rdi
  __int64 SessionById; // rax
  void *v5; // rsi
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  SessionById = MmGetSessionById(a1, a2, a3);
  v5 = (void *)SessionById;
  if ( SessionById )
  {
    v6 = *(_QWORD *)(SessionById + 1024);
    v3 = *(void **)(v6 + 72);
    KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
    if ( (*(_DWORD *)(v6 + 4) & 2) != 0 )
      v3 = 0LL;
    else
      ObfReferenceObjectWithTag(v3, 0x746C6644u);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  return v3;
}
