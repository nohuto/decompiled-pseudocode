/*
 * XREFs of ?WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003EC0C
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002F300 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800810E0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 *     ?InitializeFromExistingResource@CVisual@@MEAAJQEAUMIL_CHANNEL__@@I@Z @ 0x180023650 (-InitializeFromExistingResource@CVisual@@MEAAJQEAUMIL_CHANNEL__@@I@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::WrapExistingResource(struct MIL_CHANNEL__ *const a1, int a2, struct CResource ***a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rdi
  CVisual *v7; // rax
  struct CResource **v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  if ( a3 )
  {
    v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v6 == WPF::ProcessHeapImpl::AllocClear )
      v7 = (CVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x108uLL);
    else
      v7 = (CVisual *)v6(WPF::g_pProcessHeap, 264LL);
    if ( v7 )
      v8 = (struct CResource **)CVisual::CVisual(v7);
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
        CBaseObject::Release((CBaseObject *)v8);
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
