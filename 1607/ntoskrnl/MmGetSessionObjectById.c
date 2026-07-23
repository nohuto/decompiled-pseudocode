/*
 * XREFs of MmGetSessionObjectById @ 0x1401EC804
 * Callers:
 *     SeSetSessionIdToken @ 0x14047991C (SeSetSessionIdToken.c)
 *     NtSetInformationObject @ 0x14049A550 (NtSetInformationObject.c)
 *     IoRegisterContainerNotification @ 0x14057C5D0 (IoRegisterContainerNotification.c)
 *     IoGetContainerInformation @ 0x1406244C8 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x140692858 (SeExchangePrimaryToken.c)
 *     SepSetTokenSessionById @ 0x140693194 (SepSetTokenSessionById.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
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
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    if ( (*(_DWORD *)(v6 + 4) & 2) != 0 )
      v3 = 0LL;
    else
      ObfReferenceObjectWithTag(v3, 0x746C6644u);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  return v3;
}
