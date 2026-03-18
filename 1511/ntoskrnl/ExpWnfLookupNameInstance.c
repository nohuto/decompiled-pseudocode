/*
 * XREFs of ExpWnfLookupNameInstance @ 0x1403E55A8
 * Callers:
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1403E429C (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1403E4A00 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1403E4D70 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1404B550C (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x140548688 (NtDeleteWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExpWnfFindStateName @ 0x1403E566C (ExpWnfFindStateName.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v6; // rbx
  __int64 StateName; // rax
  __int64 v8; // rbx

  v3 = (unsigned __int64 *)(a1 + 48);
  v6 = KeAbPreAcquire(a1 + 48, 0LL, 0LL);
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
