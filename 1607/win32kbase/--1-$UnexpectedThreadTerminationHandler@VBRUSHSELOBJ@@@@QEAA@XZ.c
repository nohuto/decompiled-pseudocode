/*
 * XREFs of ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C001CB50 (GreCreateCompatibleDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00272C0 (--1DCOBJA@@QEAA@XZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     SetRectRgnIndirect @ 0x1C002F110 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C002F220 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     GreSetBitmapOwnerEx @ 0x1C00346C8 (GreSetBitmapOwnerEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     GreSetDCOrg @ 0x1C0035760 (GreSetDCOrg.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     GreSelectVisRgnShared @ 0x1C00382B0 (GreSelectVisRgnShared.c)
 *     GreIsRendering @ 0x1C0039210 (GreIsRendering.c)
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 *     GreGetBounds @ 0x1C0039760 (GreGetBounds.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     GreGetClipBox @ 0x1C0045240 (GreGetClipBox.c)
 *     bDeleteDCInternal @ 0x1C005A4D0 (bDeleteDCInternal.c)
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005B574 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C005B8D8 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C006C020 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     GreGetRgnBox @ 0x1C00749E0 (GreGetRgnBox.c)
 *     EngUnlockSurface @ 0x1C0074B90 (EngUnlockSurface.c)
 *     GreRectInRegion @ 0x1C0074D50 (GreRectInRegion.c)
 *     EngLockSurface @ 0x1C0075140 (EngLockSurface.c)
 *     GreGetDCOrgEx @ 0x1C0075B20 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C00767F0 (GreCopyVisRgn.c)
 *     GreCleanDC @ 0x1C0077530 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C0079D30 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C0085650 (NtGdiCreateMetafileDC.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00C6E78 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C00CA4B8 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(
        _QWORD *a1)
{
  PopThreadGuardedObject(a1);
}
