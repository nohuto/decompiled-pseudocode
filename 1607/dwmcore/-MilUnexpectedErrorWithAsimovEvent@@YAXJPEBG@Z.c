/*
 * XREFs of ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C
 * Callers:
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x180036BA0 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     ?UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z @ 0x1800389C8 (-UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18004A3B0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800718D0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180113F8C (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18016967C (-MilUnexpectedError@@YAXJPEBG@Z.c)
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
