/*
 * XREFs of CmpLockAppHiveLoadList @ 0x1403DCB34
 * Callers:
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpAppHiveLoadListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpAppHiveLoadListLock, result, (ULONG_PTR)&CmpAppHiveLoadListLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
