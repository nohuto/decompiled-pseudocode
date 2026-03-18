/*
 * XREFs of EmClientQueryRuleState @ 0x14039C5A8
 * Callers:
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EmpSearchTargetRuleList @ 0x1400995A4 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400995C4 (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1400995F8 (EmpUpdateRuleState.c)
 *     EmpAcquirePagingReference @ 0x14039C7D0 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x14039C870 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rbx
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
      v5 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v7 = v5;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (ULONG_PTR)&EmpDatabaseLock);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
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
