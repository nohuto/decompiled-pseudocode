/*
 * XREFs of MiCreatePagingFileMap @ 0x1404A2750
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     MiUpdatePageFileSectionList @ 0x14008F97C (MiUpdatePageFileSectionList.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiUpdateLargePageSectionPfn @ 0x1401E59A4 (MiUpdateLargePageSectionPfn.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404A2E54 (MiInitializePrototypePtes.c)
 *     MiAllocateLargeZeroPages @ 0x1406621D4 (MiAllocateLargeZeroPages.c)
 *     MiFreeLargeZeroPages @ 0x140662A14 (MiFreeLargeZeroPages.c)
 */

__int64 __fastcall MiCreatePagingFileMap(PVOID ***a1, unsigned __int64 *a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  int v11; // r14d
  unsigned int v12; // ebx
  int v13; // r8d
  unsigned __int16 *v14; // rbx
  unsigned __int16 *v15; // rsi
  unsigned __int64 v16; // rax
  __int64 *v17; // r12
  unsigned __int64 v18; // r15
  PVOID *PoolWithTag; // rax
  PVOID *v20; // rbx
  PVOID **v21; // rax
  PVOID **v22; // r14
  __int16 v23; // ax
  int v24; // r11d
  __int64 v25; // r9
  __int128 *v26; // r8
  char v27; // al
  __int64 v28; // rcx
  PVOID **v29; // rsi
  PVOID **v30; // rdx
  unsigned __int64 v31; // r11
  char i; // al
  __int16 v33; // cx
  char v34; // cl
  unsigned __int64 v35; // r10
  __int64 *v36; // rax
  unsigned __int64 v37; // r13
  PVOID *v38; // r12
  __int64 v39; // rbx
  char v40; // r11
  __int128 *v41; // r13
  __int64 DemandZeroPte; // rsi
  __int64 v43; // rax
  _QWORD *v44; // r15
  __int64 v45; // r14
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  __int64 v49; // rcx
  int v50; // [rsp+38h] [rbp-41h]
  unsigned __int64 v51; // [rsp+40h] [rbp-39h] BYREF
  __int128 *v52; // [rsp+48h] [rbp-31h]
  __int64 *v53; // [rsp+50h] [rbp-29h]
  unsigned __int64 v54; // [rsp+58h] [rbp-21h]
  __int64 v55; // [rsp+60h] [rbp-19h]
  __int64 v56; // [rsp+68h] [rbp-11h]
  _QWORD *v57; // [rsp+70h] [rbp-9h]
  __int128 v58; // [rsp+78h] [rbp-1h] BYREF
  PVOID **v59; // [rsp+90h] [rbp+17h]
  __int64 v61; // [rsp+E0h] [rbp+67h]

  *a1 = 0LL;
  v5 = *a2;
  v58 = 0LL;
  if ( !v5 )
    return 3221225714LL;
  if ( v5 > 0xFFFFF000000LL )
    return 3221225536LL;
  v9 = 0LL;
  v51 = 0LL;
  v10 = (v5 + 4095) >> 12;
  v11 = a4 & 0x8000000;
  v50 = a4 & 0x8000000;
  v56 = 2LL;
  if ( (a4 & 0x8000000) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v10, 0) )
      return 3221225773LL;
    if ( (a4 & 0x80000) != 0 && (v10 & 0xF) != 0 )
    {
      MiReturnCommit((__int64)MiSystemPartition, v10);
      return 3221225714LL;
    }
    if ( a4 < 0 )
    {
      if ( (v10 & 0x1FF) != 0 )
      {
        v12 = -1073741582;
LABEL_26:
        MiReturnCommit((__int64)MiSystemPartition, v10);
        return v12;
      }
      if ( !(unsigned int)MiChargeResident(MiSystemPartition, v10, 0LL) )
      {
LABEL_25:
        v12 = -1073741670;
        goto LABEL_26;
      }
      v51 = v10;
      if ( a5 )
        v13 = a5 - 1;
      else
        v13 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23524);
      v14 = (unsigned __int16 *)((char *)qword_1403269E8 + 2 * v13 * (unsigned int)(unsigned __int16)KeNumberNodes);
      v15 = &v14[(unsigned __int16)KeNumberNodes];
      MiAllocateLargeZeroPages((unsigned int)MiSystemPartition, (unsigned int)&v51, v13, a3, (__int64)&v58);
      v16 = v51;
      if ( v51 )
      {
        do
        {
          if ( ++v14 == v15 )
            break;
          MiAllocateLargeZeroPages((unsigned int)MiSystemPartition, (unsigned int)&v51, *v14, a3, (__int64)&v58);
          v16 = v51;
        }
        while ( v51 );
        if ( v16 )
        {
          if ( v16 != v10 )
            MiFreeLargeZeroPages(MiSystemPartition, &v58);
          MiReturnResidentAvailable(v10);
          goto LABEL_25;
        }
      }
      v9 = v10;
      v51 = v10;
    }
  }
  v17 = 0LL;
  if ( v11 )
  {
    v54 = v10;
    v18 = 1LL;
  }
  else
  {
    v18 = v10 >> 17;
    v54 = 0x20000LL;
    if ( (v10 & 0x1FFFF) != 0 )
      ++v18;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v18 + 128, 0x61436D4Du);
  v20 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_63;
  memset(PoolWithTag, 0, 80 * v18 + 128);
  v21 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6765534Du);
  v59 = v21;
  v22 = v21;
  if ( !v21 )
  {
LABEL_57:
    v37 = 0LL;
    if ( v18 )
    {
      v38 = v20 + 17;
      do
      {
        if ( !*v38 )
          break;
        ExFreePoolWithTag(*v38, 0);
        v38 += 10;
        ++v37;
      }
      while ( v37 < v18 );
    }
    ExFreePoolWithTag(v20, 0);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
LABEL_63:
    if ( v50 )
    {
      if ( v9 )
      {
        MiFreeLargeZeroPages(MiSystemPartition, &v58);
        MiReturnResidentAvailable(v9);
      }
      else
      {
        v9 = v10;
      }
      MiReturnCommit((__int64)MiSystemPartition, v9);
    }
    return 3221225626LL;
  }
  v21[9] = 0LL;
  *v20 = v21;
  *((_DWORD *)v20 + 24) = v18;
  v20[2] = v20 + 1;
  v20[1] = v20 + 1;
  v20[14] = (PVOID)1;
  v20[3] = (PVOID)1;
  v20[6] = (PVOID)1;
  if ( (a4 & 0x200000) != 0 )
    *((_DWORD *)v20 + 14) |= 0x40u;
  if ( (a4 & 0x4000000) != 0 )
    *((_DWORD *)v20 + 14) |= 0x1000u;
  if ( v50 )
    *((_DWORD *)v20 + 14) |= 0x2000u;
  if ( (a4 & 0x80000) != 0 )
    *((_DWORD *)v20 + 14) |= 0x80000000;
  v20[13] = 0LL;
  *((_DWORD *)v20 + 14) ^= (*((_DWORD *)v20 + 14) ^ (a5 << 20)) & 0x3F00000;
  memset(v21, 0, 0x48uLL);
  v22[5] = 0LL;
  *v22 = v20;
  v22[3] = (PVOID *)(v10 << 12);
  *((_DWORD *)v22 + 2) = v10;
  if ( (a4 & 0x10000000) != 0 )
  {
    v23 = 0x8000;
LABEL_46:
    *((_WORD *)v22 + 6) |= v23;
    goto LABEL_47;
  }
  if ( (a4 & 0x40000000) != 0 )
  {
    v23 = 0x4000;
    goto LABEL_46;
  }
