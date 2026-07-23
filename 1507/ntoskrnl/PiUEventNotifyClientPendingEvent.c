/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x14045F91C
 * Callers:
 *     PiUEventHandleGetEvent @ 0x1404166CC (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x14045F770 (PiUEventNotifyClient.c)
 * Callees:
 *     PiUEventEstimateRequiredClientBufferSize @ 0x140026C7C (PiUEventEstimateRequiredClientBufferSize.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventNotifyClientPendingEvent(const WNF_STATE_NAME *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  int v9; // eax
  ULONG_PTR v10; // rbx
  unsigned __int8 v11; // di
  signed __int32 v12; // eax
  int Buffer; // [rsp+60h] [rbp+8h] BYREF

  v4 = (ULONG_PTR)a1[2];
  Buffer = 0;
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
  v9 = PiUEventEstimateRequiredClientBufferSize((__int64)a1);
  v10 = (ULONG_PTR)a1[2];
  Buffer = v9;
  *(_QWORD *)(v10 + 8) = 0LL;
  v11 = *(_BYTE *)(v10 + 48);
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v10, v12);
  __writecr8(v11);
  KeAbPostRelease(v10);
  return ZwUpdateWnfStateData(a1 + 11, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
