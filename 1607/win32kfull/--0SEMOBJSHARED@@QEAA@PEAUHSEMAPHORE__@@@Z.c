/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GrePtInSprite @ 0x1C0052EA4 (GrePtInSprite.c)
 *     GreSetPointer @ 0x1C005DA90 (GreSetPointer.c)
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     GreMovePointer @ 0x1C00DB180 (GreMovePointer.c)
 *     GreDwmGetSurfaceData @ 0x1C0115708 (GreDwmGetSurfaceData.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C012EAF8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C0154DB4 (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C025E70C (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025F3CC (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C0278970 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0278C38 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0278E04 (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C0278FE8 (vSetDevDragRectDPI.c)
 *     GreSaveScreenBits @ 0x1C028FA38 (GreSaveScreenBits.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A324 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphoreSharedInternal(a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  return this;
}
