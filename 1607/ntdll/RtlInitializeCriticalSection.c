/*
 * XREFs of RtlInitializeCriticalSection @ 0x180066F80
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B130 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  bool v2; // al
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v5; // [rsp+26h] [rbp-42h]
  unsigned __int64 SpinCount; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v7; // [rsp+48h] [rbp-20h]

  CriticalSection->LockCount = -1;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    CriticalSection->SpinCount = 0LL;
  else
    CriticalSection->SpinCount = 33556432LL;
  v2 = RtlpForceCSDebugInfoCreation != 0;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( v2 )
  {
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  if ( MEMORY[0x7FFE0382] && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v5 = 5923;
    SpinCount = CriticalSection->SpinCount;
    v7 = CriticalSection;
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0382], 0x10402u, 0x10u, Fields);
  }
  return 0;
}
