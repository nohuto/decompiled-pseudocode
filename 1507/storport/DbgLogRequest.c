/*
 * XREFs of DbgLogRequest @ 0x1C0011B14
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0001750 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00059D0 (RaidUnitPendingDpcRoutine.c)
 *     StorPortPauseDevice @ 0x1C00072E0 (StorPortPauseDevice.c)
 *     RaidPauseUnitQueue @ 0x1C0007450 (RaidPauseUnitQueue.c)
 *     StorPortResumeDevice @ 0x1C0007560 (StorPortResumeDevice.c)
 *     RaidPauseAdapterQueue @ 0x1C0011978 (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C00119DC (RaidResumeAdapterQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0011A64 (RaidResumeUnitQueue.c)
 *     StorPortPause @ 0x1C0012C10 (StorPortPause.c)
 *     RaidAdapterResetBus @ 0x1C00223E8 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0024998 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C0027870 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C00279A0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0027B50 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0027CF0 (StorPortDeviceReady.c)
 *     StorPortReady @ 0x1C0028090 (StorPortReady.c)
 *     StorPortResume @ 0x1C00282E0 (StorPortResume.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C002FFA0 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C0031F60 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C00321AC (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0034010 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( a1 && *(_DWORD *)(a1 + 5060) && *(_QWORD *)(a1 + 5064) )
  {
    v7 = *(_QWORD *)(a1 + 5064)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 5056)) % *(_DWORD *)(a1 + 5060));
    *(_DWORD *)v7 = a2;
    v8 = a7;
    if ( !a7 )
      v8 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v7 + 40) = v8;
    *(_QWORD *)(v7 + 24) = a5;
    *(_QWORD *)(v7 + 32) = a6;
    *(_QWORD *)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 16) = a4;
  }
}
