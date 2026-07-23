/*
 * XREFs of CmpLockHiveListExclusive @ 0x1405193C8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x14010C288 (CmpDeleteHive.c)
 *     CmpJoinClassOfTrust @ 0x1401B4600 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *CmpLockHiveListExclusive()
{
  _BYTE *result; // rax
  _BYTE *v1; // rbx

  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, result, (ULONG_PTR)&CmpHiveListHeadLock);
  if ( v1 )
  {
    result = (_BYTE *)*((_QWORD *)v1 + 4);
    v1[26] |= 1u;
  }
  return result;
}
