/*
 * XREFs of ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C001D660
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004970 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DE98 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004B6B8 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0073B00 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     ?EmitUpdateCommands@CCompositionSurfaceBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077310 (-EmitUpdateCommands@CCompositionSurfaceBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00E3870 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C001D698 (OpenDwmHandle.c)
 */

__int64 __fastcall CompositionObject::OpenDwmHandle(CompositionObject *this, void **a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  return OpenDwmHandle(this, ExCompositionObjectType, 3u, v3, a2);
}
