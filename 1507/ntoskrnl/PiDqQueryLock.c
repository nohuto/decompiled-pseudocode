/*
 * XREFs of PiDqQueryLock @ 0x140442428
 * Callers:
 *     PiDqIrpCancel @ 0x1401FBBF8 (PiDqIrpCancel.c)
 *     PiDqDispatch @ 0x140441804 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x1404419DC (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404420E4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpQueryGetResult @ 0x140444BEC (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PiDqQueryLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (unsigned __int64 *)(a1 + 64);
  result = KeAbPreAcquire(a1 + 64, 0LL, 0LL, a4);
  v8 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v5, result, (ULONG_PTR)v5, v7);
  if ( v8 )
  {
    result = *(_QWORD *)(v8 + 32);
    *(_BYTE *)(v8 + 26) |= 1u;
  }
  return result;
}
