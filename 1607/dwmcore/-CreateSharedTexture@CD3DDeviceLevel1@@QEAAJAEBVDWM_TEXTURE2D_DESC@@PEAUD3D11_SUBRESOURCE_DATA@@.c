/*
 * XREFs of ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x180173888
 * Callers:
 *     ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x180180540 (-CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007E9EC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800807F4 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedTexture(
        CD3DDeviceLevel1 *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        void **a4,
        struct ID3D11Texture2D **a5)
{
  struct ID3D11Texture2D **v6; // rsi
  int Texture; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  v6 = a5;
  v13 = 0LL;
  Texture = CD3DDeviceLevel1::CreateTexture(this, a2, 0LL, a5);
  v9 = Texture;
  if ( Texture < 0 )
  {
    if ( IsOOM(Texture) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8ABu);
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))(*v6)->lpVtbl->QueryInterface)(
            *v6,
            &IID_IDXGIResource,
            &v13);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( IsOOM(v10) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8AEu);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 64LL))(v13, a4);
      v9 = v11;
      if ( v11 < 0 )
      {
        if ( IsOOM(v11) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8B0u);
      }
      else if ( !*a4 )
      {
        v9 = -2003304307;
        if ( IsOOM(-2003304307) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x8B9u);
      }
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v9, 7);
}
