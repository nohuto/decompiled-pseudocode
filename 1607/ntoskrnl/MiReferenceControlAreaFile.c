/*
 * XREFs of MiReferenceControlAreaFile @ 0x140026210
 * Callers:
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MmCreateSystemSection @ 0x140082E5C (MmCreateSystemSection.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiDeprioritizeVad @ 0x1400AB4C8 (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x140429414 (MiAllowImageMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404294F0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtCreateSection @ 0x14042B860 (NtCreateSection.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14042DDC0 (MiUnmapVad.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     DbgkCreateThread @ 0x1404580F8 (DbgkCreateThread.c)
 *     MmCreateSpecialImageSection @ 0x14045CE40 (MmCreateSpecialImageSection.c)
 *     PsReferenceProcessFilePointer @ 0x14046DE90 (PsReferenceProcessFilePointer.c)
 *     MmGetFileObjectForSection @ 0x14047031C (MmGetFileObjectForSection.c)
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 *     MiParseComImage @ 0x140508108 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x1405086C0 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x140508740 (MiParseImageCfgBits.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1405298F4 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x14058059C (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x140656BF4 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140656CFC (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140657048 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x14065B7C8 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x14065B930 (MmSectionToSectionObjectPointers.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

ULONG_PTR __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  ULONG_PTR v4; // rbx
  unsigned int v5; // r8d
  KIRQL v7; // bl
  __int64 v8; // rdi
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
      goto LABEL_8;
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
  if ( !v4 )
  {
LABEL_8:
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
    v8 = ObFastReferenceObjectLocked(a1 + 64);
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v7);
    return v8;
  }
  return v4;
}
