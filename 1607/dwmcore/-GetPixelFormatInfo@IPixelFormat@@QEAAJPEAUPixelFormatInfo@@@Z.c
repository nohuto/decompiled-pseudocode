/*
 * XREFs of ?GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z @ 0x1800B74B4
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180009330 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x18002DA30 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IPixelFormat::GetPixelFormatInfo(IPixelFormat *this, struct PixelFormatInfo *a2)
{
  int v4; // esi
  int v5; // eax

  v4 = (*(__int64 (__fastcall **)(IPixelFormat *))(*(_QWORD *)this + 24LL))(this);
  if ( v4 >= 0 )
  {
    *((_DWORD *)a2 + 1) = (*(__int64 (__fastcall **)(IPixelFormat *))(*(_QWORD *)this + 32LL))(this);
    v5 = (*(__int64 (__fastcall **)(IPixelFormat *))(*(_QWORD *)this + 40LL))(this);
    *((_DWORD *)a2 + 2) = v5;
    if ( v5 == 0x7FFFFFFF )
      return (unsigned int)(*(__int64 (__fastcall **)(IPixelFormat *, char *))(*(_QWORD *)this + 48LL))(
                             this,
                             (char *)a2 + 16);
    else
      *((_QWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)v4;
}
