/*
 * XREFs of RawCompletionRoutine @ 0x140006D10
 * Callers:
 *     <none>
 * Callees:
 *     RawInitiateDeleteVolume @ 0x1400067CC (RawInitiateDeleteVolume.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall RawCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v11; // di
  unsigned __int32 v12; // eax

  v3 = *(_QWORD *)(a2 + 184);
  if ( (unsigned __int8)(*(_BYTE *)v3 - 3) <= 1u )
  {
    v5 = *(_QWORD *)(v3 + 48);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 80) & 2) != 0 && *(int *)(a2 + 48) >= 0 )
        *(_QWORD *)(v5 + 104) += *(_QWORD *)(a2 + 56);
    }
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v6 = *(_QWORD *)(a3 + 200);
  if ( !v6 || *(_QWORD *)(v3 + 48) != v6 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216), 1u);
  if ( *(_BYTE *)v3 == 27 )
  {
    v8 = (volatile signed __int32 *)(a3 + 224);
    v9 = KeAbPreAcquire(a3 + 224);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(a3 + 224), 0) )
      ExpAcquireFastMutexContended(a3 + 224);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    *(_QWORD *)(a3 + 232) = KeGetCurrentThread();
    *(_DWORD *)(a3 + 272) = CurrentIrql;
    --*(_DWORD *)(a3 + 112);
    if ( *(_DWORD *)(a3 + 108) || !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a3, 0, 0) )
    {
      *(_QWORD *)(a3 + 232) = 0LL;
      v11 = *(_BYTE *)(a3 + 272);
      v12 = _InterlockedCompareExchange(v8, 1, 0);
      if ( v12 )
        ExpReleaseFastMutexContended(v8, v12);
      __writecr8(v11);
      KeAbPostRelease((ULONG_PTR)v8);
    }
  }
  return 0LL;
}