LABEL_47:
  v24 = a3;
  v25 = 0LL;
  v55 = 0LL;
  v26 = 0LL;
  v27 = (*((_BYTE *)v22 + 14) ^ (2 * a3)) & 0x3E;
  v52 = 0LL;
  *((_BYTE *)v22 + 14) ^= v27;
  v22[6] = (PVOID *)KeGetCurrentThread()->ApcState.Process;
  v28 = (__int64)(v20 + 16);
  v57 = v20 + 16;
  v29 = (PVOID **)(v20 + 16);
  v30 = (PVOID **)(v20 + 16);
  if ( v18 )
  {
    v31 = v10;
    for ( i = 2 * (a3 & 0x1F); ; i = 2 * (a3 & 0x1F) )
    {
      v33 = *((_WORD *)v29 + 16);
      *v29 = v20;
      v34 = i | v33 & 0xC1;
      *((_DWORD *)v29 + 9) = v25;
      v35 = v31;
      v30 = v29;
      if ( v31 > v54 )
        v35 = v54;
      v31 -= v35;
      *((_DWORD *)v29 + 11) = v35;
      *((_WORD *)v29 + 16) = v34 & 0x3F | (WORD2(v25) << 6);
      v53 = (__int64 *)v31;
      if ( v50 )
      {
        v36 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v35, 0x74536D4Du);
        v17 = v36;
        if ( !v36 )
        {
          v9 = v51;
          goto LABEL_57;
        }
        v26 = v52;
        v30 = v29;
        v25 = v55;
        v31 = (unsigned __int64)v53;
        v29[1] = (PVOID *)v36;
      }
      v26 = (__int128 *)((char *)v26 + 1);
      v25 += *((unsigned int *)v29 + 11);
      v52 = v26;
      v29 += 10;
      v55 = v25;
      v30[2] = (PVOID *)v29;
      if ( (unsigned __int64)v26 >= v18 )
        break;
    }
    v24 = a3;
    v28 = (__int64)v57;
  }
  v30[2] = 0LL;
  v22[8] = (PVOID *)v17;
  if ( v50 )
  {
    v22[2] = (PVOID *)v10;
    _InterlockedExchangeAdd64(&qword_140327958, v10);
    if ( a4 >= 0 )
    {
      MiInitializePrototypePtes(*(_QWORD *)(v28 + 8), v10, v28, 1LL);
    }
    else
    {
      *((_WORD *)v22 + 6) |= 0x1000u;
      v39 = MmProtectToPteMask[v24] | 0xFFFFFFFFF021LL;
      if ( !MiGetPteAddress(0LL) || !MiGetPdeAddress(0LL) )
        v39 |= 4uLL;
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
        v39 |= 0x100uLL;
      if ( (v40 & 4) != 0 )
        v39 |= 0x42uLL;
      v41 = &v58;
      DemandZeroPte = MiMakeDemandZeroPte(v40);
      v52 = &v58;
      v43 = 2LL;
      do
      {
        v44 = *(_QWORD **)v41;
        if ( *(_QWORD *)v41 )
        {
          do
          {
            v45 = (__int64)v44;
            v44 = (_QWORD *)*v44;
            v46 = MiLargePageSizes[(unsigned int)MiFreeZeroPageSizeIndex(v45)];
            v47 = (v45 + 0x58000000000LL) / 48;
            v53 = &v17[v46];
            memset(v17, 0, 8 * ((v46 * 8) >> 3));
            v48 = (unsigned __int64)v53;
            v61 = v47;
            do
            {
              v39 ^= (v39 ^ (v47 << 12)) & 0xFFFFFFFFF000LL;
              *v17 = v39;
              if ( MiPteInShadowRange((unsigned __int64)v17) )
                MiWritePteShadow(v49, v39);
              MiUpdateLargePageSectionPfn(v45, (__int64)v17, DemandZeroPte);
              v45 += 48LL;
              v47 = v61 + 1;
              ++v17;
              ++v61;
            }
            while ( (unsigned __int64)v17 < v48 );
          }
          while ( v44 );
          v41 = v52;
          v43 = v56;
          *(_QWORD *)v52 = 0LL;
        }
        v41 = (__int128 *)((char *)v41 + 8);
        --v43;
        v52 = v41;
        v56 = v43;
      }
      while ( v43 );
      v22 = v59;
    }
    MiUpdatePageFileSectionList((__int64)v57, 1);
  }
  *a1 = v22;
  return 0LL;
}
