/*
 * XREFs of ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x1C0010300 (ulGetNearestIndexFromColorref.c)
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     bDeletePalette @ 0x1C005A8C0 (bDeletePalette.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 *     GreValidateVisrgn @ 0x1C0067180 (GreValidateVisrgn.c)
 *     EngDeleteDriverObj @ 0x1C00BE530 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00BE650 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00BE6B0 (EngUnlockDriverObj.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HmgLockResultBase<DRVOBJ>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
