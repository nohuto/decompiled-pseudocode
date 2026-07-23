/*
 * XREFs of ExpLockCallbackListExclusive @ 0x140148A70
 * Callers:
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x1406AFD40 (ExpDeleteCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall ExpLockCallbackListExclusive(__int64 a1)
{
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpCallbackListLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpCallbackListLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&ExpCallbackListLock, result, (ULONG_PTR)&ExpCallbackListLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
