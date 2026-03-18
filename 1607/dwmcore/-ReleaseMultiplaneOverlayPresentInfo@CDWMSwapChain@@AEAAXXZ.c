/*
 * XREFs of ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x18007A530
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18007AB28 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800BC8F0 (-SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(CDWMSwapChain *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx

  *((_DWORD *)this + 95) = 0;
  v1 = 0;
  for ( *((_QWORD *)this + 48) = 0LL; v1 < *((_DWORD *)this + 98); ++v1 )
  {
    v3 = *(_QWORD *)(((unsigned __int64)v1 << 7) + *((_QWORD *)this + 50) + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)this + 50) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 50) = 0LL;
  }
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_BYTE *)this + 414) = 0;
}
