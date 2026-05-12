/*
 * XREFs of DbgLogRequest @ 0x1C0014194
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0002F20 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0006610 (RaidUnitPendingDpcRoutine.c)
 *     StorPortPauseDevice @ 0x1C00090B0 (StorPortPauseDevice.c)
 *     RaidPauseUnitQueue @ 0x1C0009220 (RaidPauseUnitQueue.c)
 *     StorPortResumeDevice @ 0x1C00092C0 (StorPortResumeDevice.c)
 *     RaidResumeUnitQueue @ 0x1C0009DC4 (RaidResumeUnitQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C00140CC (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C0014130 (RaidResumeAdapterQueue.c)
 *     StorPortPause @ 0x1C0014D30 (StorPortPause.c)
 *     RaCallMiniportResetBus @ 0x1C00230B4 (RaCallMiniportResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0026E38 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C0029B20 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0029C50 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0029E10 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0029FB0 (StorPortDeviceReady.c)
 *     StorPortReady @ 0x1C002A300 (StorPortReady.c)
 *     StorPortResume @ 0x1C002A550 (StorPortResume.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C00310D4 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C00337C0 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0033A0C (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0035A50 (RaidUnitSubmitResetRequest.c)
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
