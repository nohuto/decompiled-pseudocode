/*
 * XREFs of ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x180151FD0
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCompositionSurfaceInfo::HasSecondaryRepresentations(CCompositionSurfaceInfo *this)
{
  unsigned int v1; // esi
  bool result; // al
  unsigned int v3; // ebx
  __int64 v5; // rdi
  bool v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 84);
  result = 0;
  v3 = 0;
  v7 = 0;
  v6 = 0;
  if ( v1 )
  {
    v5 = 0LL;
    do
    {
      (***(void (__fastcall ****)(_QWORD, char *, bool *))(v5 + *((_QWORD *)this + 39)))(
        *(_QWORD *)(v5 + *((_QWORD *)this + 39)),
        &v7,
        &v6);
      result = v6;
      if ( v6 )
        break;
      ++v3;
      v5 += 8LL;
    }
    while ( v3 < v1 );
  }
  return result;
}
