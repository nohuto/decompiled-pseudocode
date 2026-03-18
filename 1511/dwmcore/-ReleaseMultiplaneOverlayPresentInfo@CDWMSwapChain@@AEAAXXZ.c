/*
 * XREFs of ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x180073210
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x180073A58 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800B9570 (-SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(CDWMSwapChain *this)
{
  unsigned int i; // edi
  __int64 v3; // r14

  for ( i = 0; i < *((_DWORD *)this + 95); ++i )
  {
    v3 = *(_QWORD *)(((unsigned __int64)i << 7) + *((_QWORD *)this + 48) + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)this + 48) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 48));
    *((_QWORD *)this + 48) = 0LL;
  }
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 95) = 0;
  *((_BYTE *)this + 398) = 0;
}
