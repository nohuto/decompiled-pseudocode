/*
 * XREFs of MiPfPrepareReadList @ 0x14042D190
 * Callers:
 *     MmPrefetchPagesEx @ 0x1404D9B80 (MmPrefetchPagesEx.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiUpdatePfnPriorityByPte @ 0x14007C6B0 (MiUpdatePfnPriorityByPte.c)
 *     MiEndingOffsetWithLock @ 0x14007C7F0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x14007C8C0 (MiStartingOffsetNeedLock.c)
 *     MiPrefetchNormally @ 0x14007C9E0 (MiPrefetchNormally.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MiGetControlAreaPartition @ 0x1400AA0F4 (MiGetControlAreaPartition.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400AA5CC (MiRemoveViewsFromSectionWithPfn.c)
 *     MiLocateSubsectionNode @ 0x1400AAEC0 (MiLocateSubsectionNode.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14047B59C (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x1404D9E00 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareReadList(_DWORD *a1, unsigned __int64 **a2, _QWORD *a3)
{
  unsigned int v3; // r15d
  _QWORD *v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  bool v7; // zf
  __int64 *v8; // rcx
  __int64 v9; // r13
  int v10; // eax
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v12; // r14
  _QWORD *v13; // rax
  __int64 SubsectionNode; // rbp
  struct _KPROCESS *Process; // rdi
  unsigned __int64 v16; // r9
  int SessionId; // r11d
  unsigned __int64 v18; // r12
  unsigned int Mdls; // ebx
  unsigned __int64 v20; // r10
  unsigned int v21; // r11d
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  int v25; // r14d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r10
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  unsigned __int64 **v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int64 *v33; // rbx
  __int64 PteAddress; // rbx
  unsigned __int64 *v35; // rbx
  _WORD *v36; // rax
  __int64 Page; // rax
  _QWORD *v38; // rcx
  __int64 v40; // rdx
  unsigned __int64 *v41; // [rsp+20h] [rbp-B8h]
  unsigned __int64 *v42; // [rsp+28h] [rbp-B0h]
  int v43; // [rsp+30h] [rbp-A8h]
  __int64 v44; // [rsp+38h] [rbp-A0h]
  unsigned int v45; // [rsp+40h] [rbp-98h]
  unsigned __int64 v46; // [rsp+48h] [rbp-90h]
  __int64 v47; // [rsp+50h] [rbp-88h]
  __int64 v48; // [rsp+58h] [rbp-80h]
  unsigned __int64 *v49; // [rsp+60h] [rbp-78h]
  unsigned __int64 v50; // [rsp+68h] [rbp-70h]
  unsigned __int64 v51; // [rsp+70h] [rbp-68h]
  __int64 *ControlAreaPartition; // [rsp+78h] [rbp-60h]
  _WORD *v53; // [rsp+80h] [rbp-58h] BYREF
  __int16 v54; // [rsp+88h] [rbp-50h]
  unsigned __int16 v55; // [rsp+8Ah] [rbp-4Eh]
  unsigned __int64 v56; // [rsp+E0h] [rbp+8h] BYREF
  unsigned __int64 **v57; // [rsp+E8h] [rbp+10h]
  _QWORD *v58; // [rsp+F0h] [rbp+18h]
  unsigned int v59; // [rsp+F8h] [rbp+20h]

  v58 = a3;
  v57 = a2;
  v3 = 0;
  v4 = a1 + 4;
  *a2 = 0LL;
  v5 = a1[4];
  if ( (v5 & 0x180) != 0 )
    return 3221225711LL;
  v6 = a1[2];
  v7 = a1[3] == 0;
  v45 = v6;
  v8 = *(__int64 **)(*(_QWORD *)a1 + 40LL);
  if ( v7 )
    v9 = *v8;
  else
    v9 = v8[2];
  v10 = *(_DWORD *)(v9 + 56);
  if ( (v10 & 0x400) != 0 || !*(_QWORD *)(v9 + 64) )
    return 3221225711LL;
  if ( (v10 & 0x40000000) != 0 )
    return 0LL;
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (v6 - 1) + 112, 0x6C526D4Du);
  v42 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v9;
  v13 = PoolWithTag + 11;
  SubsectionNode = v9 + 120;
  v13[1] = v13;
  *v13 = v13;
  *(unsigned __int64 *)((char *)v12 + 76) = 0LL;
  v12[2] = 0LL;
  v12[4] = (unsigned __int64)(v12 + 3);
  v12[3] = (unsigned __int64)(v12 + 3);
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = (__int64 *)MiGetControlAreaPartition(v9);
  if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx(Process);
  }
  else
  {
    if ( v16 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos((_DWORD *)v9, v16, &v56)) == 0 )
    {
      ExFreePoolWithTag(v12, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  LODWORD(v56) = SessionId;
  *((_DWORD *)v12 + 12) = v5 & 7;
  v41 = v12 + 13;
  v59 = v5 & 7;
  v46 = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  *((_DWORD *)v12 + 13) = (v5 & 0x40) != 0 ? 5 : 0;
  *((_DWORD *)v12 + 14) = (v5 >> 3) & 7;
  v18 = 0LL;
  Mdls = 0;
  v44 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  v43 = 0;
  MI_INITIALIZE_COLOR_BASE((__int64)&Process[1].IdealNode[12], (*(_DWORD *)(v9 + 56) >> 20) & 0x3F, (__int64)&v53);
  if ( !v45 )
    goto LABEL_65;
  while ( 1 )
  {
    v22 = *v4 & 0xFFFFFFFFFFFFFF80uLL;
    if ( v22 >= v20 || v18 > v22 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( (*(_DWORD *)(v9 + 56) & 0x20) == 0
          || *(_DWORD *)(SubsectionNode + 36)
          || *(_QWORD *)(SubsectionNode + 8) == *(_QWORD *)(*(_QWORD *)v9 + 64LL) )
        {
          v18 = MiStartingOffsetNeedLock((_QWORD *)SubsectionNode, v21);
          v26 = MiEndingOffsetWithLock((_QWORD *)SubsectionNode);
          v46 = v26;
          v27 = v26;
          if ( v18 > v22 )
            goto LABEL_17;
          if ( v22 < v26 )
          {
            if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
              goto LABEL_32;
            v43 = MiAddViewsForSection((__int64 *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 0LL);
            if ( v43 < 0 )
              goto LABEL_61;
            v28 = (_DWORD *)v42[4];
            if ( (unsigned __int64 *)v42[3] != v42 + 3 && v28[4] != 5 )
              goto LABEL_30;
            v29 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
            v28 = v29;
            if ( v29 )
            {
              v29[4] = 0;
              v30 = (unsigned __int64 **)v42[4];
              *(_QWORD *)v28 = v42 + 3;
              *((_QWORD *)v28 + 1) = v30;
              if ( *v30 != v42 + 3 )
                __fastfail(3u);
              *v30 = (unsigned __int64 *)v28;
              v42[4] = (unsigned __int64)v28;
LABEL_30:
              v27 = v46;
              *(_QWORD *)&v28[2 * v28[4]++ + 6] = SubsectionNode;
              if ( !v42[2] )
                v42[2] = SubsectionNode;
LABEL_32:
              v31 = *(_QWORD *)(SubsectionNode + 8);
              v24 = v31 + 8 * ((v22 - v18) >> 12);
              if ( v24 < v31 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
              {
                if ( (_bittest((const signed __int32 *)(v9 + 56), 0x1Au) & ((*(_WORD *)(SubsectionNode + 34) & 2) != 0)) != 0 )
                  v25 = 1;
                if ( (((_WORD)v27 - (_WORD)v18) & 0xFFF) != 0 )
                  v48 = v31 + 8 * (((v27 - v18 + 4095) >> 12) - 1);
                else
                  v48 = 0LL;
                if ( v25 != 1 )
                {
                  v12 = v42;
                  goto LABEL_39;
                }
                goto LABEL_17;
              }
LABEL_61:
              v12 = v42;
              goto LABEL_62;
            }
            MiRemoveViewsFromSectionWithPfn(SubsectionNode, *(unsigned int *)(SubsectionNode + 44));
            v12 = v42;
LABEL_62:
            v35 = v41;
LABEL_63:
            if ( !v44 )
            {
              Mdls = v43;
              goto LABEL_65;
            }
LABEL_75:
            v40 = (unsigned int)v56;
            *((_DWORD *)v12 + 15) = ((char *)v35 - (char *)v12 - 104) >> 3;
            v12[8] = (unsigned __int64)v49;
            Mdls = MiPfAllocateMdls(v12, v40, 0LL);
            if ( (unsigned __int64 *)v12[11] == v12 + 11 )
            {
              MiReleaseReadListResources(v12);
              ExFreePoolWithTag(v12, 0);
              v12 = 0LL;
            }
            else
            {
              Mdls = 0;
            }
            *v57 = v12;
            return Mdls;
          }
          if ( v22 < v18 )
            goto LABEL_17;
          if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
          {
            SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
          }
          else
          {
            if ( v22 > 0x3FFFFFFFFFF000LL )
              goto LABEL_61;
            SubsectionNode = (__int64)MiLocateSubsectionNode(v9, v22, 0);
          }
        }
        else
        {
          SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
        }
        if ( !SubsectionNode )
          goto LABEL_61;
        v21 = v56;
      }
    }
    v23 = *(_QWORD *)(SubsectionNode + 8);
    v24 = v23 + 8 * ((v22 - v18) >> 12);
    if ( v24 >= v23 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
      goto LABEL_62;
    if ( (((*(_WORD *)(SubsectionNode + 34) & 2) != 0) & _bittest((const signed __int32 *)(v9 + 56), 0x1Au)) != 0 )
      goto LABEL_17;
LABEL_39:
    if ( v24 != v50 )
      break;
LABEL_17:
    v12 = v42;
    ++v3;
    ++v4;
    if ( v3 >= v45 )
      goto LABEL_62;
    v20 = v46;
    v21 = v56;
  }
  v50 = v24;
  v32 = MI_READ_PTE_LOCK_FREE((__int64 *)v24);
  if ( (v32 & 1) != 0 )
  {
LABEL_41:
    MiUpdatePfnPriorityByPte(v32, v59);
    goto LABEL_17;
  }
  if ( (v32 & 0x400) == 0 )
  {
    if ( (v32 & 0x800) != 0 )
      goto LABEL_41;
    if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v32) )
      goto LABEL_17;
  }
  v33 = v41;
  *v41 = v24;
  if ( !v49 )
    v49 = v41;
  if ( v47 != SubsectionNode
    || (PteAddress = MiGetPteAddress(v24), v7 = MiGetPteAddress(v51) == PteAddress, v33 = v41, !v7) )
  {
    v47 = SubsectionNode;
    *v33 = v24 | 2;
  }
  v51 = v24;
  if ( v24 == v48 )
    *v33 |= 1uLL;
  v35 = v33 + 1;
  v41 = v35;
  if ( !MiPrefetchNormally(ControlAreaPartition, *((_DWORD *)v12 + 14) + 1) )
    goto LABEL_63;
  if ( v58 )
  {
    if ( !*v58 )
      goto LABEL_63;
    --*v58;
  }
  if ( (unsigned int)MiObtainFaultCharges((int *)ControlAreaPartition, 1u, 1) )
  {
    v36 = v53;
    ++*v53;
    Page = MiGetPage((__int64)ControlAreaPartition, v55 | (unsigned int)(unsigned __int16)(v54 & *v36), 0);
    if ( Page != -1 )
    {
      v38 = (_QWORD *)(48 * Page - 0x58000000000LL);
      ++v44;
      *v38 = v12[5];
      v12[5] = (unsigned __int64)v38;
      goto LABEL_17;
    }
    MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
    if ( v44 )
      goto LABEL_75;
    Mdls = -1073741801;
  }
  else
  {
    if ( v44 )
      goto LABEL_75;
    Mdls = -1073741670;
  }
LABEL_65:
  MiReleaseReadListResources(v12);
  ExFreePoolWithTag(v12, 0);
  return Mdls;
}
