/*
 * XREFs of ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x1800955F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x180028360 (-VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     ?TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBG@Z @ 0x18008DA28 (-TelemetryBeginAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAJIPEBUDCOMPOSITION_TELEME.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryAnimationScenarioBegin(
        CPartitionVerticalBlankScheduler **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN *a4,
        _WORD *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v6 = 0;
  if ( a6 - 48 > 0xC0 )
  {
    v11 = 2350;
LABEL_9:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v11);
    return v6;
  }
  if ( !DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo(a5, a6) )
  {
    v11 = 2355;
    goto LABEL_9;
  }
  if ( *(_WORD *)(v8 + 32) && v8 + *(unsigned __int16 *)(v8 + 32) || *(_QWORD *)(v9 + 40) )
    CPartitionVerticalBlankScheduler::TelemetryBeginAnimationScenario(
      this[63],
      *(unsigned int *)(v9 + 16),
      (const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)v8,
      *(const unsigned __int16 **)(v9 + 40));
  return v6;
}
