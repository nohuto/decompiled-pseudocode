/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x14045DB04
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14045D8BC (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14045DAB4 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PiUEventFreeEventEntry @ 0x14045DBFC (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // esi
  ULONG_PTR v10; // rdi
  unsigned __int8 v11; // bp
  signed __int32 v12; // eax

  v4 = *(_QWORD *)(a1 + 16);
  v6 = KeAbPreAcquire(v4, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  v9 = --*(_DWORD *)(a1 + 56);
  if ( *(_BYTE *)(a1 + 68) && v9 == 1 )
    KeSetEvent(*(PRKEVENT *)(a1 + 24), 0, 0);
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v10 + 8) = 0LL;
  v11 = *(_BYTE *)(v10 + 48);
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v10, v12);
  __writecr8(v11);
  KeAbPostRelease(v10);
  if ( !v9 )
    PiUEventFreeEventEntry(a1);
  return v9;
}
