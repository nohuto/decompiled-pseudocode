/*
 * XREFs of RtlDeleteCriticalSection @ 0x1800081B0
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlDeleteResource @ 0x180008160 (RtlDeleteResource.c)
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     RtlTraceDatabaseDestroy @ 0x1800E5B70 (RtlTraceDatabaseDestroy.c)
 *     _ResFindClose @ 0x1800F9FBC (_ResFindClose.c)
 * Callees:
 *     RtlpGetStackTraceAddressEx @ 0x1800082B0 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x1800082D8 (RtlpFreeDebugInfo.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlReleaseStackTrace @ 0x1800E4730 (RtlReleaseStackTrace.c)
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
