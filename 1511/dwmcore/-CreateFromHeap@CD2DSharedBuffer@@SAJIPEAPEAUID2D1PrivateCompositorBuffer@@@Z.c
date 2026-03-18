/*
 * XREFs of ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AA0A4
 * Callers:
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000B538 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180025620 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180127408 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180051FB0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromHeap(unsigned int a1, struct ID2D1PrivateCompositorBuffer **a2)
{
  unsigned int v4; // esi
  LPVOID (__fastcall *v5)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  LPVOID v6; // rax
  LPVOID v7; // rbp
  void *(__fastcall *v8)(WPF::ProcessHeapImpl *, size_t); // rdi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx

  v4 = 0;
  v5 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, a1);
  else
    v6 = v5(WPF::g_pProcessHeap, a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v8 == WPF::ProcessHeapImpl::AllocClear )
      v9 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
    else
      v9 = (_DWORD *)v8(WPF::g_pProcessHeap, 48LL);
    v10 = v9;
    if ( v9 )
    {
      v9[2] = 0;
      *(_QWORD *)v9 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
      *((_QWORD *)v9 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
      *((_QWORD *)v9 + 3) = v7;
      v9[8] = a1;
      *((_QWORD *)v9 + 5) = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v10);
      *a2 = (struct ID2D1PrivateCompositorBuffer *)(v10 + 4);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x63u);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LPVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v7);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Cu);
  }
  return v4;
}
