/*
 * XREFs of ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180022A70
 * Callers:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180011778 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x180011C10 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800229E4 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180022FC4 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180024850 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180024924 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x1801452B4 (-CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture.c)
 *     ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x1801453E0 (-CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180145A54 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18014AF0C (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::TranslateDriverError(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( a2 == -2005270496 && !*(_BYTE *)(a1 + 1035) )
  {
    CD3DRegistryDatabase::HandleAdapterUnexpectedError(*(struct _LUID *)(a1 + 592));
    *(_BYTE *)(a1 + 1035) = 1;
  }
  if ( (unsigned int)TranslateDXGIorD3DErrorInContext(v4, a3, &v7) )
    v4 = v7;
  if ( v4 == -2003304307 )
    *(_DWORD *)(a1 + 800) = -2003304307;
  return v4;
}
