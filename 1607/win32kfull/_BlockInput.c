/*
 * XREFs of _BlockInput @ 0x1C01D2394
 * Callers:
 *     NtUserBlockInput @ 0x1C0210D60 (NtUserBlockInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall BlockInput(__int64 a1)
{
  int v1; // edi
  ULONG v2; // eax
  ULONG v4; // eax

  v1 = a1;
  if ( (_DWORD)a1
    && PsGetCurrentProcess(a1) != gpepCSRSS
    && (*(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 776LL), 0x20u)) )
  {
    v2 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v2);
    return 0LL;
  }
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL) <= 0x2FFF )
  {
    v4 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v4);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 376LL), 0LL, 2LL);
    return 0LL;
  }
  if ( v1 )
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
