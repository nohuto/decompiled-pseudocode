/*
 * XREFs of ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x18008BD34
 * Callers:
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x18008BE04 (--1CDWMSwapChain@@MEAA@XZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18013C010 (-SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(CDWMSwapChain *this)
{
  unsigned int i; // edi
  __int64 v3; // r14

  for ( i = 0; i < *((_DWORD *)this + 100); ++i )
  {
    v3 = *(_QWORD *)(((unsigned __int64)i << 7) + *((_QWORD *)this + 51) + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)this + 51) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 51));
    *((_QWORD *)this + 51) = 0LL;
  }
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 100) = 0;
  *((_BYTE *)this + 398) = 0;
}
