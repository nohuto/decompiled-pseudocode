/*
 * XREFs of ?GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18007F420
 * Callers:
 *     ?GetBitmapSource@CGdiSpriteBitmap@@WEA@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18009A6C0 (-GetBitmapSource@CGdiSpriteBitmap@@WEA@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18007DE44 (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetBitmapSource(
        CGdiSpriteBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  struct IBitmapSource **v3; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax

  *a2 = 0LL;
  v3 = a2;
  if ( *((_QWORD *)this + 20) )
  {
    v5 = CGdiSpriteBitmap::EnsureDeviceBitmapTextures((CGdiSpriteBitmap *)((char *)this - 8));
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x269u);
      return v6;
    }
    if ( (*((_BYTE *)this + 436) & 8) == 0 )
    {
      a2 = (struct IBitmapSource **)((char *)this + 472);
      v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 176LL;
      v10 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 184LL);
      *((_QWORD *)this + 59) = v9;
      *((_QWORD *)this + 60) = v10;
      if ( *v10 != v9 )
        __fastfail(3u);
      *v10 = a2;
      *(_QWORD *)(v9 + 8) = a2;
      *((_BYTE *)this + 436) |= 8u;
    }
  }
  *v3 = (struct IBitmapSource *)*((_QWORD *)this + 7);
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
    (*(void (__fastcall **)(__int64, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)v7 + 8LL))(
      v7,
      a2,
      a3);
  return 0;
}
