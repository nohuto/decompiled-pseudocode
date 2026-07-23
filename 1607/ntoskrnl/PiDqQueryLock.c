/*
 * XREFs of PiDqQueryLock @ 0x14048C208
 * Callers:
 *     PiDqIrpCancel @ 0x1401CE56C (PiDqIrpCancel.c)
 *     PiDqIrpQueryGetResult @ 0x14048ADF8 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqDispatch @ 0x14048B6C4 (PiDqDispatch.c)
 *     PiDqIrpQueryCreate @ 0x14048B94C (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048BBB8 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQuerySerializeActionQueue @ 0x14048BEF8 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048C498 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  _BYTE *result; // rax
  _BYTE *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (unsigned __int64 *)(a1 + 64);
  result = (_BYTE *)KeAbPreAcquire(a1 + 64, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v2, result, (ULONG_PTR)v2);
  if ( v4 )
  {
    result = (_BYTE *)*((_QWORD *)v4 + 4);
    v4[26] |= 1u;
  }
  return result;
}
