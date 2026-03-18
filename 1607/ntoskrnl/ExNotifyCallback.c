/*
 * XREFs of ExNotifyCallback @ 0x140009D58
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403C95C8 (PopUnlockAfterSleepWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     NtNotifyChangeSession @ 0x1404EE3E8 (NtNotifyChangeSession.c)
 *     sub_1404F1514 @ 0x1404F1514 (sub_1404F1514.c)
 *     PopNotifyCallbacksPreSleep @ 0x14052FE18 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x14057DCF0 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x140644D00 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1406455AC (PnprUnlockPagesForReplace.c)
 *     PdcPoReportLidState @ 0x14066FBB0 (PdcPoReportLidState.c)
 *     PopDispatchAcDcCallback @ 0x140672D74 (PopDispatchAcDcCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
