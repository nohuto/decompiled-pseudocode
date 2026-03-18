/*
 * XREFs of ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180058074
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800ADA08 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x180036AD0 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800ACB9C (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x1800AD940 (-Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z.c)
 */

__int64 __fastcall COcclusionContext::Initialize(COcclusionContext *this)
{
  LPVOID (__fastcall *v2)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  _DWORD *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  void (__fastcall *v6)(CArrayBasedCoverageSet *); // rsi
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v2 == WPF::ProcessHeapImpl::Alloc )
    v3 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
  else
    v3 = (_DWORD *)v2(WPF::g_pProcessHeap, 80LL);
  if ( v3 )
  {
    v3[8] = 0;
    v3[9] = 0;
    *((_QWORD *)v3 + 6) = 0LL;
    v3[10] = 0;
    v3[14] = 0;
    v3[7] = 0;
    v3[1] = 0;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    v3[8] = 0;
  }
  *((_QWORD *)this + 6) = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Cu);
    return v5;
  }
  v4 = CArrayBasedCoverageSet::Create((struct ICoverageSet **)this + 12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 46;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v8);
    return v5;
  }
  v6 = *(void (__fastcall **)(CArrayBasedCoverageSet *))(**((_QWORD **)this + 12) + 32LL);
  if ( v6 == CArrayBasedCoverageSet::Clear )
    CArrayBasedCoverageSet::Clear(*((CArrayBasedCoverageSet **)this + 12));
  else
    v6(*((CArrayBasedCoverageSet **)this + 12));
  v4 = CContentBounder::Create(*((struct CComposition **)this + 42), (struct CContentBounder **)this + 91);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 50;
    goto LABEL_16;
  }
  *((_DWORD *)this + 190) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 736, 40LL);
  return v5;
}
