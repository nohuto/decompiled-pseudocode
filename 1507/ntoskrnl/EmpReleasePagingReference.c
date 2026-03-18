/*
 * XREFs of EmpReleasePagingReference @ 0x1403EB7D8
 * Callers:
 *     EmClientQueryRuleState @ 0x1403EB51C (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x1403EB60C (EmClientRuleEvaluate.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall EmpReleasePagingReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rbx

  v4 = KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v4, (ULONG_PTR)&EmpPagingLock, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  dword_14034D3E8 ^= (dword_14034D3E8 ^ (dword_14034D3E8 - 1)) & 0x7FFFFFFF;
  if ( (dword_14034D3E8 & 0x7FFFFFFF) == 0 && EmpPagingStatus )
    KeSetEvent(EmpPagingStatus, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
}
