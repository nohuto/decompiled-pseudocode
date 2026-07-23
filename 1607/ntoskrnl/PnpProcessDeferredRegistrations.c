/*
 * XREFs of PnpProcessDeferredRegistrations @ 0x14048CB60
 * Callers:
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x140489340 (PnpDereferenceNotify.c)
 */

void PnpProcessDeferredRegistrations()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax
  struct _FAST_MUTEX *v3; // rdi

  ExAcquireFastMutex(&PnpDeferredRegistrationLock);
  while ( 1 )
  {
    v0 = PnpDeferredRegistrationList;
    if ( PnpDeferredRegistrationList == &PnpDeferredRegistrationList )
      break;
    v1 = *(_QWORD *)PnpDeferredRegistrationList;
    if ( *((PVOID **)PnpDeferredRegistrationList + 1) != &PnpDeferredRegistrationList
      || *(PVOID *)(v1 + 8) != PnpDeferredRegistrationList )
    {
      __fastfail(3u);
    }
    PnpDeferredRegistrationList = *(PVOID *)PnpDeferredRegistrationList;
    *(_QWORD *)(v1 + 8) = &PnpDeferredRegistrationList;
    v2 = v0[2];
    v3 = *(struct _FAST_MUTEX **)(v2 + 64);
    if ( v3 )
      ExAcquireFastMutex(*(PFAST_MUTEX *)(v2 + 64));
    *(_BYTE *)(v0[2] + 58LL) = 0;
    PnpDereferenceNotify((_WORD *)v0[2]);
    ExFreePoolWithTag(v0, 0x37706E50u);
    if ( v3 )
      KeReleaseGuardedMutex(v3);
  }
  KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
}
