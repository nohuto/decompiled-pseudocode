/*
 * XREFs of CmpLockHiveListExclusive @ 0x1403BABA4
 * Callers:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 CmpLockHiveListExclusive()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, result, (ULONG_PTR)&CmpHiveListHeadLock);
  if ( v1 )
  {
    result = *(_QWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 26) |= 1u;
  }
  return result;
}
