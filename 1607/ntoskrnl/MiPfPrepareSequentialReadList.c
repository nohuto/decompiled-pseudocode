/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x14042F1C0
 * Callers:
 *     MmPrefetchForCacheManager @ 0x14042B4AC (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14050A6B4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x14002228C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiEndingOffsetWithLock @ 0x1400230E0 (MiEndingOffsetWithLock.c)
 *     MiGetControlAreaPartition @ 0x1400268DC (MiGetControlAreaPartition.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14002C3F0 (MiGetControlAreaPtes.c)
 *     MiUpdatePfnPriorityByPte @ 0x14002E230 (MiUpdatePfnPriorityByPte.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14042B620 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140499FF0 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8)
{
  bool v8; // zf
  _DWORD *v9; // r15
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v12; // r12
  _QWORD *PoolWithTag; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r14
  _QWORD *v21; // r11
  __int64 v22; // rbx
  unsigned __int64 *v23; // r13
  __int64 v24; // r10
  unsigned int v25; // r9d
  unsigned int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r11
  __int64 v32; // r8
  __int64 PteAddress; // rax
  __int64 v34; // rdx
  int *v35; // r14
  _WORD *v36; // rax
  __int64 Page; // rax
  _QWORD *v38; // rcx
  int v39; // edx
  _QWORD *v40; // rdi
  _DWORD *v41; // rcx
  unsigned __int64 v42; // r15
  _DWORD *v43; // rax
  _QWORD *v44; // rax
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int Mdls; // ebx
  __int64 SharedProtos; // rax
  __int64 v51; // [rsp+20h] [rbp-B8h]
  __int64 v52; // [rsp+28h] [rbp-B0h]
  __int64 v53; // [rsp+30h] [rbp-A8h]
  _QWORD *v54; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-90h]
  __int64 v57; // [rsp+50h] [rbp-88h]
  unsigned __int64 v58; // [rsp+58h] [rbp-80h]
  unsigned __int64 *v59; // [rsp+60h] [rbp-78h]
  unsigned __int64 v60; // [rsp+68h] [rbp-70h]
  unsigned __int64 v61; // [rsp+70h] [rbp-68h]
  int *ControlAreaPartition; // [rsp+78h] [rbp-60h]
  _WORD *v63; // [rsp+80h] [rbp-58h] BYREF
  __int16 v64; // [rsp+88h] [rbp-50h]
  unsigned __int16 v65; // [rsp+8Ah] [rbp-4Eh]
  int v69; // [rsp+F8h] [rbp+20h]

  v8 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v9 = (_DWORD *)a2;
  *a8 = 0LL;
  if ( !v8 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  if ( a5 )
  {
    v12 = a5 >> 12;
    if ( a5 >> 12 < 0x100000000LL && (unsigned int)v12 <= ControlAreaPtes )
      goto LABEL_6;
    return 3221225713LL;
  }
  if ( ControlAreaPtes >= 0x100000000LL )
    return 3221225713LL;
  LODWORD(v12) = ControlAreaPtes;
LABEL_6:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v12 - 1) + 112, 0x6C526D4Du);
  v17 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v9;
  v18 = PoolWithTag + 11;
  v55 = 0LL;
  v18[1] = v18;
  *v18 = v18;
  *(_QWORD *)(v17 + 76) = 0LL;
  *(_QWORD *)(v17 + 16) = 0LL;
  *(_QWORD *)(v17 + 32) = v17 + 24;
  *(_QWORD *)(v17 + 24) = v17 + 24;
  v52 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v51 = (__int64)(v9 + 32);
  if ( a5 )
    v51 = MiOffsetToProtos(v9, a3, &v55);
  ControlAreaPartition = (int *)MiGetControlAreaPartition((__int64)v9, v14, v15, v16);
  v19 = 0LL;
  v61 = 0LL;
  v20 = 0LL;
  v58 = 0LL;
  v56 = 0LL;
  if ( a1 )
  {
    v21 = *(_QWORD **)(a1 + 32);
    v22 = *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u;
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
  }
  *(_DWORD *)(v17 + 48) = a6;
  v23 = (unsigned __int64 *)(v17 + 104);
  *(_DWORD *)(v17 + 52) = 5;
  *(_DWORD *)(v17 + 56) = 7;
  v54 = v21;
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
    (v9[14] >> 20) & 0x3F,
    (__int64)&v63);
  v25 = a7;
  v26 = 0;
  v69 = 0;
  v57 = 0LL;
  if ( !(_DWORD)v12 )
  {
    v47 = 0LL;
    Mdls = 0;
    goto LABEL_47;
  }
  while ( 1 )
  {
    if ( v19 < v20 )
      goto LABEL_13;
    if ( v19 )
    {
      v24 = *(_QWORD *)(v24 + 16);
      v51 = v24;
      if ( !v24 )
      {
LABEL_46:
        v47 = v52;
        Mdls = v69;
        goto LABEL_47;
      }
      v55 = 0LL;
    }
    v39 = v9[14];
    if ( (v39 & 0x20) == 0 )
    {
      v69 = MiAddViewsForSection((__int64 *)v24, *(unsigned int *)(v24 + 44), 0);
      if ( v69 < 0 )
      {
        MiReleaseReadListResources(v17);
        ExFreePoolWithTag((PVOID)v17, 0);
        return (unsigned int)v69;
      }
      v24 = v51;
      v40 = (_QWORD *)(v17 + 24);
      v41 = *(_DWORD **)(v17 + 32);
      v42 = *(_QWORD *)(v51 + 8);
      if ( (_QWORD *)*v40 == v40 || v41[4] == 5 )
      {
        v43 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
        v41 = v43;
        if ( !v43 )
        {
          MiRemoveViewsFromSectionWithPfn((__int64 *)v51, *(unsigned int *)(v51 + 44));
          MiReleaseReadListResources(v17);
          ExFreePoolWithTag((PVOID)v17, 0);
          return 3221225626LL;
        }
        v43[4] = 0;
        v44 = *(_QWORD **)(v17 + 32);
        if ( (_QWORD *)*v44 != v40 )
          __fastfail(3u);
        v24 = v51;
        *(_QWORD *)v41 = v40;
        *((_QWORD *)v41 + 1) = v44;
        *v44 = v41;
        *(_QWORD *)(v17 + 32) = v41;
      }
      if ( !*(_QWORD *)(v17 + 16) )
        *(_QWORD *)(v17 + 16) = v24;
      *(_QWORD *)&v41[2 * v41[4]++ + 6] = v24;
LABEL_41:
      v25 = a7;
      goto LABEL_42;
    }
    v42 = *(_QWORD *)(v24 + 8);
    if ( (*(_WORD *)(v24 + 34) & 2) != 0 && (v39 & 0x4000000) != 0 )
    {
      if ( !*(_QWORD *)(v24 + 24) )
      {
        v19 = v20 - 8;
        goto LABEL_26;
      }
      SharedProtos = MiGetSharedProtos(a2, v25, v24);
      if ( !SharedProtos )
      {
        v19 = v20 - 8;
        goto LABEL_26;
      }
      v42 = *(_QWORD *)(SharedProtos + 32);
      v24 = v51;
      goto LABEL_41;
    }
LABEL_42:
    v19 = v42 + 8 * v55;
    v61 = v42 + 8LL * *(unsigned int *)(v24 + 44);
    v45 = MiStartingOffset((__int64 *)v24, v42, v25);
    v46 = MiEndingOffsetWithLock((_QWORD *)v51);
    if ( (((_WORD)v46 - (_WORD)v45) & 0xFFF) != 0 )
      v58 = v42 + 8 * (((v46 - v45 + 4095) >> 12) - 1);
    else
      v58 = 0LL;
    if ( v54 )
    {
      HIDWORD(v53) = HIDWORD(v45);
      v56 = v42;
      LODWORD(v53) = v45 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
      v22 = v53;
    }
LABEL_13:
    v27 = MI_READ_PTE_LOCK_FREE(v19);
    if ( (v27 & 1) != 0 )
      goto LABEL_30;
    if ( (v27 & 0x400) != 0 )
      break;
    if ( (v27 & 0x800) != 0 )
    {
LABEL_30:
      MiUpdatePfnPriorityByPte(v19, a6);
      goto LABEL_26;
    }
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v27, v28, v29, v30) )
      goto LABEL_17;
