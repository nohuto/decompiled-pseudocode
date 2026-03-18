/*
 * XREFs of ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180123308
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CD40 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004A078 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z @ 0x180050BC4 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x18008E258 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x1800E19E4 (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180060F50 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18012908C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

void __fastcall MilUnexpectedErrorWithAsimovEvent(int a1, const unsigned __int16 *a2)
{
  const struct _TlgProvider_t *v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  MilUnexpectedError(a1, a2);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v5, v4);
  DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
    (DwmCoreAsimov::CDwmEventManager *)Manager,
    L"MilUnexpectedError",
    a2,
    a1);
}
