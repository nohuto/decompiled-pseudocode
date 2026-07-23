/*
 * XREFs of WheapPfaReset @ 0x1406BB888
 * Callers:
 *     WheapCommitPolicy @ 0x1406BAD64 (WheapCommitPolicy.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WheapApplyPolicyChanges @ 0x1406BAC58 (WheapApplyPolicyChanges.c)
 */

unsigned __int64 WheapPfaReset()
{
  _BYTE *v0; // rax
  signed __int8 v1; // cf
  _BYTE *v2; // rbx
  PVOID *v3; // rbx
  PVOID *v4; // rcx
  PVOID *v5; // rdx
  PVOID **v6; // rax

  v0 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v0, (ULONG_PTR)&WheapPfaLock);
  if ( v2 )
    v2[26] |= 1u;
  WheapApplyPolicyChanges();
  v3 = (PVOID *)WheapPfaList;
  while ( v3 != &WheapPfaList )
  {
    v4 = v3;
    v3 = (PVOID *)*v3;
    v5 = (PVOID *)*v4;
    v6 = (PVOID **)v4[1];
    if ( *((PVOID **)*v4 + 1) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExFreePoolWithTag(v4, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  return KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
}
