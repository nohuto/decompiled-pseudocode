/*
 * XREFs of MmGetSessionObjectById @ 0x1402209E8
 * Callers:
 *     NtSetInformationObject @ 0x140520060 (NtSetInformationObject.c)
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 *     IoRegisterContainerNotification @ 0x1405BD318 (IoRegisterContainerNotification.c)
 *     IoGetContainerInformation @ 0x140674DA4 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x1406D51C0 (SeExchangePrimaryToken.c)
 *     SepSetTokenSessionById @ 0x1406D5BD8 (SepSetTokenSessionById.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
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
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
  return v1;
}
