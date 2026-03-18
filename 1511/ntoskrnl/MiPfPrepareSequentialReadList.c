/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x14042CB00
 * Callers:
 *     MiPrefetchControlArea @ 0x1404AF248 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x1404D9A0C (MmPrefetchForCacheManager.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x140062620 (MiGetControlAreaPtes.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiUpdatePfnPriorityByPte @ 0x14007C6B0 (MiUpdatePfnPriorityByPte.c)
 *     MiEndingOffsetWithLock @ 0x14007C7F0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MiGetControlAreaPartition @ 0x1400AA0F4 (MiGetControlAreaPartition.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400AA5CC (MiRemoveViewsFromSectionWithPfn.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14047B59C (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x1404D9E00 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        _QWORD *a8)
{
  bool v8; // zf
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v12; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r13
  __int64 v19; // rbx
  unsigned __int64 *v20; // r14
  unsigned int v21; // ebp
  unsigned __int64 v22; // rax
  __int64 PteAddress; // rsi
  _WORD *v24; // rax
  int *v25; // rcx
  __int64 Page; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  unsigned int Mdls; // ebx
  unsigned __int64 *v30; // rax
  int v32; // edx
  unsigned __int64 v33; // r14
  _QWORD *v34; // rdi
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  _QWORD *v37; // rax
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  __int64 SharedProtos; // rax
  _QWORD *v41; // [rsp+20h] [rbp-B8h]
  __int64 v42; // [rsp+28h] [rbp-B0h]
  __int64 v43; // [rsp+30h] [rbp-A8h]
  _QWORD *v44; // [rsp+38h] [rbp-A0h]
  unsigned __int64 *v45; // [rsp+40h] [rbp-98h]
  unsigned __int64 v46; // [rsp+48h] [rbp-90h] BYREF
  _QWORD *v47; // [rsp+50h] [rbp-88h]
  unsigned __int64 *v48; // [rsp+58h] [rbp-80h]
  unsigned __int64 v49; // [rsp+60h] [rbp-78h]
  int *ControlAreaPartition; // [rsp+68h] [rbp-70h]
  unsigned __int64 v51; // [rsp+70h] [rbp-68h]
  unsigned __int64 v52; // [rsp+78h] [rbp-60h]
  _WORD *v53; // [rsp+80h] [rbp-58h] BYREF
  __int16 v54; // [rsp+88h] [rbp-50h]
  unsigned __int16 v55; // [rsp+8Ah] [rbp-4Eh]
  int v59; // [rsp+F8h] [rbp+20h]

  v8 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
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
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = a2;
  v15 = PoolWithTag + 11;
  v16 = a2 + 120;
  v15[1] = v15;
  *v15 = v15;
  *(_QWORD *)((char *)v14 + 76) = 0LL;
  v14[2] = 0LL;
  v14[4] = v14 + 3;
  v14[3] = v14 + 3;
  v46 = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  v52 = 0LL;
  v41 = (_QWORD *)(a2 + 120);
  if ( a5 )
  {
    v16 = MiOffsetToProtos((_DWORD *)a2, a3, &v46);
    v41 = (_QWORD *)v16;
  }
  v17 = 0LL;
  ControlAreaPartition = (int *)MiGetControlAreaPartition(a2);
  v18 = 0LL;
  v51 = 0LL;
  v49 = 0LL;
  if ( a1 )
  {
    v19 = *(_DWORD *)(a1 + 12) & 0x1FF | 0x200u;
    v44 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v44 = 0LL;
    v19 = 0LL;
  }
  v20 = v14 + 13;
  *((_DWORD *)v14 + 12) = a6;
  *((_DWORD *)v14 + 13) = 5;
  *((_DWORD *)v14 + 14) = 7;
  v45 = v14 + 13;
  MI_INITIALIZE_COLOR_BASE(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
    (*(_DWORD *)(a2 + 56) >> 20) & 0x3F,
    (__int64)&v53);
  v21 = 0;
  v59 = 0;
  v47 = 0LL;
  if ( !(_DWORD)v12 )
  {
    v28 = 0LL;
    Mdls = 0;
    goto LABEL_29;
  }
  while ( 1 )
  {
    if ( v17 >= v18 )
    {
      if ( v17 )
      {
        v16 = *(_QWORD *)(v16 + 16);
        v41 = (_QWORD *)v16;
        if ( !v16 )
        {
LABEL_27:
          v28 = v42;
          goto LABEL_28;
        }
        v46 = 0LL;
      }
      v32 = *(_DWORD *)(a2 + 56);
      if ( (v32 & 0x20) != 0 )
      {
        v33 = *(_QWORD *)(v16 + 8);
        if ( (*(_WORD *)(v16 + 34) & 2) != 0 && (v32 & 0x4000000) != 0 )
        {
          if ( !*(_QWORD *)(v16 + 24) )
          {
            v20 = v45;
            v17 = v18 - 8;
            goto LABEL_26;
          }
          SharedProtos = MiGetSharedProtos(a2, a7, v16);
          if ( !SharedProtos )
          {
            v20 = v45;
            v17 = v18 - 8;
            goto LABEL_26;
          }
          v33 = *(_QWORD *)(SharedProtos + 32);
        }
      }
      else
      {
        v59 = MiAddViewsForSection((__int64 *)v16, *(unsigned int *)(v16 + 44), 0LL);
        if ( v59 < 0 )
        {
          MiReleaseReadListResources(v14);
          ExFreePoolWithTag(v14, 0);
          return (unsigned int)v59;
        }
        v33 = *(_QWORD *)(v16 + 8);
        v34 = v14 + 3;
        v35 = (_DWORD *)v14[4];
        if ( (_QWORD *)*v34 == v34 || v35[4] == 5 )
        {
          v36 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
          v35 = v36;
          if ( !v36 )
          {
            MiRemoveViewsFromSectionWithPfn(v16, *(unsigned int *)(v16 + 44));
            MiReleaseReadListResources(v14);
            ExFreePoolWithTag(v14, 0);
            return 3221225626LL;
          }
          v36[4] = 0;
          v37 = (_QWORD *)v14[4];
          *(_QWORD *)v35 = v34;
          *((_QWORD *)v35 + 1) = v37;
          if ( (_QWORD *)*v37 != v34 )
            __fastfail(3u);
          *v37 = v35;
          v14[4] = v35;
        }
        if ( !v14[2] )
          v14[2] = v16;
        *(_QWORD *)&v35[2 * v35[4]++ + 6] = v16;
      }
      v17 = v33 + 8 * v46;
      v18 = v33 + 8LL * *(unsigned int *)(v16 + 44);
      v38 = MiStartingOffset((__int64 *)v16, v33, a7);
      v39 = MiEndingOffsetWithLock(v41);
      if ( (((_WORD)v39 - (_WORD)v38) & 0xFFF) != 0 )
        v51 = v33 + 8 * (((v39 - v38 + 4095) >> 12) - 1);
      else
        v51 = 0LL;
      if ( v44 )
      {
        HIDWORD(v43) = HIDWORD(v38);
        v49 = v33;
        LODWORD(v43) = v38 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
        v19 = v43;
      }
      v20 = v45;
    }
    v22 = MI_READ_PTE_LOCK_FREE((__int64 *)v17);
    if ( (v22 & 1) != 0 )
    {
      MiUpdatePfnPriorityByPte(v22, a6);
LABEL_38:
      v16 = (__int64)v41;
      goto LABEL_26;
    }
    if ( (v22 & 0x400) != 0 )
    {
      if ( v44 )
      {
        v19 += (__int64)(v17 - v49) >> 3 << 12;
        v49 = v17;
        *v44++ = v19;
      }
    }
    else
    {
      if ( (v22 & 0x800) != 0 )
      {
        MiUpdatePfnPriorityByPte(v22, a6);
        v16 = (__int64)v41;
        goto LABEL_26;
      }
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v22) )
        goto LABEL_38;
    }
    v8 = v48 == 0LL;
    *v20 = v17;
    if ( v8 )
      v48 = v20;
    v16 = (__int64)v41;
    if ( v47 != v41
      || (PteAddress = MiGetPteAddress(v17), v8 = MiGetPteAddress(v52) == PteAddress, v16 = (__int64)v41, !v8) )
    {
      v47 = (_QWORD *)v16;
      *v20 = v17 | 2;
    }
    v52 = v17;
    if ( v17 == v51 )
      *v20 |= 1uLL;
    v45 = ++v20;
    if ( !(unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
    {
      v28 = v42;
      if ( !v42 )
      {
        Mdls = -1073741670;
        goto LABEL_29;
      }
LABEL_28:
      Mdls = v59;
      goto LABEL_29;
    }
    v24 = v53;
    v25 = ControlAreaPartition;
    ++*v53;
    Page = MiGetPage((__int64)v25, v55 | (unsigned int)(unsigned __int16)(v54 & *v24), 0);
    if ( Page == -1 )
      break;
    v27 = (_QWORD *)(48 * Page - 0x58000000000LL);
    ++v42;
    *v27 = v14[5];
    v14[5] = v27;
LABEL_26:
    ++v21;
    v17 += 8LL;
    if ( v21 >= (unsigned int)v12 )
      goto LABEL_27;
  }
  MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
  v28 = v42;
  Mdls = v59;
  if ( !v42 )
    Mdls = -1073741801;
LABEL_29:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v44;
  if ( v28 )
  {
    v30 = v48;
    *((_DWORD *)v14 + 15) = ((char *)v20 - (char *)v14 - 104) >> 3;
    v14[8] = v30;
    Mdls = MiPfAllocateMdls(v14, a7, 0LL);
    if ( (_QWORD *)v14[11] == v14 + 11 )
    {
      MiReleaseReadListResources(v14);
      ExFreePoolWithTag(v14, 0);
      v14 = 0LL;
    }
    else
    {
      Mdls = 0;
    }
    *a8 = v14;
  }
  else
  {
    MiReleaseReadListResources(v14);
    ExFreePoolWithTag(v14, 0);
  }
  return Mdls;
}
