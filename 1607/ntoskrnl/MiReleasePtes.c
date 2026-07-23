/*
 * XREFs of MiReleasePtes @ 0x140051250
 * Callers:
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MiDeleteKernelStack @ 0x14009FEC0 (MiDeleteKernelStack.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiReleasePteCopyList @ 0x140104DB4 (MiReleasePteCopyList.c)
 *     MiZeroInParallelWorker @ 0x1401078C0 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiUnmapSinglePage @ 0x14010A354 (MiUnmapSinglePage.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiDeleteZeroThreadContext @ 0x14013F75C (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x1401E18D0 (MmDeleteProcessor.c)
 *     MmCopyMemory @ 0x1401E5000 (MmCopyMemory.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE15C (MiExtendPagingFileMaximum.c)
 *     MiDeleteProcessShadow @ 0x1401EF010 (MiDeleteProcessShadow.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiReleasePageHash @ 0x1401FB510 (MiReleasePageHash.c)
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 *     MiReturnPteMappingPair @ 0x1401FCA94 (MiReturnPteMappingPair.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MiRelocateImageAgain @ 0x14042B18C (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404C4CA4 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 *     MmFreeMappingAddress @ 0x14052C764 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x14052EF0C (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     MiCreateLargePfnBitMaps @ 0x1405764F0 (MiCreateLargePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x140658A2C (MmFreeNonCachedMemory.c)
 *     MmFreeIsrStack @ 0x14065B974 (MmFreeIsrStack.c)
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x14065F3EC (MiDeleteEnclavePages.c)
 *     MiExpandPartitionIds @ 0x140660498 (MiExpandPartitionIds.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 *     MiDeleteLargePfnBitMap @ 0x140664984 (MiDeleteLargePfnBitMap.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiInitializeTbFlushStamps @ 0x14004B64C (MiInitializeTbFlushStamps.c)
 *     MiInsertCachedPte @ 0x140052170 (MiInsertCachedPte.c)
 *     MiAttemptCoalesce @ 0x1400BE530 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x1400BE660 (MiReturnSystemPtes.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiCheckPteRelease @ 0x1401F422C (MiCheckPteRelease.c)
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
  if ( (__int64 *)a1 == &qword_1403278B0 && (dword_1403A913C & 2) != 0 )
    MiCheckPteRelease(a2, a3);
  v6 = v3;
  BugCheckParameter4 = (v4 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    BugCheckParameter4 >>= 4;
    v6 = v3 >> 4;
  }
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_1403278B0 )
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
