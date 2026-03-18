/*
 * XREFs of MiSectionControlArea @ 0x14002C4D0
 * Callers:
 *     MmMapViewInSystemCache @ 0x140018A20 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MmCreateSystemSection @ 0x1400821E0 (MmCreateSystemSection.c)
 *     MiSetSystemCodeProtection @ 0x1400FE0F4 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiCountSystemImageCommitment @ 0x14012CA50 (MiCountSystemImageCommitment.c)
 *     MiAllowImageMap @ 0x14042A544 (MiAllowImageMap.c)
 *     NtCreateSection @ 0x14042C990 (NtCreateSection.c)
 *     MiSectionDelete @ 0x14042E240 (MiSectionDelete.c)
 *     MiSectionClose @ 0x14042E2D8 (MiSectionClose.c)
 *     MiSectionOpen @ 0x14042E3AC (MiSectionOpen.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042F650 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfSection @ 0x140433010 (MiMapViewOfSection.c)
 *     NtMapViewOfSection @ 0x140436740 (NtMapViewOfSection.c)
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     PsConvertToGuiThread @ 0x14045D0C0 (PsConvertToGuiThread.c)
 *     MmCreateSpecialImageSection @ 0x14045DF70 (MmCreateSpecialImageSection.c)
 *     MiComputeProcessUserVa @ 0x14046DC4C (MiComputeProcessUserVa.c)
 *     PsReferenceProcessFilePointer @ 0x14046EFC0 (PsReferenceProcessFilePointer.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     MmGetFileObjectForSection @ 0x14047144C (MmGetFileObjectForSection.c)
 *     MmGetSectionInformation @ 0x140471C08 (MmGetSectionInformation.c)
 *     MiCreateSectionForDriver @ 0x14047D2C8 (MiCreateSectionForDriver.c)
 *     MiFreeInitializationCode @ 0x14047D5E8 (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x140482408 (MiConstructLoaderEntry.c)
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     MmChangeImageProtection @ 0x140483178 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140483D4C (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140484174 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x140484528 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1404CCEDC (MiGetSystemAddressForImage.c)
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 *     MiChargeSystemImageCommitment @ 0x1404EDFD0 (MiChargeSystemImageCommitment.c)
 *     MmCheckImageMapping @ 0x14051C05C (MmCheckImageMapping.c)
 *     MmExtendSection @ 0x1405218EC (MmExtendSection.c)
 *     MiMapViewInSystemSpace @ 0x140525ED4 (MiMapViewInSystemSpace.c)
 *     MiCompactServiceTable @ 0x14053A248 (MiCompactServiceTable.c)
 *     MiReturnSystemImageCommitment @ 0x140547384 (MiReturnSystemImageCommitment.c)
 *     MiWriteProtectSystemImages @ 0x140553C60 (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x140656C18 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x14065930C (MiLogSectionObjectEvent.c)
 *     MmSectionToSectionObjectPointers @ 0x14065B84C (MmSectionToSectionObjectPointers.c)
 *     MmGetSectionStrongImageReference @ 0x140662F9C (MmGetSectionStrongImageReference.c)
 *     MiInitializeCfg @ 0x1407A6890 (MiInitializeCfg.c)
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
