/*
 * XREFs of ?Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE@@@Z @ 0x18000CFA4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18000D7C0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPD.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionUpdate(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE *a4)
{
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *((_QWORD *)this + 64);
  v5 = *(_OWORD *)((char *)a4 + 20);
  v8[0] = *(_OWORD *)((char *)a4 + 4);
  v6 = *(_OWORD *)((char *)a4 + 36);
  v8[1] = v5;
  v8[2] = v6;
  CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(v4, v8, a3);
  return 0LL;
}
