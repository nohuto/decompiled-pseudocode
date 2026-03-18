/*
 * XREFs of ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x180180540
 * Callers:
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x18017E5C8 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A66D8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x180173888 (-CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateSharedTexture(
        const struct DWM_TEXTURE2D_DESC *a1,
        __int64 a2,
        struct CD3DDeviceLevel1 *a3,
        void **a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  int v7; // eax
  struct ID3D11Texture2D *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  struct ID3D11Texture2D *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = CD3DDeviceLevel1::CreateSharedTexture(a3, a1, (struct D3D11_SUBRESOURCE_DATA *)a3, a4, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x78u);
  }
  else
  {
    v10 = CD3DVidMemOnlyTexture::CreateFromTexture(v12, 0, 0, 1, a3, a5);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7Fu);
    else
      *((_QWORD *)*a5 + 32) = *a4;
  }
  if ( v8 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v8->lpVtbl->Release)(v8);
  return v9;
}
