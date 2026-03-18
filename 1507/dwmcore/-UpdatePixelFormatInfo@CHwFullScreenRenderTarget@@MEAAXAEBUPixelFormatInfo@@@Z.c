/*
 * XREFs of ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x18008E6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180014DF0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180082610 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
