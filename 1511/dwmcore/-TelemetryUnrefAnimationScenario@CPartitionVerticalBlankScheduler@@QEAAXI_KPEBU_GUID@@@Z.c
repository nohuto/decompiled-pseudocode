/*
 * XREFs of ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x18008D9A8
 * Callers:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180094D78 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x18002888C (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18008DA84 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3,
        const struct _GUID *a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  unsigned int v7; // r11d
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v8, 0LL);
  CAnimationTracking::UnrefAnimationScenario(
    (CAnimationTracking *)(v4 + 22664),
    v7,
    v6,
    v5,
    (const struct CAnimationTracking::TelFrameInfo *)v8);
}
