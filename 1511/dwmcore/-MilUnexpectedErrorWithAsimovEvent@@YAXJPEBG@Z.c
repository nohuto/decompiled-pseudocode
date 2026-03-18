/*
 * XREFs of ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878
 * Callers:
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x18006BCE0 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079BB0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007B250 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z @ 0x1800A13F8 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z.c)
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180100094 (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B0FEC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18013EF28 (-MilUnexpectedError@@YAXJPEBG@Z.c)
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
