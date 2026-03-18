/*
 * XREFs of ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180043FD8
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x180043EFC (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x180043F3C (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180043F7C (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(
        CPartitionVerticalBlankScheduler *this,
        struct CAnimationTracking::TelFrameInfo *a2,
        struct CFrameInfo *a3)
{
  if ( !a3 )
  {
    a3 = (struct CFrameInfo *)*((_QWORD *)this + 2741);
    if ( !*(_QWORD *)a3 )
      a3 = (struct CFrameInfo *)*((_QWORD *)this + 2742);
  }
  *(_BYTE *)a2 = *((_DWORD *)a3 + 164) == 1 && !*((_BYTE *)this + 25576) && !*((_BYTE *)this + 25577);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a3;
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 25);
}
