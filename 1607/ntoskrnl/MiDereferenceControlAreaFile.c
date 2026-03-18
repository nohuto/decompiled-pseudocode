/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140026640
 * Callers:
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MmFlushSection @ 0x140022558 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MmCreateSystemSection @ 0x1400821E0 (MmCreateSystemSection.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiDeprioritizeVad @ 0x1400ACF60 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     MiAllowImageMap @ 0x14042A544 (MiAllowImageMap.c)
 *     NtCreateSection @ 0x14042C990 (NtCreateSection.c)
 *     MiUnmapViewOfSection @ 0x14042E400 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14042EEF0 (MiUnmapVad.c)
 *     MmCreateSpecialImageSection @ 0x14045DF70 (MmCreateSpecialImageSection.c)
 *     MiDriverLoadSucceeded @ 0x140484174 (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x1405218EC (MmExtendSection.c)
 *     MiParseComImage @ 0x1405250A8 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x140525660 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x1405256E0 (MiParseImageCfgBits.c)
 *     MiMapImageInSystemSpace @ 0x140525CC8 (MiMapImageInSystemSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1405293B4 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x1405800F0 (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x140656C18 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140656F64 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14065A34C (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x14065B6E4 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x14065B84C (MmSectionToSectionObjectPointers.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall MiDereferenceControlAreaFile(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDelete((PVOID)a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
