/*
 * XREFs of MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960
 * Callers:
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiReferenceInPageFile @ 0x140088848 (MiReferenceInPageFile.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiDeprioritizeVad @ 0x14012697C (MiDeprioritizeVad.c)
 *     MmCreateSystemSection @ 0x140153B60 (MmCreateSystemSection.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiGetAdditionalExtents @ 0x140230AC8 (MiGetAdditionalExtents.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiLogRelocationFaults @ 0x140442C40 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x140442CC0 (MiParseImageCfgBits.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 *     PsReferenceProcessFilePointer @ 0x1404676D0 (PsReferenceProcessFilePointer.c)
 *     MiParseComImage @ 0x14046E4A4 (MiParseComImage.c)
 *     MmGetFileObjectForSection @ 0x1404710BC (MmGetFileObjectForSection.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     NtCreateSection @ 0x1404B3660 (NtCreateSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404B4A40 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140551204 (NtAreMappedFilesTheSame.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1405C1F68 (MiLoadUserSymbols.c)
 *     MiFillMapFileInfo @ 0x1406A0750 (MiFillMapFileInfo.c)
 *     MmGetFileNameForAddress @ 0x1406A172C (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406A1834 (MmGetFileNameForSection.c)
 *     MmIsFileMapped @ 0x1406A5898 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1406A5A00 (MmSectionToSectionObjectPointers.c)
 *     MiAllocateFileExtents @ 0x1406AA2A0 (MiAllocateFileExtents.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

ULONG_PTR __fastcall MI_REFERENCE_CONTROL_AREA_FILE(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  signed __int64 v3; // r8
  signed __int64 v4; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // r8d
  _DWORD *v8; // rsi
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v10; // ett
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  signed __int64 BugCheckParameter4; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (volatile signed __int64 *)(a1 + 64);
  _m_prefetchw((const void *)(a1 + 64));
  v3 = *(_QWORD *)(a1 + 64);
  if ( (v3 & 0xF) != 0 )
  {
    do
    {
      v4 = _InterlockedCompareExchange64(v2, v3 - 1, v3);
      if ( v3 == v4 )
        break;
      v3 = v4;
    }
    while ( (v4 & 0xF) != 0 );
  }
  v5 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = v3 & 0xF;
  if ( v6 > 1 )
    goto LABEL_4;
  if ( v6 )
  {
    ObReferenceObjectExWithTag(v5, 15LL);
    _m_prefetchw((const void *)v2);
    v11 = *v2;
    while ( (v11 & 0xF) == 0 )
    {
      if ( v5 != (v11 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v12 = v11;
      v11 = _InterlockedCompareExchange64(v2, v11 + 15, v11);
      if ( v12 == v11 )
        goto LABEL_4;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v5 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v5, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v5 - 48);
    }
LABEL_4:
    if ( v5 )
      return v5;
  }
  v8 = (_DWORD *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8);
  }
  else
  {
    _m_prefetchw(v8);
    v10 = *v8 & 0x7FFFFFFF;
    if ( v10 != _InterlockedCompareExchange(v8, v10 + 1, v10) )
      ExpWaitForSpinLockSharedAndAcquire(v8);
  }
  v5 = ObFastReferenceObjectLocked(v2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v8, retaddr);
  }
  else
  {
    _InterlockedAnd(v8, 0xBFFFFFFF);
    _InterlockedDecrement(v8);
  }
  __writecr8(CurrentIrql);
  return v5;
}
