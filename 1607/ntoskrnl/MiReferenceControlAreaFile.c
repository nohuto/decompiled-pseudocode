/*
 * XREFs of MiReferenceControlAreaFile @ 0x140026690
 * Callers:
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MmFlushSection @ 0x140022558 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MmCreateSystemSection @ 0x1400821E0 (MmCreateSystemSection.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiDeprioritizeVad @ 0x1400ACF60 (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x14042A544 (MiAllowImageMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14042A620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtCreateSection @ 0x14042C990 (NtCreateSection.c)
 *     MiUnmapViewOfSection @ 0x14042E400 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14042EEF0 (MiUnmapVad.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     MmCreateSpecialImageSection @ 0x14045DF70 (MmCreateSpecialImageSection.c)
 *     PsReferenceProcessFilePointer @ 0x14046EFC0 (PsReferenceProcessFilePointer.c)
 *     MmGetFileObjectForSection @ 0x14047144C (MmGetFileObjectForSection.c)
 *     MiDriverLoadSucceeded @ 0x140484174 (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x1405218EC (MmExtendSection.c)
 *     MiParseComImage @ 0x1405250A8 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x140525660 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x1405256E0 (MiParseImageCfgBits.c)
 *     MiMapImageInSystemSpace @ 0x140525CC8 (MiMapImageInSystemSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1405293B4 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x1405800F0 (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x140656B10 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140656C18 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140656F64 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14065A34C (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x14065B6E4 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x14065B84C (MmSectionToSectionObjectPointers.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140096540 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
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
