/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C00119DC
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0005C7C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 *     StorPortPause @ 0x1C0012C10 (StorPortPause.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0012D20 (RaidAdapterSetPauseTimer.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C0012D70 (RaidPauseTimerDpcRoutine.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002110C (RaidAdapterCancelPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C00238C0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C00279A0 (StorPortCompleteRequest.c)
 *     StorPortAdapterActiveCondition @ 0x1C002C1E0 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  unsigned __int32 v1; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C0044010 & 0x200) != 0 )
    DbgLogRequest(a1, 7, (_DWORD)retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v1;
}
