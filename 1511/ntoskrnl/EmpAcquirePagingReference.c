/*
 * XREFs of EmpAcquirePagingReference @ 0x14039C7D0
 * Callers:
 *     EmClientQueryRuleState @ 0x14039C5A8 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14039C698 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // di
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rbx

  v0 = 0;
  v1 = KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v1, (ULONG_PTR)&EmpPagingLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( dword_1402FCF88 < 0 )
  {
    v0 = 1;
    dword_1402FCF88 ^= (dword_1402FCF88 ^ (dword_1402FCF88 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}
