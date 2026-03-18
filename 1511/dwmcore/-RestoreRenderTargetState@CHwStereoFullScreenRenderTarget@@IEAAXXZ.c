/*
 * XREFs of ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x18014F0FC
 * Callers:
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x180149D00 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x18014F0B0 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(CHwStereoFullScreenRenderTarget *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 48);
  if ( v1 && *((_QWORD *)this + 21) != v1 )
    *((_QWORD *)this + 21) = v1;
  *((_DWORD *)this + 94) = 0;
}
