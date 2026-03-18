/*
 * XREFs of PsTerminateSystemThread @ 0x1404C2D14
 * Callers:
 *     PopIrpWorker @ 0x1401212D0 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1401B5D7C (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     IopThreadStart @ 0x140541C48 (IopThreadStart.c)
 *     ExpExpirationThread @ 0x14066A6A0 (ExpExpirationThread.c)
 *     VerifierPsTerminateSystemThread @ 0x1406C0C64 (VerifierPsTerminateSystemThread.c)
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
