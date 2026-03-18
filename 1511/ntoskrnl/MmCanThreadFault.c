/*
 * XREFs of MmCanThreadFault @ 0x140028250
 * Callers:
 *     RtlWalkFrameChain @ 0x140026150 (RtlWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x140210E18 (EtwpStackTraceDispatcher.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 */

_BOOL8 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  int *v2; // r8
  unsigned __int16 SignalState; // cx
  __int64 v4; // rcx

  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
    return 0LL;
  if ( KeGetCurrentIrql() >= 2u )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 2) != 0 || !MmPhysicalMemoryBlock )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  v2 = &MiSystemPartition;
  if ( (Process[2].DirectoryTableBase & 7) == 0 )
  {
    SignalState = Process[2].Header.SignalState;
    if ( SignalState != 1023 )
      v2 = *(int **)(qword_1402FEC28 + 8LL * SignalState);
  }
  v4 = *((_QWORD *)v2 + 702);
  return v4 && CurrentThread != *(struct _KTHREAD **)(v4 + 96);
}
