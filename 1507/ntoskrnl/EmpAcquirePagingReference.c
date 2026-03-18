/*
 * XREFs of EmpAcquirePagingReference @ 0x1403EB744
 * Callers:
 *     EmClientQueryRuleState @ 0x1403EB51C (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x1403EB60C (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

char __fastcall EmpAcquirePagingReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx

  v4 = 0;
  v5 = KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v5, (ULONG_PTR)&EmpPagingLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( dword_14034D3E8 < 0 )
  {
    v4 = 1;
    dword_14034D3E8 ^= (dword_14034D3E8 ^ (dword_14034D3E8 + 1)) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  return v4;
}
