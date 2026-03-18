/*
 * XREFs of RawVerifyVolume @ 0x140244EE8
 * Callers:
 *     RawFileSystemControl @ 0x14040C3BC (RawFileSystemControl.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x1400067CC (RawInitiateDeleteVolume.c)
 *     IoAcquireVpbSpinLock @ 0x140006BC8 (IoAcquireVpbSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14010CE20 (ExWaitForRundownProtectionReleaseCacheAware.c)
 */

__int64 __fastcall RawVerifyVolume(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  char v5; // di
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r14
  KIRQL v10; // dl
  unsigned __int8 v11; // di
  signed __int32 v12; // eax
  KIRQL OldIrql; // [rsp+40h] [rbp+8h] BYREF

  IoAcquireVpbSpinLock(&OldIrql);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    ++*(_DWORD *)(v4 + 28);
    v5 = 1;
  }
  KeReleaseQueuedSpinLock(9uLL, OldIrql);
  if ( v5 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 216));
    v7 = KeAbPreAcquire(a2 + 224, 0LL, 0LL, v6);
    v8 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(a2 + 224), 0) )
      ExpAcquireFastMutexContended(a2 + 224, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(a2 + 232) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 272) = CurrentIrql;
    IoAcquireVpbSpinLock(&OldIrql);
    v10 = OldIrql;
    --*(_DWORD *)(v4 + 28);
    KeReleaseQueuedSpinLock(9uLL, v10);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 16LL) + 48LL) &= ~2u;
    if ( !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a2, 1, 0) )
    {
      *(_QWORD *)(a2 + 232) = 0LL;
      v11 = *(_BYTE *)(a2 + 272);
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 224), 1, 0);
      if ( v12 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)(a2 + 224), v12);
      __writecr8(v11);
      KeAbPostRelease(a2 + 224);
    }
  }
  return 3221225490LL;
}
