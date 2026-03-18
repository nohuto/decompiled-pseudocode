/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140043680
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  result = KeAbPreAcquire(a1, 0LL, 0LL);
  v5 = result;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)a1, 0) )
    result = ExpAcquireFastMutexContended(a1, result);
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 32);
    *(_BYTE *)(v5 + 26) |= 1u;
  }
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
