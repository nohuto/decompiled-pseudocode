/*
 * XREFs of ?Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z @ 0x180013A4C
 * Callers:
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180070418 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 * Callees:
 *     ??0CAtlasedRectsCommandList@@IEAA@PEAVCD2DCommandList@@PEAUID2D1Bitmap@@@Z @ 0x180013B94 (--0CAtlasedRectsCommandList@@IEAA@PEAVCD2DCommandList@@PEAUID2D1Bitmap@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
