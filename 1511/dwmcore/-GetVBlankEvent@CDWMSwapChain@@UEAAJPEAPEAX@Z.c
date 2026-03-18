/*
 * XREFs of ?GetVBlankEvent@CDWMSwapChain@@UEAAJPEAPEAX@Z @ 0x1800732F0
 * Callers:
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x180081650 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMSwapChain::GetVBlankEvent(CDWMSwapChain *this, void **a2)
{
  *a2 = (void *)*((_QWORD *)this + 43);
  return 0LL;
}
