/*
 * XREFs of MiReleasePtes @ 0x1400B1800
 * Callers:
 *     MiFreeForkMaps @ 0x140001E70 (MiFreeForkMaps.c)
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiDeleteZeroThreadContext @ 0x1400FC244 (MiDeleteZeroThreadContext.c)
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MiReleasePteCopyList @ 0x140128890 (MiReleasePteCopyList.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MmDeleteProcessor @ 0x14020DB08 (MmDeleteProcessor.c)
 *     MmCopyMemory @ 0x1402160E4 (MmCopyMemory.c)
 *     MiExtendPagingFileMaximum @ 0x140221290 (MiExtendPagingFileMaximum.c)
 *     MiDeleteProcessShadow @ 0x1402252C0 (MiDeleteProcessShadow.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiFillCombinePage @ 0x14022A650 (MiFillCombinePage.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiReturnPteMappingPair @ 0x1402314D0 (MiReturnPteMappingPair.c)
 *     MiReleasePageHash @ 0x140231F90 (MiReleasePageHash.c)
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14050550C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmFreeIndependentPages @ 0x14055E3E4 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MmFreeMappingAddress @ 0x140563DF0 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x1405651F4 (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     MmFreeNonCachedMemory @ 0x1406A27D0 (MmFreeNonCachedMemory.c)
 *     MiAllocatePartitionId @ 0x1406A3690 (MiAllocatePartitionId.c)
 *     MmFreeIsrStack @ 0x1406A5A44 (MmFreeIsrStack.c)
 *     MiScrubNodeLargePages @ 0x1406A97C0 (MiScrubNodeLargePages.c)
 *     MiInitializeTbFlushing @ 0x1407C7E90 (MiInitializeTbFlushing.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     MiInitializeGapFrames @ 0x1407D501C (MiInitializeGapFrames.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiInsertCachedPte @ 0x1400B1C20 (MiInsertCachedPte.c)
 *     MiAttemptCoalesce @ 0x140107E40 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x140107F70 (MiReturnSystemPtes.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiCheckPteRelease @ 0x1402265D8 (MiCheckPteRelease.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // rbp
  _QWORD *v4; // rsi
  int v6; // eax
  __int64 v7; // r12
  ULONG_PTR BugCheckParameter4; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r11
  __int64 v11; // rcx
  __int64 *v12; // r8
  __int64 *v13; // r10
  __int64 v14; // rax
  __int64 *v15; // r8
  ULONG_PTR v16; // rdi
  __int64 *v17; // rsi
  __int64 result; // rax
  __int64 v19; // rax
  __int64 updated; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // rdi
  unsigned __int64 v23; // rbp
  __int64 *v24; // rsi
  ULONG_PTR v25; // r10
  unsigned __int64 v26; // r9
  volatile signed __int32 *v27; // r8
  int v28; // eax
  unsigned __int64 v29; // rdx
  signed __int32 v30[8]; // [rsp+0h] [rbp-158h] BYREF
  int v31; // [rsp+30h] [rbp-128h]
  __int64 v32; // [rsp+38h] [rbp-120h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-118h]
  ULONG_PTR v34; // [rsp+48h] [rbp-110h]
  int v35; // [rsp+50h] [rbp-108h] BYREF
  __int16 v36; // [rsp+54h] [rbp-104h]
  __int64 v37; // [rsp+58h] [rbp-100h]
  __int64 v38; // [rsp+60h] [rbp-F8h]
  __int64 v39; // [rsp+68h] [rbp-F0h]

  v3 = a3;
  v33 = a3;
  v4 = a2;
  if ( (__int64 *)a1 == &qword_14034FC70 && (dword_1403D00E0 & 2) != 0 )
    MiCheckPteRelease(a2, a3);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = v3;
  BugCheckParameter4 = ((__int64)v4 - *(_QWORD *)(a1 + 16)) >> 3;
  v9 = v3;
  v34 = v3;
  if ( (v6 & 4) != 0 )
  {
    BugCheckParameter4 >>= 4;
    v9 = v3 >> 4;
  }
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_14034FC70 )
  {
    v31 = 1;
    goto LABEL_22;
  }
  v31 = 0;
  v10 = v9 + BugCheckParameter4 - 1;
  if ( v10 >= *(_QWORD *)a1 )
    goto LABEL_58;
  if ( v9 > 1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (__int64 *)(v11 + 8 * (BugCheckParameter4 >> 6));
    v13 = (__int64 *)(v11 + 8 * (v10 >> 6));
    v14 = *v12;
    if ( v12 == v13 )
    {
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << BugCheckParameter4) & v14) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << BugCheckParameter4 )
        goto LABEL_58;
      goto LABEL_22;
    }
    if ( ((-1LL << BugCheckParameter4) & v14) != -1LL << BugCheckParameter4 )
      goto LABEL_58;
    v15 = v12 + 1;
    if ( v15 == v13 )
    {
LABEL_21:
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v9 + BugCheckParameter4)) & *v15) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v9 + BugCheckParameter4) )
        goto LABEL_58;
      goto LABEL_22;
    }
    while ( *v15 == -1 )
    {
      if ( ++v15 == v13 )
        goto LABEL_21;
    }
LABEL_58:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)v4 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v9 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_58;
LABEL_22:
  if ( (_DWORD)v3 )
  {
    v16 = v3;
    do
    {
      *v4 = 0LL;
      if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v4, 0LL);
      ++v4;
      --v16;
    }
    while ( v16 );
  }
  v17 = &v4[-v3];
  if ( v31 )
    goto LABEL_54;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v17, (unsigned int)v3), (_DWORD)result != 1) )
  {
    v32 = 0LL;
    v19 = 0LL;
    if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
      v19 = MiReadPteShadow(&v32, 0LL);
    _InterlockedOr(v30, 0);
    updated = MiUpdatePageFileHighInPte(v19, (unsigned int)KiTbFlushTimeStamp);
    v32 = updated;
    if ( v21 <= 0x7F8 )
      MiWritePteShadow(&v32, updated);
    v22 = v32;
    if ( (_DWORD)v3 )
    {
      v23 = (unsigned __int64)(v17 + 0x12090482600LL);
      do
      {
        *v17 = v22;
        if ( v23 <= 0x7F8 )
          MiWritePteShadow(v17, v22);
        ++v17;
        v23 += 8LL;
        --v7;
      }
      while ( v7 );
      LODWORD(v3) = v33;
      v7 = v34;
    }
    v24 = &v17[-v7];
    if ( !MiGetPteTimeStamp(v22) )
    {
      v35 = ~*(_BYTE *)(a1 + 24) & 2;
      v37 = 20LL;
      v36 = 0;
      v38 = 0LL;
      v39 = 0LL;
      MiInsertTbFlushEntry((__int64)&v35, (__int64)((_QWORD)v24 << 25) >> 16, v7, 0);
      MiFlushTbList((__int64)&v35);
    }
    v25 = BugCheckParameter4 & 0x1F;
    v26 = v9;
    v27 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v25 + v9 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v27, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v25));
        v26 = v9 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
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
        goto LABEL_54;
      v28 = (1 << v26) - 1;
    }
    else
    {
      if ( v9 == 32 )
      {
        *v27 = 0;
        goto LABEL_54;
      }
      v28 = ((1 << v9) - 1) << v25;
    }
    _InterlockedAnd(v27, ~v28);
LABEL_54:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v9);
    if ( v31 == 1 )
      return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1LL);
    else
      return MiAttemptCoalesce(a1, BugCheckParameter4, v9);
  }
  return result;
}
