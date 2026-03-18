/*
 * XREFs of WheapPfaReset @ 0x1406FD83C
 * Callers:
 *     WheapCommitPolicy @ 0x1406FCD10 (WheapCommitPolicy.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     WheapApplyPolicyChanges @ 0x1406FCC04 (WheapApplyPolicyChanges.c)
 */

void __fastcall WheapPfaReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rbx
  PVOID *v8; // rbx
  PVOID *v9; // rcx
  PVOID *v10; // rdx
  PVOID **v11; // rax

  v4 = KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v4, (ULONG_PTR)&WheapPfaLock, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  WheapApplyPolicyChanges();
  v8 = (PVOID *)WheapPfaList;
  while ( v8 != &WheapPfaList )
  {
    v9 = v8;
    v8 = (PVOID *)*v8;
    v10 = (PVOID *)*v9;
    v11 = (PVOID **)v9[1];
    if ( *((PVOID **)*v9 + 1) != v9 || *v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v9, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
}
