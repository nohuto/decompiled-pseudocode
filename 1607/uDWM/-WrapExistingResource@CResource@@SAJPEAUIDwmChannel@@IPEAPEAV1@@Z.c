/*
 * XREFs of ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019A98
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180010274 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180015F50 (-Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     ?InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180020550 (-InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2B0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18003B8CC (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180045E84 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUIDwmChannel@@I@Z @ 0x180082140 (-SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUIDwmChannel@@I@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::WrapExistingResource(struct IDwmChannel *a1, unsigned int a2, struct CResource **a3)
{
  void *(*v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CResource *v7; // rax
  struct CResource *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  v6 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (struct CResource *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v7 = (struct CResource *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v6)(WPF::g_pProcessHeap, 32LL);
  v8 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = 0LL;
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &CResource::`vftable';
    *((_DWORD *)v7 + 6) = a2;
    *((_QWORD *)v7 + 2) = a1;
    v9 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x66u);
    }
    else
    {
      *a3 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x61u);
  }
  return v10;
}
