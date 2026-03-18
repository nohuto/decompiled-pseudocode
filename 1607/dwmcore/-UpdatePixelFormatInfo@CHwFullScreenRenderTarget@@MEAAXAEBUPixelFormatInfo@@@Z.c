/*
 * XREFs of ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x18007B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18002DAE0 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180079CB0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwFullScreenRenderTarget::UpdatePixelFormatInfo(
        CHwFullScreenRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  __int64 v3; // rcx
  CD3DSurface *v5; // rcx
  void (__fastcall ***v6)(_QWORD, CD3DSurface *); // r8
  __int64 *v7; // rbx
  __int64 v8; // rbx
  unsigned int v9; // eax
  CD3DSurface *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = *((_QWORD *)this + 27);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) )
  {
    (*(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, _QWORD, CD3DSurface **))(*(_QWORD *)this + 232LL))(
      this,
      0LL,
      0LL,
      &v10);
    CD3DSurface::UpdatePixelFormatInfo(v10, a2);
  }
  CHwSurfaceRenderTarget::UpdatePixelFormatInfo(this, a2);
  v5 = v10;
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
  {
    v6 = (void (__fastcall ***)(_QWORD, CD3DSurface *))*((_QWORD *)v5 + 2);
    if ( v6 )
      (**v6)(*((_QWORD *)v5 + 2), v5);
    else
      (*(void (__fastcall **)(CD3DSurface *, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
  }
  v7 = (__int64 *)*((_QWORD *)this + 45);
  if ( v7 )
  {
    v8 = *v7;
    v9 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 32LL))(this);
    (*(void (__fastcall **)(_QWORD, _QWORD))(v8 + 152))(*((_QWORD *)this + 45), v9);
  }
}
