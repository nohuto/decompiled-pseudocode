/*
 * XREFs of EmClientQueryRuleState @ 0x1403EB51C
 * Callers:
 *     PopFilterCapabilities @ 0x1404E0F04 (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EmpSearchTargetRuleList @ 0x1400CFA20 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400CFA40 (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1400CFA74 (EmpUpdateRuleState.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EmpAcquirePagingReference @ 0x1403EB744 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x1403EB7D8 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  volatile signed __int32 *v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rsi

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v6 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, v5);
      v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
      v9 = v6;
      if ( v8 )
        ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v6, (ULONG_PTR)&EmpDatabaseLock, v7);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      v10 = EmpSearchRuleDatabase(a1);
      v11 = v10;
      if ( v10 && (v12 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v10), (v14 = v12) != 0LL) )
      {
        _InterlockedIncrement(v12);
        EmpUpdateRuleState(v13);
        _InterlockedAdd(v14, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v11 + 4);
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
