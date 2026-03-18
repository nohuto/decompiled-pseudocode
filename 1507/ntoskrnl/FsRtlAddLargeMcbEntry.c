/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x1401066BC
 * Callers:
 *     FsRtlAddMcbEntry @ 0x1401E1EC0 (FsRtlAddMcbEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlAddBaseMcbEntry @ 0x140106DA4 (FsRtlAddBaseMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  PKGUARDED_MUTEX GuardedMutex; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // r14
  PKGUARDED_MUTEX v12; // rbx
  unsigned __int8 OldIrql; // di
  signed __int32 v14; // eax
  BOOLEAN v16; // [rsp+20h] [rbp-38h]

  GuardedMutex = Mcb->GuardedMutex;
  v9 = KeAbPreAcquire((ULONG_PTR)Mcb->GuardedMutex, 0LL, 0LL, SectorCount);
  v10 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&GuardedMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)GuardedMutex, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  GuardedMutex->Owner = KeGetCurrentThread();
  GuardedMutex->OldIrql = CurrentIrql;
  v16 = FsRtlAddBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn, SectorCount);
  v12 = Mcb->GuardedMutex;
  v12->Owner = 0LL;
  OldIrql = v12->OldIrql;
  v14 = _InterlockedCompareExchange(&v12->Count, 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended(&v12->Count, v14);
  __writecr8(OldIrql);
  KeAbPostRelease((ULONG_PTR)v12);
  return v16;
}
