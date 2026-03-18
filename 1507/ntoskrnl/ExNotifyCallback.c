/*
 * XREFs of ExNotifyCallback @ 0x1400EDED0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     NtNotifyChangeSession @ 0x140559524 (NtNotifyChangeSession.c)
 *     sub_14055D174 @ 0x14055D174 (sub_14055D174.c)
 *     PopNotifyCallbacksPreSleep @ 0x140564A20 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x1405BF338 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x140690668 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x140690F14 (PnprUnlockPagesForReplace.c)
 *     PdcPoReportLidState @ 0x1406B76A0 (PdcPoReportLidState.c)
 *     PopDispatchAcDcCallback @ 0x1406BACCC (PopDispatchAcDcCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
