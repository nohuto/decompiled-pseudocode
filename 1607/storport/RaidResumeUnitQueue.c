/*
 * XREFs of RaidResumeUnitQueue @ 0x1C000C19C
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000A660 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C000BF60 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidSetUnitPauseTimer @ 0x1C000C0F8 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0018290 (RaidAdapterDeferredRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C00297C0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C002D7E0 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUp @ 0x1C003059C (RaUnitRequestPowerUp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000C24C (DbgLogRequest.c)
 *     RaidResumeIoQueue @ 0x1C000C2C8 (RaidResumeIoQueue.c)
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
  if ( (qword_1C004F2A0 & 0x200) != 0 )
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
