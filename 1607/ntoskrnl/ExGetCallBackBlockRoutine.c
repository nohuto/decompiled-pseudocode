/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140013BB4
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x140427CF4 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140427FE0 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x140428110 (PsCallImageNotifyRoutines.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575E94 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdRegisterCallback @ 0x14057D260 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B2A4 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14061B35C (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681CB0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681DA8 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
