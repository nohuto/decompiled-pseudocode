/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38
 * Callers:
 *     GreSetPointer @ 0x1C003B8F4 (GreSetPointer.c)
 *     GrePtInSprite @ 0x1C003BB90 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C007E0CC (GreDwmGetSurfaceData.c)
 *     GreMovePointer @ 0x1C00882C0 (GreMovePointer.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C010EC68 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C014F3C4 (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0260DEC (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0261A78 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C027A420 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C027A6E4 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C027A8AC (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C027AA94 (vSetDevDragRectDPI.c)
 *     GreSaveScreenBits @ 0x1C0290CD0 (GreSaveScreenBits.c)
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
