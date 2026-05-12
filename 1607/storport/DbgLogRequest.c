/*
 * XREFs of DbgLogRequest @ 0x1C000C24C
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0003A58 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C00094B0 (RaidUnitPendingDpcRoutine.c)
 *     StorPortPauseDevice @ 0x1C000AC80 (StorPortPauseDevice.c)
 *     RaidPauseUnitQueue @ 0x1C000ADF0 (RaidPauseUnitQueue.c)
 *     StorPortResumeDevice @ 0x1C000AE90 (StorPortResumeDevice.c)
 *     RaidResumeAdapterQueue @ 0x1C000BD8C (RaidResumeAdapterQueue.c)
 *     RaidStallDeviceQueue @ 0x1C000BF84 (RaidStallDeviceQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C000C138 (RaidPauseAdapterQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000C19C (RaidResumeUnitQueue.c)
 *     RaCallMiniportResetBus @ 0x1C0026474 (RaCallMiniportResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002A2DC (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C002D6B0 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C002D7E0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C002D990 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C002DB30 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C002DD50 (StorPortPause.c)
 *     StorPortReady @ 0x1C002DFC0 (StorPortReady.c)
 *     StorPortResume @ 0x1C002E210 (StorPortResume.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C00343F4 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C0036A20 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0036C6C (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0038AA0 (RaidUnitSubmitResetRequest.c)
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
