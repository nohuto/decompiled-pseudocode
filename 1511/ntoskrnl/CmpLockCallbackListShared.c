/*
 * XREFs of CmpLockCallbackListShared @ 0x1404C4FFC
 * Callers:
 *     CmpEnumerateCallback @ 0x1404C4F20 (CmpEnumerateCallback.c)
 *     CmSetCallbackObjectContext @ 0x1405DD130 (CmSetCallbackObjectContext.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 CmpLockCallbackListShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&CmpCallbackListLock, v1, (ULONG_PTR)&CmpCallbackListLock);
  if ( v1 )
  {
    result = *(_QWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 26) |= 1u;
  }
  return result;
}
