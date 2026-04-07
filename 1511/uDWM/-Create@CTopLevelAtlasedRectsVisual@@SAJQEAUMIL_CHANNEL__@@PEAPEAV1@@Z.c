/*
 * XREFs of ?Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180013848
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180014318 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18002A440 (-Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180020DF0 (-Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180020EA4 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::Create(
        struct MIL_CHANNEL__ *const a1,
        struct CTopLevelAtlasedRectsVisual **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CAtlasedRectsVisual *v5; // rax
  CAtlasedRectsVisual *v6; // rbx
  __int64 (__fastcall *v7)(CAtlasedRectsVisual *__hidden, struct MIL_CHANNEL__ *const); // rdi
  int v8; // eax
  unsigned int v9; // edi

  if ( !a2 )
  {
    v9 = -2147024809;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x20u);
    return v9;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CAtlasedRectsVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x138uLL);
  else
    v5 = (CAtlasedRectsVisual *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(
                                  WPF::g_pProcessHeap,
                                  312LL);
  v6 = v5;
  if ( v5 )
  {
    CAtlasedRectsVisual::CAtlasedRectsVisual(v5);
    *(_QWORD *)v6 = &CTopLevelAtlasedRectsVisual::`vftable';
  }
  if ( !v6 )
  {
    v9 = -2147024882;
    goto LABEL_16;
  }
  v7 = *(__int64 (__fastcall **)(CAtlasedRectsVisual *__hidden, struct MIL_CHANNEL__ *const))(*(_QWORD *)v6 + 8LL);
  if ( v7 == CAtlasedRectsVisual::Initialize )
    v8 = CAtlasedRectsVisual::Initialize(v6, a1);
  else
    v8 = v7(v6, a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x20u);
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
