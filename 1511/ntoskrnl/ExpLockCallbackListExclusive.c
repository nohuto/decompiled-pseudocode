/*
 * XREFs of ExpLockCallbackListExclusive @ 0x14013F438
 * Callers:
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x14066C134 (ExpDeleteCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpLockCallbackListExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((ULONG_PTR)&ExpCallbackListLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpCallbackListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&ExpCallbackListLock, result, (ULONG_PTR)&ExpCallbackListLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
