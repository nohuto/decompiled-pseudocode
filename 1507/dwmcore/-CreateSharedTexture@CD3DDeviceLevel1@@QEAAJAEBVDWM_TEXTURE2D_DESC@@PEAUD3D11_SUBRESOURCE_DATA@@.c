/*
 * XREFs of ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x180134120
 * Callers:
 *     ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x180140AA0 (-CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 * Callees:
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180018EDC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180019328 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedTexture(
        CD3DDeviceLevel1 *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        void **a4,
        struct ID3D11Texture2D **a5)
{
  struct ID3D11Texture2D **v6; // rbx
  int Texture; // eax
  unsigned int v9; // edi
  int v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  v6 = a5;
  v13 = 0LL;
  Texture = CD3DDeviceLevel1::CreateTexture(this, a2, 0LL, a5);
  v9 = Texture;
  if ( Texture < 0 )
  {
    v12 = 2141;
LABEL_3:
    v10 = Texture;
    goto LABEL_10;
  }
  Texture = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))(*v6)->lpVtbl->QueryInterface)(
              *v6,
              &IID_IDXGIResource,
              &v13);
  v9 = Texture;
  if ( Texture < 0 )
  {
    v12 = 2144;
    goto LABEL_3;
  }
  Texture = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 64LL))(v13, a4);
  v9 = Texture;
  if ( Texture < 0 )
  {
    v12 = 2146;
    goto LABEL_3;
  }
  if ( *a4 )
    goto LABEL_11;
  v9 = -2003304307;
  v12 = 2155;
  v10 = -2003304307;
LABEL_10:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v12);
LABEL_11:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v9, 8u);
}
