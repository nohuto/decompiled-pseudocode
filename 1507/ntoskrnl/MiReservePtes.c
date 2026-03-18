/*
 * XREFs of MiReservePtes @ 0x1400AAD50
 * Callers:
 *     MiMapSinglePage @ 0x140003778 (MiMapSinglePage.c)
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MiCreatePteCopyList @ 0x1400597DC (MiCreatePteCopyList.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiBuildDynamicRegion @ 0x14015FC6C (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x14016BA8C (MiReservePageHash.c)
 *     MmCopyMemory @ 0x1402160E4 (MmCopyMemory.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MmInitializeProcessor @ 0x1403FA854 (MmInitializeProcessor.c)
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MmAllocateMappingAddress @ 0x1405622E0 (MmAllocateMappingAddress.c)
 *     MmAllocateDumpHibernateResources @ 0x14056C428 (MmAllocateDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     MiInitializeZeroPagePtes @ 0x140597BAC (MiInitializeZeroPagePtes.c)
 *     MmAllocateNonCachedMemory @ 0x1406A2544 (MmAllocateNonCachedMemory.c)
 *     MiAllocatePartitionId @ 0x1406A3690 (MiAllocatePartitionId.c)
 *     MiAllocateProcessShadow @ 0x1406A7DDC (MiAllocateProcessShadow.c)
 *     MiScrubNodeLargePages @ 0x1406A97C0 (MiScrubNodeLargePages.c)
 *     MiInitializeTbFlushing @ 0x1407C7E90 (MiInitializeTbFlushing.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     MiBuildPagedPool @ 0x1407C9C28 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x1407CB188 (MiInitializeNonPagedPool.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     MiInitializeGapFrames @ 0x1407D501C (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x1407E6AE8 (MiMapDummyPages.c)
 *     MiInitializePteInfo @ 0x1407E72E4 (MiInitializePteInfo.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140012CD4 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x140013548 (MiPteBinsNeedTrimming.c)
 *     MiExpandPtes @ 0x140068530 (MiExpandPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400AD300 (RtlInterlockedSetClearRunEx.c)
 *     MiFlushTbAsNeeded @ 0x1400ADC10 (MiFlushTbAsNeeded.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiCheckPteReserve @ 0x1402268A4 (MiCheckPteReserve.c)
 */

__int64 *__fastcall MiReservePtes(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // r11
  unsigned __int64 *p_PteBitCache; // r9
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r11
  unsigned __int64 i; // r9
  __int64 *v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  volatile signed __int64 *v16; // rcx
  signed __int64 v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 *v22; // rsi
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r14
  unsigned __int64 *v25; // rbx
  unsigned int v26; // r9d
  bool v27; // zf
  __int64 v28; // rcx
  unsigned int v29; // r9d
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // r9
  __int64 v36; // rcx
  bool v37; // cf
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 *v40; // rbx
  unsigned __int64 v41; // rcx
  _BYTE *v42; // rsi
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // r15
  __int64 v47; // r9
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r15
  __int64 v50; // rdi
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rbx
  __int64 v53; // r9
  unsigned __int64 *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned __int64 *v57; // r9
  unsigned int v58; // r9d
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned int v61; // ecx
  unsigned __int64 v62; // r10
  __int64 v63; // r8
  unsigned __int64 *v64; // r11
  __int64 v65; // rdx
  unsigned int v66; // r8d
  unsigned __int64 v67; // r10
  unsigned __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // r15d
  unsigned int v75; // edi
  __int64 PteShadow; // rax
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // [rsp+20h] [rbp-59h]
  unsigned __int8 v81; // [rsp+50h] [rbp-29h]
  struct _KPRCB *CurrentPrcb; // [rsp+58h] [rbp-21h]
  unsigned __int64 *v83; // [rsp+68h] [rbp-11h]
  int v84; // [rsp+E0h] [rbp+67h]

  v3 = a2;
  v4 = a1;
  v5 = a2;
  v84 = 0;
  v6 = 2LL;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v5 >>= 4;
    goto LABEL_98;
  }
  if ( (__int64 *)a1 != &qword_14034FC70 || v3 > 0x40 )
    goto LABEL_98;
  CurrentIrql = KeGetCurrentIrql();
  v81 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  p_PteBitCache = &CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache != -1LL )
    goto LABEL_32;
  __writecr8(CurrentIrql);
  v9 = qword_14034FCB8;
