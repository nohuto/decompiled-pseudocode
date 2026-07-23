/*
 * XREFs of PiUEventBroadcastEventWorker @ 0x14051CD24
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14067EDA8 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14067EE2C (PiUEventBroadcastPortsChangedEvent.c)
 */

void __fastcall PiUEventBroadcastEventWorker(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v9; // cf
  _DWORD *v10; // rbx
  unsigned __int8 v11; // si
  char v12; // di
  signed __int32 v13; // eax
  __int64 v14; // r9
  int v15; // ecx
  int v16; // ecx
  const WNF_STATE_NAME *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int8 v20; // si
  __int64 v21; // rcx
  unsigned __int8 v22; // di
  signed __int32 v23; // eax
  void *SessionById; // rdi
  int *ExplicitScope; // rax
  const WNF_STATE_NAME *v26; // rcx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // [rsp+88h] [rbp+10h] BYREF
  int v31; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  do
  {
    v6 = KeAbPreAcquire((ULONG_PTR)&PiUEventBroadcastEventQueueLock, 0LL, 0LL, a4);
    v7 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v9 = _interlockedbittestandreset((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, 0);
    if ( !v9 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventBroadcastEventQueueLock, v6);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v10 = PiUEventBroadcastEventQueue;
    qword_14034AF88 = (__int64)KeGetCurrentThread();
    dword_14034AFB0 = CurrentIrql;
    v11 = CurrentIrql;
    v12 = *((_BYTE *)PiUEventBroadcastEventQueue + 16);
    qword_14034AF88 = 0LL;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, v13);
    __writecr8(v11);
    KeAbPostRelease((ULONG_PTR)&PiUEventBroadcastEventQueueLock);
    if ( v12 )
    {
      v15 = v10[5];
      if ( v15 )
      {
        v27 = v15 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            if ( v28 == 1 )
              PiUEventBroadcastPortsChangedEvent((unsigned int)v10[6], v10 + 7, v10 + 11);
          }
          else
          {
            PiUEventBroadcastHardwareProfilesChangedEvent((unsigned int)v10[6], v10 + 7);
          }
        }
        else
        {
          v29 = v10[6];
          v30 = v29;
          if ( v29 == -1 )
          {
            v17 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED;
            goto LABEL_12;
          }
          SessionById = (void *)MmGetSessionById(v29);
          if ( SessionById )
          {
            ExplicitScope = &v30;
            v26 = (const WNF_STATE_NAME *)&WNF_PNPA_VOLUMES_CHANGED_SESSION;
            goto LABEL_27;
          }
        }
      }
      else
      {
        v16 = v10[6];
        v31 = v16;
        if ( v16 == -1 )
        {
          v17 = &WNF_PNPA_DEVNODES_CHANGED;
LABEL_12:
          ZwUpdateWnfStateData(v17, 0LL, 0, 0LL, 0LL, 0, 0);
          goto LABEL_13;
        }
        SessionById = (void *)MmGetSessionById(v16);
        if ( SessionById )
        {
          ExplicitScope = &v31;
          v26 = &WNF_PNPA_DEVNODES_CHANGED_SESSION;
LABEL_27:
          ZwUpdateWnfStateData(v26, 0LL, 0, 0LL, ExplicitScope, 0, 0);
          ObfDereferenceObject(SessionById);
        }
      }
    }
LABEL_13:
    v18 = KeAbPreAcquire((ULONG_PTR)&PiUEventBroadcastEventQueueLock, 0LL, 0LL, v14);
    v19 = v18;
    v20 = KeGetCurrentIrql();
    __writecr8(1uLL);
    v9 = _interlockedbittestandreset((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, 0);
    if ( !v9 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventBroadcastEventQueueLock, v18);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    qword_14034AF88 = (__int64)KeGetCurrentThread();
    dword_14034AFB0 = v20;
    v21 = *(_QWORD *)PiUEventBroadcastEventQueue;
    if ( *((PVOID **)PiUEventBroadcastEventQueue + 1) != &PiUEventBroadcastEventQueue
      || *(PVOID *)(v21 + 8) != PiUEventBroadcastEventQueue )
    {
      __fastfail(3u);
    }
    PiUEventBroadcastEventQueue = *(PVOID *)PiUEventBroadcastEventQueue;
    *(_QWORD *)(v21 + 8) = &PiUEventBroadcastEventQueue;
    v22 = dword_14034AFB0;
    if ( PiUEventBroadcastEventQueue == &PiUEventBroadcastEventQueue )
      v5 = 1;
    qword_14034AF88 = 0LL;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventBroadcastEventQueueLock, v23);
    __writecr8(v22);
    KeAbPostRelease((ULONG_PTR)&PiUEventBroadcastEventQueueLock);
    ExFreePoolWithTag(v10, 0x59706E50u);
  }
  while ( !v5 );
  ExFreePoolWithTag(a1, 0x59706E50u);
}
