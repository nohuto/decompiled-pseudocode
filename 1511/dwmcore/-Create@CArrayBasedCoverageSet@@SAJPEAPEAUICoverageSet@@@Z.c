/*
 * XREFs of ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x1800AD940
 * Callers:
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180058074 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180051FB0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Create(struct ICoverageSet **a1)
{
  unsigned int v2; // edi
  void *(__fastcall *v3)(WPF::ProcessHeapImpl *, size_t); // rsi
  char *v4; // rax
  char *v5; // rbx

  v2 = 0;
  v3 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v3 == WPF::ProcessHeapImpl::AllocClear )
    v4 = (char *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x100uLL);
  else
    v4 = (char *)v3(WPF::g_pProcessHeap, 256LL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 4) = 0;
    *(_QWORD *)v4 = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
    *((_QWORD *)v4 + 1) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v4 + 3) = v4 + 56;
    *((_QWORD *)v4 + 4) = v4 + 56;
    *((_DWORD *)v4 + 10) = 10;
    *(_QWORD *)(v4 + 44) = 10LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v5 + 8));
    *a1 = (struct ICoverageSet *)v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v2;
}
