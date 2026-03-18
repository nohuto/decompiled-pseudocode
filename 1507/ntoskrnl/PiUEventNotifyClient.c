/*
 * XREFs of PiUEventNotifyClient @ 0x14045F770
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x1404102D8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x14045F1F0 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14045F46C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1405B2828 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14045DAB4 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14045F91C (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x14045F9F4 (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14045FA30 (PiUEventReferenceEventEntry.c)
 *     PiUEventIsClientStuck @ 0x14045FAF0 (PiUEventIsClientStuck.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbp
  int v7; // esi
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // r15
  ULONG_PTR v12; // rdi
  unsigned __int8 v13; // bp
  signed __int32 v14; // eax
  _QWORD *PoolWithTag; // rbp
  ULONG_PTR v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int8 v20; // r14
  ULONG_PTR v21; // rdi
  unsigned __int8 v22; // bp
  signed __int32 v23; // eax
  ULONG_PTR v25; // rbx
  unsigned __int8 v26; // di
  signed __int32 v27; // eax

  v4 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v8 = 0;
  v9 = KeAbPreAcquire(v4, 0LL, 0LL, a4);
  v10 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( !(unsigned __int8)PiUEventIsClientStuck(a2) )
      goto LABEL_7;
    ++*(_DWORD *)(a2 + 136);
  }
  v8 = 1;
LABEL_7:
  v12 = *(_QWORD *)(a2 + 16);
  v13 = *(_BYTE *)(v12 + 48);
  *(_QWORD *)(v12 + 8) = 0LL;
  v14 = _InterlockedCompareExchange((volatile signed __int32 *)v12, 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v12, v14);
  __writecr8(v13);
  KeAbPostRelease(v12);
  if ( !v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x59706E50u);
    if ( PoolWithTag )
    {
      PiUEventReferenceEventEntry(a1);
      PoolWithTag[3] = a1;
      v16 = *(_QWORD *)(a2 + 16);
      v18 = KeAbPreAcquire(v16, 0LL, 0LL, v17);
      v19 = v18;
      v20 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v16, 0) )
        ExpAcquireFastMutexContended(v16, v18);
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v16 + 48) = v20;
      v7 = PiUEventQueuePendingEvent(a2, PoolWithTag);
      if ( v7 >= 0
        || (PiUEventDequeuePendingEventWorker(a2, *(__int64 **)(a2 + 112), 0),
            ++*(_DWORD *)(a2 + 136),
            v7 = PiUEventQueuePendingEvent(a2, PoolWithTag),
            v7 >= 0) )
      {
        PoolWithTag[2] = MEMORY[0xFFFFF78000000014];
        v21 = *(_QWORD *)(a2 + 16);
        v22 = *(_BYTE *)(v21 + 48);
        *(_QWORD *)(v21 + 8) = 0LL;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)v21, 1, 0);
        if ( v23 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v21, v23);
        __writecr8(v22);
        KeAbPostRelease(v21);
        PiUEventNotifyClientPendingEvent(a2);
      }
      else
      {
        ++*(_DWORD *)(a2 + 136);
        v25 = *(_QWORD *)(a2 + 16);
        v26 = *(_BYTE *)(v25 + 48);
        *(_QWORD *)(v25 + 8) = 0LL;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)v25, 1, 0);
        if ( v27 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v25, v27);
        __writecr8(v26);
        KeAbPostRelease(v25);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
