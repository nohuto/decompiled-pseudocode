/*
 * XREFs of RtlDeleteCriticalSection @ 0x1800523A0
 * Callers:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     EtwpFreeLoggerContext @ 0x180051E4C (EtwpFreeLoggerContext.c)
 *     RtlDestroyHeap @ 0x180052050 (RtlDestroyHeap.c)
 *     RtlDeleteResource @ 0x180052350 (RtlDeleteResource.c)
 *     RtlTraceDatabaseDestroy @ 0x1800F33C0 (RtlTraceDatabaseDestroy.c)
 *     _ResFindClose @ 0x1801041AC (_ResFindClose.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpGetStackTraceAddressEx @ 0x1800524A0 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x1800524C8 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlReleaseStackTrace @ 0x1800F25A0 (RtlReleaseStackTrace.c)
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
