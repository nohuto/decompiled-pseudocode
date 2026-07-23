/*
 * XREFs of MiReservePtes @ 0x1400DB9F0
 * Callers:
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 *     MiZeroInParallelWorker @ 0x1401078C0 (MiZeroInParallelWorker.c)
 *     MiMapSinglePage @ 0x140107F04 (MiMapSinglePage.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiCreateZeroThreadContext @ 0x14013B070 (MiCreateZeroThreadContext.c)
 *     MiBuildDynamicRegion @ 0x14013CEB0 (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x140143360 (MiReservePageHash.c)
 *     MmCopyMemory @ 0x1401E5000 (MmCopyMemory.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 *     MmInitializeProcessor @ 0x1403D3D40 (MmInitializeProcessor.c)
 *     MiRelocateImageAgain @ 0x14042B18C (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     MmAllocateDumpHibernateResources @ 0x140548D18 (MmAllocateDumpHibernateResources.c)
 *     MiCreateLargePfnBitMaps @ 0x1405764F0 (MiCreateLargePfnBitMaps.c)
 *     MmAllocateNonCachedMemory @ 0x1406588A8 (MmAllocateNonCachedMemory.c)
 *     MiAllocateProcessShadow @ 0x14065B9B4 (MiAllocateProcessShadow.c)
 *     MiAddPagesToEnclave @ 0x14065E2D0 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x140660498 (MiExpandPartitionIds.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 *     MiBuildPagedPool @ 0x14078E258 (MiBuildPagedPool.c)
 *     MiMapDummyPages @ 0x14078EE84 (MiMapDummyPages.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x1407A47DC (MiInitializeNonPagedPool.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 *     MiInitializePteInfo @ 0x1407BB960 (MiInitializePteInfo.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140017698 (MiEmptyPteBins.c)
 *     MiExpandPtes @ 0x1400A1590 (MiExpandPtes.c)
 *     MiPteBinsNeedTrimming @ 0x1400BCCC8 (MiPteBinsNeedTrimming.c)
 *     MiCheckProcessorPteCache @ 0x1400DB2D0 (MiCheckProcessorPteCache.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400DD7C0 (RtlInterlockedSetClearRunEx.c)
 *     MiFlushTbAsNeeded @ 0x1400DDEE0 (MiFlushTbAsNeeded.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiCheckPteReserve @ 0x1401F4508 (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  int v11; // edi
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  unsigned __int64 *v23; // rax
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 *v27; // r9
  unsigned int v28; // r9d
  unsigned __int64 v29; // rcx
  unsigned int v30; // ecx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 *v33; // r11
  __int64 v34; // rcx
  unsigned int v35; // r8d
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // [rsp+20h] [rbp-98h]
  unsigned __int64 v49; // [rsp+28h] [rbp-90h]
  unsigned __int64 *v50; // [rsp+40h] [rbp-78h]
  _QWORD v51[11]; // [rsp+60h] [rbp-58h] BYREF
  int v53; // [rsp+C8h] [rbp+10h]
  int v54; // [rsp+D0h] [rbp+18h]

  v53 = a2;
  v3 = 0;
  v4 = (unsigned int)a2;
  v5 = (unsigned int)a2;
  v6 = a1;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v5 = (unsigned __int64)(unsigned int)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_1403278B0 && (unsigned int)a2 <= 0x40uLL )
  {
    v7 = MiCheckProcessorPteCache((unsigned int)a2);
    if ( v7 )
    {
LABEL_121:
      if ( (*(_DWORD *)(v6 + 24) & 2) == 0 )
        goto LABEL_130;
      if ( (__int64 *)v6 == &qword_1403278B0 && (dword_1403A913C & 2) != 0 )
        MiCheckPteReserve(v7, (unsigned int)v4);
      if ( (unsigned int)v4 > 0x10 )
        goto LABEL_130;
      if ( (_DWORD)v4 )
      {
        do
        {
          v45 = MI_READ_PTE_LOCK_FREE(v7 + 8LL * v3);
          if ( MiGetPteTimeStamp(v45, v46, v47) )
            break;
          ++v3;
        }
        while ( v3 < (unsigned int)v4 );
      }
      if ( v3 != (_DWORD)v4 )
LABEL_130:
        MiFlushTbAsNeeded(v7);
      return v7;
    }
  }
  if ( (unsigned int)v4 < 0x200 )
    goto LABEL_14;
  v8 = MiExpandPtes((__int64 *)v6, v4);
  v7 = v8;
  if ( !v8 )
  {
    if ( (__int64 *)v6 == &qword_1403278B0 )
    {
LABEL_13:
      ++**(_DWORD **)(v6 + 32);
      return 0LL;
    }
LABEL_14:
    v10 = 0LL;
    v54 = 0;
    v49 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = (unsigned __int64 *)v6;
        v13 = *(_QWORD *)(v6 + 72);
        v50 = (unsigned __int64 *)v6;
        if ( *(_QWORD *)v6 )
          break;
LABEL_103:
        if ( !v10 || v10 == *(_QWORD *)(v6 + 80) )
        {
          if ( (*(_DWORD *)(v6 + 24) & 1) == 0 )
            goto LABEL_111;
          if ( (v11 & 1) != 0 || (v11 |= 1u, v54 = v11, v43 = MiEmptyPteBins(v6, 0), v10 = v49, v43 != 1) )
          {
            if ( (v11 & 2) != 0
              || (v11 |= 2u, v54 = v11, !MiPteBinsNeedTrimming(v6, a2, a3))
              || (v44 = MiEmptyPteBins(v6, 1), v10 = v49, v44 != 1) )
            {
LABEL_111:
              v7 = MiExpandPtes((__int64 *)v6, (unsigned int)v4);
              if ( v7 )
                goto LABEL_120;
              if ( (*(_DWORD *)(v6 + 24) & 1) == 0 || (v11 & 4) != 0 )
                goto LABEL_13;
              v11 |= 4u;
              v54 = v11;
              MiEmptyPteBins(v6, 1);
              v10 = v49;
            }
          }
        }
      }
      a3 = *(_QWORD *)(v6 + 80);
      v49 = a3;
      if ( a3 )
      {
        a2 = *(_QWORD *)(v6 + 8) + 8 * (a3 >> 6);
        v14 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 >= a3 )
        {
          v51[1] = *(_QWORD *)(v6 + 8) + 8 * (a3 >> 6);
          v51[0] = v14 - a3;
          v12 = v51;
          v50 = v51;
          if ( v13 )
            v13 -= a3;
        }
        else
        {
          v49 = 0LL;
        }
      }
      v15 = *v12;
      v16 = v13;
      v48 = *v12;
      if ( v13 >= *v12 )
        v16 = 0LL;
      v17 = v15 - 1;
      if ( !v5 )
      {
        v18 = v16 & 0xFFFFFFFFFFFFFFF8uLL;
        goto LABEL_99;
      }
      v19 = v12[1];
LABEL_26:
      a2 = v17;
      if ( v17 - v16 + 1 < v5 )
      {
        a3 = -1LL;
        goto LABEL_52;
      }
      v20 = v17 - v5 + 1;
      v21 = v19 + 8 * (v20 >> 6);
      v22 = *(_QWORD *)(v19 + 8 * (v16 >> 6)) | ((1LL << (v16 & 0x3F)) - 1);
      v23 = (unsigned __int64 *)(v19 + 8 * (v16 >> 6));
      if ( v5 > 0x7F )
      {
        if ( (v20 & 0x3F) != 0 )
          v21 += 8LL;
        if ( v22 )
        {
          if ( *++v23 )
            goto LABEL_37;
          v24 = !_BitScanReverse64((unsigned __int64 *)&v25, v22);
          if ( v24 )
            a2 = 64LL;
          else
            a2 = (unsigned int)(63 - v25);
        }
        else
        {
          a2 = 0LL;
        }
LABEL_42:
        a3 = ((__int64)((__int64)v23 - v19) >> 3 << 6) - (unsigned int)a2;
        if ( a3 > v20 )
          goto LABEL_93;
        v27 = &v23[(v5 - (unsigned int)a2) >> 6];
        for ( ++v23; v23 != v27; ++v23 )
        {
          if ( *v23 )
            goto LABEL_37;
        }
        v28 = ((_BYTE)v5 - (_BYTE)a2) & 0x3F;
        if ( (((_BYTE)v5 - (_BYTE)a2) & 0x3F) != 0 )
        {
          v24 = !_BitScanForward64(&a2, *v23);
          if ( v24 )
            a2 = 64LL;
          if ( (unsigned int)a2 < v28 )
          {
LABEL_37:
            while ( (unsigned __int64)v23 <= v21 )
            {
              if ( !*++v23 )
              {
                v24 = !_BitScanReverse64((unsigned __int64 *)&v26, *(v23 - 1));
                if ( v24 )
                  a2 = 64LL;
                else
                  a2 = (unsigned int)(63 - v26);
                goto LABEL_42;
              }
            }
            goto LABEL_93;
          }
        }
        goto LABEL_50;
      }
      if ( v5 >= 0x40 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v22 < 0 )
            {
              while ( (unsigned __int64)++v23 <= v21 )
              {
                v22 = *v23;
                if ( (*v23 & 0x8000000000000000uLL) == 0 )
                  goto LABEL_60;
              }
LABEL_93:
              a3 = -1LL;
LABEL_51:
              v15 = v48;
LABEL_52:
              if ( !v16 )
                goto LABEL_98;
              v29 = v5 + v13;
              v16 = 0LL;
              if ( v5 + v13 > v15 )
                v29 = v15;
              v17 = v29 - 1;
              goto LABEL_26;
            }
LABEL_60:
            v24 = !_BitScanReverse64(&a2, v22);
            if ( v24 )
              v30 = 64;
            else
              v30 = 63 - a2;
            a3 = ((((__int64)((__int64)v23 - v19) >> 3) + 1) << 6) - v30;
            if ( a3 > v20 )
              goto LABEL_93;
            a2 = v5 - v30;
            if ( v5 == v30 )
              goto LABEL_50;
            v22 = v23[1];
            ++v23;
            if ( a2 >= 0x40 )
              break;
LABEL_69:
            v24 = !_BitScanForward64(&v31, v22);
            if ( v24 )
              v31 = 64LL;
            if ( v31 >= a2 )
              goto LABEL_50;
          }
          if ( !v22 )
          {
            a2 -= 64LL;
            if ( !a2 )
              goto LABEL_50;
            v22 = v23[1];
            ++v23;
            goto LABEL_69;
          }
        }
      }
      if ( v5 <= 1 )
      {
        if ( v22 == -1 )
        {
          do
          {
            if ( (unsigned __int64)++v23 > v21 )
              goto LABEL_93;
            v22 = *v23;
          }
          while ( *v23 == -1LL );
        }
        _BitScanForward64(&v41, ~v22);
        v42 = (__int64)((__int64)v23 - v19) >> 3;
        v40 = (unsigned int)v41;
        v38 = v42 << 6;
      }
      else
      {
        a2 = v17 >> 6;
        v32 = 0LL;
        v33 = (unsigned __int64 *)(v19 + 8 * (v17 >> 6));
        while ( 1 )
        {
          if ( v22 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v23 > v21 )
                goto LABEL_93;
              v22 = *v23;
            }
            while ( *v23 == -1LL );
            v32 = 0LL;
          }
          v24 = !_BitScanForward64((unsigned __int64 *)&v34, v22);
          if ( v24 )
            LODWORD(v34) = 64;
          a2 = (unsigned int)(v32 + v34);
          if ( a2 >= v5 )
            break;
          v35 = v5;
          v36 = ~v22;
          while ( 1 )
          {
            a2 = v36 >> (v35 >> 1);
            v36 &= a2;
            if ( !v36 )
              break;
            v35 -= v35 >> 1;
            if ( v35 <= 1 )
            {
              _BitScanForward64(&v37, v36);
              v38 = (unsigned int)v37;
              goto LABEL_91;
            }
          }
          if ( v23 == v33 )
            goto LABEL_93;
          v24 = !_BitScanReverse64((unsigned __int64 *)&v39, v22);
          v22 = v23[1];
          if ( v24 )
          {
            ++v23;
            v32 = 64LL;
          }
          else
          {
            v32 = (unsigned int)(63 - v39);
            ++v23;
          }
        }
        v38 = -v32;
LABEL_91:
        v40 = (__int64)((__int64)v23 - v19) >> 3 << 6;
      }
      a3 = v40 + v38;
      if ( a3 > v20 )
        goto LABEL_93;
LABEL_50:
      if ( a3 == -1LL )
        goto LABEL_51;
LABEL_98:
      v6 = a1;
      v18 = a3;
      v11 = v54;
      v12 = v50;
      LODWORD(v4) = v53;
LABEL_99:
      if ( v18 == -1LL )
      {
        v10 = v49;
        goto LABEL_103;
      }
      if ( (unsigned int)RtlInterlockedSetClearRunEx(v12, v18, v5) )
      {
        if ( v12 == v51 )
          v18 += v49;
        *(_QWORD *)(v6 + 72) = v18 + v5;
        if ( (*(_DWORD *)(v6 + 24) & 4) != 0 )
          v18 *= 16LL;
        v7 = *(_QWORD *)(v6 + 16) + 8 * v18;
LABEL_120:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 96), -(__int64)v5);
        goto LABEL_121;
      }
      v10 = v49;
    }
  }
  if ( (__int64 *)v6 == &qword_1403278B0 && (dword_1403A913C & 2) != 0 )
    MiCheckPteReserve(v8, v4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 96), -(__int64)v5);
  return v7;
}
