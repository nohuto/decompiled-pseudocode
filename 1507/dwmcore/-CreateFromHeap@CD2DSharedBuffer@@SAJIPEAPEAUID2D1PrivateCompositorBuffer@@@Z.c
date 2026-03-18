/*
 * XREFs of ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18005E638
 * Callers:
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180011858 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180070418 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x18010BE3C (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromHeap(unsigned int a1, struct ID2D1PrivateCompositorBuffer **a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         a1);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           48LL);
    v7 = v6;
    if ( v6 )
    {
      *(_DWORD *)(v6 + 8) = 0;
      *(_QWORD *)v6 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
      *(_QWORD *)(v6 + 16) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
      *(_QWORD *)(v6 + 24) = v5;
      *(_DWORD *)(v6 + 32) = a1;
      *(_QWORD *)(v6 + 40) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v7);
      *a2 = (struct ID2D1PrivateCompositorBuffer *)(v7 + 16);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x63u);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Cu);
  }
  return v4;
}
