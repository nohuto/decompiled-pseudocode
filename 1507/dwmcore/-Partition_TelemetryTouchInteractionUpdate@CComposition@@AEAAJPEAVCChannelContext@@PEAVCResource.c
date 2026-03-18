/*
 * XREFs of ?Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE@@@Z @ 0x1800E36A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800E1D04 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPD.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionUpdate(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE *a4)
{
  unsigned __int64 *v4; // rcx
  __int128 v5; // xmm1
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v4 = (unsigned __int64 *)*((_QWORD *)this + 63);
  v5 = *(_OWORD *)((char *)a4 + 20);
  v7[0] = *(_OWORD *)((char *)a4 + 4);
  v8 = *(_QWORD *)((char *)a4 + 36);
  v7[1] = v5;
  CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(v4, (unsigned __int64 *)v7);
  return 0LL;
}
