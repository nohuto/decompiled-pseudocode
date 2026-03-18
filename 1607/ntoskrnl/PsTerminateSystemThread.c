/*
 * XREFs of PsTerminateSystemThread @ 0x1404EDAF8
 * Callers:
 *     PopIrpWorker @ 0x14012BB74 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1401C3864 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x14048FBA8 (EtwpLogger.c)
 *     IopThreadStart @ 0x14054CD14 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x1406AD040 (ExpExpirationThread.c)
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
