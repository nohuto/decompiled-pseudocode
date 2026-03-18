/*
 * XREFs of ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C000F88C
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 *     DxgkGetPresentHistory @ 0x1C00A3390 (DxgkGetPresentHistory.c)
 *     DxgkCreateOverlay @ 0x1C0142F50 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0143440 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0143850 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0143B90 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0143F70 (DxgkUpdateOverlay.c)
 *     DxgkGetPresentStats @ 0x1C0149440 (DxgkGetPresentStats.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01624B0 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEX::~DXGPROCESSMUTEX(DXGPROCESSMUTEX *this)
{
  if ( *((_BYTE *)this + 8) )
    DXGAUTOMUTEX::Release(this);
}
