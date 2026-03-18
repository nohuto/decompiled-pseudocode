/*
 * XREFs of ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x18010BCB4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x1801422A8 (-Reset@CFlipChain@@IEAAXXZ.c)
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
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 3);
  v5 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 88) = v5;
  *((_DWORD *)this + 89) = HasAlphaChannel(v5) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v6, (CFlipChain *)((char *)this + 360));
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0xF6u);
  return v8;
}
