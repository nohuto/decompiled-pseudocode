/*
 * XREFs of PiDqObjectManagerUnregisterQuery @ 0x14053D3E8
 * Callers:
 *     PiDqDispatch @ 0x140441804 (PiDqDispatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PiDqQueryRelease @ 0x14053D4E0 (PiDqQueryRelease.c)
 */

void __fastcall PiDqObjectManagerUnregisterQuery(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rax
  unsigned __int8 v11; // di
  signed __int32 v12; // eax
  __int64 **v13; // rcx

  v4 = a1 + 104;
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
  v10 = *a2;
  if ( *a2 )
  {
    v13 = (__int64 **)a2[1];
    if ( *(__int64 **)(v10 + 8) != a2 || *v13 != a2 )
      __fastfail(3u);
    *v13 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v13;
    --*(_DWORD *)(a1 + 224);
    PiDqQueryRelease(a2);
  }
  *(_QWORD *)(v4 + 8) = 0LL;
  v11 = *(_BYTE *)(v4 + 48);
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)v4, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v4, v12);
  __writecr8(v11);
  KeAbPostRelease(v4);
}
