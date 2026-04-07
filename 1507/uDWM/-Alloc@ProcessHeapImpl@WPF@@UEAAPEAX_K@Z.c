/*
 * XREFs of ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800284D0
 * Callers:
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x1800060B0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x180006480 (-HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z.c)
 *     ?AllocTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x180008B80 (-AllocTableData@-$CGenericTableMap@PEAVCWindowData@@U-$SetElement@PEAVCWindowData@@@-$CGenericSe.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x1800168F4 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x1800182C0 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180024200 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002BF90 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003B40C (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18003CFFC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::ProcessHeapImpl::Alloc(WPF::ProcessHeapImpl *this, SIZE_T a2)
{
  if ( !a2 )
    a2 = 1LL;
  return HeapAlloc(g_hProcessHeap, 0, a2);
}
