/*
 * XREFs of PiUEventReferenceEventEntry @ 0x14045FA30
 * Callers:
 *     PiUEventNotifyClient @ 0x14045F770 (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  ULONG_PTR v9; // rbx
  unsigned int v10; // edi
  unsigned __int8 v11; // si
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
  ++*(_DWORD *)(a1 + 56);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(v9 + 8) = 0LL;
  v11 = *(_BYTE *)(v9 + 48);
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)v9, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v9, v12);
  __writecr8(v11);
  KeAbPostRelease(v9);
  return v10;
}
