/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x1400746BC
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x1400746AC (FsRtlpOplockRHIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14006D71C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  char v7; // cl
  ULONG_PTR v8; // rsi
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 *v11; // rsi
  __int64 *i; // rbx
  ULONG_PTR v13; // rbx
  unsigned __int8 v14; // di
  unsigned __int32 v15; // eax

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v7 = 0;
  if ( !a2 )
  {
    v8 = *(_QWORD *)(v5 + 152);
    v9 = KeAbPreAcquire(v8, 0LL, 0LL, v6);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v8, 0) )
      ExpAcquireFastMutexContended(v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v8 + 48) = CurrentIrql;
    v7 = 0;
  }
  v11 = (__int64 *)(v5 + 56);
  for ( i = *(__int64 **)(v5 + 56); i != v11; i = (__int64 *)*i )
  {
    if ( !i[7] )
    {
      if ( *(_BYTE *)(i[2] + 68) )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndBreakRHIrp(*i, v5, 1, -1073741536, 0, 0, 0, 0);
        v7 = 1;
      }
    }
  }
  if ( v7 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (__int64 *)*v11 == v11 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
  {
    v13 = *(_QWORD *)(v5 + 152);
    *(_QWORD *)(v13 + 8) = 0LL;
    v14 = *(_BYTE *)(v13 + 48);
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)v13, 1, 0);
    if ( v15 )
      ExpReleaseFastMutexContended(v13, v15);
    __writecr8(v14);
    KeAbPostRelease(v13);
  }
}
