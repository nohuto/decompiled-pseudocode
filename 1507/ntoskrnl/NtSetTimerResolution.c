/*
 * XREFs of NtSetTimerResolution @ 0x1404F4E2C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExpInsertTimerResolutionEntry @ 0x1400D388C (ExpInsertTimerResolutionEntry.c)
 *     ExpUpdateTimerResolution @ 0x1400D3B10 (ExpUpdateTimerResolution.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404F449C (PoDiagCaptureUsermodeStack.c)
 *     PoTraceSystemTimerResolution @ 0x1404F5E30 (PoTraceSystemTimerResolution.c)
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
  __int64 *v13; // r9
  ULONG v14; // edx
  char v15; // cl
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v17; // ax
  signed __int32 v19; // ett
  __int16 v20; // si
  PVOID *v21; // rsi
  void *v22; // rcx

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
      v19 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v19 != DirectoryTableBase_high );
    v20 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v20 & 0x1000) != 0 )
      v9 = RequestedResolution <= LODWORD(Process[2].Affinity.Bitmap[13]);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[2].Affinity.Bitmap[12] || RequestedResolution < HIDWORD(Process[2].Affinity.Bitmap[13]) )
    {
      v21 = PoDiagCaptureUsermodeStack();
      if ( v21 )
      {
        v22 = (void *)Process[2].Affinity.Bitmap[12];
        if ( v22 )
          ExFreePoolWithTag(v22, 0x50455654u);
        Process[2].Affinity.Bitmap[12] = (unsigned __int64)v21;
        HIDWORD(Process[2].Affinity.Bitmap[13]) = RequestedResolution;
      }
    }
    LODWORD(Process[2].Affinity.Bitmap[13]) = RequestedResolution;
    PoTraceSystemTimerResolution(0LL, Process);
    v14 = RequestedResolution;
    v15 = v9;
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
    LODWORD(Process[2].Affinity.Bitmap[13]) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v14 = 0;
    v15 = 0;
  }
  updated = ExpUpdateTimerResolution(v15, v14, 0LL, v13);
LABEL_10:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  CurrentThread = KeGetCurrentThread();
  v17 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  *ActualResolution = updated;
  return v8;
}
