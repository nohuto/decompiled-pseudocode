/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x18017FA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x18017FA9C (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::ReleaseResourcesForDisplayChange(
        CHwStereoFullScreenRenderTarget *this)
{
  CMILPoolResource *v2; // rcx

  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState((CHwStereoFullScreenRenderTarget *)((char *)this - 176));
  *((_QWORD *)this + 28) = 0LL;
  v2 = (CMILPoolResource *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    CMILPoolResource::Release(v2);
    *((_QWORD *)this + 29) = 0LL;
  }
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
