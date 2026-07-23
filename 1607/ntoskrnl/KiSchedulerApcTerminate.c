/*
 * XREFs of KiSchedulerApcTerminate @ 0x1404EC990
 * Callers:
 *     <none>
 * Callees:
 *     KiIsCommitFailTerminationRequested @ 0x1400C7B88 (KiIsCommitFailTerminationRequested.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  if ( (unsigned __int8)KiIsCommitFailTerminationRequested((__int64)KeGetCurrentThread()) )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  PspExitThread(LODWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  JUMPOUT(0x1404EC9BELL);
}
