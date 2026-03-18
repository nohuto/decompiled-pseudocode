/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x140557838
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 */

__int64 __fastcall LOCK_TRANSACTION_LIST(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeGetCurrentThread();
  result = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
  v7 = result;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
    result = ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, result);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  qword_14034D768 = (__int64)v5;
  return result;
}
