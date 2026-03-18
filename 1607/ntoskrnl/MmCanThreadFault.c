/*
 * XREFs of MmCanThreadFault @ 0x140051620
 * Callers:
 *     RtlWalkFrameChain @ 0x14004F2A0 (RtlWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x1402293E4 (EtwpStackTraceDispatcher.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400516C0 (KeAreInterruptsEnabled.c)
 */

_BOOL8 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 v1; // dx
  int *v2; // rcx
  __int64 v3; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 )
      {
        if ( MmPhysicalMemoryBlock )
        {
          v1 = WORD2(CurrentThread->ApcState.Process[1].InstrumentationCallback);
          v2 = v1 == 1023 ? MiSystemPartition : *(int **)(qword_140326FF8 + 8LL * v1);
          v3 = *((_QWORD *)v2 + 781);
          if ( v3 )
          {
            if ( CurrentThread != *(struct _KTHREAD **)(v3 + 96) )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
