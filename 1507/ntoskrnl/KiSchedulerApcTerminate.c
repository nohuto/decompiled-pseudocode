/*
 * XREFs of KiSchedulerApcTerminate @ 0x1404204C4
 * Callers:
 *     <none>
 * Callees:
 *     KiIsCommitFailTerminationRequested @ 0x14000C1E4 (KiIsCommitFailTerminationRequested.c)
 *     PsExitCurrentUserThread @ 0x1404204E4 (PsExitCurrentUserThread.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  if ( (unsigned __int8)KiIsCommitFailTerminationRequested((__int64)KeGetCurrentThread()) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, 3221225773LL);
  PsExitCurrentUserThread();
}
