/*
 * XREFs of MiSectionControlArea @ 0x140089EB0
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MmCreateSystemSection @ 0x140153B60 (MmCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x140155F9C (MiCountSystemImageCommitment.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140453288 (MiReturnSystemImageCommitment.c)
 *     MmCheckImageMapping @ 0x1404626AC (MmCheckImageMapping.c)
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 *     PsReferenceProcessFilePointer @ 0x1404676D0 (PsReferenceProcessFilePointer.c)
 *     MiComputeProcessUserVa @ 0x140468250 (MiComputeProcessUserVa.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     MmGetFileObjectForSection @ 0x1404710BC (MmGetFileObjectForSection.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     NtCreateSection @ 0x1404B3660 (NtCreateSection.c)
 *     MiSectionClose @ 0x1404B5C34 (MiSectionClose.c)
 *     MiSectionOpen @ 0x1404B5C58 (MiSectionOpen.c)
 *     NtMapViewOfSection @ 0x1404B5D50 (NtMapViewOfSection.c)
 *     MiSectionDelete @ 0x1404B6100 (MiSectionDelete.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 *     PsConvertToGuiThread @ 0x1405091AC (PsConvertToGuiThread.c)
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
 *     MiMapViewInSystemSpace @ 0x14051BF64 (MiMapViewInSystemSpace.c)
 *     MiCompactServiceTable @ 0x140571924 (MiCompactServiceTable.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140574C30 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x140575D34 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x140576D98 (MiChargeSystemImageCommitment.c)
 *     MiWriteProtectSystemImages @ 0x140597344 (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x1406A1834 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x1406A2EF0 (MiLogSectionObjectEvent.c)
 *     MmSectionToSectionObjectPointers @ 0x1406A5A00 (MmSectionToSectionObjectPointers.c)
 *     MmGetSectionStrongImageReference @ 0x1406AA510 (MmGetSectionStrongImageReference.c)
 *     MiInitializeCfg @ 0x1407C84F4 (MiInitializeCfg.c)
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
