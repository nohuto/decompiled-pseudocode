/*
 * XREFs of MiSectionControlArea @ 0x1400627B0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MmCreateSystemSection @ 0x140019F4C (MmCreateSystemSection.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MiCountSystemImageCommitment @ 0x14011FFB4 (MiCountSystemImageCommitment.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MiMapViewInSystemSpace @ 0x1403C7CC0 (MiMapViewInSystemSpace.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiChargeSystemImageCommitment @ 0x1403CC2F8 (MiChargeSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 *     MiCreateSectionForDriver @ 0x1403CC5FC (MiCreateSectionForDriver.c)
 *     MiMapSystemImage @ 0x1403CC804 (MiMapSystemImage.c)
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     MiObtainSectionForDriver @ 0x1403CD7E8 (MiObtainSectionForDriver.c)
 *     MiFreeInitializationCode @ 0x1403CDAD4 (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     NtCreateSection @ 0x1403F7DD0 (NtCreateSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 *     MiSectionOpen @ 0x14041BEDC (MiSectionOpen.c)
 *     MiSectionClose @ 0x14041BEFC (MiSectionClose.c)
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     PsConvertToGuiThread @ 0x140448CAC (PsConvertToGuiThread.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     MmGetFileObjectForSection @ 0x14044E974 (MmGetFileObjectForSection.c)
 *     MmGetSectionInformation @ 0x14044F1E4 (MmGetSectionInformation.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 *     MmCheckImageMapping @ 0x140461E38 (MmCheckImageMapping.c)
 *     MiComputeProcessUserVa @ 0x140463054 (MiComputeProcessUserVa.c)
 *     MiSectionDelete @ 0x14047B400 (MiSectionDelete.c)
 *     NtMapViewOfSection @ 0x140493120 (NtMapViewOfSection.c)
 *     PsReferenceProcessFilePointer @ 0x1404A995C (PsReferenceProcessFilePointer.c)
 *     MiReturnSystemImageCommitment @ 0x1404C616C (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x140506EA0 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x140520C1C (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x140621FD8 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x140623CDC (MiLogSectionObjectEvent.c)
 *     MmSectionToSectionObjectPointers @ 0x140625FC0 (MmSectionToSectionObjectPointers.c)
 *     MmGetSectionStrongImageReference @ 0x14062CA98 (MmGetSectionStrongImageReference.c)
 *     MiInitializeCfg @ 0x14074DF4C (MiInitializeCfg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSectionControlArea(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( (result & 1) != 0 )
    return *(_QWORD *)(*(_QWORD *)((result & 0xFFFFFFFFFFFFFFFCuLL) + 40) + 16LL);
  if ( (result & 2) != 0 )
    return **(_QWORD **)((result & 0xFFFFFFFFFFFFFFFCuLL) + 40);
  return result;
}
