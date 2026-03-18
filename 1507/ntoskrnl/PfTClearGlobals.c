/*
 * XREFs of PfTClearGlobals @ 0x1405B6830
 * Callers:
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void *__fastcall PfTClearGlobals(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  void *result; // rax
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v10; // eax

  if ( a3 )
  {
    v6 = (ULONG_PTR)(a1 + 70);
    v7 = KeAbPreAcquire((ULONG_PTR)(a1 + 70), 0LL, 0LL, a4);
    v8 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v6, 0) )
      ExpAcquireFastMutexContended(v6, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v6 + 48) = CurrentIrql;
    *(_QWORD *)(v6 + 8) = 0LL;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)v6, 1, 0);
    if ( v10 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v6, v10);
    __writecr8(CurrentIrql);
    KeAbPostRelease(v6);
    result = 0LL;
    a1[98] = 0LL;
    a1[99] = 0LL;
    a1[100] = 0LL;
    a1[101] = 0LL;
    a1[102] = 0LL;
  }
  else
  {
    memset(a1, 0, 0x340uLL);
    return memset(&PfKernelGlobals, 0, 0x60uLL);
  }
  return result;
}
