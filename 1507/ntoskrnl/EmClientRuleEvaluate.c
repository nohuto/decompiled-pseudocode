/*
 * XREFs of EmClientRuleEvaluate @ 0x1403EB60C
 * Callers:
 *     <none>
 * Callees:
 *     EmpEvaluateTargetRule @ 0x14002C14C (EmpEvaluateTargetRule.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EmpSearchTargetRuleList @ 0x1400CFA20 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400CFA40 (EmpSearchRuleDatabase.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EmpAcquirePagingReference @ 0x1403EB744 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x1403EB7D8 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  signed __int8 v12; // cf
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v10 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, v9);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v13 = v10;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v10, (ULONG_PTR)&EmpDatabaseLock, v11);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v14 = EmpSearchRuleDatabase(a1);
      if ( v14 && (v15 = EmpSearchTargetRuleList((__int64)v14)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v16 + 48) )
          *a4 = EmpEvaluateTargetRule((__int64)v15, a2, a3);
        else
          v4 = -1073741811;
      }
      else
      {
        v4 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
      KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
      EmpReleasePagingReference();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
