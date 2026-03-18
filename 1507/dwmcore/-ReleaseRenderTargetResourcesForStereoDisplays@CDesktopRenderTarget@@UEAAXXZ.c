/*
 * XREFs of ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x1800EBA30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18004A980 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseRenderTargetResourcesForStereoDisplays(CDesktopRenderTarget *this)
{
  __int64 i; // rbx
  CHwndRenderTarget *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8 * i);
    if ( *(_BYTE *)(*((_QWORD *)v3 + 10) + 900LL) )
      CHwndRenderTarget::ReleaseResources(v3);
  }
}
