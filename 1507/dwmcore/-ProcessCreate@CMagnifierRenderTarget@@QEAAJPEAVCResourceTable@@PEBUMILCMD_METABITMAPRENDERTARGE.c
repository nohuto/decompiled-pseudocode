/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x1800ECB94
 * Callers:
 *     ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x1800E2E2C (-MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1800EDC24 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET_CREATE *a3)
{
  int updated; // eax
  unsigned int v6; // ebx
  bool v7; // cc

  *((_QWORD *)this + 36) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((enum DXGI_FORMAT *)a3 + 5));
  v6 = updated;
  if ( updated >= 0 )
  {
    v7 = *((_DWORD *)this + 88) <= 6u;
    *((_DWORD *)this + 74) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 75) = *((_DWORD *)a3 + 7);
    if ( v7 )
    {
      *((_OWORD *)this + 22) = *((_OWORD *)a3 + 1);
      *((_OWORD *)this + 23) = *((_OWORD *)a3 + 2);
      *((_OWORD *)this + 24) = *((_OWORD *)a3 + 3);
      *((_OWORD *)this + 25) = *((_OWORD *)a3 + 4);
      *((_OWORD *)this + 26) = *((_OWORD *)a3 + 5);
      *((_OWORD *)this + 27) = *((_OWORD *)a3 + 6);
      *((_OWORD *)this + 28) = *((_OWORD *)a3 + 7);
      *((_OWORD *)this + 29) = *((_OWORD *)a3 + 8);
      *((_OWORD *)this + 30) = *((_OWORD *)a3 + 9);
      *((_OWORD *)this + 31) = *((_OWORD *)a3 + 10);
      *((_OWORD *)this + 32) = *((_OWORD *)a3 + 11);
      *((_OWORD *)this + 33) = *((_OWORD *)a3 + 12);
      *((_OWORD *)this + 34) = *((_OWORD *)a3 + 13);
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2E7u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2E0u);
  }
  return v6;
}
