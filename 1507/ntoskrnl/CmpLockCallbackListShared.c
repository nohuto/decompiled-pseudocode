/*
 * XREFs of CmpLockCallbackListShared @ 0x14058E39C
 * Callers:
 *     CmpEnumerateCallback @ 0x14058E31C (CmpEnumerateCallback.c)
 *     CmSetCallbackObjectContext @ 0x14065265C (CmSetCallbackObjectContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpLockCallbackListShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&CmpCallbackListLock, v5, (ULONG_PTR)&CmpCallbackListLock, v6);
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 32);
    *(_BYTE *)(v5 + 26) |= 1u;
  }
  return result;
}
