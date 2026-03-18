/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140014034
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x140428E24 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140429110 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x140429240 (PsCallImageNotifyRoutines.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575954 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdRegisterCallback @ 0x14057CDB4 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B1F0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14061B2A8 (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681BCC (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681CC4 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
