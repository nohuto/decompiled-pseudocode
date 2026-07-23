/*
 * XREFs of EmpAcquirePagingReference @ 0x1403C86B8
 * Callers:
 *     EmClientQueryRuleState @ 0x1403C84A8 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x1403C8598 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

char EmpAcquirePagingReference()
{
  char v0; // di
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rbx

  v0 = 0;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v1, (ULONG_PTR)&EmpPagingLock);
  if ( v3 )
    v3[26] |= 1u;
  if ( dword_140322568 < 0 )
  {
    v0 = 1;
    dword_140322568 ^= (dword_140322568 ^ (dword_140322568 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v0;
}
