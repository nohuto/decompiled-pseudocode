/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x1400101E0
 * Callers:
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PsCallImageNotifyRoutines @ 0x140423B80 (PsCallImageNotifyRoutines.c)
 *     PspInitializeThunkContext @ 0x14044FD4C (PspInitializeThunkContext.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A6C94 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A71BC (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140669C18 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140669CE0 (DbgkpLkmdFireCallbacks.c)
 *     PopIssueCoalescingNotification @ 0x1406B5498 (PopIssueCoalescingNotification.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406C60A4 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406C6210 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
