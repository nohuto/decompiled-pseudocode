/*
 * XREFs of MiResolvePageFileFault @ 0x1401218D0
 * Callers:
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiSetInPagePrefetchPriority @ 0x1400882A8 (MiSetInPagePrefetchPriority.c)
 *     MiReduceMdl @ 0x140098620 (MiReduceMdl.c)
 *     MiLockSetPfnPriority @ 0x1400A8B18 (MiLockSetPfnPriority.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x1400B24E8 (MiFlowThroughInsertNode.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiComputeFaultCluster @ 0x1400BD91C (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400BE0E0 (MiGetAvailablePagesBelowPriority.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E39D0 (MiInitializeReadInProgressPfn.c)
 *     MiComputeFaultNode @ 0x1400E3FD0 (MiComputeFaultNode.c)
 *     MiAllocateInPageSupport @ 0x1400E4E34 (MiAllocateInPageSupport.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     MiIsPteInStore @ 0x1401228A0 (MiIsPteInStore.c)
 *     MiFreePageChain @ 0x1401228C0 (MiFreePageChain.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 a1, unsigned __int64 a2, ...)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // r11
  struct _KTHREAD *CurrentThread; // r14
  bool v7; // zf
  int v8; // r12d
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  __int64 Process; // rdi
  int v14; // esi
  unsigned int v15; // r14d
  __int64 v16; // r9
  int v17; // r10d
  int *v18; // rax
  int *v19; // rcx
  __int64 v20; // rax
  bool v21; // al
  unsigned __int8 v22; // r10
  int v23; // eax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r11
  __int64 v30; // r15
  unsigned int v31; // r10d
  int v32; // edx
  __int64 updated; // rdi
  int *v34; // rax
  int v35; // r10d
  int *v36; // rcx
  int IsPteInStore; // eax
  int *v38; // rcx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r9
  int v41; // r10d
  int v42; // esi
  _QWORD *v43; // r11
  bool v44; // r10
  unsigned __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // r14
  unsigned int v48; // ebx
  unsigned int v49; // r9d
  _QWORD *v50; // r13
  unsigned int v51; // r11d
  unsigned int v52; // r12d
  unsigned int v53; // r15d
  __int64 v54; // rcx
  unsigned __int64 v55; // r10
  __int64 v56; // rdx
  unsigned int v57; // r12d
  __int64 PagingFileOffset; // rdi
  unsigned __int64 v59; // r9
  __int64 v60; // r11
  __int64 v61; // rax
  unsigned __int64 v62; // r11
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // rdi
  __int64 v65; // rcx
  unsigned int v66; // r12d
  unsigned int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r10
  unsigned int v71; // r12d
  __int64 v72; // r9
  __int64 v73; // r11
  __int64 v74; // rax
  unsigned __int64 v75; // r11
  __int64 PteTimeStamp; // rax
  __int64 v77; // r8
  unsigned int v78; // r9d
  unsigned __int64 v79; // rbx
  __int64 v80; // r8
  unsigned __int64 v81; // r12
  __int64 v82; // rax
  unsigned __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // r15d
  unsigned __int64 AvailablePagesBelowPriority; // rax
  int *v89; // r15
  __int64 v90; // rdx
  unsigned int v91; // r8d
  __int64 v92; // rax
  unsigned __int64 v93; // r10
  __int64 v94; // r11
  __int64 v95; // r8
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // r12
  unsigned int v99; // r15d
  unsigned int v100; // ebx
  __int64 *v101; // r13
  __int64 v102; // rax
  __int64 v103; // r9
  _QWORD *v104; // r10
  char v105; // r11
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  int v111; // eax
  unsigned __int64 v112; // r9
  unsigned __int64 v113; // rbx
  _QWORD *v114; // rbx
  unsigned int v115; // r12d
  unsigned int v116; // eax
  int v117; // edx
  __int64 v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rax
  int v121; // r8d
  unsigned int v122; // r11d
  int v123; // edi
  __int64 v124; // r15
  __int64 v125; // r13
  bool v126; // bl
  __int64 v127; // r8
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // r10
  int v132; // r11d
  __int64 v133; // rbx
  __int64 v134; // r8
  _QWORD *v135; // rbx
  __int64 v136; // rdi
  __int64 v137; // rax
  char v138; // r9
  _QWORD *v139; // r12
  __int64 v140; // r10
  char v141; // dl
  unsigned int v142; // ebx
  unsigned int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rax
  char v146; // cl
  int v147; // [rsp+28h] [rbp-99h]
  unsigned int i; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v149; // [rsp+4Ch] [rbp-75h]
  int v150; // [rsp+50h] [rbp-71h]
  int v151; // [rsp+54h] [rbp-6Dh]
  unsigned __int64 v152; // [rsp+58h] [rbp-69h]
  unsigned int v153; // [rsp+60h] [rbp-61h]
  int *v154; // [rsp+68h] [rbp-59h]
  int v155; // [rsp+70h] [rbp-51h]
  __int64 v156; // [rsp+78h] [rbp-49h] BYREF
  int v157; // [rsp+80h] [rbp-41h]
  _QWORD *v158; // [rsp+88h] [rbp-39h]
  unsigned __int64 Address; // [rsp+90h] [rbp-31h] BYREF
  __int64 PageChain; // [rsp+98h] [rbp-29h]
  __int64 v161; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v162; // [rsp+A8h] [rbp-19h]
  unsigned __int64 v163; // [rsp+B0h] [rbp-11h] BYREF
  __int64 *v164; // [rsp+B8h] [rbp-9h] BYREF
  struct _KTHREAD *v165; // [rsp+C0h] [rbp-1h]
  __int64 v168; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v170; // [rsp+130h] [rbp+6Fh]
  __int64 v171; // [rsp+138h] [rbp+77h]
  __int64 *v172; // [rsp+140h] [rbp+7Fh]
  va_list va1; // [rsp+148h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v168 = va_arg(va1, _QWORD);
  v170 = va_arg(va1, _QWORD);
  v171 = va_arg(va1, _QWORD);
  v172 = va_arg(va1, __int64 *);
  v2 = v170;
  v4 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v156 = v4;
  v158 = 0LL;
  v165 = CurrentThread;
  v7 = ((__int64)CurrentThread[1].Queue & 4) == 0;
  v8 = 2;
  v153 = 2;
  if ( !v7 )
  {
    if ( v168 )
      MiUnlockProtoPoolPage(v168, 0x11u);
    return 3221225633LL;
  }
  v10 = v171;
  v11 = v168;
  v12 = v156;
  v161 = v171 & 1;
  if ( (v171 & 1) != 0 && *(_BYTE *)(v171 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v158 = (_QWORD *)(v171 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  else if ( (v171 & 1) != 0 && *(_BYTE *)(v171 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v158 = (_QWORD *)(v171 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v156 & 0x800) == 0 && (unsigned int)MiGetPagingFileOffset((__int64)&v156) )
    {
      if ( (v17 & *(_DWORD *)(v16 + 80)) == 0 )
        goto LABEL_24;
      v18 = MiPartitionIdToPointer(*(_WORD *)(v2 + 164));
      if ( v11 )
      {
        v19 = MiSystemPartition;
        if ( (v12 & 8) != 0 )
          v19 = v18;
        v18 = v19;
      }
      if ( !(unsigned int)MiIsPteInStore(v18, v12) )
      {
LABEL_24:
        v153 = 0;
        v10 = v171;
        goto LABEL_8;
      }
      if ( v11 )
        MiUnlockProtoPoolPage(v11, 0x11u);
    }
    return 0LL;
  }
LABEL_8:
  Process = (__int64)CurrentThread->ApcState.Process;
  v149 = 1;
  v14 = 0;
  v157 = 0;
  v152 = a2;
  v151 = 2;
  v15 = 16;
  i = 16;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v20 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v21 = MI_PROTO_FORMAT_COMBINED(v20);
    v8 = v22;
    if ( v21 )
      v8 = 48;
    v150 = v8;
    if ( (v8 & 0x20) != 0 || *(_QWORD *)(Process + 912) )
    {
      v15 = 1;
      i = 1;
    }
    LODWORD(v162) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v156);
  }
  else
  {
    LOBYTE(v8) = v157;
    v150 = v8;
    v162 = (v12 >> 5) & 0x1F;
  }
  v23 = MiComputeFaultNode(v170, v5, 0LL, v10, &Address);
  v24 = Address;
  LODWORD(PageChain) = v23;
  if ( !Address )
  {
    if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && MiIsStoreProcess(Process) )
    {
      v25 = a1;
    }
    else
    {
      v26 = v170;
      if ( (*(_BYTE *)(v170 + 184) & 7) != 0
        || a1 >= 0xFFFF800000000000uLL
        || !*(_QWORD *)(qword_140327FD0 + 276840648) && !*(_QWORD *)(qword_140327FD0 + 276840656) )
      {
        goto LABEL_45;
      }
      v25 = a1;
    }
    Address = MiLocateAddress(v25);
    v24 = Address;
    if ( !Address )
    {
      v26 = v170;
      goto LABEL_45;
    }
  }
  v27 = *(unsigned int *)(v24 + 52);
  LODWORD(v27) = v27 & 0x7FFFFFFF;
  v26 = v170;
  if ( (v27 | ((unsigned __int64)*(unsigned __int8 *)(v24 + 34) << 31)) == 0x7FFFFFFFELL )
  {
    LOBYTE(v8) = v8 | 0x80;
    v150 = v8;
    v151 = 7;
  }
LABEL_45:
  if ( ((v12 >> 11) & 1) != 0 )
  {
    v28 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v156);
    v30 = v29 + 48 * v28;
    i = v31;
    v15 = v31;
    v151 = v31 | v32;
    updated = *(_QWORD *)(v30 + 16);
    v34 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v30 + 40)) >> 8) & 0x3FF);
    v14 = v35 + 15;
  }
  else
  {
    v30 = 0LL;
    updated = v12;
    v154 = MiPartitionIdToPointer(*(_WORD *)(v26 + 164));
    v36 = v154;
    if ( !v11 )
      goto LABEL_51;
    v34 = MiSystemPartition;
    if ( (v12 & 8) != 0 )
      v34 = v154;
  }
  v154 = v34;
  v36 = v34;
LABEL_51:
  IsPteInStore = MiIsPteInStore(v36, updated);
  v42 = v41 & (v14 ^ IsPteInStore) ^ v14;
  v155 = v42;
  if ( v15 != v41 )
  {
    if ( dword_1403276A4 )
    {
      i = v41;
      --dword_1403276A4;
      v15 = v41;
    }
    else
    {
      v43 = v158;
      if ( v158 )
      {
        v44 = (v150 & 0x10) != 0;
        if ( (v150 & 0x10) != 0 && !v40 )
        {
          v45 = MiLocateAddress(v39);
          v38 = v154;
          v40 = v45;
          Address = v45;
        }
        v46 = MiComputeFaultCluster((__int64)v38, v43, v40 & -(__int64)v44, v42 & 1);
        v38 = v154;
        v15 = v46;
        i = v46;
        v41 = 1;
      }
      else if ( v39 > 0x7FFFFFFEFFFFLL )
      {
        v15 = v41;
        i = v41;
        if ( (v150 & 0x10) == 0 && (v39 < 0xFFFFF68000000000uLL || v39 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v42 |= 4u;
          v15 = 16;
          v155 = v42;
          i = 16;
        }
      }
    }
  }
  LODWORD(v156) = v41 & v42;
  if ( (v41 & v42) != 0 )
  {
    if ( v15 > v38[267] )
      v15 = v38[267];
    i = v15;
  }
  v47 = MiAllocateInPageSupport(a2, v153, &i, (__int64 *)((unsigned __int64)va & -(__int64)(v11 != 0)));
  if ( !v47 )
  {
    v48 = -1073741670;
LABEL_79:
    if ( v158 )
      *((_BYTE *)v158 + 1) = (v48 == -1073741670) + 1;
    return v48;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v12
    || ((v12 >> 11) & 1) != 0
    && ((*(_BYTE *)(v30 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v30 + 34) & 0x20) == 0
     || updated != *(_QWORD *)(v30 + 16)
     || (*(_BYTE *)(*(_QWORD *)v30 + 157LL) & 0x10) != 0) )
  {
    v48 = -1073740748;
    if ( v168 )
      MiUnlockProtoPoolPage(v168, 0x11u);
    MiFreeInPageSupportBlock((char *)v47);
    goto LABEL_79;
  }
  v50 = v158;
  v51 = 1;
  if ( v158 && *(_BYTE *)v158 == 1 )
  {
    MiSetInPagePrefetchPriority((__int64)v158, v47);
    v49 = a2;
  }
  v52 = i;
  if ( i <= v51 || *((_QWORD *)v154 + 808) <= 0x140uLL )
    goto LABEL_130;
  v53 = 512 - ((v49 >> 3) & 0x1FF) - 1;
  i = (v49 >> 3) & 0x1FF;
  if ( (v150 & 0x10) == 0 )
    goto LABEL_99;
  v54 = Address;
  v55 = a1;
  if ( !Address )
  {
    Address = MiLocateAddress(a1);
    v54 = Address;
    if ( !Address )
      goto LABEL_98;
  }
  if ( (*(_DWORD *)(v54 + 48) & 0x8000) != 0 )
    goto LABEL_98;
  MiGetProtoPteAddress(v54, v55 >> 12, 8, &v164);
  if ( !v164 || (*((_BYTE *)v164 + 34) & 2) != 0 )
  {
    v51 = 1;
LABEL_98:
    v52 = v51;
    goto LABEL_99;
  }
  v56 = v164[1];
  v51 = 1;
  if ( (unsigned int)((__int64)(v56 + 8LL * *((unsigned int *)v164 + 11) - a2) >> 3) - 1 < v53 )
    v53 = ((__int64)(v56 + 8LL * *((unsigned int *)v164 + 11) - a2) >> 3) - 1;
  if ( (unsigned int)((__int64)(a2 - v56) >> 3) < i )
    i = (__int64)(a2 - v56) >> 3;
LABEL_99:
  if ( v50 || (v42 & 4) != 0 )
  {
    i = 0;
    if ( !v53 )
      v52 = v51;
  }
  if ( v52 <= v51 )
  {
LABEL_130:
    v63 = a2;
    v79 = v149;
    goto LABEL_131;
  }
  v57 = v52 - 1;
  v163 = v12;
  if ( v53 > v57 )
    v53 = v57;
  PagingFileOffset = (unsigned int)MiGetPagingFileOffset((__int64)&v163);
  if ( PagingFileOffset + (unsigned __int64)v53 >= 0xFFFFFFFE )
    v53 = -3 - PagingFileOffset;
  if ( (_DWORD)v156 || v50 )
  {
    v42 |= 8u;
    v155 = v42;
  }
  v59 = v12 & 0xFFFFFFFFFC00FF1DuLL;
  if ( v53 )
  {
    do
    {
      MiUpdatePageFileHighInPte(v59, ++PagingFileOffset);
      v61 = MI_READ_PTE_LOCK_FREE(v60);
      if ( (v61 & 0x3E0) != 0 && (v61 & 0xFFFFFFFFFC00FF1DuLL) == v59 )
      {
        v152 = v62;
      }
      else if ( (v42 & 8) != 0 )
      {
        break;
      }
      --v53;
    }
    while ( v53 );
    v50 = v158;
  }
  v63 = a2;
  v64 = a2;
  v163 = v12;
  v65 = (__int64)(v152 - a2) >> 3;
  v66 = v57 - v65;
  v149 = v65 + 1;
  v67 = i;
  if ( i > v66 )
    v67 = v66;
  i = v67;
  v68 = MiGetPagingFileOffset((__int64)&v163);
  v71 = i;
  v72 = v68;
  if ( i > (unsigned __int64)v68 - 1 )
    v71 = v68 - 1;
  if ( v71 )
  {
    do
    {
      MiUpdatePageFileHighInPte(v70, v72 - 1);
      v74 = MI_READ_PTE_LOCK_FREE(v73);
      if ( (v74 & 0x3E0) != 0 && (v74 & 0xFFFFFFFFFC00FF1DuLL) == v70 )
      {
        v64 = v75;
      }
      else if ( (v42 & 8) != 0 )
      {
        break;
      }
      --v71;
    }
    while ( v71 );
    v50 = v158;
  }
  PteTimeStamp = MiGetPteTimeStamp(v12, v69, (unsigned int)((__int64)(a2 - v64) >> 3));
  updated = MiUpdatePageFileHighInPte(v12, PteTimeStamp - v77);
  v79 = v78 + v149;
  v149 += v78;
  v152 = a2 - 8LL * v78;
LABEL_131:
  v81 = (unsigned int)MiObtainFaultCharges(v154, v79, v151);
  v164 = (__int64 *)v81;
  if ( (unsigned int)v79 > v81 )
  {
    v82 = MiGetPteTimeStamp(updated, (unsigned int)v79, v80);
    v83 = v152;
    v85 = v84 - v81;
    if ( v152 + 8 * v85 <= v63 )
    {
      v86 = v85 + v82;
      v152 += 8 * v85;
    }
    else
    {
      v152 = v63;
      v86 = ((__int64)(v63 - v83) >> 3) + v82;
    }
    v79 = v81;
    updated = MiUpdatePageFileHighInPte(updated, v86);
    v149 = v81;
  }
  v87 = 0;
  if ( v161 && *(_BYTE *)(v171 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || a1 >= qword_140328030 && a1 < qword_140328030 + 0x8000000000LL
    || PsNtosImageBase
    && (a1 >= (unsigned __int64)PsNtosImageBase && a1 < PsNtosImageEnd
     || a1 >= (unsigned __int64)PsHalImageBase && a1 < PsHalImageEnd) )
  {
    v87 = 8;
  }
  if ( !v50
    || *(_BYTE *)v50 != 1
    || (AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v154, ((*((_DWORD *)v50 + 20) >> 3) & 7u) + 1),
        v161 = AvailablePagesBelowPriority,
        AvailablePagesBelowPriority > v79) )
  {
    v161 = v79;
    AvailablePagesBelowPriority = v79;
  }
  if ( !AvailablePagesBelowPriority )
  {
    v89 = v154;
    goto LABEL_233;
  }
  v147 = v87;
  v89 = v154;
  PageChain = MiGetPageChain((__int64)v154, v170, PageChain, v162, v147, -1LL, (unsigned __int64 *)&v161);
  if ( !PageChain )
  {
LABEL_233:
    if ( v168 )
      MiUnlockProtoPoolPage(v168, 0x11u);
    MiFreeInPageSupportBlock((char *)v47);
    if ( v50 )
      *((_BYTE *)v50 + 1) = 2;
    MiReturnFaultCharges((__int64)v89, v81, v151);
    return 3221225495LL;
  }
  v91 = v161;
  if ( v161 != v79 )
  {
    if ( v152 + 8 * v161 <= a2 )
    {
      v92 = MiGetPteTimeStamp(updated, v90, v161);
      v96 = v79 - v95;
      if ( v94 + 8 * v96 > v93 )
      {
        v152 = v93;
        v97 = ((__int64)(v93 - v94) >> 3) + v92;
      }
      else
      {
        v97 = v96 + v92;
        v152 = v94 + 8 * v96;
      }
      updated = MiUpdatePageFileHighInPte(updated, v97);
    }
    v149 = v91;
  }
  v98 = v47 + 256;
  v99 = 0;
  v153 = *(_BYTE *)(v47 + 190) & 7;
  v100 = 0;
  v101 = (__int64 *)(v47 + 304);
  for ( i = 0; ; v100 = i )
  {
    v102 = MI_READ_PTE_LOCK_FREE(v152);
    v106 = v102;
    v107 = 1LL;
    if ( (v42 & 0x10) != 0
      || (v102 & 1) == 0
      && (v102 & 0x400) == 0
      && (v102 & 0x800) == 0
      && (v108 = MiGetPteTimeStamp(updated, v102, 1LL), v110 = MiGetPteTimeStamp(v109, v109, v108), v110 == v107)
      && (v107 = 1LL, (v106 & 4) != 0)
      && ((v106 ^ updated) & 0xF000) == 0
      && (v111 = MiIsPteInStore(v154, v106), v111 == ((unsigned int)v107 & v42)) )
    {
      i = v107 + v100;
      *v101 = (v103 + 0x58000000000LL) / 48;
      if ( v152 == a2 )
        LOBYTE(v117) = v105;
      else
        v117 = (*(unsigned __int8 *)(v47 + 190) >> 4) & 7;
      MiLockSetPfnPriority(v103, v117);
      v118 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
      MiSetPfnBlink(PageChain, 0LL, 0);
      if ( v118 == 0xFFFFFFFFFLL )
        PageChain = 0LL;
      else
        PageChain = 48 * v118 - 0x58000000000LL;
      goto LABEL_184;
    }
    if ( (v42 & 8) == 0 )
    {
      v42 |= 2u;
      *v101 = qword_1403276D8;
      v155 = v42;
LABEL_184:
      ++v101;
      if ( v158 )
        MiAdvanceFaultList(v158);
      v113 = v152 + 8;
      v152 += 8LL;
      v119 = MiGetPteTimeStamp(updated, v106, v107);
      v120 = MiUpdatePageFileHighInPte(updated, v119 + 1);
      v112 = a2;
      v104 = (_QWORD *)(v47 + 304);
      updated = v120;
      v99 += v121;
      v116 = v149;
      goto LABEL_187;
    }
    v112 = a2;
    v113 = v152;
    if ( v152 > a2 )
    {
      v122 = v99;
      goto LABEL_191;
    }
    v114 = v104;
    if ( v99 )
    {
      v115 = i;
      do
      {
        if ( *v114 != qword_1403276D8 )
        {
          MiReleaseFreshPage(48LL * *v114 - 0x58000000000LL);
          --v115;
        }
        ++v114;
        --v99;
      }
      while ( v99 );
      v42 = v155;
      v104 = (_QWORD *)(v47 + 304);
      v112 = a2;
      i = v115;
      v98 = v47 + 256;
    }
    v42 &= ~2u;
    v113 = v112;
    v155 = v42;
    v152 = v112;
    v101 = v104;
    updated = MI_READ_PTE_LOCK_FREE(v112);
    v116 = 1;
    v149 = 1;
LABEL_187:
    if ( v99 >= v116 )
      break;
  }
  v122 = v149;
LABEL_191:
  v123 = v150;
  v124 = v113 - 8LL * v122;
  v125 = v104[(__int64)(v112 - v124) >> 3];
  v126 = (v150 & 0x10) != 0;
  if ( (v150 & 0x10) != 0 )
    v127 = 0LL;
  else
    v127 = v124 << 25 >> 16;
  *(_QWORD *)v98 = 0LL;
  v128 = v122 << 12;
  *(_DWORD *)(v98 + 40) = v128;
  *(_QWORD *)(v98 + 32) = v127 & 0xFFFFFFFFFFFFF000uLL;
  *(_WORD *)(v98 + 8) = 8 * (((v128 + (unsigned __int64)(v127 & 0xFFF) + 4095) >> 12) + 6);
  *(_DWORD *)(v98 + 44) = v127 & 0xFFF;
  *(_WORD *)(v98 + 10) = 66;
  if ( (v42 & 2) != 0 )
  {
    v129 = MiReduceMdl(v98);
    if ( v129 )
    {
      v124 += 8 * v129;
      if ( !v126 )
        *(_QWORD *)(v98 + 32) += v129 << 12;
    }
  }
  else
  {
    *(_WORD *)(v98 + 10) = 16450;
  }
  v130 = MI_READ_PTE_LOCK_FREE(v124);
  LOWORD(v133) = v130;
  v156 = v130;
  if ( v132 == 1 )
    LOBYTE(v123) = v123 & 0xF8 | *(_BYTE *)(v47 + 190) & 7 | 8;
  else
    LOBYTE(v123) = v123 & 0xDF;
  LOBYTE(v157) = v123;
  MiInitializeReadInProgressPfn(a1, v131, v132, v124, v47 + 32, v123);
  if ( (v42 & 0x10) != 0 )
  {
    v135 = (_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v156) - 0x58000000000LL);
    MiFlowThroughInsertNode(v47, v135);
    v133 = v135[2];
    v156 = v133;
    if ( (v123 & 0x10) == 0 )
      *(_QWORD *)(48LL * *(_QWORD *)(v47 + 304) - 0x58000000000LL + 16) ^= (*(_DWORD *)(48LL * *(_QWORD *)(v47 + 304)
                                                                                      - 0x58000000000LL
                                                                                      + 16) ^ (WORD1(v133) << 16)) & 0x3FF0000;
  }
  LOBYTE(v123) = (unsigned __int8)v123 >> 4;
  v150 = v123;
  v7 = (v123 & 1) == 0;
  LOBYTE(v150) = v123 & 1;
  v136 = v168;
  if ( !v7 )
    MiObtainProtoReference(v168, 0LL, v134, 1LL);
  v137 = MI_READ_PTE_LOCK_FREE(a2);
  v139 = v158;
  *(_QWORD *)(v47 + 168) = v137;
  *(_QWORD *)(v47 + 224) = v140;
  if ( v139 )
  {
    if ( *(_BYTE *)v139 == v138 )
    {
      v141 = *(_BYTE *)(v47 + 189) | 4;
      *(_BYTE *)(v47 + 189) = v141;
      if ( (v139[10] & 0x2000) != 0 )
        *(_BYTE *)(v47 + 189) = v141 | 0x10;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)v165) < 2 )
    *(_BYTE *)(v47 + 189) |= 0x40u;
  if ( Address && (*(_DWORD *)(Address + 48) & 0x100000) != 0 )
    *(_BYTE *)(v47 + 191) |= 8u;
  if ( v136 )
    MiUnlockProtoPoolPage(v136, 0x11u);
  MiFreePageChain(PageChain);
  if ( (__int64 *)i != v164 )
    MiReturnFaultCharges((__int64)v154, (unsigned __int64)v164 - i, v151);
  v142 = (unsigned __int16)v133 >> 12;
  *v172 = v47;
  v143 = MiGetPagingFileOffset((__int64)&v156);
  LODWORD(v162) = v143;
  v144 = *(_QWORD *)&v154[2 * v142 + 1576];
  if ( (_BYTE)v150 )
    *(_QWORD *)(v47 + 160) = v136;
  if ( (v42 & 1) != 0 )
  {
    *(_BYTE *)(v47 + 189) |= 0x80u;
    *(_QWORD *)(v47 + 96) = v143 | ((unsigned __int64)v142 << 60);
  }
  else
  {
    HIDWORD(v162) = 0;
    *(_QWORD *)(v47 + 96) = (unsigned __int64)(unsigned int)v162 << 12;
  }
  v145 = *(_QWORD *)(v144 + 56);
  *(_BYTE *)(v47 + 191) |= 0x10u;
  v146 = *(_BYTE *)(v47 + 191);
  *(_QWORD *)(v47 + 192) = v145;
  if ( *(_QWORD *)(v144 + 216)
    && (!v139 || *(_BYTE *)v139 != 1 || (v139[10] & 0x1000) == 0 || (dword_1403A9144 & 1) != 0) )
  {
    *(_BYTE *)(v47 + 191) = v146 | 0x20;
  }
  *(_QWORD *)(v47 + 232) = v124;
  result = 3221435187LL;
  *(_QWORD *)(v47 + 240) = 48 * v125 - 0x58000000000LL;
  return result;
}
