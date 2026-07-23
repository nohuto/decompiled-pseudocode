/*
 * XREFs of NtSetTimerResolution @ 0x1403EB304
 * Callers:
 *     <none>
 * Callees:
 *     ExpUpdateTimerResolution @ 0x14000707C (ExpUpdateTimerResolution.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExpInsertTimerResolutionEntry @ 0x1400B3054 (ExpInsertTimerResolutionEntry.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PoTraceSystemTimerResolution @ 0x1403EB4E0 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EBEE0 (ExAcquireTimeRefreshLock.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404D26F4 (PoDiagCaptureUsermodeStack.c)
 */

NTSTATUS __stdcall NtSetTimerResolution(ULONG RequestedResolution, BOOLEAN SetOrUnset, PULONG ActualResolution)
{
  ULONG v5; // r14d
  __int64 v6; // rdx
  _KPROCESS *Process; // rbx
  NTSTATUS v8; // edi
  bool v9; // r15
  ULONG updated; // esi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v12; // ett
  __int16 v13; // si
  unsigned int v14; // edx
  char v15; // cl
  signed __int32 v17; // ett
  __int64 v18; // rsi
  void *v19; // rcx

  v5 = RequestedResolution;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = (__int64)ActualResolution;
    if ( (unsigned __int64)ActualResolution >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 0;
  v9 = 1;
  LOBYTE(RequestedResolution) = 1;
  ExAcquireTimeRefreshLock(RequestedResolution);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetOrUnset )
  {
    do
    {
      v12 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v12 != DirectoryTableBase_high );
    v13 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v13 & 0x1000) != 0 )
      v9 = v5 <= LODWORD(Process[2].Affinity.Bitmap[16]);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[2].Affinity.Bitmap[15] || v5 < HIDWORD(Process[2].Affinity.Bitmap[16]) )
    {
      v18 = PoDiagCaptureUsermodeStack();
      if ( v18 )
      {
        v19 = (void *)Process[2].Affinity.Bitmap[15];
        if ( v19 )
          ExFreePoolWithTag(v19, 0x50455654u);
        Process[2].Affinity.Bitmap[15] = v18;
        HIDWORD(Process[2].Affinity.Bitmap[16]) = v5;
      }
    }
    LODWORD(Process[2].Affinity.Bitmap[16]) = v5;
    PoTraceSystemTimerResolution(0LL, Process);
    v14 = v5;
    v15 = v9;
  }
  else
  {
    do
    {
      v17 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high & 0xFFFFEFFF,
                                  DirectoryTableBase_high);
    }
    while ( v17 != DirectoryTableBase_high );
    if ( (DirectoryTableBase_high & 0x1000) == 0 )
    {
      v8 = -1073741243;
      goto LABEL_15;
    }
    --ExpTimerResolutionCount;
    LODWORD(Process[2].Affinity.Bitmap[16]) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v14 = 0;
    v15 = 0;
  }
  updated = ExpUpdateTimerResolution(v15, v14, 0LL);
LABEL_15:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  *ActualResolution = updated;
  return v8;
}
