/*
 * XREFs of CmpLockContextListShared @ 0x1405E64BC
 * Callers:
 *     CmSetCallbackObjectContext @ 0x1405DD130 (CmSetCallbackObjectContext.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 CmpLockContextListShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&CmpContextListLock, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&CmpContextListLock, v1, (ULONG_PTR)&CmpContextListLock);
  if ( v1 )
  {
    result = *(_QWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 26) |= 1u;
  }
  return result;
}
