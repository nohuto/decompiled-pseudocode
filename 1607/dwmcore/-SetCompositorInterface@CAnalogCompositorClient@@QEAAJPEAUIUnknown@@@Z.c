/*
 * XREFs of ?SetCompositorInterface@CAnalogCompositorClient@@QEAAJPEAUIUnknown@@@Z @ 0x180167704
 * Callers:
 *     ?Analog_SetCompositorInterface@@YAJPEAUIUnknown@@@Z @ 0x180165190 (-Analog_SetCompositorInterface@@YAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogCompositorClient::SetCompositorInterface(CAnalogCompositorClient *this, struct IUnknown *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int AnalogExclusiveTokenEvent; // eax

  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&xmmword_1801F03A0);
  v3 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int128 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_8f3dc001_1944_4bbc_a210_86b01c74783f,
         &xmmword_1801F03A0);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3Fu);
  }
  else
  {
    AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent(&hObject);
    if ( AnalogExclusiveTokenEvent < 0 )
    {
      v4 = AnalogExclusiveTokenEvent | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, AnalogExclusiveTokenEvent | 0x10000000, 0x45u);
    }
  }
  ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->Release)(a2);
  return v4;
}
