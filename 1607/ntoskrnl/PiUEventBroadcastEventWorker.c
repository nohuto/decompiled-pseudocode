/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x140528570
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14062E514 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E598 (PiUEventBroadcastPortsChangedEvent.c)
 */

void __fastcall PiUEventBroadcastEventWorker(void *a1)
{
  char v2; // si
  _DWORD *v3; // rdi
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  unsigned int v8; // ecx
  const WNF_STATE_NAME *v9; // rcx
  __int64 v10; // rcx
  void *SessionById; // rbx
  const WNF_STATE_NAME *v12; // rcx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int ExplicitScope; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v3 = PiUEventBroadcastEventQueue;
    v4 = *((_BYTE *)PiUEventBroadcastEventQueue + 16);
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    if ( v4 )
    {
      v7 = v3[5];
      if ( !v7 )
      {
        v8 = v3[6];
        ExplicitScope = v8;
        if ( v8 == -1 )
        {
          v9 = &WNF_PNPA_DEVNODES_CHANGED;
LABEL_6:
          ZwUpdateWnfStateData(v9, 0LL, 0, 0LL, 0LL, 0, 0);
          goto LABEL_7;
        }
        SessionById = (void *)MmGetSessionById(v8, v5, v6);
        if ( !SessionById )
          goto LABEL_7;
        v12 = &WNF_PNPA_DEVNODES_CHANGED_SESSION;
        goto LABEL_15;
      }
      v13 = v7 - 1;
      if ( !v13 )
      {
        v15 = v3[6];
        ExplicitScope = v15;
        if ( v15 == -1 )
        {
          v9 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED;
          goto LABEL_6;
        }
        SessionById = (void *)MmGetSessionById(v15, v5, v6);
        if ( !SessionById )
          goto LABEL_7;
        v12 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED_SESSION;
LABEL_15:
        ZwUpdateWnfStateData(v12, 0LL, 0, 0LL, &ExplicitScope, 0, 0);
        ObfDereferenceObject(SessionById);
        goto LABEL_7;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          PiUEventBroadcastPortsChangedEvent((unsigned int)v3[6], v3 + 7, v3 + 11);
      }
      else
      {
        PiUEventBroadcastHardwareProfilesChangedEvent((unsigned int)v3[6], v3 + 7);
      }
    }
LABEL_7:
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v10 = *(_QWORD *)PiUEventBroadcastEventQueue;
    if ( *((PVOID **)PiUEventBroadcastEventQueue + 1) != &PiUEventBroadcastEventQueue
      || *(PVOID *)(v10 + 8) != PiUEventBroadcastEventQueue )
    {
      __fastfail(3u);
    }
    PiUEventBroadcastEventQueue = *(PVOID *)PiUEventBroadcastEventQueue;
    *(_QWORD *)(v10 + 8) = &PiUEventBroadcastEventQueue;
    if ( PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue )
      v2 = 1;
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    ExFreePoolWithTag(v3, 0x59706E50u);
  }
  while ( !v2 );
  ExFreePoolWithTag(a1, 0x59706E50u);
}
