/*
 * XREFs of EmProviderDeregisterEntry @ 0x14066BAA8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EmpProviderDeregisterEntry @ 0x1401E1D24 (EmpProviderDeregisterEntry.c)
 */

void __fastcall EmProviderDeregisterEntry(char *P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx

  v5 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
  v10 = v5;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (ULONG_PTR)&EmpDatabaseLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  EmpProviderDeregisterEntry(P, v6, v7, v8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
}
