/*
 * XREFs of ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18010613C
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18000D6F0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18007CED0 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180027364 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180151CC8 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall HrCreateDestBitmap(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct IBitmapDest **a4)
{
  CSystemMemoryBitmap *v8; // rax
  CSystemMemoryBitmap *v9; // rsi
  unsigned int v10; // edi
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
    if ( v11 >= 0 )
    {
      v12 = (**(__int64 (__fastcall ***)(CSystemMemoryBitmap *, GUID *, struct IBitmapDest **))v9)(
              v9,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              a4);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x9Au);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x97u);
    }
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x91u);
  }
  return v10;
}