LABEL_7:
  while ( 2 )
  {
    v10 = v9;
    if ( v9 >= qword_14034FC70 )
      v10 = 0LL;
    for ( i = qword_14034FC70 - 1; ; i = v15 - 1 )
    {
      if ( i - v10 == -1LL )
        goto LABEL_17;
      v12 = (__int64 *)(qword_14034FC78 + 8 * (v10 >> 6));
      v13 = ((1LL << (v10 & 0x3F)) - 1) | *v12;
      if ( v13 != -1 )
        break;
      while ( (unsigned __int64)++v12 <= qword_14034FC78 + 8 * (i >> 6) )
      {
        v13 = *v12;
        if ( *v12 != -1 )
          goto LABEL_15;
      }
LABEL_17:
      if ( !v10 )
      {
        if ( (unsigned int)MiEmptyPteBins((__int64)&qword_14034FC70, 0) )
        {
          v9 = 0LL;
          goto LABEL_7;
        }
        v4 = a1;
        goto LABEL_98;
      }
      v15 = v9 + 1;
      v10 = 0LL;
      if ( v9 + 1 > qword_14034FC70 )
        v15 = qword_14034FC70;
    }
LABEL_15:
    _BitScanForward64((unsigned __int64 *)&v13, ~v13);
    v14 = v13 + (((__int64)v12 - qword_14034FC78) >> 3 << 6);
    if ( v14 > i || v14 == -1LL )
      goto LABEL_17;
    a3 = v14 & 0xFFFFFFFFFFFFFFC0uLL;
    v6 = *(_QWORD *)(qword_14034FC78 + 8 * (a3 >> 6));
    v16 = (volatile signed __int64 *)(qword_14034FC78 + 8 * (a3 >> 6));
    if ( v6 == -1LL )
      goto LABEL_28;
    while ( 1 )
    {
      v17 = _InterlockedCompareExchange64(v16, -1LL, v6);
      if ( v6 == v17 )
        break;
      v6 = v17;
      if ( v17 == -1 )
      {
        v9 = a3 + 64;
        goto LABEL_7;
      }
    }
    if ( v6 == -1LL )
    {
LABEL_28:
      v9 = a3 + 64;
      continue;
    }
    break;
  }
  v18 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v19 = KeGetCurrentPrcb();
  v81 = v18;
  CurrentPrcb = v19;
  p_PteBitCache = &v19->PteBitCache;
  if ( v19->PteBitCache == -1LL )
  {
    *p_PteBitCache = v6;
    v19->PteBitOffset = a3;
    v20 = ~v6 - ((~v6 >> 1) & 0x5555555555555555LL);
    v6 = v20 & 0x3333333333333333LL;
    _InterlockedExchangeAdd64(
      &qword_14034FCC8,
      -(__int64)((unsigned int)((0x101010101010101LL
                               * (((v20 & 0x3333333333333333LL)
                                 + ((v20 >> 2) & 0x3333333333333333LL)
                                 + (((v20 & 0x3333333333333333LL) + ((v20 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
    qword_14034FCB8 = a3 + 64;
  }
  else
  {
    _InterlockedAnd64(v16, v6);
  }
LABEL_32:
  v83 = p_PteBitCache;
  v21 = 0LL;
  if ( !v5 )
    goto LABEL_94;
  v22 = p_PteBitCache;
  if ( v5 > 0x40 )
  {
    v21 = -1LL;
    goto LABEL_80;
  }
  v23 = v3;
  v24 = 63 - v3 + 1;
  v25 = &v22[v24 >> 6];
  v6 = (unsigned __int64)v22;
  a3 = *v22;
  if ( v3 >= 0x40 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (a3 & 0x8000000000000000uLL) != 0LL )
        {
          while ( 1 )
          {
            v6 += 8LL;
            if ( v6 > (unsigned __int64)v25 )
              break;
            a3 = *(_QWORD *)v6;
            if ( (*(_QWORD *)v6 & 0x8000000000000000uLL) == 0 )
              goto LABEL_52;
          }
LABEL_78:
          v21 = -1LL;
          goto LABEL_79;
        }
LABEL_52:
        v27 = !_BitScanReverse64((unsigned __int64 *)&v33, a3);
        if ( v27 )
          v34 = 64;
        else
          v34 = 63 - v33;
        v21 = ((((__int64)(v6 - (_QWORD)v22) >> 3) + 1) << 6) - v34;
        if ( v21 > v24 )
          goto LABEL_78;
        v35 = v23 - v34;
        if ( !v35 )
          goto LABEL_76;
        a3 = *(_QWORD *)(v6 + 8);
        v6 += 8LL;
        if ( v35 >= 0x40 )
          break;
LABEL_61:
        v27 = !_BitScanForward64((unsigned __int64 *)&v36, a3);
        if ( v27 )
          LODWORD(v36) = 64;
        v37 = (unsigned int)v36 < v35;
        v23 = v3;
        if ( !v37 )
          goto LABEL_76;
      }
      if ( !a3 )
      {
        v35 -= 64LL;
        if ( !v35 )
          goto LABEL_76;
        a3 = *(_QWORD *)(v6 + 8);
        v6 += 8LL;
        goto LABEL_61;
      }
      v23 = v3;
    }
  }
  if ( v3 <= 1 )
  {
    if ( a3 == -1LL )
    {
      do
      {
        v6 += 8LL;
        if ( v6 > (unsigned __int64)v25 )
          goto LABEL_78;
        a3 = *(_QWORD *)v6;
      }
      while ( *(_QWORD *)v6 == -1LL );
    }
    a3 = ~a3;
    _BitScanForward64(&v39, a3);
    v21 = v39 + ((__int64)(v6 - (_QWORD)v22) >> 3 << 6);
    if ( v21 > v24 )
      goto LABEL_78;
  }
  else
  {
    v26 = 0;
    while ( 1 )
    {
      if ( a3 == -1LL )
      {
        while ( 1 )
        {
          v6 += 8LL;
          if ( v6 > (unsigned __int64)v25 )
            break;
          a3 = *(_QWORD *)v6;
          if ( *(_QWORD *)v6 != -1LL )
          {
            v26 = 0;
            goto LABEL_41;
          }
        }
        v5 = v3;
        v21 = -1LL;
        goto LABEL_80;
      }
LABEL_41:
      v27 = !_BitScanForward64((unsigned __int64 *)&v28, a3);
      if ( v27 )
        LODWORD(v28) = 64;
      if ( v26 + (unsigned int)v28 >= v3 )
        break;
      v29 = v3;
      v30 = ~a3;
      while ( 1 )
      {
        v30 &= v30 >> (v29 >> 1);
        if ( !v30 )
          break;
        v29 -= v29 >> 1;
        if ( v29 <= 1 )
        {
          _BitScanForward64(&v31, v30);
          v32 = (unsigned int)v31;
          goto LABEL_70;
        }
      }
      if ( (unsigned __int64 *)v6 == v22 )
        goto LABEL_78;
      v27 = !_BitScanReverse64((unsigned __int64 *)&v38, a3);
      a3 = *(_QWORD *)(v6 + 8);
      v6 += 8LL;
      if ( v27 )
        v26 = 64;
      else
        v26 = 63 - v38;
    }
    v32 = -(__int64)v26;
LABEL_70:
    v6 = (__int64)(v6 - (_QWORD)v22) >> 3 << 6;
    v21 = v6 + v32;
    if ( v21 > v24 )
      goto LABEL_78;
  }
LABEL_76:
  if ( v21 == -1LL )
    v5 = v3;
  else
LABEL_79:
    v5 = v3;
LABEL_80:
  if ( v21 == -1LL )
  {
    v40 = 0LL;
    goto LABEL_95;
  }
  a3 = v3;
  if ( !v3 )
    goto LABEL_93;
  v41 = v21 & 7;
  v42 = (char *)v83 + (v21 >> 3);
  if ( v41 + v3 > 8 )
  {
    if ( (v21 & 7) != 0 )
    {
      *v42++ |= byte_140295400[v41];
      v5 = v3 - (unsigned int)(8 - v41);
    }
    if ( v5 > 8 )
    {
      memset(v42, 255, v5 >> 3);
      v42 += v5 >> 3;
      v5 &= 7u;
    }
    if ( v5 )
      *v42 |= byte_140297800[v5];
LABEL_93:
    v5 = v3;
    goto LABEL_94;
  }
  v5 = v3;
  *v42 |= byte_140297800[v3] << v41;
LABEL_94:
  v40 = (__int64 *)(qword_14034FC80 + 8 * (v21 + CurrentPrcb->PteBitOffset));
LABEL_95:
  __writecr8(v81);
  v4 = a1;
  if ( v40 )
    goto LABEL_203;
  LODWORD(v3) = a2;
LABEL_98:
  if ( (unsigned int)v3 >= 0x200 )
  {
    v40 = (__int64 *)MiExpandPtes(v4, (unsigned int)v3);
    if ( v40 )
    {
      if ( (__int64 *)v4 == &qword_14034FC70 && (dword_1403D00E0 & 2) != 0 )
        MiCheckPteReserve(v40, (unsigned int)v3);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 88), -(__int64)v5);
      return v40;
    }
    if ( (__int64 *)v4 == &qword_14034FC70 )
    {
LABEL_105:
      ++**(_DWORD **)(v4 + 32);
      return 0LL;
    }
  }
  v44 = *(_QWORD *)(v4 + 72);
  while ( 2 )
  {
    while ( !*(_QWORD *)v4 )
    {
LABEL_189:
      v74 = v84;
      if ( (*(_DWORD *)(v4 + 24) & 1) != 0 )
      {
        if ( (v84 & 1) == 0 )
        {
          v74 = v84 | 1;
          v84 |= 1u;
          if ( (unsigned int)MiEmptyPteBins(v4, 0) == 1 )
            continue;
        }
        if ( (v74 & 2) == 0 )
        {
          v74 |= 2u;
          v84 = v74;
          if ( MiPteBinsNeedTrimming(v4, v6, a3) && (unsigned int)MiEmptyPteBins(v4, 1) == 1 )
            continue;
        }
      }
      v40 = (__int64 *)MiExpandPtes(v4, (unsigned int)v3);
      if ( v40 )
        goto LABEL_202;
      if ( (*(_DWORD *)(v4 + 24) & 1) == 0 || (v74 & 4) != 0 )
        goto LABEL_105;
      v84 = v74 | 4;
      MiEmptyPteBins(v4, 1);
    }
    v45 = *(_QWORD *)v4;
    v46 = v44;
    v47 = *(_QWORD *)(v4 + 8);
    v79 = v47;
    if ( v44 >= *(_QWORD *)v4 )
      v46 = 0LL;
    v48 = v45 - 1;
    if ( !v5 )
    {
      v49 = v46 & 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_185;
    }
    while ( 2 )
    {
      v6 = v48;
      v50 = v47;
      if ( v48 - v46 + 1 < v5 )
      {
        a3 = -1LL;
        goto LABEL_138;
      }
      v51 = v48 - v5 + 1;
      v52 = v47 + 8 * (v51 >> 6);
      v53 = *(_QWORD *)(v47 + 8 * (v46 >> 6)) | ((1LL << (v46 & 0x3F)) - 1);
      v54 = (unsigned __int64 *)(v50 + 8 * (v46 >> 6));
      if ( v5 > 0x7F )
      {
        if ( (v51 & 0x3F) != 0 )
          v52 += 8LL;
        if ( v53 )
        {
          if ( *++v54 )
            goto LABEL_123;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v55, v53);
          if ( v27 )
            v6 = 64LL;
          else
            v6 = (unsigned int)(63 - v55);
        }
        else
        {
          v6 = 0LL;
        }
LABEL_128:
        a3 = (((__int64)v54 - v50) >> 3 << 6) - (unsigned int)v6;
        if ( a3 > v51 )
          goto LABEL_179;
        v57 = &v54[(v5 - (unsigned int)v6) >> 6];
        for ( ++v54; v54 != v57; ++v54 )
        {
          if ( *v54 )
            goto LABEL_123;
        }
        v58 = ((_BYTE)v5 - (_BYTE)v6) & 0x3F;
        if ( (((_BYTE)v5 - (_BYTE)v6) & 0x3F) != 0 )
        {
          v27 = !_BitScanForward64(&v6, *v54);
          if ( v27 )
            v6 = 64LL;
          if ( (unsigned int)v6 < v58 )
          {
LABEL_123:
            while ( (unsigned __int64)v54 <= v52 )
            {
              if ( !*++v54 )
              {
                v27 = !_BitScanReverse64((unsigned __int64 *)&v56, *(v54 - 1));
                if ( v27 )
                  v6 = 64LL;
                else
                  v6 = (unsigned int)(63 - v56);
                goto LABEL_128;
              }
            }
            goto LABEL_179;
          }
        }
        goto LABEL_136;
      }
      if ( v5 < 0x40 )
      {
        if ( v5 <= 1 )
        {
          if ( v53 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v54 > v52 )
                goto LABEL_179;
              v53 = *v54;
            }
            while ( *v54 == -1LL );
          }
          _BitScanForward64(&v72, ~v53);
          v73 = ((__int64)v54 - v50) >> 3;
          v71 = (unsigned int)v72;
          v69 = v73 << 6;
        }
        else
        {
          v6 = v48 >> 6;
          v63 = 0LL;
          v64 = (unsigned __int64 *)(v50 + 8 * (v48 >> 6));
          while ( 1 )
          {
            if ( v53 == -1 )
            {
              do
              {
                if ( (unsigned __int64)++v54 > v52 )
                  goto LABEL_179;
                v53 = *v54;
              }
              while ( *v54 == -1LL );
              v63 = 0LL;
            }
            v27 = !_BitScanForward64((unsigned __int64 *)&v65, v53);
            if ( v27 )
              LODWORD(v65) = 64;
            v6 = (unsigned int)(v63 + v65);
            if ( v6 >= v5 )
              break;
            v66 = v5;
            v67 = ~v53;
            while ( 1 )
            {
              v6 = v67 >> (v66 >> 1);
              v67 &= v6;
              if ( !v67 )
                break;
              v66 -= v66 >> 1;
              if ( v66 <= 1 )
              {
                _BitScanForward64(&v68, v67);
                v69 = (unsigned int)v68;
                goto LABEL_177;
              }
            }
            if ( v54 == v64 )
              goto LABEL_179;
            v27 = !_BitScanReverse64((unsigned __int64 *)&v70, v53);
            v53 = v54[1];
            ++v54;
            if ( v27 )
              v63 = 64LL;
            else
              v63 = (unsigned int)(63 - v70);
          }
          v69 = -v63;
LABEL_177:
          v71 = ((__int64)v54 - v50) >> 3 << 6;
        }
        a3 = v71 + v69;
        if ( a3 > v51 )
          goto LABEL_179;
LABEL_136:
        if ( a3 == -1LL )
          goto LABEL_137;
        break;
      }
      while ( v53 >= 0 )
      {
LABEL_146:
        v27 = !_BitScanReverse64((unsigned __int64 *)&v60, v53);
        if ( v27 )
          v61 = 64;
        else
          v61 = 63 - v60;
        v6 = v61;
        a3 = (((((__int64)v54 - v50) >> 3) + 1) << 6) - v61;
        if ( a3 > v51 )
          goto LABEL_179;
        v62 = v5 - v61;
        if ( v5 == v61 )
          goto LABEL_136;
        v53 = v54[1];
        ++v54;
        if ( v62 >= 0x40 )
        {
          if ( v53 )
            continue;
          v62 -= 64LL;
          if ( !v62 )
            goto LABEL_136;
          v53 = v54[1];
          ++v54;
        }
        v27 = !_BitScanForward64(&v6, v53);
        if ( v27 )
          v6 = 64LL;
        if ( (unsigned int)v6 >= v62 )
          goto LABEL_136;
      }
      while ( (unsigned __int64)++v54 <= v52 )
      {
        v53 = *v54;
        if ( (*v54 & 0x8000000000000000uLL) == 0 )
          goto LABEL_146;
      }
LABEL_179:
      a3 = -1LL;
LABEL_137:
      v47 = v79;
LABEL_138:
      if ( v46 )
      {
        v59 = v44 + v5;
        if ( v44 + v5 > v45 )
          v59 = v45;
        v48 = v59 - 1;
        v46 = 0LL;
        continue;
      }
      break;
    }
    v4 = a1;
    v49 = a3;
LABEL_185:
    if ( v49 == -1LL )
    {
      LODWORD(v3) = a2;
      goto LABEL_189;
    }
    if ( !(unsigned int)RtlInterlockedSetClearRunEx(v4, v49, v5) )
    {
      LODWORD(v3) = a2;
      continue;
    }
    break;
  }
  *(_QWORD *)(v4 + 72) = v49 + v5;
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
    v49 *= 16LL;
  v40 = (__int64 *)(*(_QWORD *)(v4 + 16) + 8 * v49);
LABEL_202:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 88), -(__int64)v5);
LABEL_203:
  if ( (*(_DWORD *)(v4 + 24) & 2) == 0 )
    goto LABEL_218;
  if ( (__int64 *)v4 == &qword_14034FC70 && (dword_1403D00E0 & 2) != 0 )
  {
    v75 = a2;
    MiCheckPteReserve(v40, a2);
  }
  else
  {
    v75 = a2;
  }
  PteShadow = *v40;
  if ( (unsigned __int64)(v40 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v40, *v40);
  if ( v75 == 1 )
  {
    if ( !MiGetPteTimeStamp(PteShadow) )
      return v40;
LABEL_218:
    MiFlushTbAsNeeded((ULONG_PTR)v40);
    return v40;
  }
  if ( v75 != 2 || MiGetPteTimeStamp(PteShadow) )
    goto LABEL_218;
  v78 = v40[1];
  if ( (unsigned __int64)v40 + v77 + 8 <= 0x7F8 )
    v78 = MiReadPteShadow(v40 + 1, v40[1]);
  if ( MiGetPteTimeStamp(v78) )
    goto LABEL_218;
  return v40;
}
