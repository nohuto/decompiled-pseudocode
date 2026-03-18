/*
 * XREFs of ?Initialize@COcclusionContext@@AEAAJXZ @ 0x1800221EC
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005ED78 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005E378 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x18005ECCC (-Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::Initialize(COcclusionContext *this)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 56) = 0;
    *(_DWORD *)(v2 + 28) = 0;
    *(_DWORD *)(v2 + 4) = 0;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_DWORD *)(v2 + 32) = 0;
  }
  *((_QWORD *)this + 6) = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Cu);
    return v4;
  }
  v3 = CArrayBasedCoverageSet::Create((struct ICoverageSet **)this + 12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 46;
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v6);
    return v4;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
  v3 = CContentBounder::Create(*((struct CComposition **)this + 42), (struct CContentBounder **)this + 91);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 50;
    goto LABEL_10;
  }
  *((_DWORD *)this + 190) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 736, 40LL);
  return v4;
}
