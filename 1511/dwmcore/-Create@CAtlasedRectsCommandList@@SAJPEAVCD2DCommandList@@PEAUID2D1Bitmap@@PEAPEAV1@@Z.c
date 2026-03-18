/*
 * XREFs of ?Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z @ 0x1800B0AF4
 * Callers:
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180025620 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CAtlasedRectsCommandList@@IEAA@PEAVCD2DCommandList@@PEAUID2D1Bitmap@@@Z @ 0x1800B0C44 (--0CAtlasedRectsCommandList@@IEAA@PEAVCD2DCommandList@@PEAUID2D1Bitmap@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsCommandList::Create(
        struct CD2DCommandList *a1,
        struct ID2D1Bitmap *a2,
        struct CAtlasedRectsCommandList **a3)
{
  unsigned int v6; // esi
  CAtlasedRectsCommandList *v7; // rax
  CBitmapOfDeviceBitmaps *v8; // rbx

  v6 = 0;
  v7 = (CAtlasedRectsCommandList *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     32LL);
  if ( v7 )
    v8 = CAtlasedRectsCommandList::CAtlasedRectsCommandList(v7, a1, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v8);
    *a3 = v8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x80u);
  }
  return v6;
}
