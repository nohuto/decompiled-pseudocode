/*
 * XREFs of ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18001D098
 * Callers:
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x180012054 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018EFE4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F6C8 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F7C4 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::CRegion::GetRectangleCount(FastRegion::CRegion *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( **(_DWORD **)this )
    return (8LL * (**(_DWORD **)this - 1)
          + *(int *)(*(_QWORD *)this + 12LL + 8LL * (**(_DWORD **)this - 1) + 4)
          - (__int64)*(int *)(*(_QWORD *)this + 16LL)) >> 3;
  return result;
}
