/*
 * XREFs of CmpLockContextListExclusive @ 0x140603BBC
 * Callers:
 *     CmSetCallbackObjectContext @ 0x1405FAFAC (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405FB518 (CmpFreeCallbackObjectContexts.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *CmpLockContextListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&CmpContextListLock, result, (ULONG_PTR)&CmpContextListLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
