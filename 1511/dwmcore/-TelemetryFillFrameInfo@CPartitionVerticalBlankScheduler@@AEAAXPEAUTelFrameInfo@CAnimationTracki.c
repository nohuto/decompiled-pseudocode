/*
 * XREFs of ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18008DA84
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x18008D9A8 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x18008D9E8 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x18008DA28 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
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
    a3 = (struct CFrameInfo *)*((_QWORD *)this + 2788);
    if ( !*(_QWORD *)a3 )
      a3 = (struct CFrameInfo *)*((_QWORD *)this + 2789);
  }
  *(_BYTE *)a2 = *((_DWORD *)a3 + 164) == 1 && !*((_BYTE *)this + 25408) && !*((_BYTE *)this + 25409);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a3;
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 24);
}
