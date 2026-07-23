/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x1404E24F4
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14060412C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406041B0 (PiUEventBroadcastPortsChangedEvent.c)
 */

void __fastcall PiUEventBroadcastEventWorker(void *a1)
{
  char v2; // si
  _DWORD *v3; // rdi
  char v4; // bl
  int v5; // ecx
  int v6; // ecx
  const WNF_STATE_NAME *v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  void *SessionById; // rbx
  const WNF_STATE_NAME *v12; // rcx
  int v13; // ecx
  int ExplicitScope; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v3 = PiUEventBroadcastEventQueue;
    v4 = *((_BYTE *)PiUEventBroadcastEventQueue + 16);
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    if ( v4 )
    {
      v5 = v3[5];
      if ( !v5 )
      {
        v6 = v3[6];
        ExplicitScope = v6;
        if ( v6 == -1 )
        {
          v7 = &WNF_PNPA_DEVNODES_CHANGED;
LABEL_6:
          ZwUpdateWnfStateData(v7, 0LL, 0, 0LL, 0LL, 0, 0);
          goto LABEL_7;
        }
        SessionById = (void *)MmGetSessionById(v6);
        if ( !SessionById )
          goto LABEL_7;
        v12 = &WNF_PNPA_DEVNODES_CHANGED_SESSION;
        goto LABEL_18;
      }
      v9 = v5 - 1;
      if ( !v9 )
      {
        v10 = v3[6];
        ExplicitScope = v10;
        if ( v10 == -1 )
        {
          v7 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED;
          goto LABEL_6;
        }
        SessionById = (void *)MmGetSessionById(v10);
        if ( !SessionById )
          goto LABEL_7;
        v12 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED_SESSION;
LABEL_18:
        ZwUpdateWnfStateData(v12, 0LL, 0, 0LL, &ExplicitScope, 0, 0);
        ObfDereferenceObject(SessionById);
        goto LABEL_7;
      }
      v13 = v9 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          PiUEventBroadcastPortsChangedEvent((unsigned int)v3[6], v3 + 7, v3 + 11);
      }
      else
      {
        PiUEventBroadcastHardwareProfilesChangedEvent((unsigned int)v3[6], v3 + 7);
      }
    }
LABEL_7:
    ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
    v8 = *(_QWORD *)PiUEventBroadcastEventQueue;
    if ( *((PVOID **)PiUEventBroadcastEventQueue + 1) != &PiUEventBroadcastEventQueue
      || *(PVOID *)(v8 + 8) != PiUEventBroadcastEventQueue )
    {
      __fastfail(3u);
    }
    PiUEventBroadcastEventQueue = *(PVOID *)PiUEventBroadcastEventQueue;
    *(_QWORD *)(v8 + 8) = &PiUEventBroadcastEventQueue;
    if ( PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue )
      v2 = 1;
    KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
    ExFreePoolWithTag(v3, 0x59706E50u);
  }
  while ( !v2 );
  ExFreePoolWithTag(a1, 0x59706E50u);
}
