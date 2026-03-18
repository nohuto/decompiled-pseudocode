/*
 * XREFs of ?ReleaseRenderTargetResourcesForStereoDisplays@CDesktopRenderTarget@@UEAAXXZ @ 0x18011DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800744A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseRenderTargetResourcesForStereoDisplays(CDesktopRenderTarget *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 152) + 296LL) )
      CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(v3 + 112));
  }
}
