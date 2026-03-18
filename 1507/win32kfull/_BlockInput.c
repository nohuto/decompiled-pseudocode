/*
 * XREFs of _BlockInput @ 0x1C01DA34C
 * Callers:
 *     NtUserBlockInput @ 0x1C02181A0 (NtUserBlockInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall BlockInput(__int64 a1, __int64 a2)
{
  int v2; // edi
  ULONG v3; // eax
  ULONG v5; // eax

  v2 = a1;
  if ( (_DWORD)a1
    && PsGetCurrentProcess(a1, a2) != gpepCSRSS
    && (*(_QWORD *)(gptiCurrent + 416LL) != grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 776LL), 0x20u)) )
  {
    v3 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v3);
    return 0LL;
  }
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 832LL) <= 0x2FFF )
  {
    v5 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v5);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 384LL), 0LL, 2LL);
    return 0LL;
  }
  if ( v2 )
  {
    if ( gptiBlockInput || (*(_DWORD *)(gptiCurrent + 448LL) & 1) != 0 )
      return 0LL;
    gptiBlockInput = gptiCurrent;
  }
  else
  {
    if ( gptiBlockInput != gptiCurrent )
      return 0LL;
    gptiBlockInput = 0LL;
  }
  return 1LL;
}
