/*
 * XREFs of EmClientRuleEvaluate @ 0x14039C698
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EmpSearchTargetRuleList @ 0x1400995A4 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400995C4 (EmpSearchRuleDatabase.c)
 *     EmpEvaluateTargetRule @ 0x14009BD30 (EmpEvaluateTargetRule.c)
 *     EmpAcquirePagingReference @ 0x14039C7D0 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x14039C870 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v9 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v11 = v9;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v9, (ULONG_PTR)&EmpDatabaseLock);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v12 = EmpSearchRuleDatabase(a1);
      if ( v12 && (v13 = EmpSearchTargetRuleList((__int64)v12)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v14 + 48) )
          *a4 = EmpEvaluateTargetRule((__int64)v13, a2, a3);
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
