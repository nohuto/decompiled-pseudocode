/*
 * XREFs of MiReleasePtes @ 0x1400680A0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     MiReleasePteCopyList @ 0x1400BFE9C (MiReleasePteCopyList.c)
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 *     MiUnmapSinglePage @ 0x1400ECCC4 (MiUnmapSinglePage.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiDeleteZeroThreadContext @ 0x140131D78 (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x1401CE820 (MmDeleteProcessor.c)
 *     MmCopyMemory @ 0x1401D45A8 (MmCopyMemory.c)
 *     MiExtendPagingFileMaximum @ 0x1401DC544 (MiExtendPagingFileMaximum.c)
 *     MiDeleteProcessShadow @ 0x1401DE720 (MiDeleteProcessShadow.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 *     MiReturnPteMappingPair @ 0x1401E4E3C (MiReturnPteMappingPair.c)
 *     MiReleasePageHash @ 0x1401E58D4 (MiReleasePageHash.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1403E3390 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 *     MmFreeMappingAddress @ 0x1404EA1C0 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x1404F5948 (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     MmFreeNonCachedMemory @ 0x1406234E8 (MmFreeNonCachedMemory.c)
 *     MiAllocatePartitionId @ 0x140623F10 (MiAllocatePartitionId.c)
 *     MmFreeIsrStack @ 0x140626004 (MmFreeIsrStack.c)
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x140629B8C (MiDeleteEnclavePages.c)
 *     MiScrubNodeLargePages @ 0x14062B008 (MiScrubNodeLargePages.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     MiInitializeTbFlushing @ 0x14074C190 (MiInitializeTbFlushing.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x140015270 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x1400153A0 (MiReturnSystemPtes.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiInsertCachedPte @ 0x140068430 (MiInsertCachedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiCheckPteRelease @ 0x1401E03F4 (MiCheckPteRelease.c)
 */

unsigned __int64 __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // r15
  _QWORD *v4; // rsi
  unsigned __int64 v6; // r12
  unsigned __int64 BugCheckParameter4; // rbp
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  __int64 *v10; // r8
  __int64 *v11; // r10
  __int64 v12; // rax
  __int64 *v13; // r8
  ULONG_PTR v14; // rdi
  __int64 v15; // r13
  unsigned __int64 *v16; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 *v19; // rsi
  _KPROCESS *v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  volatile signed __int32 *v23; // r8
  int v24; // eax
  unsigned __int64 v25; // rdx
  signed __int32 v26[8]; // [rsp+0h] [rbp-148h] BYREF
  int v27; // [rsp+30h] [rbp-118h]
  unsigned int v28; // [rsp+34h] [rbp-114h]
  int v29; // [rsp+40h] [rbp-108h] BYREF
  __int16 v30; // [rsp+44h] [rbp-104h]
  __int64 v31; // [rsp+48h] [rbp-100h]
  __int64 v32; // [rsp+50h] [rbp-F8h]
  __int64 v33; // [rsp+58h] [rbp-F0h]

  v3 = a3;
  v28 = a3;
  v4 = a2;
  if ( (__int64 *)a1 == &qword_1402FF7B0 && (dword_1403810F0 & 2) != 0 )
    MiCheckPteRelease(a2, a3);
  v6 = v3;
  BugCheckParameter4 = ((__int64)v4 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    BugCheckParameter4 >>= 4;
    v6 = v3 >> 4;
  }
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_1402FF7B0 )
  {
    v27 = 1;
    goto LABEL_22;
  }
  v27 = 0;
  v8 = v6 + BugCheckParameter4 - 1;
  if ( v8 >= *(_QWORD *)a1 )
    goto LABEL_53;
  if ( v6 > 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = (__int64 *)(v9 + 8 * (BugCheckParameter4 >> 6));
    v11 = (__int64 *)(v9 + 8 * (v8 >> 6));
    v12 = *v10;
    if ( v10 == v11 )
    {
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << BugCheckParameter4) & v12) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << BugCheckParameter4 )
        goto LABEL_53;
      goto LABEL_22;
    }
    if ( ((-1LL << BugCheckParameter4) & v12) != -1LL << BugCheckParameter4 )
      goto LABEL_53;
    v13 = v10 + 1;
    if ( v13 == v11 )
    {
LABEL_21:
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> -(char)(v6 + BugCheckParameter4)) & *v13) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v6 + BugCheckParameter4) )
        goto LABEL_53;
      goto LABEL_22;
    }
    while ( *v13 == -1 )
    {
      if ( ++v13 == v11 )
        goto LABEL_21;
    }
LABEL_53:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)v4 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v6 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_53;
LABEL_22:
  if ( (_DWORD)v3 )
  {
    v14 = v3;
    do
    {
      *v4 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4) )
        MiWritePteShadow(v4, 0LL);
      ++v4;
      --v14;
    }
    while ( v14 );
  }
  v15 = 8 * v3;
  v16 = &v4[-v3];
  if ( v27 )
    goto LABEL_49;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v16, (unsigned int)v3), (_DWORD)result != 1) )
  {
    _InterlockedOr(v26, 0);
    v18 = (unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32;
    if ( (_DWORD)v3 )
    {
      do
      {
        *v16 = v18;
        if ( (unsigned int)MiPteInShadowRange(v16) )
          MiWritePteShadow(v16, v18);
        ++v16;
        --v3;
      }
      while ( v3 );
      LODWORD(v3) = v28;
    }
    v19 = &v16[v15 / 0xFFFFFFFFFFFFFFF8uLL];
    if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
    {
      v29 = ~*(_BYTE *)(a1 + 24) & 2;
      v31 = 20LL;
      v30 = 0;
      v32 = 0LL;
      v33 = 0LL;
      MiInsertTbFlushEntry((__int64)&v29, (__int64)((_QWORD)v19 << 25) >> 16, (unsigned int)v3, 0);
      MiFlushTbList((__int64)&v29, v20);
    }
    v21 = BugCheckParameter4 & 0x1F;
    v22 = v6;
    v23 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v21 + v6 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v23, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v21));
        v22 = v6 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v23;
      }
      if ( v22 >= 0x20 )
      {
        v25 = v22 >> 5;
        v22 += -32LL * (v22 >> 5);
        do
        {
          *v23++ = 0;
          --v25;
        }
        while ( v25 );
      }
      if ( !v22 )
        goto LABEL_49;
      v24 = (1 << v22) - 1;
    }
    else
    {
      if ( v6 == 32 )
      {
        *v23 = 0;
        goto LABEL_49;
      }
      v24 = ((1 << v6) - 1) << v21;
    }
    _InterlockedAnd(v23, ~v24);
LABEL_49:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v6);
    if ( v27 == 1 )
      return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1);
    else
      return MiAttemptCoalesce(a1, BugCheckParameter4, v6);
  }
  return result;
}
