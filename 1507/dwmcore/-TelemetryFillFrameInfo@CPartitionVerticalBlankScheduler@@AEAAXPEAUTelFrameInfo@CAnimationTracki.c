/*
 * XREFs of ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18006539C
 * Callers:
 *     ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x1800652C0 (-TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z @ 0x180065300 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJI_KPEBU_GUID@@@Z.c)
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180065340 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
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
    a3 = (struct CFrameInfo *)*((_QWORD *)this + 2787);
    if ( !*(_QWORD *)a3 )
      a3 = (struct CFrameInfo *)*((_QWORD *)this + 2788);
  }
  *(_BYTE *)a2 = *((_DWORD *)a3 + 164) == 1 && !*((_BYTE *)this + 25280) && !*((_BYTE *)this + 25281);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a3;
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 23);
}
