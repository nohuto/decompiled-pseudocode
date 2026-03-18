/*
 * XREFs of MiCreatePagingFileMap @ 0x1404B258C
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     MiUpdatePageFileSectionList @ 0x140082D08 (MiUpdatePageFileSectionList.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiUpdateLargePageSectionPfn @ 0x140216CE0 (MiUpdateLargePageSectionPfn.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiReturnLargePages @ 0x14022FA34 (MiReturnLargePages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404B24A0 (MiInitializePrototypePtes.c)
 *     MiAllocateLargeZeroPages @ 0x1406A9A90 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiCreatePagingFileMap(PVOID ***a1, unsigned __int64 *a2, unsigned int a3, int a4, unsigned int a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // rbx
  __int64 **LargeZeroPages; // rbp
  int v11; // r13d
  unsigned int v12; // edi
  __int64 *v13; // r15
  unsigned __int64 v14; // rsi
  PVOID *PoolWithTag; // rax
  PVOID *v16; // rdi
  PVOID **v17; // rax
  PVOID **v18; // r14
  __int16 v19; // ax
  unsigned int v20; // r8d
  __int64 v21; // r11
  unsigned __int64 v22; // r10
  PVOID **v23; // r9
  unsigned __int16 *v24; // rcx
  PVOID **v25; // rdx
  __int16 v26; // ax
  __int16 v27; // cx
  unsigned __int64 v28; // r8
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  char v32; // r8
  __int64 DemandZeroPte; // rsi
  __int64 v34; // r8
  __int64 *v35; // r12
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // r12
  PVOID *v41; // r15
  unsigned __int64 v42; // [rsp+30h] [rbp-78h]
  unsigned __int64 v43; // [rsp+38h] [rbp-70h]
  __int64 v44; // [rsp+40h] [rbp-68h]
  PVOID **v45; // [rsp+48h] [rbp-60h]
  unsigned __int64 v46; // [rsp+50h] [rbp-58h]
  PVOID **v47; // [rsp+60h] [rbp-48h]
  PVOID **v48; // [rsp+68h] [rbp-40h]
  __int64 *v50; // [rsp+B8h] [rbp+10h]

  *a1 = 0LL;
  v6 = *a2;
  if ( !*a2 )
    return 3221225714LL;
  if ( v6 > 0xFFFFF000000LL )
    return 3221225536LL;
  v9 = (v6 + 4095) >> 12;
  LargeZeroPages = 0LL;
  v11 = a4 & 0x8000000;
  if ( (a4 & 0x8000000) != 0 )
  {
    if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v9, 0) )
      return 3221225773LL;
    if ( a4 < 0 )
    {
      if ( (v9 & 0x1FF) != 0 )
      {
        v12 = -1073741582;
LABEL_13:
        MiReturnCommit((__int64)MiSystemPartition, v9);
        return v12;
      }
      LargeZeroPages = (__int64 **)MiAllocateLargeZeroPages(MiSystemPartition, v9, a5, a3);
      if ( !LargeZeroPages )
      {
        v12 = -1073741670;
        goto LABEL_13;
      }
    }
  }
  v13 = 0LL;
  if ( v11 )
  {
    v42 = v9;
    v14 = 1LL;
  }
  else
  {
    v42 = 0x20000LL;
    v14 = v9 >> 17;
    if ( (v9 & 0x1FFFF) != 0 )
      ++v14;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v14 + 120, 0x61436D4Du);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_65;
  memset(PoolWithTag, 0, 80 * v14 + 120);
  v17 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6765534Du);
  v48 = v17;
  v18 = v17;
  if ( !v17 )
  {
LABEL_59:
    v40 = 0LL;
    if ( v14 )
    {
      v41 = v16 + 16;
      do
      {
        if ( !*v41 )
          break;
        ExFreePoolWithTag(*v41, 0);
        v41 += 10;
        ++v40;
      }
      while ( v40 < v14 );
    }
    ExFreePoolWithTag(v16, 0);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
LABEL_65:
    if ( v11 )
    {
      if ( LargeZeroPages )
      {
        v9 = MiReturnLargePages(LargeZeroPages);
        ExFreePoolWithTag(LargeZeroPages, 0);
      }
      MiReturnCommit((__int64)MiSystemPartition, v9);
    }
    return 3221225626LL;
  }
  v17[9] = 0LL;
  *v16 = v17;
  *((_DWORD *)v16 + 24) = v14;
  v16[2] = v16 + 1;
  v16[1] = v16 + 1;
  v16[13] = (PVOID)1;
  v16[3] = (PVOID)1;
  v16[6] = (PVOID)1;
  if ( (a4 & 0x200000) != 0 )
    *((_DWORD *)v16 + 14) |= 0x40u;
  if ( (a4 & 0x4000000) != 0 )
    *((_DWORD *)v16 + 14) |= 0x1000u;
  if ( v11 )
    *((_DWORD *)v16 + 14) |= 0x2000u;
  v16[14] = 0LL;
  *((_DWORD *)v16 + 14) ^= (*((_DWORD *)v16 + 14) ^ (a5 << 20)) & 0x3F00000;
  memset(v17, 0, 0x48uLL);
  v18[5] = 0LL;
  *v18 = v16;
  v18[3] = (PVOID *)(v9 << 12);
  *((_DWORD *)v18 + 2) = v9;
  if ( (a4 & 0x10000000) != 0 )
  {
    v19 = 0x8000;
LABEL_30:
    *((_WORD *)v18 + 6) |= v19;
    goto LABEL_31;
  }
  if ( (a4 & 0x40000000) != 0 )
  {
    v19 = 0x4000;
    goto LABEL_30;
  }
LABEL_31:
  v20 = a3;
  v21 = 0LL;
  v44 = 0LL;
  v43 = v9;
  v22 = 0LL;
  v46 = 0LL;
  *((_BYTE *)v18 + 14) ^= (*((_BYTE *)v18 + 14) ^ (2 * a3)) & 0x3E;
  v23 = 0LL;
  v18[6] = (PVOID *)KeGetCurrentThread()->ApcState.Process;
  v24 = (unsigned __int16 *)(v16 + 15);
  v25 = (PVOID **)(v16 + 15);
  v45 = (PVOID **)(v16 + 15);
  if ( v14 )
  {
    v26 = 2 * (a3 & 0x1F);
    do
    {
      v47 = v25;
      v27 = v26 | (_WORD)v25[4] & 0xFFC1;
      *v25 = v16;
      v23 = v25;
      v28 = v43;
      *((_DWORD *)v25 + 9) = v21;
      if ( v43 > v42 )
        v28 = v42;
      v43 -= v28;
      *((_DWORD *)v25 + 11) = v28;
      *((_WORD *)v25 + 16) = v27 & 0x3F | (WORD2(v21) << 6);
      if ( v11 )
      {
        v29 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v28, 0x74536D4Du);
        v13 = v29;
        if ( !v29 )
          goto LABEL_59;
        v25 = v45;
        v23 = v47;
        v22 = v46;
        v21 = v44;
        v45[1] = (PVOID *)v29;
      }
      v30 = *((unsigned int *)v25 + 11);
      ++v22;
      v26 = 2 * (a3 & 0x1F);
      v25 += 10;
      v21 += v30;
      v45 = v25;
      v44 = v21;
      v23[2] = (PVOID *)v25;
      v46 = v22;
    }
    while ( v22 < v14 );
    v20 = a3;
    v24 = (unsigned __int16 *)(v16 + 15);
  }
  v23[2] = 0LL;
  v18[8] = (PVOID *)v13;
  if ( v11 )
  {
    v18[2] = (PVOID *)v9;
    _InterlockedExchangeAdd64(&qword_14034FD10, v9);
    if ( a4 >= 0 )
    {
      MiInitializePrototypePtes(*((char **)v24 + 1), v9, v24);
    }
    else
    {
      *((_WORD *)v18 + 6) |= 0x1000u;
      v31 = MmProtectToPteMask[v20] | 0xFFFFFFFFF021LL;
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
        v31 |= 0x100uLL;
      if ( (v32 & 4) != 0 )
        v31 |= 0x42uLL;
      DemandZeroPte = MiMakeDemandZeroPte(v32);
      while ( 1 )
      {
        v35 = *LargeZeroPages;
        if ( *LargeZeroPages == (__int64 *)LargeZeroPages )
          break;
        v36 = *v35;
        if ( (__int64 **)v35[1] != LargeZeroPages || *(__int64 **)(v36 + 8) != v35 )
          __fastfail(3u);
        *LargeZeroPages = (__int64 *)v36;
        *(_QWORD *)(v36 + 8) = LargeZeroPages;
        v37 = v35[2];
        v38 = 48 * v37 - 0x58000000000LL;
        v50 = &v13[v35[3]];
        memset(v13, 0, 8 * v35[3]);
        do
        {
          v39 = v37++ << 12;
          v31 ^= (v31 ^ v39) & 0xFFFFFFFFF000LL;
          *v13 = v31;
          if ( MiPteInShadowRange((__int64)v13) )
            MiWritePteShadow((__int64)v13, v31);
          MiUpdateLargePageSectionPfn(v38, (__int64)v13, DemandZeroPte);
          v38 += 48LL;
          ++v13;
        }
        while ( v13 < v50 );
        ExFreePoolWithTag(v35, 0);
        v18 = v48;
      }
    }
    MiUpdatePageFileSectionList((__int64)(v16 + 15), 1, v34);
  }
  *a1 = v18;
  return 0LL;
}
