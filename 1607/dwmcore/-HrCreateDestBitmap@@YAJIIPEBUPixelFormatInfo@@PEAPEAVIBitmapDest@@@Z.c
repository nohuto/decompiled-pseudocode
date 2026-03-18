/*
 * XREFs of ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18011C5E4
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180009330 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180010BF0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18017BBE0 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A1868 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180182234 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall HrCreateDestBitmap(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct IBitmapDest **a4)
{
  CSystemMemoryBitmap *v8; // rax
  CSystemMemoryBitmap *v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax

  *a4 = 0LL;
  v8 = (CSystemMemoryBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                280LL);
  if ( v8 )
    v9 = CSystemMemoryBitmap::CSystemMemoryBitmap(v8);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = CSystemMemoryBitmap::HrInit(v9, a1, a2, a3, 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x7Du);
    }
    else
    {
      v12 = (**(__int64 (__fastcall ***)(CSystemMemoryBitmap *, GUID *, struct IBitmapDest **))v9)(
              v9,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              a4);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x80u);
    }
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x77u);
  }
  return v10;
}
