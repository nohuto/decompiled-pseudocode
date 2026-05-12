/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C0014130
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDeferredRoutine @ 0x1C00147E0 (RaidAdapterDeferredRoutine.c)
 *     StorPortPause @ 0x1C0014D30 (StorPortPause.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0014E40 (RaidAdapterSetPauseTimer.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C0014E90 (RaidPauseTimerDpcRoutine.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00234C8 (RaidAdapterCancelPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C0025D20 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0029C50 (StorPortCompleteRequest.c)
 *     StorPortAdapterActiveCondition @ 0x1C002DF50 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  unsigned __int32 v1; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C0048010 & 0x200) != 0 )
    DbgLogRequest(a1, 7, (_DWORD)retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v1;
}
