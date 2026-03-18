/*
 * XREFs of PnpDeferNotification @ 0x1404E9464
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1404E90BC (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpDeferNotification(__int64 a1)
{
  unsigned int v2; // ebx
  PVOID *PoolWithTag; // rax
  PVOID *v5; // rdi
  PVOID **v6; // rax

  v2 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( PnpNotificationInProgress )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x37706E50u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = (PVOID)a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      ExAcquireFastMutex(&PnpDeferredRegistrationLock);
      v6 = (PVOID **)qword_1406FBF30;
      *v5 = &PnpDeferredRegistrationList;
      v5[1] = v6;
      if ( *v6 != &PnpDeferredRegistrationList )
        __fastfail(3u);
      *v6 = v5;
      qword_1406FBF30 = (__int64)v5;
      KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  return v2;
}
