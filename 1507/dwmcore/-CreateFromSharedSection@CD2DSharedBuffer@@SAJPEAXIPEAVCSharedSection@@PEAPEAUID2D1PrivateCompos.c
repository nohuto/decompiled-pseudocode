/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180070F28
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000C9BC (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18006E850 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031330 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        void *a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  unsigned int v8; // edi
  void *(__fastcall *v9)(WPF::ProcessHeapImpl *, size_t); // rbp
  _DWORD *v10; // rax
  _DWORD *v11; // rbx

  v8 = 0;
  v9 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v9 == WPF::ProcessHeapImpl::AllocClear )
    v10 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
  else
    v10 = (_DWORD *)v9(WPF::g_pProcessHeap, 48LL);
  v11 = v10;
  if ( v10 )
  {
    v10[2] = 0;
    *(_QWORD *)v10 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v10 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
    *((_QWORD *)v10 + 3) = a1;
    v10[8] = a2;
    *((_QWORD *)v10 + 5) = a3;
    if ( a3 )
      CBitmapOfDeviceBitmaps::AddRef(a3);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v11);
    *a4 = (struct ID2D1PrivateCompositorBuffer *)(v11 + 4);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x40u);
  }
  return v8;
}
