/*
 * XREFs of PsExitCurrentUserThread @ 0x1404204E4
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     KiSchedulerApcTerminate @ 0x1404204C4 (KiSchedulerApcTerminate.c)
 * Callees:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 */

void __noreturn PsExitCurrentUserThread()
{
  PspExitThread(LODWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Flink));
  JUMPOUT(0x1404204FCLL);
}
