/*
 * XREFs of KiSchedulerApcTerminate @ 0x1404AC820
 * Callers:
 *     <none>
 * Callees:
 *     KiIsCommitFailTerminationRequested @ 0x1400E781C (KiIsCommitFailTerminationRequested.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  if ( (unsigned __int8)KiIsCommitFailTerminationRequested((__int64)KeGetCurrentThread()) )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0xC000012D);
  PspExitThread((unsigned int)KeGetCurrentThread()[1].Timer.Header.WaitListHead.Flink);
  JUMPOUT(0x1404AC84ELL);
}
