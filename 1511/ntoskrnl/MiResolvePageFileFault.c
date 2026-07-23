/*
 * XREFs of MiResolvePageFileFault @ 0x1401129C8
 * Callers:
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiComputeFaultNode @ 0x1400707F0 (MiComputeFaultNode.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiAllocateInPageSupport @ 0x1400AAD60 (MiAllocateInPageSupport.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiComputeFaultCluster @ 0x1400AD64C (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1400AD868 (MiAdvanceFaultList.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLockSetPfnPriority @ 0x1400E8410 (MiLockSetPfnPriority.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x1400F2B80 (MiFlowThroughInsertNode.c)
 *     MiInitializeReadInProgressPfn @ 0x1400FD7D0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1400FDCA8 (MiReduceMdl.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePrefetchPriority @ 0x1400FE6DC (MiSetInPagePrefetchPriority.c)
 *     MI_IS_PTE_IN_STORE_EX @ 0x140123ABC (MI_IS_PTE_IN_STORE_EX.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiResolvePageFileFault(
        unsigned __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  unsigned __int64 v10; // r12
  char v11; // r13
  __int64 v12; // rax
  int *v13; // r14
  unsigned __int64 v14; // rbx
  unsigned int v15; // esi
  int v16; // eax
  struct _KPROCESS *Process; // rdi
  int v18; // eax
  unsigned __int64 v19; // r9
  int v20; // ecx
  unsigned __int64 v21; // rdi
  int *v22; // r11
  unsigned __int64 v23; // r9
  char v24; // r10
  int *v25; // r11
  int v26; // r14d
  unsigned __int64 v27; // rsi
  __int64 v28; // r13
  char v29; // r11
  unsigned int v30; // edx
  unsigned int v31; // r10d
  unsigned int v32; // r12d
  unsigned int v33; // edx
  unsigned __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rsi
  __int64 v38; // r13
  __int64 v39; // rax
  char *v40; // r12
  __int64 v41; // r9
  char *v42; // rsi
  unsigned int v43; // edx
  unsigned int v44; // r13d
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned int v47; // eax
  _WORD *v48; // rax
  int v49; // ecx
  int v50; // esi
  unsigned int v51; // edx
  int *v52; // rsi
  __int64 Page; // rax
  char v54; // cl
  __int64 v55; // rsi
  __int64 v56; // r8
  unsigned __int64 v57; // rdx
  bool v58; // zf
  __int64 v59; // rax
  _QWORD *v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rbx
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned int v67; // esi
  __int64 v68; // rax
  unsigned __int64 v69; // rbx
  _QWORD *v70; // r8
  __int64 v71; // rax
  _QWORD *v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // r11
  unsigned int v76; // edx
  _WORD *v77; // rax
  _QWORD *v78; // rcx
  bool v79; // bl
  __int64 v80; // r8
  __int64 v81; // rdx
  int v82; // eax
  unsigned __int64 v83; // rax
  bool v84; // al
  int v85; // ecx
  __int64 v86; // rax
  int v87; // r10d
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // r11
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rax
  _BYTE *v93; // rax
  bool v94; // r10
  unsigned int v95; // eax
  char v96; // dl
  __int64 v97; // rax
  int *VmPartition; // rax
  int *v99; // rdx
  int v100; // r8d
  unsigned int v101; // ebx
  _QWORD *v102; // r9
  unsigned __int64 v103; // rcx
  _QWORD *v104; // rbx
  _QWORD *v105; // rbx
  unsigned int v106; // r12d
  __int64 v107; // rsi
  __int64 v108; // rax
  unsigned int v109; // [rsp+38h] [rbp-A1h] BYREF
  int v110; // [rsp+3Ch] [rbp-9Dh]
  unsigned int v111; // [rsp+40h] [rbp-99h]
  unsigned int v112; // [rsp+44h] [rbp-95h]
  __int64 v113; // [rsp+48h] [rbp-91h]
  __int64 v114; // [rsp+50h] [rbp-89h] BYREF
  _QWORD *v115; // [rsp+58h] [rbp-81h]
  int *v116; // [rsp+60h] [rbp-79h]
  unsigned __int64 v117; // [rsp+68h] [rbp-71h]
  unsigned int v118; // [rsp+70h] [rbp-69h]
  int v119; // [rsp+74h] [rbp-65h]
  __int64 v120; // [rsp+78h] [rbp-61h] BYREF
  int v121; // [rsp+80h] [rbp-59h]
  __int64 v122; // [rsp+88h] [rbp-51h]
  unsigned __int64 v123; // [rsp+90h] [rbp-49h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-41h]
  unsigned __int64 Address; // [rsp+A0h] [rbp-39h]
  __int64 v126; // [rsp+A8h] [rbp-31h] BYREF
  _QWORD *v127; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int64 v128; // [rsp+B8h] [rbp-21h]
  _WORD *v129; // [rsp+C0h] [rbp-19h] BYREF
  __int16 v130; // [rsp+C8h] [rbp-11h]
  unsigned __int16 v131; // [rsp+CAh] [rbp-Fh]
  _QWORD *v132; // [rsp+D0h] [rbp-9h]
  __int64 v133; // [rsp+D8h] [rbp-1h]

  v117 = a1;
  v10 = 0LL;
  v114 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v123 = 0LL;
  v11 = 2;
  if ( (BYTE4(CurrentThread[1].Queue) & 4) != 0 )
  {
    if ( a4 == 1 )
      MiUnlockProtoPoolPage(a5, 0x11u);
    return 3221225633LL;
  }
  v12 = a6;
  v13 = MiSystemPartition;
  v14 = v114;
  v128 = v114;
  v133 = a6 & 1;
  if ( (a6 & 1) != 0 )
  {
    if ( *(_BYTE *)(a6 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
    {
      v10 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
      v123 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
      goto LABEL_4;
    }
    v12 = a6;
  }
  if ( (a6 & 1) != 0 )
  {
    v93 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v93 == 1 )
    {
      v123 = (unsigned __int64)v93;
      v10 = (unsigned __int64)v93;
      if ( (v114 & 0x800) != 0 || !(unsigned int)MI_GET_PAGING_FILE_OFFSET((__int64)&v114) )
        return 0LL;
      if ( (*(_DWORD *)(v10 + 80) & 0x200) != 0 )
      {
        VmPartition = MiGetVmPartition(a3);
        if ( a4 )
        {
          v99 = MiSystemPartition;
          if ( (v14 & 0x1000000) != 0 )
            v99 = VmPartition;
          VmPartition = v99;
        }
        if ( (unsigned int)MI_IS_PTE_IN_STORE_EX(VmPartition, v14) )
        {
          if ( v100 == 1 )
            MiUnlockProtoPoolPage(a5, 0x11u);
          return 0LL;
        }
      }
      v11 = 0;
    }
  }
LABEL_4:
  v115 = 0LL;
  v119 = 0;
  v15 = 16;
  v109 = 16;
  v132 = a2;
  v16 = (int)a2;
  v112 = 1;
  LODWORD(v113) = 2;
  Process = CurrentThread->ApcState.Process;
  if ( (unsigned __int64)(a2 + 0x13000000000LL) > 0x7FFFFFFFFFLL )
  {
    v83 = MI_READ_PTE_LOCK_FREE(((v117 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v84 = MI_PROTO_FORMAT_COMBINED(v83);
    v85 = 16;
    if ( v84 )
      v85 = 48;
    v110 = v85;
    if ( (v85 & 0x20) != 0 || Process[1].Affinity.Bitmap[12] )
    {
      v15 = 1;
      v109 = 1;
    }
  }
  else
  {
    LOBYTE(v16) = v119;
    v110 = v16;
  }
  v18 = MiComputeFaultNode(a3, v117, 0LL, a6, (unsigned __int64 *)&v126);
  v19 = v126;
  v121 = v18;
  Address = v126;
  if ( (v126
     || Process == PsInitialSystemProcess
     && (unsigned __int64)a2 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
     && (unsigned __int64)a2 >= 0xFFFFF68000000000uLL
     && (Address = MiLocateAddress(v117), (v19 = Address) != 0))
    && (v86 = *(unsigned int *)(v19 + 52),
        LODWORD(v86) = v86 & 0x7FFFFFFF,
        v87 = v110,
        (v86 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) == 0x7FFFFFFFELL) )
  {
    LOBYTE(v87) = v110 | 0x80;
    v20 = 7;
    v110 = v87;
    LODWORD(v113) = 7;
  }
  else
  {
    v20 = v113;
  }
  v126 = (v14 >> 11) & 1;
  if ( v126 )
  {
    v109 = 1;
    LODWORD(v113) = v20 | 1;
    v15 = 1;
    v120 = 48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v21 = *(_QWORD *)(v120 + 16);
    v22 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v120 + 40)) >> 8) & 0x3FF);
    v116 = v22;
  }
  else
  {
    v21 = v14;
    v120 = 0LL;
    v22 = MiGetVmPartition(a3);
    v116 = v22;
    if ( a4 )
    {
      if ( (v14 & 0x1000000) != 0 )
        v13 = v22;
      v22 = v13;
      v116 = v13;
    }
  }
  v26 = MI_IS_PTE_IN_STORE_EX(v22, v21) & 1;
  if ( v15 != 1 )
  {
    if ( dword_1402FF214 )
    {
      v109 = 1;
      --dword_1402FF214;
      v15 = 1;
    }
    else if ( v10 )
    {
      v94 = (v24 & 0x10) != 0;
      if ( v94 && !v23 )
      {
        v23 = MiLocateAddress(v117);
        Address = v23;
      }
      v95 = MiComputeFaultCluster((__int64)v25, (_QWORD *)v10, v23 & -(__int64)v94, v26 & 1);
      v25 = v116;
      v15 = v95;
      v109 = v95;
    }
    else if ( v117 > (unsigned __int64)MmHighestUserAddress )
    {
      v109 = 1;
      v15 = 1;
      if ( (v24 & 0x10) == 0 && v117 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      {
        v26 |= 4u;
        v109 = 16;
        v15 = 16;
      }
    }
  }
  v118 = v26 & 1;
  if ( (v26 & 1) != 0 )
  {
    if ( v15 > v25[271] )
      v15 = v25[271];
    v109 = v15;
  }
  v27 = (unsigned __int64)a2;
  v122 = (__int64)MiAllocateInPageSupport(
                    (unsigned __int64)a2,
                    v11,
                    &v109,
                    (__int64 *)((unsigned __int64)&a5 & -(__int64)(a5 != 0)));
  v28 = v122;
  if ( !v122 )
  {
    v101 = -1073741670;
LABEL_203:
    if ( v10 )
      *(_BYTE *)(v10 + 1) = (v101 == -1073741670) + 1;
    return v101;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v14 )
    goto LABEL_200;
  if ( !v126 )
  {
    v29 = 16;
    goto LABEL_23;
  }
  if ( (*(_BYTE *)(v120 + 34) & 0x28) == 0x28
    || (*(_BYTE *)(v120 + 34) & 0x20) == 0
    || v21 != *(_QWORD *)(v120 + 16)
    || (v29 = 16, (*(_BYTE *)(*(_QWORD *)v120 + 157LL) & 0x10) != 0) )
  {
LABEL_200:
    v101 = -1073740748;
    if ( a4 == 1 )
      MiUnlockProtoPoolPage(a5, 0x11u);
    MiFreeInPageSupportBlock((char *)v28);
    goto LABEL_203;
  }
LABEL_23:
  if ( v10 && *(_BYTE *)v10 == 1 )
    MiSetInPagePrefetchPriority(v10, v28);
  v30 = v109;
  if ( v109 > 1 && *((_QWORD *)v116 + 736) > 0x140uLL )
  {
    v31 = ((unsigned int)a2 >> 3) & 0x1FF;
    v32 = 512 - v31 - 1;
    v111 = v31;
    if ( ((unsigned __int8)v29 & (unsigned __int8)v110) == 0 )
      goto LABEL_27;
    v88 = Address;
    v89 = v117;
    if ( (Address || (v88 = MiLocateAddress(v117)) != 0) && (*(_DWORD *)(v88 + 48) & 0x8000) == 0 )
    {
      MiGetProtoPteAddress(v88, v89 >> 12, 0, (__int64 *)&v127);
      if ( v127 && (*((_BYTE *)v127 + 34) & 2) == 0 )
      {
        v90 = v127[1];
        v31 = v111;
        if ( (unsigned int)((v90 + 8LL * *((unsigned int *)v127 + 11) - (__int64)a2) >> 3) - 1 < v32 )
          v32 = ((v90 + 8LL * *((unsigned int *)v127 + 11) - (__int64)a2) >> 3) - 1;
        v91 = (__int64)a2 - v90;
        v30 = v109;
        v92 = v91 >> 3;
        if ( (unsigned int)v92 < v111 )
        {
          v31 = v92;
          v111 = v92;
        }
LABEL_27:
        if ( v123 || (v26 & 4) != 0 )
        {
          v31 = 0;
          v111 = 0;
          if ( !v32 )
            v30 = 1;
        }
        if ( v30 <= 1 )
        {
          v10 = v123;
        }
        else
        {
          v33 = v30 - 1;
          v120 = (__int64)a2;
          v109 = v33;
          if ( v32 > v33 )
            v32 = v33;
          v127 = a2 + 1;
          v34 = HIDWORD(v14);
          v35 = (__int64)a2;
          v115 = (_QWORD *)HIDWORD(v14);
          if ( HIDWORD(v14) + v32 >= 0xFFFFFFFE )
            v32 = -3 - HIDWORD(v14);
          if ( v118 || v123 )
            v26 |= 8u;
          v36 = v14 & 0xFFFFFFFFFF002C1FuLL;
          v37 = v14 & 0xFFFFFFFFFF002C1FuLL;
          if ( v32 )
          {
            v38 = (__int64)v127;
            while ( 1 )
            {
              v37 = (unsigned int)v37 ^ ((v37 & 0xFFFFFFFF00000000uLL) + 0x100000000LL);
              v39 = MI_READ_PTE_LOCK_FREE(v38);
              if ( (v39 & 0x3E0) != 0 && (v39 & 0xFFFFFFFFFF002C1FuLL) == v37 )
              {
                v120 = v38;
              }
              else if ( (v26 & 8) != 0 )
              {
LABEL_44:
                v14 = v128;
                v28 = v122;
                v33 = v109;
                v34 = (unsigned __int64)v115;
                v35 = v120;
                v31 = v111;
                break;
              }
              v38 += 8LL;
              if ( !--v32 )
                goto LABEL_44;
            }
          }
          v40 = (char *)a2;
          v41 = (v35 - (__int64)a2) >> 3;
          v42 = (char *)a2;
          v43 = v33 - v41;
          if ( v31 > v43 )
            v31 = v43;
          v112 = v41 + 1;
          v111 = v31;
          if ( v31 > v34 - 1 )
          {
            v31 = v34 - 1;
            v111 = v34 - 1;
          }
          if ( v31 )
          {
            v44 = v111;
            do
            {
              v42 -= 8;
              v36 = (unsigned int)v36 | ((HIDWORD(v36) - 1) << 32);
              v45 = MI_READ_PTE_LOCK_FREE(v42);
              if ( (v45 & 0x3E0) != 0 && (v45 & 0xFFFFFFFFFF002C1FuLL) == v36 )
              {
                v40 = v42;
              }
              else if ( (v26 & 8) != 0 )
              {
                break;
              }
              --v44;
            }
            while ( v44 );
            v28 = v122;
          }
          v27 = (unsigned __int64)a2;
          v46 = (char *)a2 - v40;
          v10 = v123;
          v46 >>= 3;
          v112 += v46;
          v21 = v14 - ((unsigned __int64)(unsigned int)v46 << 32);
          v115 = &a2[-(unsigned int)v46];
        }
        goto LABEL_56;
      }
      v31 = v111;
    }
    v30 = 1;
    goto LABEL_27;
  }
LABEL_56:
  v47 = MiObtainFaultCharges(v116, v112, v113);
  v128 = v47;
  if ( v112 > (unsigned __int64)v47 )
  {
    v102 = v115;
    v103 = v112 - (unsigned __int64)v47;
    if ( (unsigned __int64)&v115[v103] <= v27 )
    {
      v115 += v103;
      v21 = (unsigned int)v21 ^ ((v21 & 0xFFFFFFFF00000000uLL) + (v103 << 32));
    }
    else
    {
      v115 = (_QWORD *)v27;
      v21 += (__int64)(v27 - (_QWORD)v102) >> 3 << 32;
    }
    v112 = v47;
  }
  MI_INITIALIZE_COLOR_BASE(a3, v121, (__int64)&v129);
  v48 = v129;
  v49 = v131;
  v118 = 0;
  ++*v129;
  v50 = v49 | (unsigned __int16)(v130 & *v48);
  v121 = v50;
  if ( v133 && *(_BYTE *)(a6 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || v117 + 0x80000000000LL <= 0x7FFFFFFFFFLL
    || PsNtosImageBase
    && (v117 >= (unsigned __int64)PsNtosImageBase && v117 < PsNtosImageEnd
     || v117 >= (unsigned __int64)PsHalImageBase && v117 < PsHalImageEnd) )
  {
    v118 = 8;
  }
  if ( v10 && *(_BYTE *)v10 == 1 && !MiGetAvailablePagesBelowPriority(v116, ((*(_DWORD *)(v10 + 80) >> 3) & 7u) + 1) )
  {
    v52 = v116;
    goto LABEL_217;
  }
  v51 = v50;
  v52 = v116;
  Page = MiGetPage((__int64)v116, v51, v118);
  v120 = Page;
  if ( Page == -1 )
  {
LABEL_217:
    if ( a4 == 1 )
      MiUnlockProtoPoolPage(a5, 0x11u);
    MiFreeInPageSupportBlock((char *)v28);
    if ( v10 )
      *(_BYTE *)(v10 + 1) = 2;
    MiReturnFaultCharges((__int64)v52, v112, v113);
    return 3221225495LL;
  }
  v54 = *(_BYTE *)(v28 + 190);
  v55 = 48 * Page - 0x58000000000LL;
  LODWORD(Address) = v54 & 7;
  if ( v112 == 1 )
  {
    v111 = 1;
    LOBYTE(v119) = v110 & 0xF8 | v54 & 7 | 8;
    LOBYTE(v21) = v119;
    MiInitializeReadInProgressPfn(v117, (unsigned __int64 *)&v120, 1, a2, v28 + 32, v119);
    v57 = v117;
    *(_QWORD *)(v28 + 256) = 0LL;
    v57 &= 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v28 + 296) = 4096;
    *(_WORD *)(v28 + 264) = 8 * ((((v57 & 0xFFF) + 0x1FFF) >> 12) + 6);
    v58 = v126 == 0;
    *(_QWORD *)(v28 + 288) = v57 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v28 + 266) = 16450;
    v59 = v120;
    *(_DWORD *)(v28 + 300) = v57 & 0xFFF;
    v122 = v59;
    *(_QWORD *)(v28 + 304) = v59;
    if ( !v58 )
    {
      v104 = (_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      MiFlowThroughInsertNode(v28, v104);
      v14 = v104[2];
      v114 = v14;
    }
    if ( (v21 & 0x10) == 0 )
      *(_QWORD *)(v55 + 16) ^= (*(_DWORD *)(v55 + 16) ^ ((unsigned __int16)(v14 >> 14) << 14)) & 0xFFC000;
    v60 = a2;
    goto LABEL_70;
  }
  v109 = 0;
  v111 = 0;
  v67 = v121;
  v114 = v28 + 304;
  while ( 1 )
  {
    v68 = MI_READ_PTE_LOCK_FREE(v115);
    v69 = v68;
    if ( (v68 & 1) != 0
      || (v68 & 0x400) != 0
      || (v68 & 0x800) != 0
      || ((v68 ^ v21) & 0xFFFFFFFF00000000uLL) != 0
      || (v68 & 0x2000) == 0
      || (((unsigned __int8)v68 ^ (unsigned __int8)v21) & 0x1E) != 0
      || (unsigned int)MI_IS_PTE_IN_STORE_EX(v116, v68) != (v26 & 1) )
    {
      break;
    }
    if ( v109 )
    {
      if ( v10 && *(_BYTE *)v10 == 1 && !MiGetAvailablePagesBelowPriority(v70, ((*(_DWORD *)(v10 + 80) >> 3) & 7u) + 1) )
      {
        *(_QWORD *)v114 = -1LL;
LABEL_223:
        if ( v10 )
          *(_BYTE *)(v10 + 1) = 2;
        goto LABEL_225;
      }
      v71 = MiGetPage((__int64)v116, v67, v118);
      v72 = (_QWORD *)v114;
      *(_QWORD *)v114 = v71;
      if ( v71 == -1 )
        goto LABEL_223;
    }
    else
    {
      v72 = (_QWORD *)v114;
      *(_QWORD *)v114 = v120;
    }
    ++v111;
LABEL_102:
    v73 = 48LL * *v72 - 0x58000000000LL;
    if ( v115 == a2 )
      v74 = (unsigned int)Address;
    else
      v74 = (*(unsigned __int8 *)(v28 + 190) >> 4) & 7;
    MiLockSetPfnPriority(v73, v74, (__int64)v70);
    v75 = v114;
    if ( (v110 & 0x10) == 0 )
      *(_QWORD *)(v73 + 16) ^= (*(_DWORD *)(v73 + 16) ^ ((unsigned __int16)(v69 >> 14) << 14)) & 0xFFC000;
LABEL_106:
    if ( v10 )
      MiAdvanceFaultList((_QWORD *)v10);
    ++v115;
    v76 = v112;
    v114 = v75 + 8;
    v21 = (unsigned int)v21 ^ ((v21 & 0xFFFFFFFF00000000uLL) + 0x100000000LL);
    if ( ++v109 == v112 )
    {
      v78 = a2;
      goto LABEL_113;
    }
    v77 = v129;
    ++*v129;
    v67 = v131 | (unsigned __int16)(v130 & *v77);
  }
  if ( (v26 & 8) == 0 )
  {
    v75 = v114;
    v26 |= 2u;
    *(_QWORD *)v114 = qword_1402FF248;
    goto LABEL_106;
  }
LABEL_225:
  v78 = a2;
  if ( v115 <= a2 )
  {
    v105 = (_QWORD *)(v28 + 304);
    if ( v109 > 1 )
    {
      v106 = v111;
      v107 = v109 - 1;
      do
      {
        if ( *++v105 != qword_1402FF248 )
        {
          MiReleaseFreshPage(48LL * *v105 - 0x58000000000LL);
          --v106;
        }
        --v107;
      }
      while ( v107 );
      v28 = v122;
      v78 = a2;
      v111 = v106;
      v10 = v123;
    }
    v109 = 0;
    v26 &= ~2u;
    v114 = v28 + 304;
    v115 = v78;
    v108 = MI_READ_PTE_LOCK_FREE(v78);
    v72 = (_QWORD *)v114;
    v69 = v108;
    v112 = 1;
    goto LABEL_102;
  }
  v76 = v109;
  v112 = v109;
LABEL_113:
  v21 = (unsigned __int64)&v115[-v76];
  v122 = *(_QWORD *)(v28 + 8 * ((__int64)((__int64)v78 - v21) >> 3) + 304);
  v79 = (v110 & 0x10) != 0;
  if ( (v110 & 0x10) != 0 )
    v80 = 0LL;
  else
    v80 = (__int64)(v21 << 25) >> 16;
  v81 = v76 << 12;
  *(_QWORD *)(v28 + 256) = 0LL;
  *(_DWORD *)(v28 + 296) = v81;
  *(_QWORD *)(v28 + 288) = v80 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v28 + 300) = v80 & 0xFFF;
  *(_WORD *)(v28 + 264) = 8 * (((v81 + (unsigned __int64)(v80 & 0xFFF) + 4095) >> 12) + 6);
  *(_WORD *)(v28 + 266) = 66;
  if ( (v26 & 2) != 0 )
  {
    v97 = MiReduceMdl(v28 + 256);
    if ( v97 )
    {
      v21 += 8 * v97;
      if ( !v79 )
        *(_QWORD *)(v28 + 288) += v97 << 12;
    }
    v112 = *(_DWORD *)(v28 + 296) >> 12;
  }
  else
  {
    *(_WORD *)(v28 + 266) = 16450;
  }
  v60 = (_QWORD *)v21;
  v14 = MI_READ_PTE_LOCK_FREE(v21);
  v114 = v14;
  v82 = v110;
  LOBYTE(v82) = v110 & 0xDF;
  v110 = v82;
  LOBYTE(v119) = v82;
  MiInitializeReadInProgressPfn(v117, (unsigned __int64 *)(v28 + 304), v112, (_QWORD *)v21, v28 + 32, v82);
  LODWORD(v21) = v110;
LABEL_70:
  LOBYTE(v21) = (unsigned __int8)v21 >> 4;
  v110 = v21;
  v58 = (v21 & 1) == 0;
  LOBYTE(v110) = v21 & 1;
  v61 = a5;
  if ( !v58 )
    MiObtainProtoReference(a5, 0LL, v56);
  *(_QWORD *)(v28 + 168) = MI_READ_PTE_LOCK_FREE(v132);
  *(_QWORD *)(v28 + 224) = v132;
  if ( v10 )
  {
    if ( *(_BYTE *)v10 == 1 )
    {
      v96 = *(_BYTE *)(v28 + 189) | 4;
      *(_BYTE *)(v28 + 189) = v96;
      if ( (*(_DWORD *)(v10 + 80) & 0x2000) != 0 )
        *(_BYTE *)(v28 + 189) = v96 | 0x10;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_BYTE *)(v28 + 189) |= 0x40u;
  if ( a4 == 1 )
    MiUnlockProtoPoolPage(v61, 0x11u);
  if ( v111 != v128 )
    MiReturnFaultCharges((__int64)v116, v128 - v111, v113);
  v62 = (v14 >> 1) & 0xF;
  *a7 = v28;
  v63 = MI_GET_PAGING_FILE_OFFSET((__int64)&v114);
  LODWORD(CurrentThread) = v63;
  v64 = *(_QWORD *)&v116[2 * (unsigned int)v62 + 1432];
  if ( (_BYTE)v110 )
    *(_QWORD *)(v28 + 160) = v61;
  if ( (v26 & 1) != 0 )
  {
    *(_BYTE *)(v28 + 189) |= 0x80u;
    *(_QWORD *)(v28 + 96) = v63 | ((unsigned __int64)(unsigned int)v62 << 60);
  }
  else
  {
    HIDWORD(CurrentThread) = 0;
    *(_QWORD *)(v28 + 96) = (unsigned __int64)(unsigned int)CurrentThread << 12;
  }
  *(_QWORD *)(v28 + 192) = *(_QWORD *)(v64 + 56);
  *(_BYTE *)(v28 + 191) |= 0x10u;
  if ( *(_QWORD *)(v64 + 216)
    && (!v10 || *(_BYTE *)v10 != 1 || (*(_DWORD *)(v10 + 80) & 0x1000) == 0 || (dword_1403810F8 & 1) != 0) )
  {
    *(_BYTE *)(v28 + 191) |= 0x20u;
  }
  v65 = v122;
  *(_QWORD *)(v28 + 232) = v60;
  *(_QWORD *)(v28 + 240) = 48 * v65 - 0x58000000000LL;
  return 3221435187LL;
}
