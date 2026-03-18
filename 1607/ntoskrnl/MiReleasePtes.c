/*
 * XREFs of MiReleasePtes @ 0x1400516D0
 * Callers:
 *     MiCopyToUserVa @ 0x140014B50 (MiCopyToUserVa.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MmUnmapLockedPages @ 0x140025D10 (MmUnmapLockedPages.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MmUnmapIoSpace @ 0x14009B4B0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x14009B8AC (MiMapContiguousMemory.c)
 *     MiDeleteKernelStack @ 0x1400A1598 (MiDeleteKernelStack.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DE220 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyPage @ 0x1400E3260 (MiCopyPage.c)
 *     MmCreateKernelStack @ 0x1400F17B0 (MmCreateKernelStack.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140100090 (MiRemoveFromSystemSpace.c)
 *     MiReleasePteCopyList @ 0x140107034 (MiReleasePteCopyList.c)
 *     MiZeroInParallelWorker @ 0x140109B40 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x14010A488 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiUnmapSinglePage @ 0x14010C5D4 (MiUnmapSinglePage.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiDeleteZeroThreadContext @ 0x14013F1EC (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x1401E1AA4 (MmDeleteProcessor.c)
 *     MmCopyMemory @ 0x1401E51D4 (MmCopyMemory.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE330 (MiExtendPagingFileMaximum.c)
 *     MiDeleteProcessShadow @ 0x1401EF1E4 (MiDeleteProcessShadow.c)
 *     MiCombineWorkingSet @ 0x1401F80D0 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiReleasePageHash @ 0x1401FB6E4 (MiReleasePageHash.c)
 *     MiScrubNodeLargePageList @ 0x1401FBCA8 (MiScrubNodeLargePageList.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC4CC (MiZeroAndConvertLargePage.c)
 *     MiReturnPteMappingPair @ 0x1401FCC68 (MiReturnPteMappingPair.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MiRelocateImageAgain @ 0x14042C2BC (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x140447780 (MiRelocateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404E16A0 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmAllocateIndependentPages @ 0x1404E6034 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x14052685C (MiValidateImagePfn.c)
 *     MmFreeMappingAddress @ 0x14052C224 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x14052E9CC (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     MiCreateLargePfnBitMaps @ 0x140575FB0 (MiCreateLargePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x140658948 (MmFreeNonCachedMemory.c)
 *     MmFreeIsrStack @ 0x14065B890 (MmFreeIsrStack.c)
 *     MiAddPagesToEnclave @ 0x14065E1EC (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x14065F308 (MiDeleteEnclavePages.c)
 *     MiExpandPartitionIds @ 0x1406603B4 (MiExpandPartitionIds.c)
 *     MiCombineAllPhysicalMemory @ 0x140663718 (MiCombineAllPhysicalMemory.c)
 *     MiDeleteLargePfnBitMap @ 0x1406648A0 (MiDeleteLargePfnBitMap.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiInitializeTbFlushStamps @ 0x14004BACC (MiInitializeTbFlushStamps.c)
 *     MiInsertCachedPte @ 0x1400525F0 (MiInsertCachedPte.c)
 *     MiAttemptCoalesce @ 0x1400C06A0 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x1400C07D0 (MiReturnSystemPtes.c)
 *     MiInsertTbFlushEntry @ 0x1400E0240 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x1401F269C (MiGetPteTimeStamp.c)
 *     MiCheckPteRelease @ 0x1401F4400 (MiCheckPteRelease.c)
 */

