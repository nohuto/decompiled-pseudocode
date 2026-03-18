/*
 * XREFs of CmpLockHiveListExclusive @ 0x1404A0FBC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x140088098 (CmpDeleteHive.c)
 *     CmpJoinClassOfTrust @ 0x1401B471C (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B47B0 (CmpUnJoinClassOfTrust.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
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
