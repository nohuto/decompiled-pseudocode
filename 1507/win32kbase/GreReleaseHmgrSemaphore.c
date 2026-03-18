/*
 * XREFs of GreReleaseHmgrSemaphore @ 0x1C003A9F0
 * Callers:
 *     HmgAllocateObjectAttr @ 0x1C000C97C (HmgAllocateObjectAttr.c)
 *     GreIncQuotaCount @ 0x1C000FD20 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C0010C20 (GreDecQuotaCount.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00122D0 (HmgShareUnlockRemoveObject.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0025074 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     HmgFree @ 0x1C0035650 (HmgFree.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     HmgDecProcessHandleCount @ 0x1C00386E0 (HmgDecProcessHandleCount.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0039980 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     GreSetupDCAttributes @ 0x1C0042690 (GreSetupDCAttributes.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C005A7F8 (HmgFreeDcAttr.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005A9B8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C005BC00 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 *     HmgFreeObjectAttr @ 0x1C005C5F0 (HmgFreeObjectAttr.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     HmgAlloc @ 0x1C0067040 (HmgAlloc.c)
 *     GreMarkDCUnreadable @ 0x1C007E1F0 (GreMarkDCUnreadable.c)
 *     GreGetBrushColor @ 0x1C00AF390 (GreGetBrushColor.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B2E40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00B35E0 (HmgNextGarbageCollectible.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00B9908 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9A00 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C00BD5C0 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C00BD720 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall GreReleaseHmgrSemaphore(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(a1, &LockRelease, a3, ghsemHmgr);
  }
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    return PsLeavePriorityRegion(v3);
  }
  return result;
}
