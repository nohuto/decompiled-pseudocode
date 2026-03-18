/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x140528030
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1400765C0 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14062E460 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E4E4 (PiUEventBroadcastPortsChangedEvent.c)
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
  void *v9; // rcx
  __int64 v10; // rcx
  void *SessionById; // rbx
  void *v12; // rcx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ecx

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
        if ( v8 == -1 )
        {
          v9 = &WNF_PNPA_DEVNODES_CHANGED;
LABEL_6:
          ZwUpdateWnfStateData((__int64)v9, 0LL, 0LL);
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
        if ( v15 == -1 )
        {
          v9 = &WNF_PNPA_VOLUMES_CHANGED;
          goto LABEL_6;
        }
        SessionById = (void *)MmGetSessionById(v15, v5, v6);
        if ( !SessionById )
          goto LABEL_7;
        v12 = &WNF_PNPA_VOLUMES_CHANGED_SESSION;
LABEL_15:
        ZwUpdateWnfStateData((__int64)v12, 0LL, 0LL);
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
