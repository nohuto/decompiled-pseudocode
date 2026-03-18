/*
 * XREFs of ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x1801452B4
 * Callers:
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x180151140 (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180022A70 (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180028200 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18014CF7C (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateLockableTexture(
        CD3DDeviceLevel1 *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct CD3DLockableTexture **a3)
{
  CD3DResourceManager *v3; // r15
  int v7; // edi
  int v8; // eax
  struct ID3D11Texture2D *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (CD3DDeviceLevel1 *)((char *)this + 848);
  *a3 = 0LL;
  do
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct DWM_TEXTURE2D_DESC *, _QWORD, struct ID3D11Texture2D **))(**((_QWORD **)this + 69) + 40LL))(
           *((_QWORD *)this + 69),
           a2,
           0LL,
           &v10);
  while ( CD3DResourceManager::FreeSomeVideoMemory(v3, v7) );
  if ( v7 >= 0 )
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))v10->lpVtbl->SetPrivateData)(
      v10,
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 14),
      *((_QWORD *)a2 + 6));
    v8 = CD3DLockableTexture::Create(v3, v10, a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_180183F38, 0xAu, v8, 0x8BFu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180183F38, 0xAu, v7, 0x8B2u);
  }
  if ( v10 )
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *))v10->lpVtbl->Release)(v10);
    v10 = 0LL;
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v7, 0);
}
