/*
 * XREFs of ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18005F8DC
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B17DC (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x18004B740 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x18009DC48 (-Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B05A8 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Initialize(COcclusionContext *this)
{
  void *(__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v3; // rax
  CArrayBasedCoverageSet **v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  void (*v7)(void); // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v2 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v2 == WPF::ProcessHeapImpl::Alloc )
    v3 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
  else
    v3 = (_DWORD *)v2(WPF::g_pProcessHeap, 80uLL);
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
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Cu);
    return v6;
  }
  v4 = (CArrayBasedCoverageSet **)((char *)this + 248);
  v5 = CArrayBasedCoverageSet::Create((struct ICoverageSet **)this + 31);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = 46;
    goto LABEL_17;
  }
  v7 = *(void (**)(void))(*(_QWORD *)*v4 + 32LL);
  if ( (char *)v7 == (char *)CArrayBasedCoverageSet::Clear )
    CArrayBasedCoverageSet::Clear(*v4);
  else
    v7();
  v5 = CContentBounder::Create(*((struct CComposition **)this + 61), (struct CContentBounder **)this + 120);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = 50;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v9);
    return v6;
  }
  *((_DWORD *)this + 248) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 968, 40LL);
  return v6;
}