LABEL_26:
    v25 = a7;
    ++v26;
    v19 += 8LL;
    if ( v26 >= (unsigned int)v12 )
      goto LABEL_46;
    v20 = v61;
    v9 = (_DWORD *)a2;
    v24 = v51;
  }
  if ( v31 )
  {
    v22 += (__int64)(v19 - v56) >> 3 << 12;
    v56 = v19;
    *v31 = v22;
    v54 = v31 + 1;
  }
LABEL_17:
  v8 = v59 == 0LL;
  *v23 = v19;
  if ( v8 )
    v59 = v23;
  v32 = v51;
  if ( v57 != v51 || (MiGetPteAddress(v19), PteAddress = MiGetPteAddress(v60), PteAddress != v34) )
  {
    v57 = v32;
    *v23 = v19 | 2;
  }
  v60 = v19;
  if ( v19 == v58 )
    *v23 |= 1uLL;
  v35 = ControlAreaPartition;
  ++v23;
  if ( !(unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
  {
    v47 = v52;
    if ( v52 )
      Mdls = v69;
    else
      Mdls = -1073741670;
    goto LABEL_85;
  }
  v36 = v63;
  ++*v63;
  Page = MiGetPage((__int64)v35, v65 | (unsigned int)(unsigned __int16)(v64 & *v36), 0x80u);
  if ( Page != -1 )
  {
    v38 = (_QWORD *)(48 * Page - 0x58000000000LL);
    ++v52;
    *v38 = *(_QWORD *)(v17 + 40);
    *(_QWORD *)(v17 + 40) = v38;
    goto LABEL_26;
  }
  MiReturnFaultCharges((__int64)v35, 1uLL, 1);
  v47 = v52;
  Mdls = v69;
  if ( !v52 )
    Mdls = -1073741801;
LABEL_85:
  v25 = a7;
LABEL_47:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v54;
  if ( v47 )
  {
    *(_QWORD *)(v17 + 64) = v59;
    *(_DWORD *)(v17 + 60) = ((__int64)v23 - v17 - 104) >> 3;
    Mdls = MiPfAllocateMdls(v17, v25, 0LL);
    if ( *(_QWORD *)(v17 + 88) == v17 + 88 )
    {
      MiReleaseReadListResources(v17);
      ExFreePoolWithTag((PVOID)v17, 0);
      v17 = 0LL;
    }
    else
    {
      Mdls = 0;
    }
    *a8 = v17;
  }
  else
  {
    MiReleaseReadListResources(v17);
    ExFreePoolWithTag((PVOID)v17, 0);
  }
  return Mdls;
}
