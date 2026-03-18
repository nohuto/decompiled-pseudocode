/*
 * XREFs of PiDqObjectManagerMakeInconsistent @ 0x1406820AC
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall PiDqObjectManagerMakeInconsistent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  int v10; // ecx
  int v11; // ecx
  unsigned __int8 v12; // si
  signed __int32 v13; // eax

  v4 = a1 + 104;
  v6 = 0;
  v7 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, a4);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  v10 = *(_DWORD *)(a1 + 228);
  if ( (v10 & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v11 = v10 | 2;
    *(_DWORD *)(a1 + 228) = v11;
    if ( (v11 & 1) == 0 )
    {
      v6 = 1;
      *(_DWORD *)(a1 + 228) = v11 | 1;
    }
  }
  *(_QWORD *)(v4 + 8) = 0LL;
  v12 = *(_BYTE *)(v4 + 48);
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)v4, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v4, v13);
  __writecr8(v12);
  KeAbPostRelease(v4);
  if ( v6 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
