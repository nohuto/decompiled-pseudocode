/*
 * XREFs of ExNotifyCallback @ 0x140092004
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14039DEDC (PopUnlockAfterSleepWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     sub_1404886E8 @ 0x1404886E8 (sub_1404886E8.c)
 *     NtNotifyChangeSession @ 0x1404C2F6C (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x1404F6AB4 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x140549748 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1406108F4 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1406111A0 (PnprUnlockPagesForReplace.c)
 *     PdcPoReportLidState @ 0x140637910 (PdcPoReportLidState.c)
 *     PopDispatchAcDcCallback @ 0x14063B9E8 (PopDispatchAcDcCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
