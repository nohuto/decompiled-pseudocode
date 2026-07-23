/*
 * XREFs of MiPfPrepareReadList @ 0x140444BC0
 * Callers:
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x140021740 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14002228C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiEndingOffsetWithLock @ 0x1400230E0 (MiEndingOffsetWithLock.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiGetControlAreaPartition @ 0x1400268DC (MiGetControlAreaPartition.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MiUpdatePfnPriorityByPte @ 0x14002E230 (MiUpdatePfnPriorityByPte.c)
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiStartingOffsetNeedLock @ 0x14009944C (MiStartingOffsetNeedLock.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPrefetchNormally @ 0x1400BE0A0 (MiPrefetchNormally.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14042B620 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140499FF0 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareReadList(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // r14d
  __int64 *v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  bool v7; // zf
  __int64 *v8; // rcx
  __int64 v9; // r12
  int v10; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 SubsectionNode; // rbp
  struct _KPROCESS *Process; // rdi
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r15
  unsigned int Mdls; // ebx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // r9
  int v26; // edi
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // r9
  __int64 v33; // r11
  unsigned __int64 *v34; // rbx
  __int64 PteAddress; // rax
  __int64 v37; // rdx
  _WORD *v38; // rax
  __int64 Page; // rax
  _QWORD *v40; // rcx
  _DWORD *v41; // rcx
  _DWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 *v45; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v46; // [rsp+28h] [rbp-A0h]
  unsigned int v47; // [rsp+30h] [rbp-98h]
  int v48; // [rsp+34h] [rbp-94h]
  __int64 v49; // [rsp+38h] [rbp-90h]
  unsigned __int64 v50; // [rsp+40h] [rbp-88h]
  __int64 v51; // [rsp+50h] [rbp-78h]
  unsigned __int64 *v52; // [rsp+58h] [rbp-70h]
  unsigned __int64 v53; // [rsp+60h] [rbp-68h]
  int *ControlAreaPartition; // [rsp+68h] [rbp-60h]
  _WORD *v55; // [rsp+70h] [rbp-58h] BYREF
  __int16 v56; // [rsp+78h] [rbp-50h]
  unsigned __int16 v57; // [rsp+7Ah] [rbp-4Eh]
  unsigned __int64 v58; // [rsp+D0h] [rbp+8h] BYREF
  __int64 *v59; // [rsp+D8h] [rbp+10h]
  _QWORD *v60; // [rsp+E0h] [rbp+18h]
  unsigned int v61; // [rsp+E8h] [rbp+20h]

  v60 = a3;
  v59 = a2;
  v3 = 0;
  v4 = a1 + 2;
  *a2 = 0LL;
  v5 = *((_DWORD *)a1 + 4);
  if ( (v5 & 0x180) != 0 )
    return 3221225711LL;
  v6 = *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 3) == 0;
  v47 = v6;
  v8 = *(__int64 **)(*a1 + 40);
  if ( v7 )
    v9 = *v8;
  else
    v9 = v8[2];
  v10 = *(_DWORD *)(v9 + 56);
  if ( (v10 & 0x400) != 0 || !*(_QWORD *)(v9 + 64) )
    return 3221225711LL;
  if ( (v10 & 0x40000000) != 0 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (v6 - 1) + 112, 0x6C526D4Du);
  v14 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v9;
  v15 = PoolWithTag + 11;
  SubsectionNode = v9 + 128;
  v15[1] = v15;
  *v15 = v15;
  *(_QWORD *)(v14 + 76) = 0LL;
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_QWORD *)(v14 + 32) = v14 + 24;
  *(_QWORD *)(v14 + 24) = v14 + 24;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = (int *)MiGetControlAreaPartition(v9, v12, v13, *v4);
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
  {
    LODWORD(v58) = MmGetSessionIdEx(Process);
  }
  else
  {
    if ( v18 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos((_DWORD *)v9, v18, &v58)) == 0 )
    {
      ExFreePoolWithTag((PVOID)v14, 0);
      return 0LL;
    }
    LODWORD(v58) = -1;
  }
  v50 = 0LL;
  *(_DWORD *)(v14 + 48) = v5 & 7;
  v45 = (unsigned __int64 *)(v14 + 104);
  v61 = v5 & 7;
  v46 = 0LL;
  v53 = 0LL;
  v49 = 0LL;
  *(_DWORD *)(v14 + 52) = (v5 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v14 + 56) = (v5 >> 3) & 7;
  v19 = 0LL;
  Mdls = 0;
  v52 = 0LL;
  v51 = 0LL;
  v48 = 0;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], (*(_DWORD *)(v9 + 56) >> 20) & 0x3F, (__int64)&v55);
  if ( !v47 )
    goto LABEL_40;
  while ( 1 )
  {
    v23 = *v4 & 0xFFFFFFFFFFFFFF80uLL;
    if ( v23 >= v22 || v19 > v23 )
      break;
    v24 = *(_QWORD *)(SubsectionNode + 8);
    v25 = v24 + 8 * ((v23 - v19) >> 12);
    if ( v25 >= v24 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_37;
    if ( (((*(_WORD *)(SubsectionNode + 34) & 2) != 0) & _bittest((const signed __int32 *)(v9 + 56), 0x1Au)) == 0 )
    {
LABEL_29:
      if ( v25 == v21 )
        goto LABEL_17;
      v46 = v25;
      v29 = MI_READ_PTE_LOCK_FREE(v25);
      if ( (v29 & 1) != 0 )
      {
        MiUpdatePfnPriorityByPte(v32, v61);
LABEL_32:
        v21 = v46;
        goto LABEL_17;
      }
      if ( (v29 & 0x400) != 0 )
        goto LABEL_45;
      if ( (v29 & 0x800) != 0 )
      {
        MiUpdatePfnPriorityByPte(v32, v61);
        v21 = v46;
      }
      else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v29, v30, v31, v32) )
      {
LABEL_45:
        *v45 = v32;
        if ( !v52 )
          v52 = v45;
        if ( v51 != SubsectionNode || (MiGetPteAddress(v32), PteAddress = MiGetPteAddress(v53), PteAddress != v37) )
        {
          v51 = SubsectionNode;
          *v45 = v32 | 2;
        }
        v53 = v32;
        if ( v32 == v33 )
          *v45 |= 1uLL;
        v34 = ++v45;
        if ( !MiPrefetchNormally((__int64)ControlAreaPartition, (unsigned int)(*(_DWORD *)(v14 + 56) + 1)) )
          goto LABEL_38;
        if ( v60 )
        {
          if ( !*v60 )
            goto LABEL_38;
          --*v60;
        }
        if ( !(unsigned int)MiObtainFaultCharges(ControlAreaPartition, 1u, 1) )
        {
          if ( v49 )
            goto LABEL_70;
          Mdls = -1073741670;
          goto LABEL_40;
        }
        v38 = v55;
        ++*v55;
        Page = MiGetPage((__int64)ControlAreaPartition, v57 | (unsigned int)(unsigned __int16)(v56 & *v38), 0x80u);
        if ( Page == -1 )
        {
          MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
          if ( v49 )
            goto LABEL_70;
          Mdls = -1073741801;
LABEL_40:
          MiReleaseReadListResources(v14);
          ExFreePoolWithTag((PVOID)v14, 0);
          return Mdls;
        }
        v40 = (_QWORD *)(48 * Page - 0x58000000000LL);
        ++v49;
        *v40 = *(_QWORD *)(v14 + 40);
        *(_QWORD *)(v14 + 40) = v40;
        goto LABEL_32;
      }
    }
LABEL_17:
    ++v3;
    ++v4;
    if ( v3 >= v47 )
      goto LABEL_37;
    v22 = v50;
  }
  v26 = 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0
      && !*(_DWORD *)(SubsectionNode + 36)
      && *(_QWORD *)(SubsectionNode + 8) != *(_QWORD *)(*(_QWORD *)v9 + 64LL) )
    {
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
      goto LABEL_36;
    }
    v19 = MiStartingOffsetNeedLock((__int64 *)SubsectionNode, v58);
    v27 = MiEndingOffsetWithLock((_QWORD *)SubsectionNode);
    v50 = v27;
    if ( v19 > v23 )
      goto LABEL_32;
    if ( v23 < v27 )
      break;
    if ( v23 < v19 )
      goto LABEL_32;
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
    {
      SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
    }
    else
    {
      if ( v23 > 0x3FFFFFFFFFF000LL )
        goto LABEL_37;
      SubsectionNode = (__int64)MiLocateSubsectionNode(v9, v23, 0);
    }
LABEL_36:
    if ( !SubsectionNode )
      goto LABEL_37;
  }
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
    goto LABEL_25;
  v48 = MiAddViewsForSection((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 0);
  if ( v48 < 0 )
    goto LABEL_37;
  v41 = *(_DWORD **)(v14 + 32);
  if ( *(_QWORD *)(v14 + 24) != v14 + 24 && v41[4] != 5 )
  {
LABEL_61:
    *(_QWORD *)&v41[2 * v41[4]++ + 6] = SubsectionNode;
    if ( !*(_QWORD *)(v14 + 16) )
      *(_QWORD *)(v14 + 16) = SubsectionNode;
LABEL_25:
    v28 = *(_QWORD *)(SubsectionNode + 8);
    v25 = v28 + 8 * ((v23 - v19) >> 12);
    if ( v25 >= v28 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_37;
    if ( (_bittest((const signed __int32 *)(v9 + 56), 0x1Au) & ((*(_WORD *)(SubsectionNode + 34) & 2) != 0)) != 0 )
      v26 = 1;
    v21 = v46;
    if ( v26 == 1 )
      goto LABEL_17;
    goto LABEL_29;
  }
  v42 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
  v41 = v42;
  if ( v42 )
  {
    v42[4] = 0;
    v43 = *(_QWORD **)(v14 + 32);
    if ( *v43 != v14 + 24 )
      __fastfail(3u);
    *(_QWORD *)v41 = v14 + 24;
    *((_QWORD *)v41 + 1) = v43;
    *v43 = v41;
    *(_QWORD *)(v14 + 32) = v41;
    goto LABEL_61;
  }
  MiRemoveViewsFromSectionWithPfn((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44));
LABEL_37:
  v34 = v45;
LABEL_38:
  if ( !v49 )
  {
    Mdls = v48;
    goto LABEL_40;
  }
LABEL_70:
  v44 = (unsigned int)v58;
  *(_DWORD *)(v14 + 60) = ((__int64)v34 - v14 - 104) >> 3;
  *(_QWORD *)(v14 + 64) = v52;
  Mdls = MiPfAllocateMdls(v14, v44, 0LL);
  if ( *(_QWORD *)(v14 + 88) == v14 + 88 )
  {
    MiReleaseReadListResources(v14);
    ExFreePoolWithTag((PVOID)v14, 0);
    v14 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *v59 = v14;
  return Mdls;
}
