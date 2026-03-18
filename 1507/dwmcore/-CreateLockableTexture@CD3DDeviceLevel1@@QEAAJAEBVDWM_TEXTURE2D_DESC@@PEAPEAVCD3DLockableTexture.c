/*
 * XREFs of ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x180133FF4
 * Callers:
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x180142870 (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 * Callees:
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180015A60 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180018EDC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18013CFDC (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
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
  v3 = (CD3DDeviceLevel1 *)((char *)this + 896);
  *a3 = 0LL;
  do
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct DWM_TEXTURE2D_DESC *, _QWORD, struct ID3D11Texture2D **))(**((_QWORD **)this + 68) + 40LL))(
           *((_QWORD *)this + 68),
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
      MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v8, 0x8E3u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v7, 0x8D6u);
  }
  if ( v10 )
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *))v10->lpVtbl->Release)(v10);
    v10 = 0LL;
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v7, 0);
}
