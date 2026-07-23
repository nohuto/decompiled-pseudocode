/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180055050
 * Callers:
 *     LdrpInitMuiCrits @ 0x1800304C8 (LdrpInitMuiCrits.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 *     EtwpInitLoggerContext @ 0x1800472B8 (EtwpInitLoggerContext.c)
 *     RtlInitializeHeapManager @ 0x18004BCAC (RtlInitializeHeapManager.c)
 *     RtlInitializeResource @ 0x180054E10 (RtlInitializeResource.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 *     RtlTraceDatabaseCreate @ 0x1800EA520 (RtlTraceDatabaseCreate.c)
 *     BasepInitializeFindFileHandle @ 0x1800F88F8 (BasepInitializeFindFileHandle.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180054F00 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  char v5; // cl
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v7; // [rsp+26h] [rbp-42h]
  unsigned __int64 v8; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v9; // [rsp+48h] [rbp-20h]

  if ( (Flags & 0xE0000000) != 0 || (Flags & 0x11000000) == 0x11000000 )
    return -1073741583;
  if ( (SpinCount & 0xFF000000) != 0 )
    return -1073741584;
  if ( (Flags & 0x4000000) == 0 )
  {
    CriticalSection->LockCount = -1;
    v5 = 1;
    CriticalSection->RecursionCount = 0;
    CriticalSection->OwningThread = 0LL;
    CriticalSection->LockSemaphore = 0LL;
    if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    {
      CriticalSection->SpinCount = 0LL;
    }
    else if ( (Flags & 0x2000000) != 0 || !SpinCount )
    {
      CriticalSection->SpinCount = 33556432LL;
    }
    else
    {
      CriticalSection->SpinCount = SpinCount & 0xFFFFFF;
    }
    CriticalSection->SpinCount |= Flags & 0x9000000;
    if ( (Flags & 0x10000000) == 0 && !RtlpForceCSDebugInfoCreation )
      v5 = 0;
    CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
    if ( v5 )
    {
      RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
      if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
        CriticalSection->SpinCount |= 0x1000000uLL;
    }
    if ( MEMORY[0x7FFE0382] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 2) != 0 )
      {
        v7 = 5923;
        v8 = CriticalSection->SpinCount;
        v9 = CriticalSection;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0382], 0x10402u, 0x10u, Fields);
      }
    }
  }
  return 0;
}
