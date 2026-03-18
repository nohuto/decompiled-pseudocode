/*
 * XREFs of PiUEventProcessEventWorker @ 0x14045D8BC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1404102D8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventDereferenceEventEntry @ 0x14045DB04 (PiUEventDereferenceEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14045DC54 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x14045F1F0 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14045F46C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1405B2828 (PiUEventNotifyDeviceInstancePropertyChange.c)
 */

void __fastcall PiUEventProcessEventWorker(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v9; // cf
  __int64 v10; // rbx
  signed __int32 v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int8 v20; // si
  __int64 v21; // rcx
  unsigned __int8 v22; // di
  signed __int32 v23; // eax

  v4 = 0;
  do
  {
    v6 = KeAbPreAcquire((ULONG_PTR)&PiUEventUsermodeEventQueueLock, 0LL, 0LL, a4);
    v7 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v9 = _interlockedbittestandreset((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 0);
    if ( !v9 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventUsermodeEventQueueLock, v6);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    qword_14034AF28 = 0LL;
    v10 = PiUEventUsermodeEventQueue;
    dword_14034AF50 = CurrentIrql;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, v11);
    __writecr8(CurrentIrql);
    KeAbPostRelease((ULONG_PTR)&PiUEventUsermodeEventQueueLock);
    v15 = *(_DWORD *)(v10 + 88);
    switch ( v15 )
    {
      case 1:
      case 3:
        v16 = PiUEventNotifyTargetDeviceChange(v10);
        goto LABEL_15;
      case 4:
        goto LABEL_31;
      case 2:
        v16 = PiUEventNotifyDeviceInterfaceChange(v10);
LABEL_15:
        if ( v16 < 0 )
          goto LABEL_17;
        goto LABEL_16;
      case 9:
        v16 = PiUEventNotifyDeviceInstancePropertyChange(v10);
        goto LABEL_15;
    }
    if ( v15 > 9 && v15 <= 11 )
    {
LABEL_31:
      v16 = PiUEventNotifyDeviceInstanceChange(v10, v12, v13, v14);
      goto LABEL_15;
    }
LABEL_16:
    PiUEventProcessBroadcastNotifications(v10);
LABEL_17:
    v18 = KeAbPreAcquire((ULONG_PTR)&PiUEventUsermodeEventQueueLock, 0LL, 0LL, v17);
    v19 = v18;
    v20 = KeGetCurrentIrql();
    __writecr8(1uLL);
    v9 = _interlockedbittestandreset((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 0);
    if ( !v9 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventUsermodeEventQueueLock, v18);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    qword_14034AF28 = (__int64)KeGetCurrentThread();
    dword_14034AF50 = v20;
    v21 = *(_QWORD *)PiUEventUsermodeEventQueue;
    if ( *(__int64 **)(PiUEventUsermodeEventQueue + 8) != &PiUEventUsermodeEventQueue
      || *(_QWORD *)(v21 + 8) != PiUEventUsermodeEventQueue )
    {
      __fastfail(3u);
    }
    PiUEventUsermodeEventQueue = *(_QWORD *)PiUEventUsermodeEventQueue;
    *(_QWORD *)(v21 + 8) = &PiUEventUsermodeEventQueue;
    v22 = dword_14034AF50;
    if ( (__int64 *)PiUEventUsermodeEventQueue == &PiUEventUsermodeEventQueue )
      v4 = 1;
    qword_14034AF28 = 0LL;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, v23);
    __writecr8(v22);
    KeAbPostRelease((ULONG_PTR)&PiUEventUsermodeEventQueueLock);
    PiUEventDereferenceEventEntry(v10);
  }
  while ( !v4 );
  ExFreePoolWithTag(a1, 0x59706E50u);
}
