/*
 * XREFs of PpmRegisterVetoList @ 0x1406331F8
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 */

__int64 __fastcall PpmRegisterVetoList(__int64 a1)
{
  unsigned int v2; // ebx

  PopAcquireRwLockExclusive((__int64)&PpmIdlePolicyLock);
  v2 = 0;
  if ( PpmIdleVetoList )
    v2 = -1073741431;
  else
    PpmIdleVetoList = a1;
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  return v2;
}
