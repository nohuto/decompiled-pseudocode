/*
 * XREFs of ?SetCompositorInterface@CAnalogCompositorClient@@QEAAJPEAUIUnknown@@@Z @ 0x18013D6F8
 * Callers:
 *     ?Analog_SetCompositorInterface@@YAJPEAUIUnknown@@@Z @ 0x18013AFA0 (-Analog_SetCompositorInterface@@YAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ @ 0x1800014DC (-InternalRelease@-$ComPtr@UIAnalogCompositor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnalogCompositorClient::SetCompositorInterface(CAnalogCompositorClient *this, struct IUnknown *a2)
{
  int v3; // eax
  unsigned int v4; // esi
  int AnalogExclusiveTokenEvent; // eax

  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  Microsoft::WRL::ComPtr<IAnalogCompositor>::InternalRelease((__int64 *)&xmmword_1801A3FB0);
  v3 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int128 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_8f3dc001_1944_4bbc_a210_86b01c74783f,
         &xmmword_1801A3FB0);
  v4 = v3;
  if ( v3 >= 0 )
  {
    AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent(&hObject);
    if ( AnalogExclusiveTokenEvent < 0 )
    {
      v4 = AnalogExclusiveTokenEvent | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, AnalogExclusiveTokenEvent | 0x10000000, 0x45u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3Fu);
  }
  ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->Release)(a2);
  return v4;
}
