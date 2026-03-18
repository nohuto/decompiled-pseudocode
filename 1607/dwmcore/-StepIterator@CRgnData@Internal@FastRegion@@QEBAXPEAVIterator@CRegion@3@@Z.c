/*
 * XREFs of ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B6C0
 * Callers:
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x180012054 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18001D254 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z @ 0x18006F960 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18009A0C4 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_C_ea_18009A0C4.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x1801266D4 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18012CA04 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@UPageInPixels@Co.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x180131604 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x18018F8F0 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::StepIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx

  if ( ++*((_DWORD *)a2 + 8) >= *((_DWORD *)a2 + 9) )
  {
    while ( 1 )
    {
      *((_QWORD *)a2 + 2) += 8LL;
      v3 = *((_QWORD *)a2 + 2);
      v4 = v3 + *(int *)(v3 + 4);
      *((_QWORD *)a2 + 3) = v4;
      v5 = (__int64)(v3 + 8 + *(int *)(v3 + 12) - v4) >> 3;
      *((_DWORD *)a2 + 9) = v5;
      if ( (_DWORD)v5 )
        break;
      if ( v3 >= *((_QWORD *)a2 + 1) )
        return;
    }
    *((_DWORD *)a2 + 8) = 0;
  }
}
