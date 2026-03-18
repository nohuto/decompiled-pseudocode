/*
 * XREFs of CmpLockHiveListExclusive @ 0x1404EA688
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x1400D2458 (CmpDeleteHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CmpLockHiveListExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rbx

  result = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, a4);
  v6 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, result, (ULONG_PTR)&CmpHiveListHeadLock, v5);
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 32);
    *(_BYTE *)(v6 + 26) |= 1u;
  }
  return result;
}
