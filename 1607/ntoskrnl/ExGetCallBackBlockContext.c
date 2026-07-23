/*
 * XREFs of ExGetCallBackBlockContext @ 0x140013D04
 * Callers:
 *     PspCallProcessNotifyRoutines @ 0x140427CF4 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140427FE0 (PspCallThreadNotifyRoutines.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575E94 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkpLkmdFireCallbacks @ 0x14061B35C (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681CB0 (PsRemoveCreateThreadNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockContext(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
