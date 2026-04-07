/*
 * XREFs of ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18004144C
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002FF10 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800818E0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 *     ?InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180020550 (-InitializeFromExistingResource@CVisual@@MEAAJPEAUIDwmChannel@@I@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::WrapExistingResource(struct IDwmChannel *a1, unsigned int a2, struct CResource ***a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rax
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x54u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x52u);
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4Eu);
  }
  return v10;
}
