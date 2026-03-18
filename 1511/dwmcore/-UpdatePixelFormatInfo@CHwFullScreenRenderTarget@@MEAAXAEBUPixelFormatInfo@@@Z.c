/*
 * XREFs of ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x180074590
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18002A9A0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18008C6C0 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwFullScreenRenderTarget::UpdatePixelFormatInfo(
        CHwFullScreenRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  __int64 v2; // rdi
  CD3DSurface *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 26);
  v5 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2) )
  {
    (*(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, _QWORD, CD3DSurface **))(*(_QWORD *)this + 216LL))(
      this,
      0LL,
      0LL,
      &v5);
    CD3DSurface::UpdatePixelFormatInfo(v5, a2);
  }
  CHwSurfaceRenderTarget::UpdatePixelFormatInfo(this, a2);
  if ( v5 )
    CMILPoolResource::Release(v5);
}
