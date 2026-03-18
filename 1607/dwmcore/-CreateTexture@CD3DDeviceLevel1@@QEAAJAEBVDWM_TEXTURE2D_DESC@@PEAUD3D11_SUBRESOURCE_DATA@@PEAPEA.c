/*
 * XREFs of ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800807F4
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800140F8 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180016FA4 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A6634 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B8844 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800B9400 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x180173888 (-CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007E9EC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18009F438 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateTexture(
        CD3DDeviceLevel1 *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        struct ID3D11Texture2D **a4)
{
  unsigned int v8; // edi
  struct ID3D11Texture2D *v9; // rcx
  struct ID3D11Texture2D *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  do
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct DWM_TEXTURE2D_DESC *, struct D3D11_SUBRESOURCE_DATA *, struct ID3D11Texture2D **))(**((_QWORD **)this + 71) + 40LL))(
           *((_QWORD *)this + 71),
           a2,
           a3,
           &v11);
  while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 880), v8) );
  if ( IsOOM(v8) && IsCompBuild() )
    NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
  v9 = v11;
  if ( v11 )
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))v11->lpVtbl->SetPrivateData)(
      v11,
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 14),
      *((_QWORD *)a2 + 6));
    v9 = v11;
  }
  *a4 = v9;
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v8, 7);
}
