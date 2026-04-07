/*
 * XREFs of ?Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003EFD8
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x180014840 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027130 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006EE8C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x18008F850 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180015800 (-Initialize@CAccent@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ??0CAccent@@IEAA@XZ @ 0x18001585C (--0CAccent@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAccent::Create(struct MIL_CHANNEL__ *const a1, struct CAccent **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rdi
  CAccent *v5; // rax
  CAccent *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x18u);
    return v8;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CAccent *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x250uLL);
  else
    v5 = (CAccent *)v4(WPF::g_pProcessHeap, 592LL);
  if ( v5 )
    v6 = CAccent::CAccent(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_15;
  }
  v7 = CAccent::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x18u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
