/*
 * XREFs of KiSchedulerApcTerminate @ 0x140509A00
 * Callers:
 *     <none>
 * Callees:
 *     KiIsCommitFailTerminationRequested @ 0x1400C9CE8 (KiIsCommitFailTerminationRequested.c)
 *     PsTerminateProcess @ 0x1404EC470 (PsTerminateProcess.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  if ( (unsigned __int8)KiIsCommitFailTerminationRequested((__int64)KeGetCurrentThread()) )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  PspExitThread(LODWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  JUMPOUT(0x140509A2ELL);
}
