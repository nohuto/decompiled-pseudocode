/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x18006D110
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180054F00 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionAndSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  ULONG v3; // edx
  bool v4; // al
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v7; // [rsp+26h] [rbp-42h]
  unsigned __int64 v8; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v9; // [rsp+48h] [rbp-20h]

  v3 = SpinCount & 0xFFFFFF;
  CriticalSection->LockCount = -1;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    CriticalSection->SpinCount = 0LL;
  }
  else if ( v3 )
  {
    CriticalSection->SpinCount = v3 & 0xFFFFFFLL;
  }
  else
  {
    CriticalSection->SpinCount = 33556432LL;
  }
  v4 = RtlpForceCSDebugInfoCreation != 0;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( v4 )
  {
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  if ( MEMORY[0x7FFE0382] && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v8 = CriticalSection->SpinCount;
    v7 = 5923;
    v9 = CriticalSection;
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0382], 0x10402u, 0x10u, Fields);
  }
  return 0;
}
