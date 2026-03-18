/*
 * XREFs of CcRepinBcb @ 0x1401DD23C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall CcRepinBcb(PVOID Bcb)
{
  __int64 v1; // r9
  ULONG_PTR v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  ULONG_PTR v7; // rbx
  unsigned __int8 v8; // di
  signed __int32 v9; // eax

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1EB0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *((_QWORD *)Bcb + 22) + 280LL;
  v4 = KeAbPreAcquire(v3, 0LL, 0LL, v1);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v3, 0) )
    ExpAcquireFastMutexContended(v3, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 48) = CurrentIrql;
  ++*((_DWORD *)Bcb + 16);
  v7 = *((_QWORD *)Bcb + 22) + 280LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  v8 = *(_BYTE *)(v7 + 48);
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)v7, 1, 0);
  if ( v9 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v7, v9);
  __writecr8(v8);
  KeAbPostRelease(v7);
}
