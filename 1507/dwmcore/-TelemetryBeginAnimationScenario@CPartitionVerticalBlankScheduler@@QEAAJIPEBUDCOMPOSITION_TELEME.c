/*
 * XREFs of ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x180065340
 * Callers:
 *     ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x180068FB4 (-Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 * Callees:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x180064D0C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18006539C (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rcx
  unsigned __int16 *v5; // r9
  unsigned int v6; // r10d
  const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *v7; // r11
  _BYTE v9[24]; // [rsp+30h] [rbp-28h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v9, 0LL);
  return CAnimationTracking::BeginAnimationScenario(
           (CAnimationTracking *)(v4 + 22656),
           v6,
           v7,
           v5,
           (const struct CAnimationTracking::TelFrameInfo *)v9);
}
