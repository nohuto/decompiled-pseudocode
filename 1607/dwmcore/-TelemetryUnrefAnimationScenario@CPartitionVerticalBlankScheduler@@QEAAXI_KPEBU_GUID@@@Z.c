/*
 * XREFs of ?TelemetryUnrefAnimationScenario@CPartitionVerticalBlankScheduler@@QEAAXI_KPEBU_GUID@@@Z @ 0x180043EFC
 * Callers:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18003B6C0 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x180043FD8 (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800A1490 (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryUnrefAnimationScenario(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3,
        const struct _GUID *a4)
{
  __int64 v4; // rcx
  const struct _GUID *v5; // r9
  unsigned __int64 v6; // r10
  unsigned int v7; // r11d
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(this, (struct CAnimationTracking::TelFrameInfo *)v8, 0LL);
  CAnimationTracking::UnrefAnimationScenario(
    (CAnimationTracking *)(v4 + 22288),
    v7,
    v6,
    v5,
    (const struct CAnimationTracking::TelFrameInfo *)v8);
}
