/*
 * XREFs of EmpReleasePagingReference @ 0x14039C870
 * Callers:
 *     EmClientQueryRuleState @ 0x14039C5A8 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14039C698 (EmClientRuleEvaluate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

void EmpReleasePagingReference()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx

  v0 = KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v0, (ULONG_PTR)&EmpPagingLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  dword_1402FCF88 ^= (dword_1402FCF88 ^ (dword_1402FCF88 - 1)) & 0x7FFFFFFF;
  if ( (dword_1402FCF88 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}
