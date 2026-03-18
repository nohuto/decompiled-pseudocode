/*
 * XREFs of MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10
 * Callers:
 *     MmCreateSystemSection @ 0x140019F4C (MmCreateSystemSection.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MiDeprioritizeVad @ 0x1400ED6E0 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiLogRelocationFaults @ 0x1403C6C00 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x1403C6C80 (MiParseImageCfgBits.c)
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     NtAreMappedFilesTheSame @ 0x1403E8334 (NtAreMappedFilesTheSame.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     NtCreateSection @ 0x1403F7DD0 (NtCreateSection.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 *     MiParseComImage @ 0x1404B536C (MiParseComImage.c)
 *     MiLoadUserSymbols @ 0x14054AA4C (MiLoadUserSymbols.c)
 *     MiFillMapFileInfo @ 0x1406210BC (MiFillMapFileInfo.c)
 *     MmGetFileNameForSection @ 0x140621FD8 (MmGetFileNameForSection.c)
 *     MmIsFileMapped @ 0x140625E58 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140625FC0 (MmSectionToSectionObjectPointers.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall MI_DEREFERENCE_CONTROL_AREA_FILE(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x746C6644u);
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
