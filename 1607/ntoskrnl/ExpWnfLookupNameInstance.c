/*
 * XREFs of ExpWnfLookupNameInstance @ 0x140461798
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x140460484 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140460820 (ExpWnfSubscribeWnfStateChange.c)
 *     NtUpdateWnfStateData @ 0x140460B94 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140460F60 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1404ADFA4 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1404C015C (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14057CF64 (NtDeleteWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExpWnfFindStateName @ 0x14046185C (ExpWnfFindStateName.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v6; // rbx
  __int64 StateName; // rax
  __int64 v8; // rbx

  v3 = (unsigned __int64 *)(a1 + 48);
  v6 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, v6, (ULONG_PTR)v3);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  StateName = ExpWnfFindStateName(a1, a2);
  v8 = StateName;
  if ( StateName )
    v8 = -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(StateName + 8)) != 0) & StateName;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( !v8 )
    return 3221225524LL;
  *a3 = v8;
  return 0LL;
}
