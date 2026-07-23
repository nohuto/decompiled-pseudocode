/*
 * XREFs of MiResolveDemandZeroFault @ 0x140052430
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiProtoFault @ 0x1400EA824 (MiProtoFault.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiCheckVirtualAddress @ 0x14001D4E0 (MiCheckVirtualAddress.c)
 *     MiUpdatePageTableUseCount @ 0x14001EC38 (MiUpdatePageTableUseCount.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiSetPfnTbFlushStamp @ 0x140071D20 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiAdvanceFaultList @ 0x1400AD868 (MiAdvanceFaultList.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiComputeZeroClusterMaximum @ 0x1400E71AC (MiComputeZeroClusterMaximum.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiWaitForForkToComplete @ 0x14012FC18 (MiWaitForForkToComplete.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeCheckForZeroPage @ 0x1401573D0 (KeCheckForZeroPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiPageNotZero @ 0x1401DFFEC (MiPageNotZero.c)
 *     EtwTraceShouldYieldProcessor @ 0x14020E308 (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        int a7)
{
  unsigned __int8 *v7; // rbp
  unsigned __int64 v8; // r15
  unsigned int v9; // esi
  int v10; // r10d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rbx
  int v13; // r12d
  struct _KPROCESS *Process; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r8
  unsigned __int64 Address; // rax
  unsigned int v21; // r12d
  __int64 *v22; // rax
  char IsAttachedProcess; // al
  struct _KTHREAD *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 result; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // eax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  char v38; // r9
  int v39; // r13d
  char v40; // di
  int *v41; // r11
  unsigned __int8 v42; // di
  unsigned __int16 v43; // ax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r12
  unsigned __int16 v46; // dx
  unsigned int *p_PageColor; // r8
  unsigned int v48; // ecx
  __int64 v49; // rax
  unsigned int v50; // edi
  __int64 v51; // r13
  unsigned __int64 v52; // r10
  __int64 v53; // r15
  int v54; // r10d
  int v55; // eax
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 Page; // rax
  __int64 DpcTimeCount; // r9
  __int64 v61; // rbx
  signed __int64 v62; // rdx
  signed __int64 v63; // rdi
  signed __int64 v64; // rcx
  signed __int64 v65; // rdx
  __int64 v66; // r13
  signed __int64 v67; // rdi
  signed __int64 v68; // rcx
  unsigned __int64 v69; // r11
  struct _KPRCB *v70; // rcx
  unsigned int DpcWatchdogCount; // r10d
  volatile int DpcRequestSummary; // edi
  int v73; // r8d
  unsigned int v74; // edi
  char v75; // cl
  unsigned int v76; // eax
  _KTHREAD *NextThread; // rax
  __int64 v78; // rbx
  unsigned __int64 v79; // r12
  __int64 v80; // r13
  volatile signed __int64 *v81; // r12
  __int64 v82; // rax
  volatile signed __int64 v83; // rdx
  signed __int64 v84; // rdi
  signed __int64 v85; // rcx
  __int64 v86; // rdi
  int v87; // ecx
  __int64 v88; // rsi
  __int64 v89; // rbx
  unsigned __int64 v90; // rbx
  void *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rax
  int v94; // edx
  int v95; // eax
  unsigned int v96; // r13d
  int v97; // ecx
  unsigned __int64 v98; // rax
  __int64 v99; // rdi
  struct _KTHREAD *v100; // rax
  unsigned int Queue_high; // ebx
  unsigned int v102; // ebx
  char v103; // al
  int v104; // ecx
  __int64 v105; // rdx
  __int64 v106; // r13
  int v107; // edx
  char v108; // cl
  __int64 v109; // rsi
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rdi
  __int64 v112; // rsi
  __int64 v113; // rbx
  unsigned __int64 PteAddress; // rax
  unsigned __int8 v115; // di
  int v116; // eax
  bool v117; // cc
  int v118; // eax
  __int64 Wsle; // rax
  __int64 v120; // rdi
  __int64 v121; // rcx
  int v122; // eax
  unsigned __int64 v123; // rcx
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // rdi
  __int64 v126; // rcx
  __int64 v127; // rax
  unsigned __int64 v128; // rdi
  int v129; // eax
  int *v130; // rdx
  unsigned __int16 v131; // cx
  int *v132; // rbx
  unsigned int v133; // edi
  __int64 v134; // rax
  __int64 v135; // r8
  __int64 v136; // r13
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rdx
  _QWORD *v140; // rax
  unsigned __int64 v141; // rax
  __int64 v142; // r15
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rcx
  __int64 *v145; // rbx
  __int64 v146; // r14
  unsigned __int64 v147; // r12
  unsigned __int64 v148; // rax
  __int64 ProtoPteAddress; // rax
  __int64 v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rdi
  unsigned __int64 v153; // rdx
  __int64 v154; // rax
  signed __int64 v155; // rdx
  __int64 v156; // r9
  struct _KPRCB *v157; // r8
  unsigned __int16 v158; // r12
  unsigned __int16 v159; // di
  unsigned int *v160; // r8
  int v161; // ecx
  __int64 v162; // r13
  __int64 v163; // r15
  unsigned __int64 v164; // r10
  int v165; // ecx
  unsigned __int64 v166; // r12
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // r9
  __int64 v170; // rbx
  int v171; // edx
  signed __int64 v172; // rdx
  signed __int64 v173; // rdi
  signed __int64 v174; // rcx
  __int64 v175; // r15
  signed __int64 v176; // rdi
  signed __int64 v177; // rcx
  struct _KPRCB *v178; // rcx
  unsigned int v179; // r10d
  volatile int v180; // edi
  int v181; // r8d
  unsigned int v182; // edi
  char v183; // cl
  unsigned int v184; // eax
  _KTHREAD *v185; // rax
  unsigned int v186; // eax
  unsigned __int64 v187; // rsi
  volatile signed __int32 *v188; // r12
  __int64 v189; // rax
  __int64 v190; // r15
  unsigned __int64 v191; // rbx
  ULONG_PTR v192; // rdi
  int v193; // ecx
  unsigned int v194; // edi
  bool v195; // zf
  __int64 v196; // rax
  int v197; // r8d
  int v198; // edx
  __int64 v199; // rax
  __int64 v200; // r9
  __int64 v201; // r15
  struct _KTHREAD *v202; // rax
  unsigned int v203; // edx
  _KPROCESS *v204; // rax
  unsigned int v205; // edx
  int v206; // eax
  int v207; // ecx
  __int64 v208; // rdi
  __int64 v209; // rdx
  unsigned __int64 v210; // rax
  char v211; // cl
  int v212; // eax
  __int64 v213; // rbx
  unsigned __int64 v214; // rdx
  unsigned __int64 ValidKernelPte; // rdi
  int v216; // eax
  unsigned __int64 v217; // rcx
  bool v218; // cf
  __int64 v219; // r15
  __int16 v220; // di
  char v221; // r8
  __int16 v222; // di
  __int64 v223; // rcx
  __int64 v224; // rax
  int v225; // ebx
  unsigned __int64 v226; // rdi
  unsigned __int64 v227; // r8
  int v228; // edx
  unsigned __int16 v229; // cx
  int *v230; // rdi
  struct _KPRCB *v231; // rdi
  unsigned __int64 v232; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v234; // eax
  __int64 v235; // rdx
  unsigned int v236; // r12d
  unsigned __int64 v237; // rdi
  unsigned __int64 v238; // rbx
  unsigned __int64 v239; // r13
  __int64 v240; // rax
  int v241; // eax
  __int64 v242; // rax
  signed __int32 v243[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v244; // [rsp+30h] [rbp-30h]
  _BYTE v245[4]; // [rsp+60h] [rbp+0h] BYREF
  __int64 v248; // [rsp+190h] [rbp+130h]
  unsigned __int64 v249; // [rsp+198h] [rbp+138h]

  v249 = a4;
  v248 = a3;
  v7 = (unsigned __int8 *)((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v7 + 6) = 1LL;
  *((_DWORD *)v7 + 2) = 0;
  *((_DWORD *)v7 + 1) = 0;
  *((_DWORD *)v7 + 8) = 8;
  *((_QWORD *)v7 + 12) = a3 & 1;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v9 = 4;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 4;
  }
  else if ( (a3 & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v9 = 8;
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 8;
    }
    else if ( (a3 & 1) != 0 )
    {
      if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        v9 = 32;
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9;
    }
  }
  if ( (v9 & 0x2C) != 0 )
  {
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = a3 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v9 & 8) != 0 )
    {
      if ( (*(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
        return 0LL;
      v9 |= 0x10u;
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9;
    }
  }
  else
  {
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
  v13 = 0;
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = Process;
  if ( (a3 & 1) != 0 )
  {
    v15 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v13 = *(unsigned __int8 *)(v15 + 40);
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v13;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = a5;
  v17 = 0xFFFFF58010804000uLL;
  v18 = 0x98000000000LL;
  v19 = 0x7FFFFFFFFFLL;
  if ( *(_QWORD *)(a5 + 184) == 0xFFFFF58010804000uLL )
  {
    if ( a2 + 0x98000000000LL > 0x7FFFFFFFFFLL )
    {
      if ( !v15 && MEMORY[0xFFFFF580108042A8] != 1 )
      {
LABEL_32:
        Process = *(struct _KPROCESS **)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
        goto LABEL_33;
      }
      Address = MiLocateAddress(a2);
      if ( Address )
      {
        v16 = *(unsigned int *)(Address + 48);
        v12 = Address;
        v21 = *(_DWORD *)(Address + 48);
        *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = Address;
        v13 = (v21 >> 8) & 0x3F;
        *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v13;
        if ( !v13 && (v16 & 0x8000) == 0 )
        {
          v22 = *(__int64 **)(Address + 72);
          v16 = *v22;
          v13 = (*(_DWORD *)(*v22 + 56) >> 20) & 0x3F;
          *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v13;
        }
      }
    }
    if ( v15 )
    {
      if ( !v13 )
      {
        IsAttachedProcess = KeIsAttachedProcess(v16, v17, v19);
        v10 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        v18 = 0x98000000000LL;
        if ( IsAttachedProcess )
        {
          v24 = KeGetCurrentThread();
          v12 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
          v13 = v24->ApcState.Process->IdealNode[v24->Affinity.Group] + 1;
          *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v13;
        }
      }
    }
    goto LABEL_32;
  }
LABEL_33:
  if ( *(_QWORD *)(a5 + 184) == 0xFFFFF58010804000uLL )
  {
    v9 |= 1u;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9;
  }
  if ( v12 )
    goto LABEL_40;
  if ( Process == PsInitialSystemProcess )
  {
    if ( v8 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - v18
      || v8 < 0xFFFFF68000000000uLL
      || (v25 = MiLocateAddress(a2),
          *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = v25,
          (v12 = v25) == 0) )
    {
LABEL_43:
      Process = *(struct _KPROCESS **)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
      goto LABEL_44;
    }
LABEL_40:
    v26 = *(unsigned int *)(v12 + 52);
    LODWORD(v26) = v26 & 0x7FFFFFFF;
    if ( (v26 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 31)) == 0x7FFFFFFFELL )
      v10 = 64;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v10;
    goto LABEL_43;
  }
LABEL_44:
  if ( !a7 )
  {
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) = v9 & 1;
    if ( (v9 & 1) != 0 && Process[1].Affinity.Bitmap[10] && (unsigned int)MiWaitForForkToComplete(Process, a6) == 1 )
      return 3221226548LL;
    v28 = MI_READ_PTE_LOCK_FREE(v8);
    v30 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
    v31 = (v28 >> 5) & 0x1F;
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v28;
    if ( v30 && *(_BYTE *)(v248 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      LODWORD(v31) = 4;
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 4;
    }
    else
    {
      if ( (v28 & 0x400) != 0 )
        LODWORD(v31) = 4;
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v31;
    }
    v32 = (v9 >> 4) & 1;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v32;
    if ( v32 )
    {
      if ( (unsigned int)v31 >> 3 != 1 && ((unsigned int)v31 >> 3 != 3 || (v31 & 7) == 0) )
      {
        MiAdvanceFaultList(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78));
        return 0LL;
      }
      v32 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    }
    if ( v12 && ((v9 & 4) != 0 || v32) )
    {
      v33 = MiComputeZeroClusterMaximum(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78), v12, v29);
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 1LL;
      v34 = v33;
      if ( v33 > 1 )
      {
        v35 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
        v36 = v249 + 8;
        do
        {
          v37 = MI_READ_PTE_LOCK_FREE(v36);
          if ( (v37 & 1) != 0 )
            break;
          if ( (v37 & 0x400) != 0 )
            break;
          if ( (v37 & 0x800) != 0 )
            break;
          if ( (v37 & 0x2000) != 0 )
            break;
          if ( (_DWORD)v31 != ((v37 >> 5) & 0x1F) )
            break;
          ++v35;
          v36 += 8LL;
        }
        while ( v35 < v34 );
        *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v35;
      }
      v30 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
    }
    if ( *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C)
      || (*(_BYTE *)(a5 + 216) & 7) == 1
      || a2 + 0x80000000000LL <= 0x7FFFFFFFFFLL
      || PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      if ( (unsigned int)v31 >> 3 == 3 && (v31 & 7) != 0 )
      {
        v38 = 66;
        *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 578;
      }
      else
      {
        v39 = 194;
        if ( (unsigned int)v31 >> 3 == 1 )
          v39 = 322;
        *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v39;
        v38 = v39;
      }
    }
    else if ( v30 && *(_BYTE *)(v248 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v38 = 8;
    }
    else
    {
      v38 = 0;
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0;
    }
    v40 = *(_BYTE *)(a5 + 216);
    v41 = &MiSystemPartition;
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = &MiSystemPartition;
    v42 = v40 & 7;
    if ( !v42 )
    {
      v43 = *(_WORD *)(a5 + 180);
      if ( v43 != 1023 )
        v41 = *(int **)(qword_1402FEC28 + 8LL * v43);
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v41;
    }
    if ( v13 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      NodeShiftedColor = ((_WORD)v13 - 1) << byte_1402FE6D9;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
      NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    }
    v46 = (1 << byte_1402FE6E8) - 1;
    if ( v42 >= 2u )
      p_PageColor = &CurrentPrcb->PageColor;
    else
      p_PageColor = (unsigned int *)(a5 + 192);
    v48 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = p_PageColor;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v48 >> 3;
    if ( v48 >> 3 == 3 && (v48 & 7) != 0 )
      v49 = 2LL;
    else
      v49 = v48 >> 3 != 1;
    v50 = MiPlatformCacheAttributes[v49];
    v51 = 0xFFFFFFFFFLL;
    v52 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    v53 = 0LL;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v50;
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = 0LL;
    if ( !v52 )
      goto LABEL_158;
    v54 = NodeShiftedColor;
    v55 = v38 & 2;
    LOWORD(v56) = v46;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = v55;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v46;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = NodeShiftedColor;
    while ( 1 )
    {
      v57 = v54 | (unsigned int)(unsigned __int16)(v56 & ++*(_WORD *)p_PageColor);
      if ( v55 )
        v58 = 2LL;
      else
        v58 = 0LL;
      Page = MiGetPage(v41, v57, v58);
      v61 = Page;
      if ( Page == -1 )
      {
        v52 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90);
        *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v52;
LABEL_155:
        if ( *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) )
        {
          MiChangePageAttributeBatch(
            *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58),
            v50,
            0LL,
            DpcTimeCount);
          v52 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
        }
        v48 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
LABEL_158:
        if ( v53 )
        {
          *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
          v78 = 0LL;
          result = 273LL;
          if ( (v9 & 0x20) != 0 )
            v78 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78);
          *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v78;
          *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 273;
          if ( !v52 )
            return result;
          v79 = v249;
          v80 = v48;
          *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v48;
          while ( 2 )
          {
            *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = MI_READ_PTE_LOCK_FREE(v79);
            v81 = (volatile signed __int64 *)(v53 + 24);
            v82 = *(_QWORD *)(v53 + 24) & 0xFFFFFFFFFLL;
            *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v53;
            if ( v82 == 0xFFFFFFFFFLL )
              v53 = 0LL;
            else
              v53 = 48 * v82 - 0x58000000000LL;
            v83 = *v81;
            v84 = _InterlockedCompareExchange64(v81, *v81 & 0xFFFFFFF000000000uLL, *v81);
            if ( v83 != v84 )
            {
              do
              {
                v85 = v84;
                v84 = _InterlockedCompareExchange64(v81, v84 & 0xFFFFFFF000000000uLL, v84);
              }
              while ( v85 != v84 );
            }
            v86 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
            v87 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) | 0x10;
            *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v87;
            v88 = (v86 + 0x58000000000LL) / 48;
            if ( !*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60)
              || *(_BYTE *)(v248 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
            {
              v89 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              if ( (v89 & 0x400) != 0 )
              {
                *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = v89 >> 16;
                if ( v89 >> 16 )
                {
                  MiLockPageAtDpcInline(v86);
                  *(_QWORD *)(v86 + 40) = *(_QWORD *)(v86 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x100000000000000LL;
                  _InterlockedAnd64(v81, 0x7FFFFFFFFFFFFFFFuLL);
                  v90 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                }
                else
                {
                  v90 = v89 & 0xFFFFFFFFFFFFFBFFuLL;
                }
                v91 = (void *)MiMapPageInHyperSpaceWorker((v86 + 0x58000000000LL) / 48, 0LL, 0x80000000LL);
                memset64(v91, v90 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
                LOBYTE(v92) = 17;
                MiUnmapPageInHyperSpaceWorker(v91, v92, 0x80000000LL);
                v86 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
                v87 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) | 8;
                *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v87;
                *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 128LL;
              }
            }
            if ( *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) )
              *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v87 | 0x20;
            v93 = MI_READ_PTE_LOCK_FREE(v249);
            v94 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
            if ( (v94 & 4) != 0 )
              v93 = 32 * v80;
            *(_QWORD *)(v86 + 16) = v93;
            if ( (v94 & 2) != 0 )
            {
              *(_QWORD *)(v86 + 40) |= 0x200000000000000uLL;
            }
            else if ( (v94 & 8) == 0 )
            {
              *(_QWORD *)(v86 + 16) = v93 & 0xFFFFFFFFFF003FFFuLL;
            }
            v95 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
            v96 = 1;
            if ( v95 != 31 )
            {
              v97 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
              if ( v97 == 3 )
              {
                if ( (v95 & 7) != 0 )
                  v96 = dword_1403812A8;
              }
              else if ( v97 == 1 )
              {
                v96 = MiPlatformCacheAttributes[0];
              }
            }
            *(_WORD *)(v86 + 32) = 1;
            if ( (v94 & 0x20) == 0 )
              *(_BYTE *)(v86 + 34) |= 0x10u;
            *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = MI_READ_PTE_LOCK_FREE(
                                                                                     ((v249 >> 9) & 0x7FFFFFFFF8LL)
                                                                                   - 0x98000000000LL);
            v98 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v7 + 176) >> 12) & 0xFFFFFFFFFLL;
            *(_QWORD *)(v86 + 40) ^= (*(_QWORD *)(v86 + 40) ^ v98) & 0xFFFFFFFFFLL;
            v99 = 48 * v98 - 0x58000000000LL;
            v100 = KeGetCurrentThread();
            Queue_high = HIDWORD(v100[1].Queue);
            if ( (Queue_high & 0x100) != 0 )
            {
              v102 = (Queue_high >> 9) & 7;
            }
            else
            {
              v102 = (*((_DWORD *)&v100[1].SwapListEntry + 3) >> 12) & 7;
              if ( (v100->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
              {
                v103 = 2;
                if ( v102 < 2 )
                  v103 = v102;
                LOBYTE(v102) = v103;
              }
            }
            v104 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
            *v7 = 17;
            *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v104 & 1;
            if ( (v104 & 1) == 0 )
            {
              if ( (v104 & 0x10) != 0 )
              {
                *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x9C) = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)v81, 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(v7 + 156);
                  while ( *v81 < 0 );
                }
              }
              else
              {
                *v7 = MiLockPageInline(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70));
              }
            }
            *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA4) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v99 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(v7 + 164);
              while ( (*(_QWORD *)(v99 + 24) & 0x8000000000000000uLL) != 0 );
            }
            *(_QWORD *)(v99 + 24) ^= (*(_QWORD *)(v99 + 24) ^ (*(_QWORD *)(v99 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( *(unsigned __int8 *)(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) + 34LL) >> 6 == v96 )
            {
              v106 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
            }
            else
            {
              v105 = v96;
              v106 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
              MiChangePageAttribute(v106, v105, 1LL);
            }
            v107 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
            *v81 = *v81 & 0xC000000000000000uLL | 1;
            *(_BYTE *)(v106 + 35) ^= (v102 ^ *(_BYTE *)(v106 + 35)) & 7;
            v108 = *(_BYTE *)(v106 + 35);
            *(_QWORD *)(v106 + 8) = v249;
            *(_BYTE *)(v106 + 34) = *(_BYTE *)(v106 + 34) & 0xF8 | 6;
            if ( (v107 & 0x40) != 0 )
              *(_BYTE *)(v106 + 35) = v108 | 0x20;
            if ( !*(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) )
            {
              _InterlockedAnd64(v81, 0x7FFFFFFFFFFFFFFFuLL);
              if ( (v107 & 0x10) == 0 )
                __writecr8(*v7);
            }
            if ( (v107 & 8) != 0 )
              *(_QWORD *)(v106 + 16) = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
            if ( *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) )
            {
              v109 = 32
                   * (*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) & 0x1FLL | ((v88 & 0xFFFFFFFFFLL) << 7) | 0x40);
              *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v109;
              *(_QWORD *)v249 = v109;
              if ( (unsigned int)MiPteInShadowRange(v249) )
                MiWritePteShadow(v249, v109);
              if ( *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) )
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50)
                                            + 920LL),
                  1uLL);
              MiLockAndDecrementShareCount(v106, 0);
              MiAdvanceFaultList(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78));
              goto LABEL_291;
            }
            v110 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( v249 <= v110 && v249 >= 0xFFFFF68000000000uLL )
            {
              v111 = MmProtectToPteMask[*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20)] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v88 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1) << 8) | 0x25;
              *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v111;
              goto LABEL_273;
            }
            v112 = v88 << 12;
            if ( (*(_BYTE *)(a5 + 216) & 7u) < 2 )
            {
              v111 = MmProtectToPteMask[*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20)] ^ (v112 ^ MmProtectToPteMask[*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20)]) & 0xFFFFFFFFF000LL | 0x21;
              *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v111;
              if ( v249 + 0x904C0000000LL <= 0x3FFFFFFF )
              {
                v111 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
                *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v111;
              }
              if ( v249 <= v110 && v249 >= 0xFFFFF68000000000uLL
                || v249 >= 0xFFFFF6FB40000000uLL
                && v249 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
                || v249 >= 0xFFFFF6FB7DA00000uLL
                && v249 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
                || v249 >= 0xFFFFF6FB7DBED000uLL
                && v249 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
              {
                v111 |= 4uLL;
                *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v111;
              }
              if ( v249 >= MiGetPteAddress(0xFFFF800000000000uLL) )
              {
                if ( v249 >= MiGetPteAddress(0xFFFFF90000000000uLL) && v249 < MiGetPteAddress(0xFFFFF98000000000uLL)
                  || v249 >= MiGetPteAddress(0xFFFFF68000000000uLL) && v249 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL) )
                {
                  goto LABEL_273;
                }
                if ( v249 < MiGetPteAddress(0xFFFFF58000000000uLL)
                  || (v117 = v249 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL), v118 = HIBYTE(word_1402FE760), !v117) )
                {
                  v118 = (unsigned __int8)word_1402FE760;
                }
              }
              else
              {
                v118 = HIBYTE(word_1402FE760);
              }
              if ( !v118 )
              {
LABEL_273:
                if ( (v111 & 0x800) != 0 )
                {
                  v111 |= 0x42uLL;
                  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v111;
                }
                if ( *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60)
                  && *(_BYTE *)(v248 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
                {
                  *(_QWORD *)v249 = v111;
                  if ( (unsigned int)MiPteInShadowRange(v249) )
                    MiWritePteShadow(v249, v111);
                }
                else
                {
                  Wsle = MiAllocateWsle(
                           a5,
                           v249,
                           v106,
                           0LL,
                           v111,
                           *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40));
                  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
                  if ( Wsle )
                  {
                    if ( *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) )
                      _InterlockedExchangeAdd64(
                        (volatile signed __int64 *)(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50)
                                                  + 920LL),
                        1uLL);
                  }
                  else
                  {
                    v120 = 48 * (*(_QWORD *)(v106 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
                    MiReleaseFreshPage(v106);
                    MiLockAndDecrementShareCount(v120, 0);
                    v121 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
                    v122 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
                    if ( !v121 )
                      v122 = -1073741801;
                    v123 = v121 + 1;
                    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v122;
                    v124 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
                    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = v123;
                    if ( v123 < v124 )
                    {
                      v125 = v124 - v123;
                      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = v124;
                      do
                      {
                        v126 = v53;
                        v127 = *(_QWORD *)(v53 + 24) & 0xFFFFFFFFFLL;
                        if ( v127 == 0xFFFFFFFFFLL )
                          v53 = 0LL;
                        else
                          v53 = 48 * v127 - 0x58000000000LL;
                        MiReleaseFreshPage(v126);
                        --v125;
                      }
                      while ( v125 );
                    }
                  }
                  __incgsdword(0x2E1Cu);
                }
LABEL_291:
                v79 = v249 + 8;
                v80 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
                v128 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) + 1LL;
                *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = v128;
                v249 += 8LL;
                if ( v128 >= *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) )
                  return *(unsigned int *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
                continue;
              }
              v111 |= 0x100uLL;
            }
            else
            {
              v113 = MmProtectToPteMask[*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20)] ^ (v112 ^ MmProtectToPteMask[*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20)]) & 0xFFFFFFFFF000LL | 0x21;
              if ( v249 + 0x904C0000000LL <= 0x3FFFFFFF )
                v113 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
              if ( v249 <= v110 && v249 >= 0xFFFFF68000000000uLL
                || v249 >= 0xFFFFF6FB40000000uLL
                && v249 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
                || v249 >= 0xFFFFF6FB7DA00000uLL
                && v249 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
                || v249 >= 0xFFFFF6FB7DBED000uLL
                && v249 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
              {
                v113 |= 4uLL;
              }
              PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
              v115 = word_1402FE760;
              if ( v249 < PteAddress )
              {
                v116 = HIBYTE(word_1402FE760);
                goto LABEL_247;
              }
              if ( (v249 < MiGetPteAddress(0xFFFFF90000000000uLL) || v249 >= MiGetPteAddress(0xFFFFF98000000000uLL))
                && (v249 < MiGetPteAddress(0xFFFFF68000000000uLL) || v249 > MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL)) )
              {
                if ( v249 < MiGetPteAddress(0xFFFFF58000000000uLL)
                  || (v117 = v249 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL), v116 = HIBYTE(word_1402FE760), !v117) )
                {
                  v116 = v115;
                }
LABEL_247:
                if ( v116 )
                  v113 |= 0x100uLL;
              }
              v111 = v113 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(v115 & 1) << 8);
            }
            break;
          }
          *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v111;
          goto LABEL_273;
        }
        return 3221225495LL;
      }
      v53 = 48 * Page - 0x58000000000LL;
      if ( *(_QWORD *)(v53 + 16) && (*(_BYTE *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) & 0x40) != 0 )
      {
        MiZeroPhysicalPage(Page, 1LL, v50);
        *(_QWORD *)(v53 + 16) = 0LL;
        _InterlockedOr(v243, 0);
        MiSetPfnTbFlushStamp(v53, (unsigned int)KiTbFlushTimeStamp, 0LL);
      }
      if ( *(unsigned __int8 *)(v53 + 34) >> 6 != v50 )
      {
        if ( v50 != 1
          || (*(_BYTE *)(v53 + 34) & 0xC0) != 0xC0
          && (v75 = *(_BYTE *)(v53 + 31) & 0xF,
              _InterlockedOr(v243, 0),
              v76 = ((_BYTE)KiTbFlushTimeStamp - v75) & 0xF,
              v76 <= 2)
          && ((v75 & 1) != 0 || v76 < 2) )
        {
          *(_QWORD *)(v53 + 16) = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
          *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v53;
          goto LABEL_122;
        }
        MiChangePageAttribute(v53, 1LL, 4LL);
      }
      v62 = *(_QWORD *)(v53 + 24);
      v63 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 24), v62 & 0xF0FFFFFFFFFFFFFFuLL, v62);
      if ( v62 != v63 )
      {
        do
        {
          v64 = v63;
          v63 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 24), v63 & 0xF0FFFFFFFFFFFFFFuLL, v63);
        }
        while ( v64 != v63 );
      }
LABEL_122:
      v65 = *(_QWORD *)(v53 + 24);
      v66 = v51 & 0xFFFFFFFFFLL;
      v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 24), v66 | v65 & 0xFFFFFFF000000000uLL, v65);
      if ( v65 != v67 )
      {
        do
        {
          v68 = v67;
          v67 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v53 + 24),
                  v66 | v67 & 0xFFFFFFF000000000uLL,
                  v67);
        }
        while ( v68 != v67 );
      }
      v51 = v61;
      v69 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) + 1LL;
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = v69;
      if ( (v69 & 0xF) == 0 && (*(_DWORD *)a5 & 0x40000000) != 0 )
      {
LABEL_153:
        v50 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v52 = v69;
        *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v69;
        goto LABEL_155;
      }
      v70 = KeGetCurrentPrcb();
      DpcWatchdogCount = v70->DpcWatchdogCount;
      DpcRequestSummary = v70->DpcRequestSummary;
      DpcTimeCount = v70->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v73 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v74 = 2;
          goto LABEL_148;
        }
        if ( v70->QuantumEnd )
        {
          v74 = 3;
          goto LABEL_148;
        }
        NextThread = v70->NextThread;
        if ( NextThread && NextThread != v70->CurrentThread )
        {
          v74 = 4;
          goto LABEL_148;
        }
LABEL_141:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_151;
        if ( !v73 )
          goto LABEL_147;
        goto LABEL_143;
      }
      v73 = 1;
      if ( (unsigned int)DpcTimeCount <= 7 )
        goto LABEL_141;
      if ( v70->QuantumEnd )
      {
        v74 = 1;
        goto LABEL_148;
      }
LABEL_143:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v74 = 5;
        goto LABEL_148;
      }
      if ( v70->CurrentThread != v70->IdleThread )
      {
        v74 = 6;
        goto LABEL_148;
      }
LABEL_147:
      _disable();
      v70->DpcWatchdogCount = 0;
      v70->DpcTimeCount = 0;
      _enable();
      v74 = 0;
LABEL_148:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      {
        EtwTraceShouldYieldProcessor(v74, DpcWatchdogCount, (unsigned int)DpcTimeCount, DpcTimeCount);
        v69 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90);
      }
      if ( v74 )
        goto LABEL_153;
LABEL_151:
      v52 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      v50 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( v69 >= v52 )
        goto LABEL_155;
      p_PageColor = *(unsigned int **)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      v55 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
      v56 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      v54 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
      v41 = *(int **)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
    }
  }
  v129 = MI_READ_PTE_LOCK_FREE(v8);
  v130 = &MiSystemPartition;
  if ( (*(_BYTE *)(a5 + 216) & 7) == 0 )
  {
    v131 = *(_WORD *)(a5 + 180);
    if ( v131 != 1023 )
      v130 = *(int **)(qword_1402FEC28 + 8LL * v131);
  }
  *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0;
  v132 = &MiSystemPartition;
  v133 = 0;
  if ( (v129 & 0x1000000) != 0 )
    v132 = v130;
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v132;
  if ( ((v9 & 4) != 0 || (v9 & 0x10) != 0) && (v9 & 1) != 0 )
  {
    v134 = MiCheckVirtualAddress(a2, (_DWORD *)v7 + 10, (unsigned __int64 *)v7 + 17);
    v136 = *(unsigned int *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
    if ( (v9 & 0x10) != 0 && (unsigned int)v136 >> 3 != 1 && ((unsigned int)v136 >> 3 != 3 || (v136 & 7) == 0) )
    {
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = MI_READ_PTE_LOCK_FREE(
                                                                               ((v8 >> 9) & 0x7FFFFFFFF8LL)
                                                                             - 0x98000000000LL);
      v137 = MI_GET_PAGE_FRAME_FROM_PTE(v7 + 16);
      LOBYTE(v138) = 17;
      MiUnlockProtoPoolPage(48 * v137 - 0x58000000000LL, v138);
      return 0LL;
    }
    if ( v134 )
    {
      v139 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v139;
      if ( v139 )
      {
        if ( (_DWORD)v136 != 24 && (v136 & 0xFFFFFFF8) != 0x10 )
        {
          v140 = *(_QWORD **)(v139 + 120);
          if ( (__int64)v140 >= 0 )
          {
            *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
          }
          else
          {
            v9 |= 2u;
            v141 = *v140 - 1LL;
            *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9;
            *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v141 >> 12;
          }
          v142 = (a2 >> 12) + 1;
          v143 = MiComputeZeroClusterMaximum(
                   *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78),
                   v139,
                   v135);
          v144 = a2;
          *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v143;
          *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 1LL;
          v145 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( v143 > 1 )
          {
            v146 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
            v147 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
            do
            {
              v148 = MI_READ_PTE_LOCK_FREE(++v145);
              if ( v148 )
              {
                if ( (v148 & 1) != 0
                  || (v148 & 0x400) == 0
                  || HIDWORD(v148) != 0xFFFFFFFF
                  || ((v148 >> 5) & 0x1F) != v136 )
                {
                  break;
                }
              }
              ProtoPteAddress = MiGetProtoPteAddress(v146, v142, 0, (__int64 *)v7 + 23);
              v150 = ProtoPteAddress;
              if ( !ProtoPteAddress
                || ((v249 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0
                || (v9 & 2) != 0
                && v142 - (*(unsigned int *)(v146 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v146 + 32) << 32)) > v147
                || (v151 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress),
                    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v151,
                    (v151 & 1) != 0)
                || !v151
                || (v151 & 0x400) != 0
                || (v151 & 0x800) != 0
                || (unsigned int)MI_GET_PAGING_FILE_OFFSET(v7 + 16) )
              {
                v133 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
                break;
              }
              if ( (_DWORD)v136 == 256 )
                v152 = (v150 << 16) | 0x400;
              else
                v152 = 32 * (v136 & 0x1F | 0xFFFFFFFFF8000020uLL);
              *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v152;
              if ( MI_READ_PTE_LOCK_FREE(v145) )
              {
                v133 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
              }
              else
              {
                *v145 = v152;
                if ( (unsigned int)MiPteInShadowRange(v145) )
                  MiWritePteShadow(v145, v152);
                v133 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) + 1;
                *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v133;
              }
              ++v142;
              v153 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) + 1LL;
              *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v153;
            }
            while ( v153 < *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) );
            v13 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            v144 = a2;
          }
          if ( v133 )
            MiUpdatePageTableUseCount(v144, v133);
          v8 = v249;
          v132 = *(int **)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
        }
      }
    }
  }
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = MI_READ_PTE_LOCK_FREE(
                                                                           ((v8 >> 9) & 0x7FFFFFFFF8LL)
                                                                         - 0x98000000000LL);
  v154 = MI_GET_PAGE_FRAME_FROM_PTE(v7 + 16);
  v155 = (*(_DWORD *)v8 >> 5) & 0x1F;
  v156 = 48 * v154 - 0x58000000000LL;
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v156;
  if ( v13 )
  {
    v157 = KeGetCurrentPrcb();
    v158 = ((_WORD)v13 - 1) << byte_1402FE6D9;
  }
  else
  {
    v157 = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    v158 = v157->NodeShiftedColor;
  }
  v159 = (1 << byte_1402FE6E8) - 1;
  if ( (*(_BYTE *)(a5 + 216) & 7u) >= 2 )
    v160 = &v157->PageColor;
  else
    v160 = (unsigned int *)(a5 + 192);
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v160;
  if ( (unsigned int)v155 >> 3 == 3 && (v155 & 7) != 0 )
    v161 = 2;
  else
    v161 = (unsigned int)v155 >> 3 != 1;
  v162 = 0LL;
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  v163 = 0xFFFFFFFFFLL;
  v164 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
  *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) = MiPlatformCacheAttributes[v161];
  if ( !v164 )
    goto LABEL_400;
  v165 = v158;
  v166 = 0LL;
  LOWORD(v167) = v159;
  *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v159;
  *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v165;
  while ( 1 )
  {
    v168 = MiGetPage(v132, v165 | (unsigned int)(unsigned __int16)(v167 & ++*(_WORD *)v160), 2LL);
    v170 = v168;
    if ( v168 == -1 )
      break;
    v162 = 48 * v168 - 0x58000000000LL;
    if ( *(_QWORD *)(v162 + 16) )
    {
      MiZeroPhysicalPage(v168, 1LL, *(unsigned int *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C));
      *(_QWORD *)(v162 + 16) = 0LL;
      _InterlockedOr(v243, 0);
      MiSetPfnTbFlushStamp(v162, (unsigned int)KiTbFlushTimeStamp, 0LL);
    }
    v171 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C);
    if ( *(unsigned __int8 *)(v162 + 34) >> 6 != v171 )
    {
      if ( v171 != 1
        || (*(_BYTE *)(v162 + 34) & 0xC0) != 0xC0
        && (v183 = *(_BYTE *)(v162 + 31) & 0xF,
            _InterlockedOr(v243, 0),
            v184 = ((_BYTE)KiTbFlushTimeStamp - v183) & 0xF,
            v184 <= 2)
        && ((v183 & 1) != 0 || v184 < 2) )
      {
        *(_QWORD *)(v162 + 16) = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
        *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v162;
        goto LABEL_365;
      }
      MiChangePageAttribute(v162, 1LL, 4LL);
    }
    v172 = *(_QWORD *)(v162 + 24);
    v173 = _InterlockedCompareExchange64((volatile signed __int64 *)(v162 + 24), v172 & 0xF0FFFFFFFFFFFFFFuLL, v172);
    if ( v172 != v173 )
    {
      do
      {
        v174 = v173;
        v173 = _InterlockedCompareExchange64((volatile signed __int64 *)(v162 + 24), v173 & 0xF0FFFFFFFFFFFFFFuLL, v173);
      }
      while ( v174 != v173 );
    }
LABEL_365:
    v155 = *(_QWORD *)(v162 + 24);
    v175 = v163 & 0xFFFFFFFFFLL;
    v176 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(v162 + 24),
             v175 | v155 & 0xFFFFFFF000000000uLL,
             v155);
    if ( v155 != v176 )
    {
      do
      {
        v177 = v176;
        v176 = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v162 + 24),
                 v175 | v176 & 0xFFFFFFF000000000uLL,
                 v176);
      }
      while ( v177 != v176 );
    }
    ++v166;
    v163 = v170;
    if ( (v166 & 0xF) == 0 && (*(_DWORD *)a5 & 0x40000000) != 0 )
      break;
    v178 = KeGetCurrentPrcb();
    v179 = v178->DpcWatchdogCount;
    v180 = v178->DpcRequestSummary;
    v169 = v178->DpcTimeCount;
    v155 = v179 > 7;
    if ( (v180 & 1) == 0 )
    {
      v181 = 0;
      if ( (v180 & 0x1E) != 0 )
      {
        v182 = 2;
        goto LABEL_391;
      }
      if ( v178->QuantumEnd )
      {
        v182 = 3;
        goto LABEL_391;
      }
      v185 = v178->NextThread;
      if ( v185 && v185 != v178->CurrentThread )
      {
        v182 = 4;
        goto LABEL_391;
      }
LABEL_384:
      if ( v179 <= 7 )
        goto LABEL_394;
      if ( !v181 )
        goto LABEL_390;
      goto LABEL_386;
    }
    v181 = 1;
    if ( (unsigned int)v169 <= 7 )
      goto LABEL_384;
    if ( v178->QuantumEnd )
    {
      v182 = 1;
      goto LABEL_391;
    }
LABEL_386:
    if ( (v180 & 0x1E) != 0 )
    {
      v182 = 5;
      goto LABEL_391;
    }
    if ( v178->CurrentThread != v178->IdleThread )
    {
      v182 = 6;
      goto LABEL_391;
    }
LABEL_390:
    _disable();
    v178->DpcWatchdogCount = 0;
    v178->DpcTimeCount = 0;
    _enable();
    v182 = 0;
LABEL_391:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v182, v179, (unsigned int)v169, v169);
    if ( v182 )
      break;
LABEL_394:
    v164 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    if ( v166 >= v164 )
      goto LABEL_397;
    v160 = *(unsigned int **)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    v167 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    v165 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
    v132 = *(int **)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
  }
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v166;
  v164 = v166;
LABEL_397:
  if ( *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) )
  {
    MiChangePageAttributeBatch(
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68),
      *(unsigned int *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C),
      0LL,
      v169);
    v164 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
  }
  v156 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
LABEL_400:
  if ( !v162 )
  {
    LOBYTE(v155) = 17;
    MiUnlockProtoPoolPage(v156, v155);
    return 3221225495LL;
  }
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( !v164 )
    goto LABEL_496;
  v186 = v9;
  v187 = v249;
  *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = (v186 >> 4) & 1;
  while ( 2 )
  {
    v188 = (volatile signed __int32 *)(v162 + 24);
    v189 = *(_QWORD *)(v162 + 24) & 0xFFFFFFFFFLL;
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v162;
    v190 = v162;
    if ( v189 == 0xFFFFFFFFFLL )
      v162 = 0LL;
    else
      v162 = 48 * v189 - 0x58000000000LL;
    v191 = (v190 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0
      && v191 < 0x200000
      && (*(_BYTE *)(48 * v191 - 0x57FFFFFFFDDLL) & 0x40) == 0
      && (++dword_1402FED50 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v192 = MiMapPageInHyperSpaceWorker(v191, v7 + 60, 0x80000000LL);
        if ( KeCheckForZeroPage(v192) )
          MiPageNotZero(v192, v191);
        MiUnmapPageInHyperSpaceWorker(
          v192,
          *(unsigned __int8 *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C),
          0x80000000LL);
      }
    }
    v193 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) | 0x112;
    v194 = (*(_DWORD *)v187 >> 5) & 0x1F;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v193;
    v195 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) == 0;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v194;
    if ( !v195 || ((v194 - 4) & 0xFFFFFFFD) != 0 )
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v193 | 0x20;
    v196 = MI_READ_PTE_LOCK_FREE(v187);
    v197 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    if ( (v197 & 4) != 0 )
      v196 = 32LL * v194;
    *(_QWORD *)(v190 + 16) = v196;
    if ( (v197 & 2) != 0 )
    {
      *(_QWORD *)(v190 + 40) |= 0x200000000000000uLL;
    }
    else if ( (v197 & 8) == 0 )
    {
      *(_QWORD *)(v190 + 16) = v196 & 0xFFFFFFFFFF003FFFuLL;
    }
    if ( v194 == 31 )
    {
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) = 1;
    }
    else if ( v194 >> 3 == 3 && (v194 & 7) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) = dword_1403812A8;
    }
    else
    {
      v198 = 1;
      if ( v194 >> 3 == 1 )
        v198 = MiPlatformCacheAttributes[0];
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C) = v198;
    }
    *(_WORD *)(v190 + 32) = 1;
    if ( (v197 & 0x20) == 0 )
      *(_BYTE *)(v190 + 34) |= 0x10u;
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = MI_READ_PTE_LOCK_FREE(
                                                                             ((v187 >> 9) & 0x7FFFFFFFF8LL)
                                                                           - 0x98000000000LL);
    v199 = MI_GET_PAGE_FRAME_FROM_PTE(v7 + 192);
    *(_QWORD *)(v190 + 40) ^= (*(_QWORD *)(v190 + 40) ^ v199) & 0xFFFFFFFFFLL;
    v201 = 48 * v199 - 0x58000000000LL;
    v202 = KeGetCurrentThread();
    if ( (HIDWORD(v202[1].Queue) & 0x100) != 0 )
    {
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = (HIDWORD(v202[1].Queue) & 0xE00u) >> 9;
    }
    else
    {
      v203 = *((_DWORD *)&v202[1].SwapListEntry + 3);
      v204 = v202->Process;
      v205 = (v203 >> 12) & 7;
      *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v205;
      if ( (v204[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      {
        v206 = 2;
        if ( v205 < 2 )
          v206 = v205;
        *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v206;
      }
    }
    v207 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    *v7 = 17;
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v207 & 1;
    if ( (v207 & 1) == 0 )
    {
      if ( (v207 & 0x10) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = 0;
        while ( _interlockedbittestandset64(v188, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(v7 + 152);
          while ( (*(_QWORD *)v188 & 0x8000000000000000uLL) != 0 );
        }
      }
      else
      {
        *v7 = MiLockPageInline(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40));
      }
    }
    *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v201 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v7 + 160);
      while ( (*(_QWORD *)(v201 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *(_QWORD *)(v201 + 24) ^= (((*(_QWORD *)(v201 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v201 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v201 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v208 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    v209 = *(unsigned int *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C);
    if ( *(unsigned __int8 *)(v208 + 34) >> 6 != (_DWORD)v209 )
      MiChangePageAttribute(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40), v209, 1LL);
    v210 = *(_QWORD *)v188 & 0xC000000000000001uLL;
    *(_QWORD *)(v208 + 8) = v187;
    *(_QWORD *)v188 = v210 | 1;
    *(_BYTE *)(v208 + 35) ^= (*(_BYTE *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) ^ *(_BYTE *)(v208 + 35)) & 7;
    v211 = *(_BYTE *)(v208 + 35);
    *(_BYTE *)(v208 + 34) = *(_BYTE *)(v208 + 34) & 0xF8 | 6;
    v212 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    if ( (v212 & 0x40) != 0 )
      *(_BYTE *)(v208 + 35) = v211 | 0x20;
    if ( !*(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) )
    {
      _InterlockedAnd64((volatile signed __int64 *)v188, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v212 & 0x10) == 0 )
        __writecr8(*v7);
    }
    if ( *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
    {
      v213 = 32
           * (*(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) & 0x1F | ((v191 & 0xFFFFFFFFFLL) << 7) | 0x40);
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v213;
      *(_QWORD *)v187 = v213;
      if ( (unsigned int)MiPteInShadowRange(v187) )
        MiWritePteShadow(v187, v213);
      MiLockAndDecrementShareCount(v208, 0);
      MiAdvanceFaultList(*(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78));
      goto LABEL_494;
    }
    v214 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v187 <= v214 && v187 >= 0xFFFFF68000000000uLL )
    {
      ValidKernelPte = MmProtectToPteMask[*(unsigned int *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28)] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v191 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1) << 8) | 0x25;
      goto LABEL_489;
    }
    if ( (*(_BYTE *)(a5 + 216) & 7u) < 2 )
    {
      ValidKernelPte = MmProtectToPteMask[*(unsigned int *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28)] ^ ((v191 << 12) ^ MmProtectToPteMask[*(unsigned int *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28)]) & 0xFFFFFFFFF000LL | 0x21;
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = ValidKernelPte;
      if ( v187 + 0x904C0000000LL <= 0x3FFFFFFF )
      {
        ValidKernelPte &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = ValidKernelPte;
      }
      if ( v187 <= v214 && v187 >= 0xFFFFF68000000000uLL
        || v187 >= 0xFFFFF6FB40000000uLL
        && v187 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || v187 >= 0xFFFFF6FB7DA00000uLL
        && v187 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || v187 >= 0xFFFFF6FB7DBED000uLL
        && v187 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        ValidKernelPte |= 4uLL;
        *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = ValidKernelPte;
      }
      if ( v187 >= MiGetPteAddress(0xFFFF800000000000uLL) )
      {
        if ( v187 >= MiGetPteAddress(0xFFFFF90000000000uLL) && v187 < MiGetPteAddress(0xFFFFF98000000000uLL)
          || v187 >= MiGetPteAddress(0xFFFFF68000000000uLL) && v187 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL) )
        {
          goto LABEL_490;
        }
        if ( v187 < MiGetPteAddress(0xFFFFF58000000000uLL)
          || (v117 = v187 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL), v216 = HIBYTE(word_1402FE760), !v117) )
        {
          v216 = (unsigned __int8)word_1402FE760;
        }
      }
      else
      {
        v216 = HIBYTE(word_1402FE760);
      }
      if ( v216 )
      {
        ValidKernelPte |= 0x100uLL;
LABEL_489:
        *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = ValidKernelPte;
      }
    }
    else
    {
      ValidKernelPte = MiMakeValidKernelPte(
                         v191,
                         *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
                         v187,
                         v200);
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = ValidKernelPte;
    }
LABEL_490:
    if ( (ValidKernelPte & 0x800) != 0 )
    {
      ValidKernelPte |= 0x42uLL;
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = ValidKernelPte;
    }
    *(_QWORD *)v187 = ValidKernelPte;
    if ( (unsigned int)MiPteInShadowRange(v187) )
      MiWritePteShadow(v187, ValidKernelPte);
LABEL_494:
    v187 += 8LL;
    v217 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) + 1LL;
    v218 = v217 < *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v217;
    if ( v218 )
      continue;
    break;
  }
  v249 = v187;
  v9 = *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
LABEL_496:
  v219 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
  *(_DWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v219 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v7 + 168);
    while ( (*(_QWORD *)(v219 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v220 = *(_WORD *)(v219 + 32);
  v221 = *(_BYTE *)(v219 + 34) & 0xDF;
  *(_BYTE *)(v219 + 34) = v221;
  if ( !v220 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v219 + 0x58000000000LL) / 48, v221 & 7, *(unsigned __int16 *)(v219 + 32));
  v195 = v220 == 1;
  v222 = v220 - 1;
  *(_WORD *)(v219 + 32) = v222;
  if ( v195 && (unsigned int)MI_IS_PFN_FILE_ONLY(v219) )
    goto LABEL_544;
  v223 = *(_QWORD *)(v219 + 40);
  if ( (v223 & 0x10000000000000LL) == 0 )
  {
    v224 = *(_QWORD *)(v219 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v222 )
    {
      v225 = 1;
      goto LABEL_512;
    }
    if ( v222 != 1 )
    {
      if ( v222 == 2 && v224 )
      {
LABEL_509:
        if ( (v221 & 8) != 0 )
          goto LABEL_510;
      }
      goto LABEL_545;
    }
    if ( !v224 )
      goto LABEL_509;
LABEL_510:
    v225 = 0;
LABEL_512:
    v226 = *(_QWORD *)(v219 + 8) | 0x8000000000000000uLL;
    v227 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (v226 > v227 || v226 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v219 + 35) >> 5) & 1) != 0 )
    {
      *(_BYTE *)(v219 + 35) &= ~0x20u;
      goto LABEL_543;
    }
    v228 = 0;
    if ( (v223 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v219 + 16) & 0x400LL) != 0 )
    {
      v228 = 1;
    }
    else if ( v226 <= v227 && v226 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v219 + 35) >> 5) & 1) != 0 )
    {
      v228 = 1;
    }
    else if ( v225 == 1 && ((*(_QWORD *)(v219 + 24) >> 62) & 1LL) != 0 )
    {
      v228 = 1;
    }
    v229 = (HIDWORD(v223) >> 8) & 0x3FF;
    if ( v229 == 1023 )
      v230 = &MiSystemPartition;
    else
      v230 = *(int **)(qword_1402FEC28 + 8LL * v229);
    if ( v228 == 1 )
      MiReturnCommit(v230, 1LL);
    if ( v230 != &MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v230 + 744, 1uLL);
      goto LABEL_543;
    }
    v231 = KeGetCurrentPrcb();
    v232 = 1LL;
    CachedResidentAvailable = (int)v231->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        while ( 1 )
        {
          v234 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&v231->CachedResidentAvailable,
                   CachedResidentAvailable + 1,
                   CachedResidentAvailable);
          v195 = (_DWORD)CachedResidentAvailable == v234;
          LODWORD(CachedResidentAvailable) = v234;
          if ( v195 )
            break;
          if ( v234 == -1 || (unsigned __int64)(v234 + 1LL) > 0x100 )
            goto LABEL_537;
        }
LABEL_541:
        _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
LABEL_543:
        if ( v225 )
LABEL_544:
          MiPfnReferenceCountIsZero(v219, (v219 + 0x58000000000LL) / 48);
        goto LABEL_545;
      }
LABEL_537:
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v231->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v232 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_140301480, v232);
    goto LABEL_541;
  }
LABEL_545:
  _InterlockedAnd64((volatile signed __int64 *)(v219 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v235 = *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
  v236 = 273;
  v237 = 0LL;
  v238 = v249 - 8 * v235;
  if ( (v9 & 0x10) != 0 )
    v235 = 0LL;
  *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v235;
  if ( v235 )
  {
    v239 = a2;
    do
    {
      v240 = MI_READ_PTE_LOCK_FREE(v238);
      v244 = v248;
      *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v240;
      v241 = MiCompleteProtoPteFault(a5, a6, v239, v240, a1, 1, v244);
      v239 += 4096LL;
      if ( !v237 )
      {
        if ( v241 < 0 )
          v236 = v241;
        v242 = v248;
        if ( (v9 & 0x20) != 0 )
          v242 = 0LL;
        v248 = v242;
      }
      __incgsdword(0x2E1Cu);
      ++v237;
      v238 += 8LL;
    }
    while ( v237 < *(_QWORD *)(((unsigned __int64)v245 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) );
  }
  return v236;
}
