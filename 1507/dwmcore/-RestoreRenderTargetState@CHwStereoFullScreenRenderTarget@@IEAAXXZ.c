/*
 * XREFs of ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x18013FEEC
 * Callers:
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x180139090 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x18013FEA0 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
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
