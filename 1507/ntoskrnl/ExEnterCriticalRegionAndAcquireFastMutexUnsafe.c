/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140107640
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 */

__int64 __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeGetCurrentThread();
  result = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
  v8 = result;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
    result = ExpAcquireFastMutexContended(BugCheckParameter2, result);
  if ( v8 )
  {
    result = *(_QWORD *)(v8 + 32);
    *(_BYTE *)(v8 + 26) |= 1u;
  }
  *(_QWORD *)(BugCheckParameter2 + 8) = v6;
  return result;
}
