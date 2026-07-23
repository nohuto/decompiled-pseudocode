/*
 * XREFs of EmClientQueryRuleState @ 0x1403C84A8
 * Callers:
 *     PopFilterCapabilities @ 0x1403F2BB8 (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x140009024 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x140009044 (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x140009078 (EmpUpdateRuleState.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EmpAcquirePagingReference @ 0x1403C86B8 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x1403C874C (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  volatile signed __int32 *v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rsi

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v7 = v5;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (ULONG_PTR)&EmpDatabaseLock);
      if ( v7 )
        v7[26] |= 1u;
      v8 = EmpSearchRuleDatabase(a1);
      v9 = v8;
      if ( v8 && (v10 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v8), (v12 = v10) != 0LL) )
      {
        _InterlockedIncrement(v10);
        EmpUpdateRuleState(v11);
        _InterlockedAdd(v12, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v9 + 4);
      }
      else
      {
        v2 = -1073741275;
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
  return v2;
}
