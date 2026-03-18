/*
 * XREFs of NtSetTimerResolution @ 0x1404B4EBC
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExpUpdateTimerResolution @ 0x1400EB314 (ExpUpdateTimerResolution.c)
 *     ExpInsertTimerResolutionEntry @ 0x1400EB51C (ExpInsertTimerResolutionEntry.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     PoTraceSystemTimerResolution @ 0x1404B5070 (PoTraceSystemTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404B50FC (PoDiagCaptureUsermodeStack.c)
 */

NTSTATUS __stdcall NtSetTimerResolution(ULONG RequestedResolution, BOOLEAN SetOrUnset, PULONG ActualResolution)
{
  _DWORD *v6; // rdx
  _KPROCESS *Process; // rbx
  NTSTATUS v8; // edi
  bool v9; // r15
  ULONG updated; // esi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v12; // ett
  ULONG v13; // edx
  char v14; // cl
  signed __int32 v16; // ett
  __int16 v17; // si
  __int64 v18; // rsi
  void *v19; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = ActualResolution;
    if ( (unsigned __int64)ActualResolution >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 0;
  v9 = 1;
  ExAcquireTimeRefreshLock(1u);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetOrUnset )
  {
    do
    {
      v16 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v16 != DirectoryTableBase_high );
    v17 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v17 & 0x1000) != 0 )
      v9 = RequestedResolution <= LODWORD(Process[2].Affinity.Bitmap[14]);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[2].Affinity.Bitmap[13] || RequestedResolution < HIDWORD(Process[2].Affinity.Bitmap[14]) )
    {
      v18 = PoDiagCaptureUsermodeStack();
      if ( v18 )
      {
        v19 = (void *)Process[2].Affinity.Bitmap[13];
        if ( v19 )
          ExFreePoolWithTag(v19, 0x50455654u);
        Process[2].Affinity.Bitmap[13] = v18;
        HIDWORD(Process[2].Affinity.Bitmap[14]) = RequestedResolution;
      }
    }
    LODWORD(Process[2].Affinity.Bitmap[14]) = RequestedResolution;
    PoTraceSystemTimerResolution(0LL, Process);
    v13 = RequestedResolution;
    v14 = v9;
  }
  else
  {
    do
    {
      v12 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high & 0xFFFFEFFF,
                                  DirectoryTableBase_high);
    }
    while ( v12 != DirectoryTableBase_high );
    if ( (DirectoryTableBase_high & 0x1000) == 0 )
    {
      v8 = -1073741243;
      goto LABEL_10;
    }
    --ExpTimerResolutionCount;
    LODWORD(Process[2].Affinity.Bitmap[14]) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v13 = 0;
    v14 = 0;
  }
  updated = ExpUpdateTimerResolution(v14, v13, 0LL);
LABEL_10:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  *ActualResolution = updated;
  return v8;
}
