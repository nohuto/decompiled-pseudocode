/*
 * XREFs of ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180038330
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x1800273B0 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800362A8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001DC00 (-Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18001DC94 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::Create(struct IDwmChannel *a1, struct CTopLevelAtlasedRectsVisual **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  CAtlasedRectsVisual *v5; // rax
  CAtlasedRectsVisual *v6; // rbx
  __int64 (__fastcall *v7)(CAtlasedRectsVisual *, struct IDwmChannel *); // rax
  int v8; // eax
  unsigned int v9; // edi

  if ( !a2 )
  {
    v9 = -2147024809;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x20u);
    return v9;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CAtlasedRectsVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x138uLL);
  else
    v5 = (CAtlasedRectsVisual *)v4(WPF::g_pProcessHeap, 312LL);
  v6 = v5;
  if ( v5 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v5);
    *(_QWORD *)v6 = &CTopLevelAtlasedRectsVisual::`vftable';
  }
  if ( !v6 )
  {
    v9 = -2147024882;
    goto LABEL_17;
  }
  v7 = *(__int64 (__fastcall **)(CAtlasedRectsVisual *, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL);
  if ( v7 == CAtlasedRectsVisual::Initialize )
    v8 = CAtlasedRectsVisual::Initialize(v6, a1);
  else
    v8 = v7(v6, a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x20u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
