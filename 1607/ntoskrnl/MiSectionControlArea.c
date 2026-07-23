/*
 * XREFs of MiSectionControlArea @ 0x14002C050
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MmCreateSystemSection @ 0x140082E5C (MmCreateSystemSection.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiCountSystemImageCommitment @ 0x14012CFC0 (MiCountSystemImageCommitment.c)
 *     MiAllowImageMap @ 0x140429414 (MiAllowImageMap.c)
 *     NtCreateSection @ 0x14042B860 (NtCreateSection.c)
 *     MiSectionDelete @ 0x14042D110 (MiSectionDelete.c)
 *     MiSectionClose @ 0x14042D1A8 (MiSectionClose.c)
 *     MiSectionOpen @ 0x14042D27C (MiSectionOpen.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 *     NtMapViewOfSection @ 0x140435610 (NtMapViewOfSection.c)
 *     DbgkCreateThread @ 0x1404580F8 (DbgkCreateThread.c)
 *     PsConvertToGuiThread @ 0x14045BF90 (PsConvertToGuiThread.c)
 *     MmCreateSpecialImageSection @ 0x14045CE40 (MmCreateSpecialImageSection.c)
 *     MiComputeProcessUserVa @ 0x14046CB1C (MiComputeProcessUserVa.c)
 *     PsReferenceProcessFilePointer @ 0x14046DE90 (PsReferenceProcessFilePointer.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     MmGetFileObjectForSection @ 0x14047031C (MmGetFileObjectForSection.c)
 *     MmGetSectionInformation @ 0x140470AD8 (MmGetSectionInformation.c)
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MmChangeImageProtection @ 0x140481ECC (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140482AA0 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x14048327C (MiMapSystemImage.c)
 *     MiCreateSectionForDriver @ 0x14048338C (MiCreateSectionForDriver.c)
 *     MiChargeSystemImageCommitment @ 0x140483538 (MiChargeSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 *     MmCheckImageMapping @ 0x1404FF44C (MmCheckImageMapping.c)
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 *     MiMapViewInSystemSpace @ 0x140508F34 (MiMapViewInSystemSpace.c)
 *     MiCompactServiceTable @ 0x14053A788 (MiCompactServiceTable.c)
 *     MiReturnSystemImageCommitment @ 0x1405478C4 (MiReturnSystemImageCommitment.c)
 *     MiWriteProtectSystemImages @ 0x1405541A0 (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x140656CFC (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x1406593F0 (MiLogSectionObjectEvent.c)
 *     MmSectionToSectionObjectPointers @ 0x14065B930 (MmSectionToSectionObjectPointers.c)
 *     MmGetSectionStrongImageReference @ 0x140663080 (MmGetSectionStrongImageReference.c)
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
