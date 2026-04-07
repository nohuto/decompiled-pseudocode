/*
 * XREFs of ?WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800089A8
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002BF90 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800794D0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
 *     ?InitializeFromExistingResource@CVisual@@MEAAJQEAUMIL_CHANNEL__@@I@Z @ 0x18001E240 (-InitializeFromExistingResource@CVisual@@MEAAJQEAUMIL_CHANNEL__@@I@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::WrapExistingResource(struct MIL_CHANNEL__ *const a1, unsigned int a2, struct CVisual **a3)
{
  void *(*v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CVisual *v7; // rax
  CVisual *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  if ( a3 )
  {
    v6 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v6 == WPF::ProcessHeapImpl::AllocClear )
      v7 = (CVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x108uLL);
    else
      v7 = (CVisual *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v6)(WPF::g_pProcessHeap, 264LL);
    if ( v7 )
      v8 = CVisual::CVisual(v7);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v9 = CVisual::InitializeFromExistingResource(v8, a1, a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x54u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x52u);
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x4Eu);
  }
  return v10;
}
