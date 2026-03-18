/*
 * XREFs of PsTerminateSystemThread @ 0x140557A14
 * Callers:
 *     PopIrpWorker @ 0x140156584 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1401F0C90 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     IopThreadStart @ 0x1405B7440 (IopThreadStart.c)
 *     ExpExpirationThread @ 0x1406EDC78 (ExpExpirationThread.c)
 *     VerifierPsTerminateSystemThread @ 0x1407424A4 (VerifierPsTerminateSystemThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus, 1);
  else
    return -1073741811;
}
