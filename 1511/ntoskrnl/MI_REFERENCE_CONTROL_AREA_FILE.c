/*
 * XREFs of MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0
 * Callers:
 *     MmCreateSystemSection @ 0x140019F4C (MmCreateSystemSection.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MiDeprioritizeVad @ 0x1400ED6E0 (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiLogRelocationFaults @ 0x1403C6C00 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x1403C6C80 (MiParseImageCfgBits.c)
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     NtAreMappedFilesTheSame @ 0x1403E8334 (NtAreMappedFilesTheSame.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1403F71D0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtCreateSection @ 0x1403F7DD0 (NtCreateSection.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     MmGetFileObjectForSection @ 0x14044E974 (MmGetFileObjectForSection.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 *     PsReferenceProcessFilePointer @ 0x1404A995C (PsReferenceProcessFilePointer.c)
 *     MiParseComImage @ 0x1404B536C (MiParseComImage.c)
 *     MiLoadUserSymbols @ 0x14054AA4C (MiLoadUserSymbols.c)
 *     MiFillMapFileInfo @ 0x1406210BC (MiFillMapFileInfo.c)
 *     MmGetFileNameForAddress @ 0x140621ED0 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140621FD8 (MmGetFileNameForSection.c)
 *     MmIsFileMapped @ 0x140625E58 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x140625FC0 (MmSectionToSectionObjectPointers.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

ULONG_PTR __fastcall MI_REFERENCE_CONTROL_AREA_FILE(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  ULONG_PTR v4; // rbx
  unsigned int v5; // r8d
  KIRQL v7; // bl
  unsigned __int64 v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int64 BugCheckParameter4; // rax

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v2 & 0xF;
  if ( v5 <= 1 )
  {
    if ( !v5 )
      goto LABEL_7;
    ObReferenceObjectExWithTag(v4, 15LL);
    _m_prefetchw((const void *)(a1 + 64));
    v9 = *(_QWORD *)(a1 + 64);
    while ( (v9 & 0xF) == 0 )
    {
      if ( v4 != (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v9 + 15, v9);
      if ( v10 == v9 )
        goto LABEL_4;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v4 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v4, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v4 - 48);
    }
  }
LABEL_4:
  if ( v4 )
    return v4;
LABEL_7:
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v8 = ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v7);
  return v8;
}
