/*
 * XREFs of MiPfPrepareReadList @ 0x14049E0C0
 * Callers:
 *     MmPrefetchPagesEx @ 0x14049D750 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140054170 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUpdatePfnPriorityByPte @ 0x140054C90 (MiUpdatePfnPriorityByPte.c)
 *     MiEndingOffsetWithLock @ 0x140055090 (MiEndingOffsetWithLock.c)
 *     MiStartingOffsetNeedLock @ 0x140055170 (MiStartingOffsetNeedLock.c)
 *     MiPrefetchNormally @ 0x1400552D0 (MiPrefetchNormally.c)
 *     MiGetControlAreaPartition @ 0x140055BDC (MiGetControlAreaPartition.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiLocateSubsectionNode @ 0x140085A20 (MiLocateSubsectionNode.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x14049E7C0 (MiPfAllocateMdls.c)
 */

__int64 __fastcall MiPfPrepareReadList(_DWORD *a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  bool v6; // zf
  __int64 *v7; // rcx
  __int64 v8; // r14
  int v9; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v11; // r12
  _QWORD *v12; // rax
  __int64 SubsectionNode; // rdi
  struct _KPROCESS *Process; // rsi
  unsigned __int64 v15; // r9
  int SessionId; // r11d
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r15
  unsigned __int64 *v19; // r13
  unsigned int Mdls; // ebx
  unsigned int v21; // r11d
  _QWORD *v22; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  int v27; // r13d
  unsigned __int64 v28; // rax
  _DWORD *v29; // rcx
  _QWORD *v30; // rsi
  _DWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 PteShadow; // rbx
  __int16 v35; // ax
  unsigned __int64 *v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r9
  _WORD *v39; // rax
  __int64 Page; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 *v43; // [rsp+20h] [rbp-B8h]
  int v44; // [rsp+28h] [rbp-B0h]
  unsigned int v45; // [rsp+2Ch] [rbp-ACh]
  unsigned int v46; // [rsp+30h] [rbp-A8h]
  __int64 v47; // [rsp+38h] [rbp-A0h]
  __int64 v48; // [rsp+40h] [rbp-98h]
  _QWORD *v49; // [rsp+48h] [rbp-90h]
  __int64 v50; // [rsp+50h] [rbp-88h]
  unsigned __int64 *v51; // [rsp+58h] [rbp-80h]
  unsigned __int64 v52; // [rsp+60h] [rbp-78h]
  unsigned __int64 v53; // [rsp+68h] [rbp-70h]
  __int64 *ControlAreaPartition; // [rsp+70h] [rbp-68h]
  _WORD *v55; // [rsp+78h] [rbp-60h] BYREF
  __int16 v56; // [rsp+80h] [rbp-58h]
  unsigned __int16 v57; // [rsp+82h] [rbp-56h]
  unsigned int v58; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v61; // [rsp+F8h] [rbp+20h] BYREF

  *a2 = 0LL;
  v3 = a1[4];
  v49 = a1 + 4;
  if ( (v3 & 0x180) != 0 )
    return 3221225711LL;
  v5 = a1[2];
  v6 = a1[3] == 0;
  v58 = v5;
  v7 = *(__int64 **)(*(_QWORD *)a1 + 40LL);
  if ( v6 )
    v8 = *v7;
  else
    v8 = v7[2];
  v9 = *(_DWORD *)(v8 + 56);
  if ( (v9 & 0x400) != 0 || !*(_QWORD *)(v8 + 64) )
    return 3221225711LL;
  if ( (v9 & 0x40000000) != 0 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (v5 - 1) + 112, 0x6C526D4Du);
  v11 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v8;
  v12 = PoolWithTag + 11;
  SubsectionNode = v8 + 120;
  v12[1] = v12;
  *v12 = v12;
  *(_QWORD *)(v11 + 76) = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_QWORD *)(v11 + 32) = v11 + 24;
  *(_QWORD *)(v11 + 24) = v11 + 24;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = (__int64 *)MiGetControlAreaPartition(v8);
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx(Process);
  }
  else
  {
    if ( v15 > 0x3FFFFFFFFFF000LL || (SubsectionNode = MiOffsetToProtos((_DWORD *)v8, v15, &v61)) == 0 )
    {
      ExFreePoolWithTag((PVOID)v11, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  *(_DWORD *)(v11 + 48) = v3 & 7;
  v46 = v3 & 7;
  v48 = 0LL;
  v52 = 0LL;
  v17 = 0LL;
  v53 = 0LL;
  LODWORD(v61) = SessionId;
  *(_DWORD *)(v11 + 52) = (v3 & 0x40) != 0 ? 5 : 0;
  *(_DWORD *)(v11 + 56) = (v3 >> 3) & 7;
  v18 = 0LL;
  v19 = (unsigned __int64 *)(v11 + 104);
  Mdls = 0;
  v43 = (unsigned __int64 *)(v11 + 104);
  v47 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v44 = 0;
  MI_INITIALIZE_COLOR_BASE((__int64)&Process[1].IdealNode[8], (*(_DWORD *)(v8 + 56) >> 20) & 0x3F, (__int64)&v55);
  v45 = 0;
  if ( !v58 )
  {
LABEL_100:
    MiReleaseReadListResources(v11);
    ExFreePoolWithTag((PVOID)v11, 0);
    return Mdls;
  }
  v22 = v49;
  v23 = v58;
  while ( 2 )
  {
    v24 = *v22 & 0xFFFFFFFFFFFFFF80uLL;
    if ( v17 <= v24 && v24 < v18 )
    {
      v25 = *(_QWORD *)(SubsectionNode + 8);
      v26 = v25 + 8 * ((v24 - v17) >> 12);
      if ( v26 >= v25 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
        break;
      if ( (*(_BYTE *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
        goto LABEL_84;
LABEL_58:
      if ( v26 == v52 )
        goto LABEL_83;
      PteShadow = *(_QWORD *)v26;
      v52 = v26;
      if ( MiPteInShadowRange(v26) )
        PteShadow = MiReadPteShadow(v26, PteShadow);
      if ( (PteShadow & 1) != 0 )
      {
LABEL_62:
        MiUpdatePfnPriorityByPte(v26, v46);
        goto LABEL_83;
      }
      if ( (PteShadow & 0x400) == 0 )
      {
        if ( (PteShadow & 0x800) != 0 )
          goto LABEL_62;
        v35 = MiReverseSwizzleInvalidPte(PteShadow);
        if ( (v35 & 0x400) == 0 && (v35 & 0x800) == 0 && (v35 & 4) == 0 )
          goto LABEL_83;
      }
      v36 = v51;
      *v19 = v26;
      if ( !v51 )
        v36 = v19;
      v51 = v36;
      v37 = v26;
      if ( v50 == SubsectionNode )
      {
        if ( ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL == ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          goto LABEL_74;
        v37 = v26;
      }
      v50 = SubsectionNode;
      *v19 = v37 | 2;
LABEL_74:
      v53 = v26;
      if ( v26 == v48 )
        *v19 |= 1uLL;
      v43 = ++v19;
      if ( !MiPrefetchNormally(ControlAreaPartition, *(_DWORD *)(v11 + 56) + 1) )
        break;
      if ( a3 )
      {
        if ( !*a3 )
          break;
        --*a3;
      }
      if ( MiObtainFaultCharges((__int16 *)ControlAreaPartition, 1uLL, 1, v38) )
      {
        v39 = v55;
        ++*v55;
        Page = MiGetPage((__int64)ControlAreaPartition, v57 | (unsigned int)(unsigned __int16)(v56 & *v39), 0);
        if ( Page != -1 )
        {
          v41 = (_QWORD *)(48 * Page - 0x58000000000LL);
          ++v47;
          *v41 = *(_QWORD *)(v11 + 40);
          *(_QWORD *)(v11 + 40) = v41;
          goto LABEL_83;
        }
        MiReturnFaultCharges((__int64)ControlAreaPartition, 1uLL, 1);
        if ( v47 )
          goto LABEL_90;
        Mdls = -1073741801;
      }
      else
      {
        if ( v47 )
          goto LABEL_90;
        Mdls = -1073741670;
      }
      goto LABEL_100;
    }
    v27 = 0;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0
        && !*(_DWORD *)(SubsectionNode + 36)
        && *(_QWORD *)(SubsectionNode + 8) != *(_QWORD *)(*(_QWORD *)v8 + 64LL) )
      {
        SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
        goto LABEL_38;
      }
      v17 = MiStartingOffsetNeedLock((_QWORD *)SubsectionNode, v21);
      v28 = MiEndingOffsetWithLock((_QWORD *)SubsectionNode);
      v18 = v28;
      if ( v17 > v24 )
        goto LABEL_83;
      if ( v24 < v28 )
        break;
      if ( v24 < v17 )
        goto LABEL_83;
      if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
      {
        SubsectionNode = *(_QWORD *)(SubsectionNode + 16);
      }
      else
      {
        if ( v24 > 0x3FFFFFFFFFF000LL )
          goto LABEL_88;
        SubsectionNode = (__int64)MiLocateSubsectionNode((volatile signed __int32 *)v8, v24, 0);
      }
LABEL_38:
      if ( !SubsectionNode )
        goto LABEL_88;
      v21 = v61;
    }
    if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
      goto LABEL_49;
    v44 = MiAddViewsForSection(SubsectionNode, *(unsigned int *)(SubsectionNode + 44), 0);
    if ( v44 < 0 )
      goto LABEL_88;
    v29 = *(_DWORD **)(v11 + 32);
    v30 = (_QWORD *)(v11 + 24);
    if ( (_QWORD *)*v30 != v30 && v29[4] != 5 )
      goto LABEL_47;
    v31 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6C536D4Du);
    v29 = v31;
    if ( !v31 )
    {
      MiRemoveViewsFromSectionWithPfn((_QWORD *)SubsectionNode, *(unsigned int *)(SubsectionNode + 44));
      goto LABEL_88;
    }
    v31[4] = 0;
    v32 = *(_QWORD **)(v11 + 32);
    *(_QWORD *)v29 = v30;
    *((_QWORD *)v29 + 1) = v32;
    if ( (_QWORD *)*v32 != v30 )
      __fastfail(3u);
    *v32 = v29;
    *(_QWORD *)(v11 + 32) = v29;
LABEL_47:
    *(_QWORD *)&v29[2 * v29[4]++ + 6] = SubsectionNode;
    if ( !*(_QWORD *)(v11 + 16) )
      *(_QWORD *)(v11 + 16) = SubsectionNode;
LABEL_49:
    v33 = *(_QWORD *)(SubsectionNode + 8);
    v26 = v33 + 8 * ((v24 - v17) >> 12);
    if ( v26 >= v33 + 8 * (unsigned __int64)*(unsigned int *)(SubsectionNode + 44) )
    {
LABEL_88:
      v19 = v43;
      break;
    }
    if ( (*(_BYTE *)(SubsectionNode + 34) & 2) != 0 && (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
      v27 = 1;
    if ( (((_WORD)v18 - (_WORD)v17) & 0xFFF) != 0 )
      v48 = v33 + 8 * (((v18 - v17 + 4095) >> 12) - 1);
    else
      v48 = 0LL;
    if ( v27 != 1 )
    {
      v19 = v43;
      goto LABEL_58;
    }
LABEL_83:
    v23 = v58;
LABEL_84:
    v19 = v43;
    v22 = v49 + 1;
    ++v45;
    ++v49;
    if ( v45 < v23 )
    {
      v21 = v61;
      continue;
    }
    break;
  }
  if ( !v47 )
  {
    Mdls = v44;
    goto LABEL_100;
  }
LABEL_90:
  v42 = (unsigned int)v61;
  *(_DWORD *)(v11 + 60) = ((__int64)v19 - v11 - 104) >> 3;
  *(_QWORD *)(v11 + 64) = v51;
  Mdls = MiPfAllocateMdls(v11, v42, 0LL);
  if ( *(_QWORD *)(v11 + 88) == v11 + 88 )
  {
    MiReleaseReadListResources(v11);
    ExFreePoolWithTag((PVOID)v11, 0);
    v11 = 0LL;
  }
  else
  {
    Mdls = 0;
  }
  *a2 = v11;
  return Mdls;
}
