/*
 * XREFs of GreAcquireHmgrSemaphore @ 0x1C00372A0
 * Callers:
 *     HmgFreeDcAttr @ 0x1C000B098 (HmgFreeDcAttr.c)
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     GreSetupDCAttributes @ 0x1C0025D50 (GreSetupDCAttributes.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0035AB4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0045540 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004918C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0 (pConvertDfbSurfaceToDibInternal.c)
 *     HmgAllocateObjectAttr @ 0x1C005D650 (HmgAllocateObjectAttr.c)
 *     GreMarkDCUnreadable @ 0x1C006D6A0 (GreMarkDCUnreadable.c)
 *     GreIncQuotaCount @ 0x1C0071BD0 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C0071C00 (GreDecQuotaCount.c)
 *     HmgFreeObjectAttr @ 0x1C0074420 (HmgFreeObjectAttr.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00759C0 (HmgShareUnlockRemoveObject.c)
 *     HmgAlloc @ 0x1C0080B30 (HmgAlloc.c)
 *     GreGetBrushColor @ 0x1C00B3030 (GreGetBrushColor.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B5A60 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgFree @ 0x1C00B5EB0 (HmgFree.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00BB31C (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB414 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C00BED30 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C00BEE90 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 */

__int64 __fastcall GreAcquireHmgrSemaphore(__int64 a1, __int64 a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  __int64 result; // rax

  v3 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(a1, a2);
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
