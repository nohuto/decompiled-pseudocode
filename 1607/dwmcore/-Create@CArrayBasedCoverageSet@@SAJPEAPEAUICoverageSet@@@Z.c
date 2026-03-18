/*
 * XREFs of ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x18009DC48
 * Callers:
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18005F8DC (-Initialize@COcclusionContext@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Create(struct ICoverageSet **a1)
{
  unsigned int v2; // edi
  void *(__fastcall *v3)(WPF::ProcessHeapImpl *, size_t); // rax
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
