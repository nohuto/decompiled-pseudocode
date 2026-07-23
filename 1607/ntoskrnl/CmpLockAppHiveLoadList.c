/*
 * XREFs of CmpLockAppHiveLoadList @ 0x1403FB9FC
 * Callers:
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *CmpLockAppHiveLoadList()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpAppHiveLoadListLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpAppHiveLoadListLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&CmpAppHiveLoadListLock, result, (ULONG_PTR)&CmpAppHiveLoadListLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
