/*
 * XREFs of EmpReleasePagingReference @ 0x1403C874C
 * Callers:
 *     EmClientQueryRuleState @ 0x1403C84A8 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x1403C8598 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 EmpReleasePagingReference()
{
  _BYTE *v0; // rax
  signed __int8 v1; // cf
  _BYTE *v2; // rbx

  v0 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v0, (ULONG_PTR)&EmpPagingLock);
  if ( v2 )
    v2[26] |= 1u;
  dword_140322568 ^= (dword_140322568 ^ (dword_140322568 - 1)) & 0x7FFFFFFF;
  if ( (dword_140322568 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}
