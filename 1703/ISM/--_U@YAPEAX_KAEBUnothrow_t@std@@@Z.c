/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E0BC
 * Callers:
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180056210 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x180065BBC (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     SpatialInteractionDevices::ParseButton @ 0x180066B98 (SpatialInteractionDevices--ParseButton.c)
 *     EnumerateDevices @ 0x180076FD8 (EnumerateDevices.c)
 *     ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180077BA4 (-PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionControlle.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800890B0 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x180089370 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
