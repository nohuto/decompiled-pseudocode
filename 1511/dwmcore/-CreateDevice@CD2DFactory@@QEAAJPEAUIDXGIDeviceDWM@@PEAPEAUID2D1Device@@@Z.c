/*
 * XREFs of ?CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x1800AD110
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x180022270 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DFactory::CreateDevice(CD2DFactory *this, struct IDXGIDeviceDWM *a2, struct ID2D1Device **a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct IDXGIDeviceDWM *, GUID *, __int64 *))a2)(
         a2,
         &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE6u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Device **))(**((_QWORD **)this + 3) + 136LL))(
           *((_QWORD *)this + 3),
           v9,
           a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xEBu);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v6;
}
