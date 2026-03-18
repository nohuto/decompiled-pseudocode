/*
 * XREFs of ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006570
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C0063918 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00D0A18 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

const struct tagRECT *__fastcall ADAPTER_DISPLAY::GetDwmClipBox(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  return (const struct tagRECT *)((char *)this[14] + 1008 * v3 + 652);
}
