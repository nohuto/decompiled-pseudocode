/*
 * XREFs of MiReservePtes @ 0x140049FD0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     MiZeroInParallelWorker @ 0x1400BC39C (MiZeroInParallelWorker.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiMapSinglePage @ 0x1400FE59C (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiInitializeZeroPagePtes @ 0x140130700 (MiInitializeZeroPagePtes.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     MiBuildDynamicRegion @ 0x140132FA0 (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x14013A154 (MiReservePageHash.c)
 *     MmCopyMemory @ 0x1401D45A8 (MmCopyMemory.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 *     MmInitializeProcessor @ 0x1403A91A8 (MmInitializeProcessor.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 *     MmAllocateMappingAddress @ 0x1404E8208 (MmAllocateMappingAddress.c)
 *     MmAllocateDumpHibernateResources @ 0x1404FA284 (MmAllocateDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     MmAllocateNonCachedMemory @ 0x140623364 (MmAllocateNonCachedMemory.c)
 *     MiAllocatePartitionId @ 0x140623F10 (MiAllocatePartitionId.c)
 *     MiAllocateProcessShadow @ 0x140626044 (MiAllocateProcessShadow.c)
 *     MiAddPagesToEnclave @ 0x140628AE0 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 *     MiScrubNodeLargePages @ 0x14062B008 (MiScrubNodeLargePages.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     MiBuildPagedPool @ 0x140749564 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 *     MiInitializeTbFlushing @ 0x14074C190 (MiInitializeTbFlushing.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x14074CF24 (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 *     MiInitializePteInfo @ 0x140771030 (MiInitializePteInfo.c)
 *     MiMapDummyPages @ 0x140771604 (MiMapDummyPages.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140013B2C (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x140014130 (MiPteBinsNeedTrimming.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400159D0 (RtlInterlockedSetClearRunEx.c)
 *     MiExpandPtes @ 0x140016404 (MiExpandPtes.c)
 *     MiFlushTbAsNeeded @ 0x140061B60 (MiFlushTbAsNeeded.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckPteReserve @ 0x1401E06C0 (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // r15
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *p_PteBitCache; // rdx
  unsigned __int64 *v9; // r9
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  _BYTE *v14; // rsi
  char v15; // al
  ULONG_PTR v16; // rbx
  __int64 v17; // rax
  unsigned int v19; // r11d
  bool v20; // zf
  __int64 v21; // rcx
  unsigned int v22; // r11d
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r15
  __int64 v33; // r9
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rdi
  __int64 *v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r9
  volatile signed __int64 *v44; // rcx
  signed __int64 v45; // rax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // r11d
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // ecx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  int v61; // esi
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // ecx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned int v69; // eax
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  unsigned __int64 v73; // r9
  unsigned int v74; // r9d
  __int64 v75; // rcx
  unsigned __int64 v76; // [rsp+20h] [rbp-79h]
  unsigned __int64 v78; // [rsp+60h] [rbp-39h]
  struct _KPRCB *CurrentPrcb; // [rsp+78h] [rbp-21h]
  unsigned __int8 v80; // [rsp+80h] [rbp-19h]
  unsigned __int64 *v81; // [rsp+90h] [rbp-9h]
  int v82; // [rsp+100h] [rbp+67h]

  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  v82 = 0;
  v6 = (unsigned int)v3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v6 = (unsigned __int64)(unsigned int)v3 >> 4;
    goto LABEL_48;
  }
  if ( v3 > 0x40 || (__int64 *)a1 != &qword_1402FF7B0 )
    goto LABEL_48;
  CurrentIrql = KeGetCurrentIrql();
  v80 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  p_PteBitCache = &CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache != -1LL )
    goto LABEL_5;
  __writecr8(CurrentIrql);
  v37 = qword_1402FF7F8;
LABEL_73:
  while ( 2 )
  {
    v38 = v37;
    if ( v37 >= qword_1402FF7B0 )
      v38 = 0LL;
    v39 = qword_1402FF7B0 - 1;
    while ( 1 )
    {
      if ( v39 - v38 == -1LL )
        goto LABEL_148;
      v40 = (__int64 *)(qword_1402FF7B8 + 8 * (v38 >> 6));
      v41 = ((1LL << (v38 & 0x3F)) - 1) | *v40;
      if ( v41 != -1 )
        break;
      while ( (unsigned __int64)++v40 <= qword_1402FF7B8 + 8 * (v39 >> 6) )
      {
        v41 = *v40;
        if ( *v40 != -1 )
          goto LABEL_78;
      }
LABEL_148:
      if ( !v38 )
      {
        if ( !(unsigned int)MiEmptyPteBins((__int64)&qword_1402FF7B0, 0) )
          goto LABEL_48;
        v37 = 0LL;
        goto LABEL_73;
      }
      v62 = v37 + 1;
      if ( v37 + 1 > qword_1402FF7B0 )
        v62 = qword_1402FF7B0;
      v39 = v62 - 1;
      v38 = 0LL;
    }
LABEL_78:
    _BitScanForward64((unsigned __int64 *)&v41, ~v41);
    v42 = v41 + (((__int64)v40 - qword_1402FF7B8) >> 3 << 6);
    if ( v42 > v39 || v42 == -1LL )
      goto LABEL_148;
    a3 = v42 & 0xFFFFFFFFFFFFFFC0uLL;
    v43 = *(_QWORD *)(qword_1402FF7B8 + 8 * (a3 >> 6));
    v44 = (volatile signed __int64 *)(qword_1402FF7B8 + 8 * (a3 >> 6));
    if ( v43 == -1LL )
      goto LABEL_196;
    while ( 1 )
    {
      v45 = _InterlockedCompareExchange64(v44, -1LL, v43);
      if ( v43 == v45 )
        break;
      v43 = v45;
      if ( v45 == -1 )
        goto LABEL_196;
    }
    if ( v43 == -1LL )
    {
LABEL_196:
      v37 = a3 + 64;
      continue;
    }
    break;
  }
  v46 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v47 = KeGetCurrentPrcb();
  v80 = v46;
  CurrentPrcb = v47;
  p_PteBitCache = &v47->PteBitCache;
  if ( v47->PteBitCache == -1LL )
  {
    *p_PteBitCache = v43;
    v47->PteBitOffset = a3;
    v48 = ~v43 - ((~v43 >> 1) & 0x5555555555555555LL);
    _InterlockedExchangeAdd64(
      &qword_1402FF808,
      -(__int64)((unsigned int)((0x101010101010101LL
                               * (((v48 & 0x3333333333333333LL)
                                 + ((v48 >> 2) & 0x3333333333333333LL)
                                 + (((v48 & 0x3333333333333333LL) + ((v48 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
    qword_1402FF7F8 = a3 + 64;
  }
  else
  {
    _InterlockedAnd64(v44, v43);
  }
LABEL_5:
  v81 = p_PteBitCache;
  v5 = 0LL;
  if ( !(_DWORD)v3 )
  {
    v12 = 0LL;
    goto LABEL_16;
  }
  v76 = 63 - v3 + 1;
  v9 = &v81[v76 >> 6];
  v10 = v81;
  a3 = *v81;
  if ( v3 >= 0x40 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (a3 & 0x8000000000000000uLL) != 0LL )
        {
          while ( ++v10 <= v9 )
          {
            a3 = *v10;
            if ( (*v10 & 0x8000000000000000uLL) == 0 )
              goto LABEL_125;
          }
LABEL_85:
          v12 = -1LL;
          goto LABEL_10;
        }
LABEL_125:
        v20 = !_BitScanReverse64((unsigned __int64 *)&v57, a3);
        if ( v20 )
          v58 = 64;
        else
          v58 = 63 - v57;
        a3 = v58;
        v12 = ((v10 - v81 + 1) << 6) - v58;
        if ( v12 > v76 )
          goto LABEL_85;
        v59 = v3 - v58;
        if ( v3 == v58 )
          goto LABEL_10;
        a3 = v10[1];
        ++v10;
        if ( v59 >= 0x40 )
          break;
LABEL_130:
        v20 = !_BitScanForward64(&v60, a3);
        if ( v20 )
          v60 = 64LL;
        if ( v60 >= v59 )
          goto LABEL_10;
      }
      if ( !a3 )
      {
        v59 -= 64LL;
        if ( !v59 )
          goto LABEL_10;
        a3 = v10[1];
        ++v10;
        goto LABEL_130;
      }
    }
  }
  if ( v3 > 1 )
  {
    v5 = 0LL;
    v19 = 0;
    while ( 1 )
    {
      if ( a3 == -1LL )
      {
        while ( ++v10 <= v9 )
        {
          a3 = *v10;
          if ( *v10 != -1LL )
          {
            v19 = 0;
            goto LABEL_34;
          }
        }
        v12 = -1LL;
        goto LABEL_11;
      }
LABEL_34:
      v20 = !_BitScanForward64((unsigned __int64 *)&v21, a3);
      if ( v20 )
        LODWORD(v21) = 64;
      if ( v19 + (unsigned int)v21 >= v3 )
        break;
      v22 = v3;
      v23 = ~a3;
      while ( 1 )
      {
        v23 &= v23 >> (v22 >> 1);
        if ( !v23 )
          break;
        v22 -= v22 >> 1;
        if ( v22 <= 1 )
        {
          _BitScanForward64(&v24, v23);
          v25 = (unsigned int)v24;
          goto LABEL_41;
        }
      }
      if ( v10 == v81 )
        goto LABEL_85;
      v20 = !_BitScanReverse64((unsigned __int64 *)&v26, a3);
      if ( v20 )
        v19 = 64;
      else
        v19 = 63 - v26;
      a3 = v10[1];
      ++v10;
      v5 = 0LL;
    }
    v25 = -(__int64)v19;
LABEL_41:
    v12 = ((v10 - v81) << 6) + v25;
    if ( v12 > v76 )
      goto LABEL_85;
  }
  else
  {
    if ( a3 == -1LL )
    {
      do
      {
        if ( ++v10 > v9 )
          goto LABEL_85;
        a3 = *v10;
      }
      while ( *v10 == -1LL );
    }
    a3 = ~a3;
    _BitScanForward64(&v11, a3);
    v12 = (unsigned int)v11 + ((v10 - v81) << 6);
    if ( v12 > v76 )
      goto LABEL_85;
  }
LABEL_10:
  v5 = 0LL;
LABEL_11:
  if ( v12 == -1LL )
  {
    v16 = 0LL;
  }
  else
  {
    v13 = v12 & 7;
    v14 = (char *)v81 + (v12 >> 3);
    if ( v13 + v3 <= 8 )
    {
      v15 = byte_140247340[v3] << v13;
      goto LABEL_14;
    }
    if ( (v12 & 7) != 0 )
    {
      *v14++ |= byte_1402453A0[v13];
      v3 -= (unsigned int)(8 - v13);
    }
    if ( v3 > 8 )
    {
      memset(v14, 255, v3 >> 3);
      v14 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v15 = byte_140247340[v3];
LABEL_14:
      *v14 |= v15;
    }
    v4 = a1;
    LODWORD(v3) = a2;
LABEL_16:
    v16 = *(&qword_1402FF7B0 + 2) + 8 * (v12 + CurrentPrcb->PteBitOffset);
  }
  __writecr8(v80);
  if ( v16 )
    goto LABEL_18;
LABEL_48:
  if ( (unsigned int)v3 >= 0x200 )
  {
    v67 = MiExpandPtes(v4, (unsigned int)v3);
    v16 = v67;
    if ( v67 )
    {
      if ( (__int64 *)v4 == &qword_1402FF7B0 && (dword_1403810F0 & 2) != 0 )
        MiCheckPteReserve(v67, (unsigned int)v3);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 88), -(__int64)v6);
      return v16;
    }
    if ( (__int64 *)v4 == &qword_1402FF7B0 )
    {
LABEL_209:
      ++**(_DWORD **)(v4 + 32);
      return 0LL;
    }
  }
  v27 = *(_QWORD *)(v4 + 72);
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !*(_QWORD *)v4 )
        goto LABEL_140;
      v28 = *(_QWORD *)v4;
      v29 = v27;
      v5 = *(_QWORD *)(v4 + 8);
      v78 = v5;
      if ( v27 >= *(_QWORD *)v4 )
        v29 = 0LL;
      v30 = v28 - 1;
      if ( !v6 )
      {
        v36 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
        goto LABEL_62;
      }
      while ( 2 )
      {
        a3 = v29;
        v31 = v5;
        if ( v30 - v29 + 1 < v6 )
          goto LABEL_118;
        a3 = v5 + 8 * (v29 >> 6);
        v32 = v30 - v6 + 1;
        v33 = ((1LL << (v29 & 0x3F)) - 1) | *(_QWORD *)a3;
        v34 = v5 + 8 * (v32 >> 6);
        if ( v6 > 0x7F )
        {
          if ( (v32 & 0x3F) != 0 )
            v34 += 8LL;
          if ( v33 )
          {
            v63 = *(_QWORD *)(a3 + 8);
            a3 += 8LL;
            if ( v63 )
              goto LABEL_158;
            v20 = !_BitScanReverse64((unsigned __int64 *)&v64, v33);
            if ( v20 )
              v65 = 64;
            else
              v65 = 63 - v64;
          }
          else
          {
            v65 = 0;
          }
          while ( 1 )
          {
            v5 = ((__int64)(a3 - v31) >> 3 << 6) - v65;
            if ( v5 > v32 )
              goto LABEL_118;
            v73 = a3 + 8 * ((v6 - v65) >> 6);
            a3 += 8LL;
            if ( a3 == v73 )
            {
LABEL_190:
              v74 = ((_BYTE)v6 - (_BYTE)v65) & 0x3F;
              if ( (((_BYTE)v6 - (_BYTE)v65) & 0x3F) == 0 )
                goto LABEL_60;
              v20 = !_BitScanForward64((unsigned __int64 *)&v75, *(_QWORD *)a3);
              if ( v20 )
                LODWORD(v75) = 64;
              if ( (unsigned int)v75 >= v74 )
                goto LABEL_60;
            }
            else
            {
              while ( !*(_QWORD *)a3 )
              {
                a3 += 8LL;
                if ( a3 == v73 )
                  goto LABEL_190;
              }
            }
            do
            {
LABEL_158:
              if ( a3 > v34 )
                goto LABEL_118;
              v66 = *(_QWORD *)(a3 + 8);
              a3 += 8LL;
            }
            while ( v66 );
            v20 = !_BitScanReverse64((unsigned __int64 *)&v72, *(_QWORD *)(a3 - 8));
            if ( v20 )
              v65 = 64;
            else
              v65 = 63 - v72;
          }
        }
        if ( v6 < 0x40 )
        {
          if ( v6 > 1 )
          {
            v49 = 0LL;
            while ( 1 )
            {
              if ( v33 == -1 )
              {
                while ( 1 )
                {
                  a3 += 8LL;
                  if ( a3 > v34 )
                    goto LABEL_118;
                  v33 = *(_QWORD *)a3;
                  if ( *(_QWORD *)a3 != -1LL )
                  {
                    v49 = 0LL;
                    break;
                  }
                }
              }
              v20 = !_BitScanForward64((unsigned __int64 *)&v50, v33);
              if ( v20 )
                LODWORD(v50) = 64;
              if ( (unsigned int)(v49 + v50) >= v6 )
                break;
              v51 = v6;
              v52 = ~v33;
              while ( 1 )
              {
                v52 &= v52 >> (v51 >> 1);
                if ( !v52 )
                  break;
                v51 -= v51 >> 1;
                if ( v51 <= 1 )
                {
                  _BitScanForward64(&v53, v52);
                  v54 = (unsigned int)v53;
                  goto LABEL_104;
                }
              }
              if ( a3 == v31 + 8 * (v30 >> 6) )
                goto LABEL_118;
              v20 = !_BitScanReverse64((unsigned __int64 *)&v55, v33);
              if ( v20 )
                v49 = 64LL;
              else
                v49 = (unsigned int)(63 - v55);
              v33 = *(_QWORD *)(a3 + 8);
              a3 += 8LL;
            }
            v54 = -v49;
LABEL_104:
            a3 = (__int64)(a3 - v31) >> 3 << 6;
            v5 = a3 + v54;
            if ( v5 > v32 )
            {
              v5 = -1LL;
              goto LABEL_119;
            }
          }
          else
          {
            if ( v33 == -1 )
            {
              do
              {
                a3 += 8LL;
                if ( a3 > v34 )
                  goto LABEL_118;
                v33 = *(_QWORD *)a3;
              }
              while ( *(_QWORD *)a3 == -1LL );
            }
            _BitScanForward64(&v35, ~v33);
            v5 = v35 + ((__int64)(a3 - v5) >> 3 << 6);
            if ( v5 > v32 )
            {
              v5 = -1LL;
              goto LABEL_119;
            }
          }
LABEL_60:
          if ( v5 == -1LL )
            goto LABEL_119;
          break;
        }
        while ( v33 >= 0 )
        {
LABEL_169:
          v20 = !_BitScanReverse64((unsigned __int64 *)&v68, v33);
          if ( v20 )
            v69 = 64;
          else
            v69 = 63 - v68;
          v5 = ((((__int64)(a3 - v31) >> 3) + 1) << 6) - v69;
          if ( v5 > v32 )
            goto LABEL_118;
          v70 = v6 - v69;
          if ( v6 == v69 )
            goto LABEL_60;
          v33 = *(_QWORD *)(a3 + 8);
          a3 += 8LL;
          if ( v70 >= 0x40 )
          {
            if ( v33 )
              continue;
            v70 -= 64LL;
            if ( !v70 )
              goto LABEL_60;
            v33 = *(_QWORD *)(a3 + 8);
            a3 += 8LL;
          }
          v20 = !_BitScanForward64(&v71, v33);
          if ( v20 )
            v71 = 64LL;
          if ( v71 >= v70 )
            goto LABEL_60;
        }
        while ( 1 )
        {
          a3 += 8LL;
          if ( a3 > v34 )
            break;
          v33 = *(_QWORD *)a3;
          if ( (*(_QWORD *)a3 & 0x8000000000000000uLL) == 0 )
            goto LABEL_169;
        }
LABEL_118:
        v5 = -1LL;
LABEL_119:
        if ( v29 )
        {
          v56 = v27 + v6;
          if ( v27 + v6 > v28 )
            v56 = v28;
          v5 = v78;
          v30 = v56 - 1;
          v29 = 0LL;
          continue;
        }
        break;
      }
      v4 = a1;
      v36 = v5;
LABEL_62:
      if ( v36 == -1LL )
      {
LABEL_140:
        v61 = v82;
        if ( (*(_DWORD *)(v4 + 24) & 1) == 0
          || ((v82 & 1) != 0 || (v61 = v82 | 1, v82 |= 1u, (unsigned int)MiEmptyPteBins(v4, 0) != 1))
          && ((v61 & 2) != 0
           || (v61 |= 2u, v82 = v61, !MiPteBinsNeedTrimming(v4, v5, a3))
           || (unsigned int)MiEmptyPteBins(v4, 1) != 1) )
        {
          v16 = MiExpandPtes(v4, a2);
          if ( v16 )
            goto LABEL_67;
          if ( (*(_BYTE *)(v4 + 24) & 1) == 0 || (v61 & 4) != 0 )
            goto LABEL_209;
          v82 = v61 | 4;
          MiEmptyPteBins(v4, 1);
        }
        continue;
      }
      break;
    }
    if ( !(unsigned int)RtlInterlockedSetClearRunEx(v4, v36, v6) )
      continue;
    break;
  }
  *(_QWORD *)(v4 + 72) = v36 + v6;
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
    v36 *= 16LL;
  v16 = *(_QWORD *)(v4 + 16) + 8 * v36;
LABEL_67:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 88), -(__int64)v6);
LABEL_18:
  if ( (*(_DWORD *)(v4 + 24) & 2) == 0 )
    goto LABEL_31;
  if ( (__int64 *)v4 == &qword_1402FF7B0 && (dword_1403810F0 & 2) != 0 )
    MiCheckPteReserve(v16, a2);
  v17 = MI_READ_PTE_LOCK_FREE(v16);
  if ( a2 == 1 )
  {
    if ( (v17 & 0xFFFFFFFF00000000uLL) == 0 )
      return v16;
LABEL_31:
    MiFlushTbAsNeeded(v16);
  }
  else if ( a2 != 2
         || (v17 & 0xFFFFFFFF00000000uLL) != 0
         || (MI_READ_PTE_LOCK_FREE(v16 + 8) & 0xFFFFFFFF00000000uLL) != 0 )
  {
    goto LABEL_31;
  }
  return v16;
}
