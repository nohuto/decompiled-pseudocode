/*
 * XREFs of EmClientRuleEvaluate @ 0x1403C8598
 * Callers:
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     EmpEvaluateTargetRule @ 0x140008910 (EmpEvaluateTargetRule.c)
 *     EmpSearchTargetRuleList @ 0x140009024 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x140009044 (EmpSearchRuleDatabase.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EmpAcquirePagingReference @ 0x1403C86B8 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x1403C874C (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _BYTE *v9; // rax
  signed __int8 v10; // cf
  _BYTE *v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v11 = v9;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v9, (ULONG_PTR)&EmpDatabaseLock);
      if ( v11 )
        v11[26] |= 1u;
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
