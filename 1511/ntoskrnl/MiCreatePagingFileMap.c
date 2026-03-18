/*
 * XREFs of MiCreatePagingFileMap @ 0x1403C89F8
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     MiUpdatePageFileSectionList @ 0x14000C770 (MiUpdatePageFileSectionList.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiUpdateLargePageSectionPfn @ 0x1401D4F60 (MiUpdateLargePageSectionPfn.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReturnLargePages @ 0x1401E2488 (MiReturnLargePages.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1403C8F74 (MiInitializePrototypePtes.c)
 *     MiAllocateLargeZeroPages @ 0x14062B1CC (MiAllocateLargeZeroPages.c)
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
  _QWORD *v23; // rcx
  PVOID **v24; // rdx
  PVOID **v25; // r9
  __int16 v26; // ax
  __int16 v27; // cx
  unsigned __int64 v28; // r8
  __int64 *v29; // rax
  __int64 v30; // rcx
  char v31; // si
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 *v34; // r12
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  PVOID *v40; // r15
  unsigned __int64 v41; // [rsp+30h] [rbp-78h]
  unsigned __int64 v42; // [rsp+38h] [rbp-70h]
  __int64 v43; // [rsp+40h] [rbp-68h]
  PVOID **v44; // [rsp+48h] [rbp-60h]
  unsigned __int64 v45; // [rsp+50h] [rbp-58h]
  PVOID **v46; // [rsp+60h] [rbp-48h]
  PVOID **v47; // [rsp+68h] [rbp-40h]
  __int64 *v49; // [rsp+B8h] [rbp+10h]

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
    if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, v9, 0LL) )
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
    v41 = v9;
    v14 = 1LL;
  }
  else
  {
    v41 = 0x20000LL;
    v14 = v9 >> 17;
    if ( (v9 & 0x1FFFF) != 0 )
      ++v14;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v14 + 120, 0x61436D4Du);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_68;
  memset(PoolWithTag, 0, 80 * v14 + 120);
  v17 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6765534Du);
  v47 = v17;
  v18 = v17;
  if ( !v17 )
  {
LABEL_62:
    v39 = 0LL;
    if ( v14 )
    {
      v40 = v16 + 16;
      do
      {
        if ( !*v40 )
          break;
        ExFreePoolWithTag(*v40, 0);
        v40 += 10;
        ++v39;
      }
      while ( v39 < v14 );
    }
    ExFreePoolWithTag(v16, 0);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
LABEL_68:
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
  v43 = 0LL;
  v42 = v9;
  v22 = 0LL;
  v45 = 0LL;
  *((_BYTE *)v18 + 14) ^= (*((_BYTE *)v18 + 14) ^ (2 * a3)) & 0x3E;
  v18[6] = (PVOID *)KeGetCurrentThread()->ApcState.Process;
  v23 = v16 + 15;
  v24 = (PVOID **)(v16 + 15);
  v44 = (PVOID **)(v16 + 15);
  v25 = (PVOID **)(v16 + 15);
  if ( v14 )
  {
    v26 = 2 * (a3 & 0x1F);
    do
    {
      v46 = v24;
      v27 = v26 | (_WORD)v24[4] & 0xFFC1;
      *v24 = v16;
      v25 = v24;
      v28 = v42;
      *((_DWORD *)v24 + 9) = v21;
      if ( v42 > v41 )
        v28 = v41;
      v42 -= v28;
      *((_DWORD *)v24 + 11) = v28;
      *((_WORD *)v24 + 16) = v27 & 0x3F | (WORD2(v21) << 6);
      if ( v11 )
      {
        v29 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8 * v28, 0x74536D4Du);
        v13 = v29;
        if ( !v29 )
          goto LABEL_62;
        v24 = v44;
        v25 = v46;
        v22 = v45;
        v21 = v43;
        v44[1] = (PVOID *)v29;
      }
      v30 = *((unsigned int *)v24 + 11);
      ++v22;
      v26 = 2 * (a3 & 0x1F);
      v24 += 10;
      v21 += v30;
      v44 = v24;
      v43 = v21;
      v25[2] = (PVOID *)v24;
      v45 = v22;
    }
    while ( v22 < v14 );
    v23 = v16 + 15;
    v20 = a3;
  }
  v25[2] = 0LL;
  v18[8] = (PVOID *)v13;
  if ( v11 )
  {
    v18[2] = (PVOID *)v9;
    _InterlockedExchangeAdd64(&qword_1402FF850, v9);
    if ( a4 >= 0 )
    {
      MiInitializePrototypePtes(v23[1], v9, v23, 1LL);
    }
    else
    {
      v31 = v20;
      *((_WORD *)v18 + 6) |= 0x1000u;
      v32 = MmProtectToPteMask[v20] | 0xFFFFFFFFF021LL;
      if ( !MiGetPteAddress(0LL) || !MiGetPdeAddress(0LL) )
        v32 |= 4uLL;
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
        v32 |= 0x100uLL;
      if ( (a3 & 4) != 0 )
        v32 |= 0x42uLL;
      v33 = 32LL * (v31 & 0x1F);
      while ( 1 )
      {
        v34 = *LargeZeroPages;
        if ( *LargeZeroPages == (__int64 *)LargeZeroPages )
          break;
        v35 = *v34;
        if ( (__int64 **)v34[1] != LargeZeroPages || *(__int64 **)(v35 + 8) != v34 )
          __fastfail(3u);
        *LargeZeroPages = (__int64 *)v35;
        *(_QWORD *)(v35 + 8) = LargeZeroPages;
        v36 = v34[2];
        v37 = 48 * v36 - 0x58000000000LL;
        v49 = &v13[v34[3]];
        memset(v13, 0, 8 * v34[3]);
        do
        {
          v38 = v36++ << 12;
          v32 ^= (v32 ^ v38) & 0xFFFFFFFFF000LL;
          *v13 = v32;
          if ( MiPteInShadowRange((__int64)v13) )
            MiWritePteShadow((__int64)v13, v32);
          MiUpdateLargePageSectionPfn(v37, (__int64)v13, v33);
          v37 += 48LL;
          ++v13;
        }
        while ( v13 < v49 );
        ExFreePoolWithTag(v34, 0);
        v18 = v47;
      }
    }
    MiUpdatePageFileSectionList((__int64)(v16 + 15), 1);
  }
  *a1 = v18;
  return 0LL;
}
