/*
 * XREFs of ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x1800F4704
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180125BC4 (-Reset@CFlipChain@@IEAAXXZ.c)
 */

__int64 __fastcall CFlipChain::ProcessCreate(
        CFlipChain *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_CREATE *a3)
{
  int v5; // ecx
  int v6; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v8; // ebx

  CFlipChain::Reset(this);
  *((_DWORD *)this + 14) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 15) = *((_DWORD *)a3 + 3);
  v5 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 70) = v5;
  *((_DWORD *)this + 71) = HasAlphaChannel(v5) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v6, (CFlipChain *)((char *)this + 288));
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0xF6u);
  return v8;
}
