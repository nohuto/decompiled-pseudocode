/*
 * XREFs of MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90
 * Callers:
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiDeprioritizeVad @ 0x14012697C (MiDeprioritizeVad.c)
 *     MmCreateSystemSection @ 0x140153B60 (MmCreateSystemSection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiGetAdditionalExtents @ 0x140230AC8 (MiGetAdditionalExtents.c)
 *     MiLogRelocationFaults @ 0x140442C40 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x140442CC0 (MiParseImageCfgBits.c)
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 *     MiParseComImage @ 0x14046E4A4 (MiParseComImage.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     NtCreateSection @ 0x1404B3660 (NtCreateSection.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140551204 (NtAreMappedFilesTheSame.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1405C1F68 (MiLoadUserSymbols.c)
 *     MiFillMapFileInfo @ 0x1406A0750 (MiFillMapFileInfo.c)
 *     MmGetFileNameForSection @ 0x1406A1834 (MmGetFileNameForSection.c)
 *     MmIsFileMapped @ 0x1406A5898 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1406A5A00 (MmSectionToSectionObjectPointers.c)
 *     MiAllocateFileExtents @ 0x1406AA2A0 (MiAllocateFileExtents.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
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
