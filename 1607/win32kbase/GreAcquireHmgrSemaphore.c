/*
 * XREFs of GreAcquireHmgrSemaphore @ 0x1C0025AB0
 * Callers:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     HmgAllocateDcAttr @ 0x1C002498C (HmgAllocateDcAttr.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0025BA0 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     HmgNextOwned @ 0x1C002A4F0 (HmgNextOwned.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     HmgFreeDcAttr @ 0x1C0034278 (HmgFreeDcAttr.c)
 *     HmgIncProcessHandleCount @ 0x1C0036580 (HmgIncProcessHandleCount.c)
 *     HmgFree @ 0x1C0036630 (HmgFree.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0059CA0 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     HmgFreeObjectAttr @ 0x1C005AF54 (HmgFreeObjectAttr.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C005BDE0 (HmgAllocateObjectAttr.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005CA28 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 *     GreIncQuotaCount @ 0x1C0076740 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C0076770 (GreDecQuotaCount.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0078E80 (HmgShareUnlockRemoveObject.c)
 *     GreMarkDCUnreadable @ 0x1C0082754 (GreMarkDCUnreadable.c)
 *     GreGetBrushColor @ 0x1C00BD440 (GreGetBrushColor.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00C0400 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00C0B98 (HmgNextGarbageCollectible.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00C7020 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C7118 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C00CAA00 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C00CAB60 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 */

__int64 __fastcall GreAcquireHmgrSemaphore(__int64 a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  __int64 result; // rax

  v3 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(a1);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
    LODWORD(v3) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pqz(a1, a2, a3, (_DWORD)v3, 16, (__int64)L"ghsemHmgr");
  }
  return result;
}
