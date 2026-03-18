/*
 * XREFs of PnpDisableUserModeNotifications @ 0x1401BF9A4
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

void __fastcall PnpDisableUserModeNotifications(struct _LIST_ENTRY *a1, __int64 a2)
{
  void **v4; // rsi
  __int64 v5; // rbp
  char *v6; // rdi
  PFAST_MUTEX i; // rbx

  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v4 = (void **)&PiUEventDevHandleClientList;
  v5 = 14LL;
  v6 = (char *)&PiUEventDevHandleClientList;
  do
  {
    for ( i = (PFAST_MUTEX)*v4; i != (PFAST_MUTEX)v6; i = *(PFAST_MUTEX *)&i->Count )
    {
      ExAcquireFastMutex(*(PFAST_MUTEX *)&i->Contention);
      if ( *(_QWORD *)&i->OldIrql == *(_QWORD *)(a2 + 744) && i->Event.Header.WaitListHead.Flink == a1 )
        LOBYTE(i->Event.Header.WaitListHead.Blink) = 1;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)&i->Contention);
    }
    v6 += 16;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
}
