/*
 * XREFs of ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x1800F3F9C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B4D38 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1801089C0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180108A14 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET *a3)
{
  _OWORD *v3; // rdi
  unsigned int v6; // ebx
  int updated; // eax
  _OWORD *v8; // rdi

  v3 = (_OWORD *)((char *)this + 328);
  if ( *((_DWORD *)this + 82) <= 6u )
  {
    updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((enum DXGI_FORMAT *)a3 + 3));
    v6 = updated;
    if ( updated >= 0 )
    {
      *((_DWORD *)this + 68) = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 69) = *((_DWORD *)a3 + 5);
      *v3 = *(_OWORD *)((char *)a3 + 8);
      v3[1] = *(_OWORD *)((char *)a3 + 24);
      v3[2] = *(_OWORD *)((char *)a3 + 40);
      v3[3] = *(_OWORD *)((char *)a3 + 56);
      v3[4] = *(_OWORD *)((char *)a3 + 72);
      v3[5] = *(_OWORD *)((char *)a3 + 88);
      v3[6] = *(_OWORD *)((char *)a3 + 104);
      v8 = v3 + 8;
      *(v8 - 1) = *(_OWORD *)((char *)a3 + 120);
      *v8 = *(_OWORD *)((char *)a3 + 136);
      v8[1] = *(_OWORD *)((char *)a3 + 152);
      v8[2] = *(_OWORD *)((char *)a3 + 168);
      v8[3] = *(_OWORD *)((char *)a3 + 184);
      v8[4] = *(_OWORD *)((char *)a3 + 200);
      CMagnifierRenderTarget::StopSlicer(this);
      *((_DWORD *)this + 150) = 0;
      *((_DWORD *)this + 156) = 0;
      COffScreenRenderTarget::ReleaseRenderTargets(this);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x242u);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x23Fu);
  }
  return v6;
}
