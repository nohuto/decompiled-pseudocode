/*
 * XREFs of ExpWnfLookupNameInstance @ 0x140502BEC
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x1405016E8 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExpWnfFindStateName @ 0x140502CBC (ExpWnfFindStateName.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 StateName; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rtt

  v4 = (unsigned __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  StateName = ExpWnfFindStateName(a1, a2);
  v10 = StateName;
  if ( StateName )
  {
    _m_prefetchw((const void *)(StateName + 8));
    v11 = *(_QWORD *)(StateName + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(StateName + 8), v11 + 2, v11) )
      v10 = -(__int64)(ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(StateName + 8)) != 0) & StateName;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( !v10 )
    return 3221225524LL;
  *a3 = v10;
  return 0LL;
}
