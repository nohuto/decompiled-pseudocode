/*
 * XREFs of EmProviderDeregisterEntry @ 0x1405F2D7C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EmpProviderDeregisterEntry @ 0x1401AC1E4 (EmpProviderDeregisterEntry.c)
 */

void __fastcall EmProviderDeregisterEntry(char *P)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rbx

  v2 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v2, (ULONG_PTR)&EmpDatabaseLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
