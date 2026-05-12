/*
 * XREFs of RaidResumeUnitQueue @ 0x1C0011A64
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000695C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitRequestPowerUp @ 0x1C00074EC (RaUnitRequestPowerUp.c)
 *     RaidSetUnitPauseTimer @ 0x1C0010A8C (RaidSetUnitPauseTimer.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0011A40 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C00238C0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C00279A0 (StorPortCompleteRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 *     RaidResumeIoQueue @ 0x1C0011B90 (RaidResumeIoQueue.c)
 */

__int64 __fastcall RaidResumeUnitQueue(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned __int8 v5; // dl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = RaidResumeIoQueue(a1 + 384);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  if ( v3 )
    v5 = *(_BYTE *)(v3 + 56);
  else
    v5 = -1;
  if ( (qword_1C0044010 & 0x200) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      5,
      (_DWORD)retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88)) | (((unsigned __int8)*(_DWORD *)(a1 + 88) | (v5 << 8)) << 8)) << 8),
      *(int *)(a1 + 428),
      v2,
      0LL);
  return v4;
}
