/*
 * XREFs of ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800194AC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x180019100 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015D608 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DD38 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DE28 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
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
