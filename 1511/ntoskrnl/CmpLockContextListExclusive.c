/*
 * XREFs of CmpLockContextListExclusive @ 0x1405E645C
 * Callers:
 *     CmSetCallbackObjectContext @ 0x1405DD130 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1405DD2C0 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405DD69C (CmpFreeCallbackObjectContexts.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 CmpLockContextListExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpContextListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpContextListLock, result, (ULONG_PTR)&CmpContextListLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