__int64 __fastcall MiReleasePtes(__int64 a1, __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // r13
  __int64 v4; // rdi
  unsigned __int64 v6; // r14
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  __int64 *v10; // r8
  __int64 *v11; // r10
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // rdi
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // r9
  _QWORD *v23; // rdi
  char v24; // al
  ULONG_PTR v25; // r10
  unsigned __int64 v26; // r9
  volatile signed __int32 *v27; // r8
  int v28; // eax
  unsigned __int64 v29; // rdx
  int v30; // [rsp+30h] [rbp-118h]
  __int64 v31; // [rsp+38h] [rbp-110h] BYREF
  int v32; // [rsp+40h] [rbp-108h] BYREF
  __int16 v33; // [rsp+44h] [rbp-104h]
  __int64 v34; // [rsp+48h] [rbp-100h]
  __int64 v35; // [rsp+50h] [rbp-F8h]
  __int64 v36; // [rsp+58h] [rbp-F0h]

  v3 = a3;
  v4 = a2;
  if ( (__int64 *)a1 == &qword_140327870 && (dword_1403A913C & 2) != 0 )
    MiCheckPteRelease(a2, a3);
  v6 = v3;
  BugCheckParameter4 = (v4 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    BugCheckParameter4 >>= 4;
    v6 = v3 >> 4;
  }
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_140327870 )
  {
    v30 = 1;
    goto LABEL_22;
  }
  v30 = 0;
  v8 = v6 + BugCheckParameter4 - 1;
  if ( v8 >= *(_QWORD *)a1 )
    goto LABEL_51;
  if ( v6 > 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = (__int64 *)(v9 + 8 * (BugCheckParameter4 >> 6));
    v11 = (__int64 *)(v9 + 8 * (v8 >> 6));
    v12 = *v10;
    if ( v10 == v11 )
    {
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << BugCheckParameter4) & v12) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << BugCheckParameter4 )
        goto LABEL_51;
      goto LABEL_22;
    }
    a2 = -1LL << BugCheckParameter4;
    if ( ((-1LL << BugCheckParameter4) & v12) != -1LL << BugCheckParameter4 )
      goto LABEL_51;
    v13 = v10 + 1;
    if ( v13 == v11 )
    {
LABEL_21:
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v6 + BugCheckParameter4)) & *v13) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v6 + BugCheckParameter4) )
        goto LABEL_51;
      goto LABEL_22;
    }
    while ( *v13 == -1 )
    {
      if ( ++v13 == v11 )
        goto LABEL_21;
    }
LABEL_51:
    KeBugCheckEx(0xDAu, 0x302uLL, v4 << 25 >> 16, v3, BugCheckParameter4);
  }
  if ( v6 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_51;
LABEL_22:
  if ( (_DWORD)v3 )
  {
    do
    {
      *(_QWORD *)v4 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4, a2) )
        MiWritePteShadow(v14, 0LL);
      v4 += 8LL;
    }
    while ( v15 != 1 );
  }
  v16 = (_QWORD *)(v4 - 8 * v3);
  if ( v30 )
    goto LABEL_47;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v16, (unsigned int)v3), (_DWORD)result != 1) )
  {
    v31 = 0LL;
    MiInitializeTbFlushStamps((__int64)&v31);
    v20 = v31;
    if ( (_DWORD)v3 )
    {
      do
      {
        *v16 = v20;
        if ( (unsigned int)MiPteInShadowRange(v16, v18) )
          MiWritePteShadow(v21, v20);
        ++v16;
      }
      while ( v22 != 1 );
    }
    v23 = &v16[-v3];
    if ( !MiGetPteTimeStamp(v20, v18, v19) )
    {
      v24 = ~*(_BYTE *)(a1 + 24);
      v34 = 20LL;
      v33 = 0;
      v32 = v24 & 2;
      v35 = 0LL;
      v36 = 0LL;
      MiInsertTbFlushEntry(&v32, (__int64)((_QWORD)v23 << 25) >> 16, v3);
      MiFlushTbList(&v32);
    }
    v25 = BugCheckParameter4 & 0x1F;
    v26 = v6;
    v27 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v25 + v6 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v27, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v25));
        v26 = v6 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v27;
      }
      if ( v26 >= 0x20 )
      {
        v29 = v26 >> 5;
        v26 += -32LL * (v26 >> 5);
        do
        {
          *v27++ = 0;
          --v29;
        }
        while ( v29 );
      }
      if ( !v26 )
        goto LABEL_47;
      v28 = (1 << v26) - 1;
    }
    else
    {
      if ( v6 == 32 )
      {
        *v27 = 0;
        goto LABEL_47;
      }
      v28 = ((1 << v6) - 1) << v25;
    }
    _InterlockedAnd(v27, ~v28);
LABEL_47:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v6);
    if ( v30 == 1 )
      return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1LL);
    else
      return MiAttemptCoalesce(a1, BugCheckParameter4, v6);
  }
  return result;
}
