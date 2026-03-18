/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x18014F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x18014F0FC (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::ReleaseResourcesForDisplayChange(
        CHwStereoFullScreenRenderTarget *this)
{
  CMILPoolResource *v2; // rcx

  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState((CHwStereoFullScreenRenderTarget *)((char *)this - 176));
  *((_QWORD *)this + 26) = 0LL;
  v2 = (CMILPoolResource *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    CMILPoolResource::Release(v2);
    *((_QWORD *)this + 27) = 0LL;
  }
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
