/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140038604
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x1403F6564 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1403F6880 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1403F69B0 (PsCallImageNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x14053033C (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405306E4 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x1405F0F98 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x1405F1050 (DbgkpLkmdFireCallbacks.c)
 *     PopIssueCoalescingNotification @ 0x140635CC0 (PopIssueCoalescingNotification.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406433EC (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406434E4 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
