/*
 * XREFs of ExNotifyCallback @ 0x1400098D8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403C95C8 (PopUnlockAfterSleepWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     NtNotifyChangeSession @ 0x1404D04B0 (NtNotifyChangeSession.c)
 *     sub_1404D3608 @ 0x1404D3608 (sub_1404D3608.c)
 *     PopNotifyCallbacksPreSleep @ 0x140530358 (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x14057E19C (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x140644DE4 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x140645690 (PnprUnlockPagesForReplace.c)
 *     PdcPoReportLidState @ 0x14066FC94 (PdcPoReportLidState.c)
 *     PopDispatchAcDcCallback @ 0x140672E58 (PopDispatchAcDcCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
