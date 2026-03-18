/*
 * XREFs of ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180043D10
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::PopTarget(
        CSwRenderTargetGetBounds *this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  struct IRenderTarget *v3; // rdi
  char *v7; // rbx

  --*((_DWORD *)this + 6);
  v3 = 0LL;
  if ( a3 )
  {
    if ( *((_DWORD *)this + 6) )
    {
      v7 = (char *)this - 24;
      CBitmapOfDeviceBitmaps::AddRef((CSwRenderTargetGetBounds *)((char *)this - 24));
      if ( v7 )
        v3 = (CSwRenderTargetGetBounds *)((char *)this - 8);
      *a3 = v3;
    }
    else
    {
      *a3 = 0LL;
    }
  }
  return 0LL;
}
