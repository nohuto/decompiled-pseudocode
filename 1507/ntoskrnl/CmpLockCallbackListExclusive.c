/*
 * XREFs of CmpLockCallbackListExclusive @ 0x1405BDFD4
 * Callers:
 *     CmpInsertCallbackInListByAltitude @ 0x1405BDEBC (CmpInsertCallbackInListByAltitude.c)
 *     CmUnRegisterCallback @ 0x1406527EC (CmUnRegisterCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CmpLockCallbackListExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)&CmpCallbackListLock, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpCallbackListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpCallbackListLock, result, (ULONG_PTR)&CmpCallbackListLock, v6);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  return result;
}
