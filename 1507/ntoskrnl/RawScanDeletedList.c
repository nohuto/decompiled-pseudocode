/*
 * XREFs of RawScanDeletedList @ 0x14040E17C
 * Callers:
 *     RawMountVolume @ 0x14040E7F4 (RawMountVolume.c)
 *     RawShutdown @ 0x1406C6B8C (RawShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     RawCheckForDeleteVolume @ 0x140244E14 (RawCheckForDeleteVolume.c)
 */

void __fastcall RawScanDeletedList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  int v8; // eax
  __int64 *v9; // rdi
  __int64 *v10; // rsi
  volatile signed __int32 *v11; // rbx
  ULONG_PTR v12; // rax
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // si
  signed __int32 v15; // eax
  unsigned __int8 v16; // bl
  signed __int32 v17; // eax

  if ( (__int64 *)RawDismountedQueue != &RawDismountedQueue )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&RawGlobalLock, 0LL, 0LL, a4);
    v6 = v4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&RawGlobalLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&RawGlobalLock, v4);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    qword_14032C2C8 = (__int64)KeGetCurrentThread();
    v8 = CurrentIrql;
    v9 = (__int64 *)RawDismountedQueue;
    dword_14032C2F0 = v8;
    while ( v9 != &RawDismountedQueue )
    {
      v10 = v9 - 20;
      v9 = (__int64 *)*v9;
      v11 = (volatile signed __int32 *)(v10 + 28);
      v12 = KeAbPreAcquire((ULONG_PTR)(v10 + 28), 0LL, 1LL, v5);
      v13 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( _interlockedbittestandreset((volatile signed __int32 *)v10 + 56, 0) )
      {
        if ( v12 )
          *(_BYTE *)(v12 + 26) |= 1u;
        v10[29] = (__int64)KeGetCurrentThread();
        *((_DWORD *)v10 + 68) = v13;
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)v10) )
        {
          v10[29] = 0LL;
          v14 = *((_BYTE *)v10 + 272);
          v15 = _InterlockedCompareExchange(v11, 1, 0);
          if ( v15 )
            ExpReleaseFastMutexContended(v11, v15);
          __writecr8(v14);
          KeAbPostRelease((ULONG_PTR)v11);
        }
      }
      else
      {
        __writecr8(v13);
        if ( v12 )
          KeAbPostReleaseEx((ULONG_PTR)(v10 + 28), v12);
        _mm_pause();
      }
    }
    qword_14032C2C8 = 0LL;
    v16 = dword_14032C2F0;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)&RawGlobalLock, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&RawGlobalLock, v17);
    __writecr8(v16);
    KeAbPostRelease((ULONG_PTR)&RawGlobalLock);
  }
}
