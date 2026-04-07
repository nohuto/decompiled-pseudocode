/*
 * XREFs of ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8
 * Callers:
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCVisual@@PEAV3@@Z @ 0x18000262C (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCVisual@@PEAV3@@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180002D70 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180004F10 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CAccentBlurBehind@@EEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180009100 (-Initialize@CAccentBlurBehind@@EEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000CB78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E848 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001D4E0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180029650 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800348C4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180037AD8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003CA5C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180045C14 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@QEAAJXZ @ 0x18004616C (-CreateRootVisual@CWindowList@@QEAAJXZ.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800466E4 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x180046A28 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047420 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180068604 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::Create(struct MIL_CHANNEL__ *const a1, CBaseObject ***a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rdi
  CVisual *v5; // rax
  CBaseObject **v6; // rbx
  __int64 (__fastcall *v7)(CBaseObject **, struct MIL_CHANNEL__ *const); // rdi
  int v8; // eax
  unsigned int v9; // edi

  if ( !a2 )
  {
    v9 = -2147024809;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1Eu);
    return v9;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x108uLL);
  else
    v5 = (CVisual *)v4(WPF::g_pProcessHeap, 264LL);
  if ( v5 )
    v6 = (CBaseObject **)CVisual::CVisual(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v9 = -2147024882;
    goto LABEL_17;
  }
  v7 = (__int64 (__fastcall *)(CBaseObject **, struct MIL_CHANNEL__ *const))*((_QWORD *)*v6 + 1);
  if ( v7 == CVisual::Initialize )
    v8 = CVisual::Initialize(v6, a1);
  else
    v8 = v7(v6, a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1Eu);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release((CBaseObject *)v6);
  return v9;
}
