/*
 * XREFs of ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18001D004
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000514C (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800060A0 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?InitializeFromExistingResource@CVisual@@MEAAJQEAUMIL_CHANNEL__@@I@Z @ 0x180023650 (-InitializeFromExistingResource@CVisual@@MEAAJQEAUMIL_CHANNEL__@@I@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E470 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E890 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CClientArea@@MEAAJQEAUMIL_CHANNEL__@@I@Z @ 0x18003D3A0 (-Initialize@CClientArea@@MEAAJQEAUMIL_CHANNEL__@@I@Z.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180044774 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUMIL_CHANNEL__@@I@Z @ 0x180081A80 (-SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUMIL_CHANNEL__@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CResource::WrapExistingResource(struct MIL_CHANNEL__ *const a1, int a2, struct CResource **a3)
{
  void *(*v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  struct CResource *v6; // rax
  struct CResource *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v5 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = (struct CResource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v6 = (struct CResource *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v5)(WPF::g_pProcessHeap, 32LL);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = 0LL;
    *((_DWORD *)v6 + 2) = 1;
    *(_QWORD *)v6 = &CResource::`vftable';
    *((_DWORD *)v6 + 6) = v11;
    *((_QWORD *)v6 + 2) = a1;
    v8 = MilResource_CreateOrAddRefOnChannel(a1, 0LL, &v11);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x6Bu);
    }
    else
    {
      *a3 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x61u);
  }
  return v9;
}
