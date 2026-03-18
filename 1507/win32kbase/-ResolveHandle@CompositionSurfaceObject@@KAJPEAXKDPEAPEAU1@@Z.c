/*
 * XREFs of ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0
 * Callers:
 *     NtBindCompositionSurface @ 0x1C000FEB0 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C00113C0 (NtQueryCompositionSurfaceBinding.c)
 *     NtValidateCompositionSurfaceHandle @ 0x1C0012960 (NtValidateCompositionSurfaceHandle.c)
 *     NtUnBindCompositionSurface @ 0x1C0012A50 (NtUnBindCompositionSurface.c)
 *     NtSetCompositionSurfaceBufferCompositionMode @ 0x1C0015EA0 (NtSetCompositionSurfaceBufferCompositionMode.c)
 *     ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C001F680 (-SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C001F740 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C001F960 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C001FAD0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C004CBB8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00DED0C (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00DEDB0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C00DEF60 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00DEFF0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00DF1B0 (NtSetCompositionSurfaceOutOfFrameDirectFlipNotification.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00DF270 (NtSetCompositionSurfaceStatistics.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E014C (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004872C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct CompositionSurfaceObject **a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  LOBYTE(a3) = 1;
  result = CompositionObject::ResolveHandle(a1, a2, a3);
  if ( (int)result >= 0 )
    *a4 = 0LL;
  return result;
}
