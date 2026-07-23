/*
 * XREFs of EmProviderDeregisterEntry @ 0x14061D090
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EmpProviderDeregisterEntry @ 0x1401B7F74 (EmpProviderDeregisterEntry.c)
 */

unsigned __int64 __fastcall EmProviderDeregisterEntry(char *P)
{
  _BYTE *v2; // rax
  signed __int8 v3; // cf
  _BYTE *v4; // rbx

  v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v2, (ULONG_PTR)&EmpDatabaseLock);
  if ( v4 )
    v4[26] |= 1u;
  EmpProviderDeregisterEntry(P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  return KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
