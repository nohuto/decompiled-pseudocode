/*
 * XREFs of PsTerminateSystemThread @ 0x1404CFC1C
 * Callers:
 *     PopIrpWorker @ 0x14012C0E4 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1401C3748 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     IopThreadStart @ 0x14054D254 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x1406AD178 (ExpExpirationThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  char v3; // r8

  v1 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    return -1073741811;
  v3 = 1;
  return PspTerminateThreadByPointer(CurrentThread, v1, v3);
}
