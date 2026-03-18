/*
 * XREFs of ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18000D3FC
 * Callers:
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x18000D154 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x1800EEE90 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@UPageInPixels@Co.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x1800FE324 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z @ 0x18014F498 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJAEBVCRegion@@_N@Z.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180088DA4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::BeginIterator(_DWORD **a1, __int64 a2)
{
  __int64 v2; // r10
  _DWORD *v3; // rdx
  FastRegion::Internal::CRgnData *v4; // rcx
  __int64 v5; // rdx

  v2 = a2;
  v3 = *a1;
  *(_QWORD *)v2 = *a1;
  if ( *v3 )
  {
    *(_QWORD *)(v2 + 8) = &v3[2 * *v3 + 1];
    *(_QWORD *)(v2 + 16) = v3 + 3;
    v4 = (FastRegion::Internal::CRgnData *)((char *)v3 + v3[4] + 12);
    *(_DWORD *)(v2 + 32) = 0;
    *(_QWORD *)(v2 + 24) = v4;
    v5 = ((__int64)v3 + (int)v3[6] - (_QWORD)v4 + 20) >> 3;
    *(_DWORD *)(v2 + 36) = v5;
    if ( (int)v5 <= 0 )
      FastRegion::Internal::CRgnData::StepIterator(v4, (struct FastRegion::CRegion::Iterator *)v2);
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  return v2;
}
