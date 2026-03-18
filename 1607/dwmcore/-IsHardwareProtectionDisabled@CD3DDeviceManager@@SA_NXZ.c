/*
 * XREFs of ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180034308
 * Callers:
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180035098 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x18003BFFC (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18009F8C4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x180172DE4 (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 CD3DDeviceManager::IsHardwareProtectionDisabled(void)
{
  __int64 result; // rax

  result = 0LL;
  if ( CD3DDeviceManager::s_bHwProtectionTempDisabled || CD3DDeviceManager::s_bHwProtectionTeardown )
    return 1LL;
  return result;
}
