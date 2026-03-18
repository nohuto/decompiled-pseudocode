/*
 * XREFs of ?GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18002B560
 * Callers:
 *     ?GetBitmapSource@CGdiSpriteBitmap@@WII@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800C03E0 (-GetBitmapSource@CGdiSpriteBitmap@@WII@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18002A18C (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetBitmapSource(
        CGdiSpriteBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  struct IBitmapSource **v3; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  *a2 = 0LL;
  v3 = a2;
  if ( *((_QWORD *)this + 29) )
  {
    v5 = CGdiSpriteBitmap::EnsureDeviceBitmapTextures((CGdiSpriteBitmap *)((char *)this - 8));
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x269u);
      return v6;
    }
    if ( (*((_BYTE *)this + 508) & 8) == 0 )
    {
      a2 = (struct IBitmapSource **)((char *)this + 544);
      v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 176LL;
      v10 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 184LL);
      if ( *v10 != v9 )
        __fastfail(3u);
      *a2 = (struct IBitmapSource *)v9;
      *((_QWORD *)this + 69) = v10;
      *v10 = a2;
      *(_QWORD *)(v9 + 8) = a2;
      *((_BYTE *)this + 508) |= 8u;
    }
  }
  *v3 = (struct IBitmapSource *)*((_QWORD *)this + 16);
  v7 = *((_QWORD *)this + 16);
  if ( v7 )
    (*(void (__fastcall **)(__int64, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)v7 + 8LL))(
      v7,
      a2,
      a3);
  return 0;
}
