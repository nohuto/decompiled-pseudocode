/*
 * XREFs of _BlockInput @ 0x1C01DA948
 * Callers:
 *     NtUserBlockInput @ 0x1C0217F70 (NtUserBlockInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall BlockInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  ULONG v5; // eax
  ULONG v7; // eax

  v4 = a1;
  if ( (_DWORD)a1
    && PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS
    && (*(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 768LL), 0x20u)) )
  {
    v5 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v5);
    return 0LL;
  }
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL) <= 0x2FFF )
  {
    v7 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v7);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 376LL), 0LL, 2LL);
    return 0LL;
  }
  if ( v4 )
  {
    if ( gptiBlockInput || (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
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
