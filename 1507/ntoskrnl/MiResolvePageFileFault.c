/*
 * XREFs of MiResolvePageFileFault @ 0x140145F70
 * Callers:
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x14003696C (MiReduceMdl.c)
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140055320 (MiGetAvailablePagesBelowPriority.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiComputeFaultNode @ 0x140059AF0 (MiComputeFaultNode.c)
 *     MiAllocateInPageSupport @ 0x14005E9AC (MiAllocateInPageSupport.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiComputeFaultCluster @ 0x1400DF61C (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1400DF8F4 (MiAdvanceFaultList.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiLockSetPfnPriority @ 0x140120268 (MiLockSetPfnPriority.c)
 *     MiSetInPagePrefetchPriority @ 0x14012B688 (MiSetInPagePrefetchPriority.c)
 *     MiFlowThroughInsertNode @ 0x14012F998 (MiFlowThroughInsertNode.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiResolvePageFileFault(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  unsigned __int64 PteShadow; // rbx
  __int64 v9; // r10
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v12; // r8d
  unsigned __int64 v13; // r13
  bool v14; // zf
  __int64 result; // rax
  __int64 v16; // r9
  __int16 *v17; // rsi
  int v18; // r11d
  struct _KPROCESS *Process; // rdi
  __int64 v20; // r11
  unsigned int v21; // eax
  unsigned int v22; // r15d
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int16 v25; // dx
  int v26; // r8d
  char v27; // al
  __int16 *VmPartition; // rax
  __int16 *v29; // r8
  __int16 *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  int v37; // edx
  __int64 v38; // r12
  unsigned __int64 v39; // rdi
  unsigned __int16 v40; // cx
  __int16 *v41; // rcx
  char v42; // r8
  unsigned __int64 v43; // r9
  int v44; // r10d
  __int64 v45; // r11
  bool v46; // si
  int v47; // esi
  bool v48; // r15
  __int64 v49; // rax
  __int64 v50; // r9
  int v51; // r8d
  __int64 v52; // r15
  unsigned int v53; // ebx
  __int64 v54; // r10
  __int64 v55; // rax
  unsigned int v56; // r13d
  unsigned __int64 v57; // rdx
  unsigned int v58; // r12d
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // r13d
  unsigned __int64 v65; // r11
  __int64 *v66; // rdi
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // r10
  unsigned __int64 updated; // r9
  unsigned __int64 v71; // r15
  int v72; // r10d
  __int64 v73; // rax
  unsigned __int64 v74; // r11
  __int64 v75; // r8
  __int64 v76; // r11
  unsigned int v77; // r13d
  unsigned __int64 v78; // r13
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // r9
  unsigned int v82; // r8d
  __int64 *v83; // r11
  __int64 v84; // rax
  __int64 PteTimeStamp; // rax
  __int64 v86; // r8
  __int64 v87; // rax
  unsigned __int64 v88; // r12
  __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // r12
  int v95; // r8d
  _WORD *v96; // rax
  __int16 v97; // cx
  int v98; // r12d
  int v99; // r12d
  _QWORD *v100; // r13
  unsigned int v101; // edx
  __int16 *v102; // r12
  __int64 Page; // rax
  __int64 v104; // r13
  __int64 v105; // r12
  unsigned int v106; // eax
  unsigned __int64 v107; // rdi
  __int64 v108; // r8
  unsigned __int64 v109; // rax
  _QWORD *v110; // rbx
  __int64 v111; // r8
  __int64 v112; // rbx
  unsigned int v113; // r13d
  _QWORD *v114; // r9
  __int64 *v115; // r12
  unsigned int v116; // r11d
  unsigned __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // r8
  char v120; // r10
  __int64 v121; // rdx
  unsigned __int64 *v122; // rcx
  unsigned __int64 *v123; // rdx
  _QWORD *v124; // rbx
  int v125; // r13d
  __int64 v126; // r12
  __int64 v127; // r12
  int v128; // edx
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  unsigned int v132; // r10d
  int v133; // r11d
  _WORD *v134; // rax
  __int16 v135; // cx
  unsigned __int64 *v136; // rdi
  bool v137; // bl
  __int64 v138; // r8
  __int64 v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rdi
  __int64 *v142; // r9
  __int64 v143; // rax
  _QWORD *v144; // r13
  char v145; // cl
  struct _KTHREAD *v146; // r8
  int v147; // edx
  unsigned __int64 v148; // rdx
  __int16 *v149; // r12
  __int64 v150; // r9
  unsigned __int64 v151; // rax
  __int64 v152; // r8
  __int64 v153; // rax
  char v154; // cl
  unsigned int v155; // [rsp+38h] [rbp-A1h] BYREF
  unsigned int v156; // [rsp+3Ch] [rbp-9Dh]
  __int64 v157; // [rsp+40h] [rbp-99h]
  unsigned __int64 v158; // [rsp+48h] [rbp-91h] BYREF
  __int16 *v159; // [rsp+50h] [rbp-89h]
  __int64 *v160; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int64 *v161; // [rsp+60h] [rbp-79h]
  __int64 Address; // [rsp+68h] [rbp-71h] BYREF
  int v163; // [rsp+70h] [rbp-69h]
  unsigned int v164; // [rsp+74h] [rbp-65h]
  int v165; // [rsp+78h] [rbp-61h]
  unsigned __int64 v166; // [rsp+80h] [rbp-59h]
  __int64 v167; // [rsp+88h] [rbp-51h]
  __int64 v168; // [rsp+90h] [rbp-49h]
  unsigned int v169; // [rsp+98h] [rbp-41h]
  _QWORD *v170; // [rsp+A0h] [rbp-39h]
  unsigned __int64 v171; // [rsp+A8h] [rbp-31h] BYREF
  unsigned __int64 v172; // [rsp+B0h] [rbp-29h] BYREF
  _WORD *v173; // [rsp+B8h] [rbp-21h] BYREF
  __int16 v174; // [rsp+C0h] [rbp-19h]
  unsigned __int16 v175; // [rsp+C2h] [rbp-17h]
  struct _KTHREAD *v176; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v177; // [rsp+D0h] [rbp-9h]
  __int64 *v178; // [rsp+D8h] [rbp-1h]
  unsigned __int64 *v179; // [rsp+130h] [rbp+57h]

  v179 = a2;
  PteShadow = *a2;
  v166 = a1;
  v9 = a3;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a2, PteShadow);
  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  v160 = (__int64 *)PteShadow;
  v13 = 0LL;
  v170 = 0LL;
  v176 = CurrentThread;
  v14 = (BYTE4(CurrentThread[1].Queue) & 4) == 0;
  LODWORD(v168) = 2;
  if ( !v14 )
  {
    if ( a4 == 1 )
      MiUnlockProtoPoolPage(a5, 0x11u);
    return 3221225633LL;
  }
  v16 = a6;
  v17 = MiSystemPartition;
  v18 = 512;
  v167 = a6 & 1;
  if ( (a6 & 1) != 0 && *(_BYTE *)(a6 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v13 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
    v170 = (_QWORD *)(a6 & 0xFFFFFFFFFFFFFFFEuLL);
    goto LABEL_10;
  }
  if ( (a6 & 1) != 0 && *(_BYTE *)(a6 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v170 = (_QWORD *)(a6 & 0xFFFFFFFFFFFFFFFEuLL);
    v13 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (PteShadow & 0x800) != 0 )
      return 0LL;
    v27 = PteShadow;
    if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8 )
    {
      v27 = MiReadPteShadow(&v160, PteShadow);
      v12 = 0;
    }
    if ( (v27 & 4) == 0 )
      return 0LL;
    if ( (v18 & *(_DWORD *)(v13 + 80)) != 0 )
    {
      VmPartition = MiGetVmPartition(v9);
      v29 = VmPartition;
      if ( a4 )
      {
        v30 = MiSystemPartition;
        if ( (PteShadow & 8) != 0 )
          v30 = VmPartition;
        v29 = v30;
      }
      if ( (PteShadow & 4) != 0 && (unsigned __int16)PteShadow >> 12 == *((_DWORD *)v29 + 261) )
      {
        if ( a4 == 1 )
          MiUnlockProtoPoolPage(a5, 0x11u);
        return 0LL;
      }
      v12 = 0;
    }
    LODWORD(v168) = 0;
  }
LABEL_10:
  Process = CurrentThread->ApcState.Process;
  v20 = v166;
  v21 = (unsigned int)a2;
  v161 = 0LL;
  v22 = 16;
  v165 = 0;
  v157 = 0x100000002LL;
  v178 = (__int64 *)a2;
  v155 = 16;
  if ( (unsigned __int64)(a2 + 0x13000000000LL) <= 0x7FFFFFFFFFLL )
  {
    LOBYTE(v21) = v165;
    v156 = v21;
  }
  else
  {
    LOBYTE(v12) = 16;
    v156 = v12;
    v23 = (__int64 *)(((v166 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v24 = *v23;
    if ( (unsigned __int64)(v23 + 0x12090482600LL) <= 0x7F8 )
      v24 = MiReadPteShadow(v23, v24);
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v24) )
    {
      v26 = (unsigned __int8)v26;
      if ( (v25 & 0x800) != 0 )
        v26 = 48;
      v156 = v26;
    }
    if ( (v26 & 0x20) != 0 || Process[1].Affinity.Bitmap[12] )
    {
      v22 = 1;
      v155 = 1;
    }
  }
  v31 = MiComputeFaultNode(v9, v20, 0LL, v16, (__int64 *)&v171);
  v32 = v171;
  v164 = v31;
  Address = v171;
  if ( v171
    || Process == PsInitialSystemProcess
    && (unsigned __int64)a2 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)a2 >= 0xFFFFF68000000000uLL
    && (Address = (__int64)MiLocateAddress(v166), (v32 = Address) != 0) )
  {
    v33 = *(unsigned int *)(v32 + 52);
    LODWORD(v33) = v33 & 0x7FFFFFFF;
    v34 = v156;
    if ( (v33 | ((unsigned __int64)*(unsigned __int8 *)(v32 + 34) << 31)) == 0x7FFFFFFFELL )
    {
      LOBYTE(v34) = v156 | 0x80;
      v35 = 7LL;
      v156 = v34;
      LODWORD(v157) = 7;
      goto LABEL_48;
    }
  }
  else
  {
    v34 = v156;
  }
  v35 = (unsigned int)v157;
LABEL_48:
  v171 = (PteShadow >> 11) & 1;
  if ( v171 )
  {
    v36 = MiReverseSwizzleInvalidPte(PteShadow, v35, v34, v32);
    v155 = 1;
    LODWORD(v157) = v37 | 1;
    v22 = 1;
    v38 = 48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v39 = *(_QWORD *)(v38 + 16);
    v40 = ((unsigned int)HIDWORD(*(_QWORD *)(v38 + 40)) >> 8) & 0x3FF;
    v158 = v39;
    v41 = MiPartitionIdToPointer(v40);
    v159 = v41;
  }
  else
  {
    v38 = 0LL;
    v39 = PteShadow;
    v158 = PteShadow;
    v41 = MiGetVmPartition(a3);
    v159 = v41;
    if ( a4 != v44 )
    {
      if ( (PteShadow & 8) != 0 )
        v17 = v41;
      v41 = v17;
      v159 = v17;
    }
  }
  v46 = v44;
  if ( (v39 & 4) != 0 )
    v46 = (unsigned __int16)v39 >> 12 == *((_DWORD *)v41 + 261);
  v47 = v46;
  v163 = v47;
  if ( v22 != 1 )
  {
    if ( dword_14034F6D4 )
    {
      v155 = 1;
      --dword_14034F6D4;
      v22 = 1;
    }
    else if ( v13 )
    {
      v48 = (v42 & 0x10) != 0;
      if ( (v42 & 0x10) != 0 && !v43 )
      {
        v43 = (unsigned __int64)MiLocateAddress(v166);
        Address = v43;
      }
      v22 = MiComputeFaultCluster((__int64)v159, (_QWORD *)v13, v43 & -(__int64)v48, v47 & 1);
      v155 = v22;
    }
    else if ( v166 > (unsigned __int64)MmHighestUserAddress )
    {
      v155 = 1;
      v22 = 1;
      if ( (v42 & 0x10) == 0 && v45 + v166 > 0x7FFFFFFFFFLL )
      {
        v47 |= 4u;
        v22 = 16;
        v163 = v47;
        v155 = 16;
      }
    }
  }
  v169 = v47 & 1;
  if ( (v47 & 1) != 0 )
  {
    if ( v22 > *((_DWORD *)v159 + 263) )
      v22 = *((_DWORD *)v159 + 263);
    v155 = v22;
  }
  v49 = MiAllocateInPageSupport(
          (__int64)v179,
          (unsigned int)v168,
          &v155,
          (__int64 *)((unsigned __int64)&a5 & -(__int64)(a5 != 0)));
  v51 = 0;
  v168 = v49;
  v52 = v49;
  if ( !v49 )
  {
    v53 = -1073741670;
LABEL_85:
    if ( v13 )
      *(_BYTE *)(v13 + 1) = (v53 == -1073741670) + 1;
    return v53;
  }
  v54 = (__int64)v179;
  v55 = *v179;
  if ( (unsigned __int64)(v179 + 0x12090482600LL) <= 0x7F8 )
  {
    v55 = MiReadPteShadow(v179, *v179);
    v51 = 0;
  }
  if ( v55 != PteShadow
    || v171
    && ((*(_BYTE *)(v38 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v38 + 34) & 0x20) == 0
     || v39 != *(_QWORD *)(v38 + 16)
     || (*(_BYTE *)(*(_QWORD *)v38 + 157LL) & 0x10) != 0) )
  {
    v53 = -1073740748;
    if ( a4 == 1 )
      MiUnlockProtoPoolPage(a5, 0x11u);
    MiFreeInPageSupportBlock((char *)v52);
    goto LABEL_85;
  }
  if ( v13 && *(_BYTE *)v13 == 1 )
  {
    MiSetInPagePrefetchPriority(v13, v52);
    v51 = 0;
  }
  v56 = v155;
  v57 = 0xFFFFFFFFLL;
  if ( v155 <= 1 || *((_QWORD *)v159 + 688) <= 0x100uLL )
    goto LABEL_149;
  v58 = 512 - (((unsigned int)v54 >> 3) & 0x1FF) - 1;
  v155 = ((unsigned int)v54 >> 3) & 0x1FF;
  if ( (v156 & 0x10) != 0 )
  {
    v59 = Address;
    if ( (Address || (v60 = MiLocateAddress(v166), v51 = 0, (v59 = (__int64)v60) != 0))
      && (*(_DWORD *)(v59 + 48) & 0x8000) == 0
      && (MiGetProtoPteAddress(v59, v166 >> 12, 0, (unsigned int **)&v172), v51 = 0, v172)
      && (*(_BYTE *)(v172 + 34) & 2) == 0 )
    {
      v61 = *(_QWORD *)(v172 + 8);
      v54 = (__int64)v179;
      if ( (unsigned int)((v61 + 8LL * *(unsigned int *)(v172 + 44) - (__int64)v179) >> 3) - 1 < v58 )
        v58 = ((v61 + 8LL * *(unsigned int *)(v172 + 44) - (__int64)v179) >> 3) - 1;
      v62 = (__int64)v179 - v61;
      v57 = 0xFFFFFFFFLL;
      v63 = v62 >> 3;
      if ( (unsigned int)v63 < v155 )
        v155 = v63;
    }
    else
    {
      v54 = (__int64)v179;
      v57 = 0xFFFFFFFFLL;
      v56 = 1;
    }
  }
  v50 = (__int64)v170;
  if ( v170 || (v47 & 4) != 0 )
  {
    v155 = 0;
    if ( !v58 )
      v56 = 1;
  }
  if ( v56 <= 1 )
  {
LABEL_149:
    v78 = (unsigned __int64)v179;
  }
  else
  {
    v64 = v56 - 1;
    Address = v54;
    v158 = PteShadow;
    v65 = v54;
    v66 = (__int64 *)(v54 + 8);
    if ( v58 > v64 )
      v58 = v64;
    v67 = PteShadow;
    v161 = &STACK[0x90482413048];
    if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
    {
      v67 = MiReadPteShadow(&v158, PteShadow);
      v51 = 0;
      v57 = 0xFFFFFFFFLL;
    }
    if ( (v67 & 4) != 0 )
      v68 = (unsigned __int64)MiReverseSwizzleInvalidPte(v67, 0xFFFFFFFFLL, 0LL, v50) >> 32;
    else
      LODWORD(v68) = 0;
    v172 = (unsigned int)v68;
    if ( (unsigned int)v68 + (unsigned __int64)v58 >= v57 )
      v58 = -2 - v68;
    if ( v169 != v51 || v50 )
    {
      v47 |= 8u;
      v163 = v47;
    }
    v69 = PteShadow & 0xFFFFFFFFFC00FC1DuLL;
    v158 = PteShadow & 0xFFFFFFFFFC00FC1DuLL;
    updated = PteShadow & 0xFFFFFFFFFC00FC1DuLL;
    if ( v58 )
    {
      v71 = v172;
      do
      {
        updated = MiUpdatePageFileHighInPte(updated, ++v71);
        v73 = *v66;
        if ( v74 <= 0x7F8 )
          v73 = MiReadPteShadow(v66, *v66);
        if ( (v73 & 0x3E0) != 0 && (v73 & 0xFFFFFFFFFC00FC1DuLL) == updated )
        {
          Address = (__int64)v66;
        }
        else if ( (v47 & 8) != 0 )
        {
          break;
        }
        ++v66;
        v58 += v72;
      }
      while ( v58 );
      v69 = v158;
      v52 = v168;
      v65 = Address;
    }
    v75 = v155;
    v76 = (__int64)(v65 - (_QWORD)v179) >> 3;
    v77 = v64 - v76;
    v158 = PteShadow;
    if ( v155 > v77 )
      v75 = v77;
    v78 = (unsigned __int64)v179;
    HIDWORD(v157) = v76 + 1;
    v155 = v75;
    v79 = PteShadow;
    if ( (unsigned __int64)v161 <= 0x7F8 )
    {
      v79 = MiReadPteShadow(&v158, PteShadow);
      v75 = v155;
    }
    if ( (v79 & 4) != 0 )
      v80 = (unsigned __int64)MiReverseSwizzleInvalidPte(v79, v57, v75, updated) >> 32;
    else
      LODWORD(v80) = 0;
    v81 = (unsigned int)v80;
    if ( (unsigned int)v75 > (unsigned __int64)(unsigned int)v80 - 1 )
    {
      LODWORD(v75) = v80 - 1;
      v155 = v80 - 1;
    }
    if ( (_DWORD)v75 )
    {
      do
      {
        v69 = MiUpdatePageFileHighInPte(v69, v81 - 1);
        v84 = *v83;
        if ( (unsigned __int64)(v83 + 0x12090482600LL) <= 0x7F8 )
        {
          v84 = MiReadPteShadow(v83, *v83);
          v82 = v155;
        }
        if ( ((v84 & 0x3E0) == 0 || (v84 & 0xFFFFFFFFFC00FC1DuLL) != v69) && (v47 & 8) != 0 )
          break;
        v155 = v82 - 1;
      }
      while ( v82 != 1 );
      v52 = v168;
    }
    PteTimeStamp = MiGetPteTimeStamp(PteShadow);
    v87 = MiUpdatePageFileHighInPte(PteShadow, PteTimeStamp - v86);
    HIDWORD(v157) += v50;
    v39 = v87;
    v158 = v87;
    v161 = &v179[-(unsigned int)v50];
  }
  v88 = HIDWORD(v157);
  v177 = MiObtainFaultCharges(v159, HIDWORD(v157), v157, v50);
  if ( v88 > v177 )
  {
    v89 = MiGetPteTimeStamp(v39);
    if ( v92 - 8 * v90 <= v78 )
    {
      v94 = v88 - v90;
      v93 = v94 + v89;
      v161 = (unsigned __int64 *)(v91 + 8 * v94);
    }
    else
    {
      v161 = (unsigned __int64 *)v78;
      v93 = ((__int64)(v78 - v91) >> 3) + v89;
    }
    v39 = MiUpdatePageFileHighInPte(v39, v93);
    v158 = v39;
    HIDWORD(v157) = v95;
  }
  MI_INITIALIZE_COLOR_BASE(a3, v164, (__int64)&v173);
  v96 = v173;
  v97 = v174;
  v98 = v175;
  v164 = 0;
  ++*v173;
  v99 = (unsigned __int16)(v97 & *v96) | v98;
  v169 = v99;
  if ( v167 && *(_BYTE *)(a6 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || v166 + 0x80000000000LL <= 0x7FFFFFFFFFLL
    || PsNtosImageBase
    && (v166 >= (unsigned __int64)PsNtosImageBase && v166 < PsNtosImageEnd
     || v166 >= (unsigned __int64)PsHalImageBase && v166 < PsHalImageEnd) )
  {
    v164 = 8;
  }
  v100 = v170;
  if ( v170 && *(_BYTE *)v170 == 1 && !MiGetAvailablePagesBelowPriority(v159, ((*((_DWORD *)v170 + 20) >> 3) & 7u) + 1) )
  {
    v102 = v159;
    goto LABEL_172;
  }
  v101 = v99;
  v102 = v159;
  Page = MiGetPage((__int64)v159, v101, v164);
  Address = Page;
  if ( Page == -1 )
  {
LABEL_172:
    if ( a4 == 1 )
      MiUnlockProtoPoolPage(a5, 0x11u);
    MiFreeInPageSupportBlock((char *)v52);
    if ( v100 )
      *((_BYTE *)v100 + 1) = 2;
    MiReturnFaultCharges((__int64)v102, HIDWORD(v157), v157);
    return 3221225495LL;
  }
  v104 = v52 + 256;
  v105 = 48 * Page - 0x58000000000LL;
  v106 = *(unsigned __int8 *)(v52 + 190);
  LODWORD(v168) = *(_BYTE *)(v52 + 190) & 7;
  if ( HIDWORD(v157) == 1 )
  {
    v107 = v166;
    LODWORD(v167) = 1;
    LOBYTE(v106) = v156 & 0xF8 | v106 & 7 | 8;
    v156 = v106;
    LOBYTE(v165) = v106;
    MiInitializeReadInProgressPfn(v166, (unsigned __int64 *)&Address, 1, v179, v52 + 32, v106);
    *(_DWORD *)(v52 + 296) = 4096;
    v107 &= 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v104 = 0LL;
    *(_WORD *)(v52 + 264) = 8 * ((((v107 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v52 + 288) = v107 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v52 + 266) = 16450;
    v109 = Address;
    *(_DWORD *)(v52 + 300) = v107 & 0xFFF;
    *(_QWORD *)(v52 + 304) = v109;
    if ( v171 )
    {
      v110 = (_QWORD *)(48
                      * (((unsigned __int64)MiReverseSwizzleInvalidPte(PteShadow, 0LL, v108, 4095LL) >> 12) & 0xFFFFFFFFFLL)
                      - 0x58000000000LL);
      MiFlowThroughInsertNode(v52, v110, v111);
      v112 = v110[2];
      v160 = (__int64 *)v112;
    }
    else
    {
      v112 = (__int64)v160;
    }
    v113 = v156;
    if ( (v156 & 0x10) == 0 )
      *(_QWORD *)(v105 + 16) ^= (*(_DWORD *)(v105 + 16) ^ (WORD1(v112) << 16)) & 0x3FF0000;
    goto LABEL_238;
  }
  v114 = (_QWORD *)(v52 + 304);
  v115 = (__int64 *)(v52 + 304);
  v160 = (__int64 *)(v52 + 304);
  v116 = 0;
  v155 = 0;
  LODWORD(v167) = 0;
  while ( 1 )
  {
    v117 = *v161;
    if ( (unsigned __int64)(v161 + 0x12090482600LL) <= 0x7F8 )
      v117 = MiReadPteShadow(v161, *v161);
    if ( (v117 & 1) != 0
      || (v117 & 0x400) != 0
      || (v117 & 0x800) != 0
      || (MiGetPteTimeStamp(v39), v118 = MiGetPteTimeStamp(v117), v118 != v121)
      || (v117 & 4) == 0
      || (((unsigned __int8)(v117 >> 12) ^ (unsigned __int8)(v39 >> 12)) & 0xF) != 0
      || (((v117 >> 12) & 0xF) == *((_DWORD *)v159 + 261)) != (v47 & 1) )
    {
      if ( (v47 & 8) == 0 )
      {
        v47 |= 2u;
        *v115 = qword_14034F708;
        v163 = v47;
        goto LABEL_220;
      }
      goto LABEL_199;
    }
    if ( v116 )
    {
      if ( v170
        && *(_BYTE *)v170 == 1
        && !MiGetAvailablePagesBelowPriority(v159, ((*((_DWORD *)v170 + 20) >> 3) & 7u) + 1) )
      {
        *v115 = -1LL;
      }
      else
      {
        v129 = MiGetPage((__int64)v159, v169, v164);
        *v115 = v129;
        if ( v129 != -1 )
        {
          LODWORD(v167) = v167 + 1;
LABEL_209:
          v120 = v168;
          goto LABEL_210;
        }
      }
      v116 = v155;
      if ( v170 )
        *((_BYTE *)v170 + 1) = 2;
      v114 = (_QWORD *)(v52 + 304);
LABEL_199:
      v122 = v179;
      v123 = v161;
      if ( v161 > v179 )
      {
        v132 = v116;
        goto LABEL_226;
      }
      v124 = v114;
      if ( v116 > 1 )
      {
        v125 = v167;
        v126 = v116 - 1;
        do
        {
          if ( *++v124 != qword_14034F708 )
          {
            MiReleaseFreshPage(48LL * *v124 - 0x58000000000LL);
            --v125;
          }
          --v126;
        }
        while ( v126 );
        v39 = v158;
        v114 = (_QWORD *)(v52 + 304);
        v47 = v163;
        v122 = v179;
        LODWORD(v167) = v125;
        v104 = v52 + 256;
      }
      v155 = 0;
      v47 &= ~2u;
      v117 = *v122;
      v163 = v47;
      v160 = v114;
      v115 = v114;
      v161 = v122;
      if ( (unsigned __int64)(v122 + 0x12090482600LL) <= 0x7F8 )
        WORD1(v117) = (unsigned int)MiReadPteShadow(v122, v117) >> 16;
      HIDWORD(v157) = 1;
      goto LABEL_209;
    }
    LODWORD(v167) = v167 + 1;
    *v115 = v119;
LABEL_210:
    v127 = 48 * *v115 - 0x58000000000LL;
    if ( v161 == v179 )
      LOBYTE(v128) = v120;
    else
      v128 = (*(unsigned __int8 *)(v52 + 190) >> 4) & 7;
    MiLockSetPfnPriority(v127, v128);
    if ( (v156 & 0x10) == 0 )
      *(_QWORD *)(v127 + 16) ^= (*(_DWORD *)(v127 + 16) ^ (WORD1(v117) << 16)) & 0x3FF0000;
    v115 = v160;
LABEL_220:
    if ( v170 )
      MiAdvanceFaultList(v170);
    ++v161;
    v130 = MiGetPteTimeStamp(v39);
    v131 = MiUpdatePageFileHighInPte(v39, v130 + 1);
    v132 = HIDWORD(v157);
    ++v115;
    v116 = v133 + 1;
    v158 = v131;
    v160 = v115;
    v39 = v131;
    v155 = v116;
    if ( v116 == HIDWORD(v157) )
      break;
    v134 = v173;
    v114 = (_QWORD *)(v52 + 304);
    v135 = v174;
    ++*v173;
    v169 = v175 | (unsigned __int16)(v135 & *v134);
  }
  v122 = v179;
  v123 = v161;
LABEL_226:
  v136 = &v123[-v132];
  Address = *(_QWORD *)(v52 + 304 + 8 * (v122 - v136));
  v137 = (v156 & 0x10) != 0;
  if ( (v156 & 0x10) != 0 )
    v138 = 0LL;
  else
    v138 = (__int64)((_QWORD)v136 << 25) >> 16;
  *(_QWORD *)v104 = 0LL;
  v139 = v132 << 12;
  *(_DWORD *)(v104 + 40) = v139;
  *(_QWORD *)(v104 + 32) = v138 & 0xFFFFFFFFFFFFF000uLL;
  *(_WORD *)(v104 + 8) = 8 * (((v139 + (unsigned __int64)(v138 & 0xFFF) + 4095) >> 12) + 6);
  *(_DWORD *)(v104 + 44) = v138 & 0xFFF;
  *(_WORD *)(v104 + 10) = 66;
  if ( (v47 & 2) != 0 )
  {
    v140 = MiReduceMdl(v104);
    if ( v140 )
    {
      v136 += v140;
      if ( !v137 )
        *(_QWORD *)(v104 + 32) += v140 << 12;
    }
    v132 = *(_DWORD *)(v104 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v104 + 10) = 16450;
  }
  v112 = *v136;
  v179 = v136;
  if ( (unsigned __int64)(v136 + 0x12090482600LL) <= 0x7F8 )
    v112 = MiReadPteShadow(v136, v112);
  v113 = v156;
  LOBYTE(v113) = v156 & 0xDF;
  v160 = (__int64 *)v112;
  LOBYTE(v165) = v156 & 0xDF;
  MiInitializeReadInProgressPfn(v166, (unsigned __int64 *)(v52 + 304), v132, v136, v52 + 32, v156 & 0xDF);
LABEL_238:
  v141 = a5;
  LOBYTE(v113) = (v113 & 0x10) != 0;
  v156 = v113;
  if ( (_BYTE)v113 )
    MiObtainProtoReference(a5, 0);
  v142 = v178;
  v143 = *v178;
  if ( (unsigned __int64)(v178 + 0x12090482600LL) <= 0x7F8 )
    v143 = MiReadPteShadow(v178, *v178);
  v144 = v170;
  *(_QWORD *)(v52 + 224) = v142;
  *(_QWORD *)(v52 + 168) = v143;
  if ( v144 )
  {
    if ( *(_BYTE *)v144 == 1 )
    {
      v145 = *(_BYTE *)(v52 + 189) | 4;
      *(_BYTE *)(v52 + 189) = v145;
      if ( (v144[10] & 0x2000) != 0 )
        *(_BYTE *)(v52 + 189) = v145 | 0x10;
    }
  }
  v146 = v176;
  v147 = (*((_DWORD *)&v176[1].SwapListEntry + 3) >> 9) & 7;
  if ( (v176->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v147 = 0;
  if ( v147 < 2 )
  {
    if ( v176 == KeGetCurrentThread() && HIDWORD(v176[1].Timer.TimerListEntry.Flink) )
      v147 = 2;
    v141 = a5;
    v112 = (__int64)v160;
    if ( v147 < 2 )
      *(_BYTE *)(v52 + 189) |= 0x40u;
  }
  if ( a4 == 1 )
    MiUnlockProtoPoolPage(v141, 0x11u);
  v148 = v177;
  v149 = v159;
  if ( (unsigned int)v167 != v177 )
    MiReturnFaultCharges((__int64)v159, v177 - (unsigned int)v167, v157);
  v150 = (unsigned __int16)v112 >> 12;
  *a7 = v52;
  if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8 )
    v112 = MiReadPteShadow(&v160, v112);
  if ( (v112 & 4) != 0 )
    v151 = (unsigned __int64)MiReverseSwizzleInvalidPte(v112, v148, v146, v150) >> 32;
  else
    LODWORD(v151) = 0;
  v152 = *(_QWORD *)&v149[4 * v150 + 2672];
  LODWORD(v158) = v151;
  if ( (_BYTE)v156 )
    *(_QWORD *)(v52 + 160) = v141;
  if ( (v47 & 1) != 0 )
  {
    *(_BYTE *)(v52 + 189) |= 0x80u;
    *(_QWORD *)(v52 + 96) = (unsigned int)v151 | ((unsigned __int64)(unsigned int)v150 << 60);
  }
  else
  {
    HIDWORD(v158) = 0;
    *(_QWORD *)(v52 + 96) = (unsigned __int64)(unsigned int)v158 << 12;
  }
  v153 = *(_QWORD *)(v152 + 64);
  *(_BYTE *)(v52 + 191) |= 0x10u;
  v154 = *(_BYTE *)(v52 + 191);
  *(_QWORD *)(v52 + 192) = v153;
  if ( *(_QWORD *)(v152 + 176)
    && (!v144 || *(_BYTE *)v144 != 1 || (v144[10] & 0x1000) == 0 || (dword_1403D00E8 & 1) != 0) )
  {
    *(_BYTE *)(v52 + 191) = v154 | 0x20;
  }
  *(_QWORD *)(v52 + 232) = v179;
  result = 3221435187LL;
  *(_QWORD *)(v52 + 240) = 48 * Address - 0x58000000000LL;
  return result;
}
