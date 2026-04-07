/*
 * XREFs of ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50
 * Callers:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000B5A4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000CC30 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800131F8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180013314 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180018984 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180019590 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x18001A6E0 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D3B0 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800268E0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002FF10 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180031270 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x18003CF30 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x18003D0C0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18003E2E4 (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003F714 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003F968 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?AllocTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x180041C90 (-AllocTableData@-$CGenericTableMap@PEAVCWindowData@@U-$SetElement@PEAVCWindowData@@@-$CGenericSe.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::ProcessHeapImpl::Alloc(WPF::ProcessHeapImpl *this, SIZE_T a2)
{
  if ( !a2 )
    a2 = 1LL;
  return HeapAlloc(g_hProcessHeap, 0, a2);
}
