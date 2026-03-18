/*
 * XREFs of PiDqQueryLock @ 0x14045E768
 * Callers:
 *     PiDqIrpCancel @ 0x1401BFF8C (PiDqIrpCancel.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqIrpQueryGetResult @ 0x14045DAA4 (PiDqIrpQueryGetResult.c)
 *     PiDqDispatch @ 0x14045DCD4 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x14045DEAC (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14045E118 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQuerySerializeActionQueue @ 0x14045E458 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14045EA20 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (unsigned __int64 *)(a1 + 64);
  result = KeAbPreAcquire(a1 + 64, 0LL, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (ULONG_PTR)v2);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
