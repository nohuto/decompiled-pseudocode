/*
 * XREFs of ?Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z @ 0x1800B38CC
 * Callers:
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x18009BE18 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsCommandList::Create(
        struct CD2DCommandList *a1,
        struct ID2D1Bitmap *a2,
        struct CAtlasedRectsCommandList **a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  CBitmapOfDeviceBitmaps *v8; // rbx

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v8 = (CBitmapOfDeviceBitmaps *)v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 8) = 0;
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)v7 = &CAtlasedRectsCommandList::`vftable';
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)a1 + 8LL))(a1);
    *((_QWORD *)v8 + 2) = a2;
  }
  else
  {
    v8 = 0LL;
  }
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
