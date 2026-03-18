/*
 * XREFs of MmGetSessionObjectById @ 0x1401DBD14
 * Callers:
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 *     NtSetInformationObject @ 0x140492930 (NtSetInformationObject.c)
 *     IoRegisterContainerNotification @ 0x140546F70 (IoRegisterContainerNotification.c)
 *     IoGetContainerInformation @ 0x1405FA980 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x140653498 (SeExchangePrimaryToken.c)
 *     SepSetTokenSessionById @ 0x140653D2C (SepSetTokenSessionById.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void *__fastcall MmGetSessionObjectById(int a1)
{
  void *v1; // rdi
  __int64 SessionById; // rax
  void *v3; // rsi
  __int64 v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  SessionById = MmGetSessionById(a1);
  v3 = (void *)SessionById;
  if ( SessionById )
  {
    v4 = *(_QWORD *)(SessionById + 1024);
    v1 = *(void **)(v4 + 72);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( (*(_DWORD *)(v4 + 4) & 2) != 0 )
      v1 = 0LL;
    else
      ObfReferenceObjectWithTag(v1, 0x746C6644u);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObject(v3);
  }
  return v1;
}
