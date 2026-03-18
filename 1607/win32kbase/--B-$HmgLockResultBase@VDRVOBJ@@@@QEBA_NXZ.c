/*
 * XREFs of ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218
 * Callers:
 *     GreValidateVisrgn @ 0x1C00209DC (GreValidateVisrgn.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     bDeletePalette @ 0x1C005C930 (bDeletePalette.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0075F70 (GreLockVisRgnSharedOrExclusive.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0076F80 (ulGetNearestIndexFromColorref.c)
 *     EngDeleteDriverObj @ 0x1C00CBCF0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00CBE10 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00CBE70 (EngUnlockDriverObj.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HmgLockResultBase<DRVOBJ>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
