/*
 * XREFs of RtlDeleteCriticalSection @ 0x180059D20
 * Callers:
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 *     RtlDeleteResource @ 0x180059CD0 (RtlDeleteResource.c)
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 *     RtlTraceDatabaseDestroy @ 0x1800EA650 (RtlTraceDatabaseDestroy.c)
 *     _ResFindClose @ 0x1800F98D4 (_ResFindClose.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpGetStackTraceAddressEx @ 0x180059E20 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x180059E48 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlReleaseStackTrace @ 0x1800E9290 (RtlReleaseStackTrace.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *LockSemaphore; // rcx
  NTSTATUS v3; // r14d
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rbx
  BOOL v6; // edi
  _LIST_ENTRY *p_ProcessLocksList; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 StackTraceAddress; // rax

  LockSemaphore = (char *)CriticalSection->LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = NtClose(LockSemaphore);
  else
    v3 = 0;
  DebugInfo = CriticalSection->DebugInfo;
  if ( (unsigned __int64)&CriticalSection->DebugInfo[-1].SpareUSHORT + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = (CriticalSection->SpinCount & 0x4000000) == 0LL;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    p_ProcessLocksList = &DebugInfo->ProcessLocksList;
    if ( DebugInfo->ProcessLocksList.Flink )
    {
      Flink = p_ProcessLocksList->Flink;
      Blink = DebugInfo->ProcessLocksList.Blink;
      if ( p_ProcessLocksList->Flink->Blink != p_ProcessLocksList || Blink->Flink != p_ProcessLocksList )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    StackTraceAddress = RtlpGetStackTraceAddressEx(
                          DebugInfo->CreatorBackTraceIndex,
                          DebugInfo->CreatorBackTraceIndexHigh);
    if ( StackTraceAddress )
      RtlReleaseStackTrace(StackTraceAddress);
    memset(DebugInfo, 0, sizeof(_RTL_CRITICAL_SECTION_DEBUG));
    if ( v6 )
      RtlpFreeDebugInfo(DebugInfo);
  }
  memset(CriticalSection, 0, sizeof(_RTL_CRITICAL_SECTION));
  return v3;
}
