/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630
 * Callers:
 *     GrePtInSprite @ 0x1C0012198 (GrePtInSprite.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreMovePointer @ 0x1C0040870 (GreMovePointer.c)
 *     GreSetPointer @ 0x1C00913EC (GreSetPointer.c)
 *     GreDwmGetSurfaceData @ 0x1C00F015C (GreDwmGetSurfaceData.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C01319F4 (GreDwmCreatedBitmapRemotingOutput.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C0152B5C (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C02625BC (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0263280 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C027B430 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C027B6F4 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C027B8BC (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C027BAA4 (vSetDevDragRectDPI.c)
 *     GreSaveScreenBits @ 0x1C0290ED8 (GreSaveScreenBits.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029AD48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
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
