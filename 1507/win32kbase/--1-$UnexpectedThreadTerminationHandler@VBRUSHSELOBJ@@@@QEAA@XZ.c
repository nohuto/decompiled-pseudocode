/*
 * XREFs of ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50
 * Callers:
 *     EngLockSurface @ 0x1C0008010 (EngLockSurface.c)
 *     EngUnlockSurface @ 0x1C0008310 (EngUnlockSurface.c)
 *     GreRectInRegion @ 0x1C000B8D0 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C000BED0 (GreGetRgnBox.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C000C498 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00251C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C003985C (--1DCOBJA@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     SetRectRgnIndirect @ 0x1C0041D40 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0042050 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042C0C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetBitmapOwner @ 0x1C0044330 (GreSetBitmapOwner.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
 *     bDeleteRegion @ 0x1C0044670 (bDeleteRegion.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     GreSetBitmapOwnerEx @ 0x1C00447D8 (GreSetBitmapOwnerEx.c)
 *     GreIsRendering @ 0x1C00546A0 (GreIsRendering.c)
 *     GreOffsetRgn @ 0x1C0054700 (GreOffsetRgn.c)
 *     GreSetDCOrg @ 0x1C00547B0 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C0054850 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C0054B70 (GreGetDCOrgEx.c)
 *     GreGetBounds @ 0x1C0054F60 (GreGetBounds.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C005E45C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     GreSelectVisRgnShared @ 0x1C0069360 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(
        _QWORD *a1)
{
  PopThreadGuardedObject(a1);
}
