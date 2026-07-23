/*
 * XREFs of MiResolveDemandZeroFault @ 0x1400BBC00
 * Callers:
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiProtoFault @ 0x1400FE484 (MiProtoFault.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUpdatePageTableUseCount @ 0x14005DCE0 (MiUpdatePageTableUseCount.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiGetZeroedPages @ 0x140077560 (MiGetZeroedPages.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiCheckVirtualAddress @ 0x1400896DC (MiCheckVirtualAddress.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiAdvanceFaultList @ 0x1400DF8F4 (MiAdvanceFaultList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiComputeZeroClusterMaximum @ 0x140125EF8 (MiComputeZeroClusterMaximum.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeCheckForZeroPage @ 0x140186B40 (KeCheckForZeroPage.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x140225C48 (MiMakePrototypePteVadLookup.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiPageNotZero @ 0x1402262F4 (MiPageNotZero.c)
 *     MiWaitForForkToComplete @ 0x1402314F8 (MiWaitForForkToComplete.c)
 *     EtwTraceShouldYieldProcessor @ 0x14025D5E8 (EtwTraceShouldYieldProcessor.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiResolveDemandZeroFault(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        unsigned __int8 a6,
        int a7)
{
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 result; // rax
  _KPROCESS *Process; // rax
  unsigned __int64 v13; // rsi
  int v14; // r12d
  __int64 v15; // rdi
  _QWORD *Address; // rax
  unsigned int v17; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 PteShadow; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  __int64 *v26; // rdi
  __int64 v27; // r11
  __int64 v28; // rdx
  __int16 v29; // ax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r10
  unsigned int *v32; // rsi
  int v33; // r14d
  char v34; // di
  __int16 *v35; // r9
  unsigned __int8 v36; // di
  unsigned __int16 v37; // ax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r12
  signed __int64 v40; // rdx
  unsigned int *p_PageColor; // r8
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  __int64 v44; // r15
  unsigned __int64 v45; // r13
  __int64 v46; // r11
  __int64 v47; // r10
  __int64 v48; // r14
  char v49; // di
  int v50; // ecx
  __int16 v51; // ax
  int v52; // r12d
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 Page; // rax
  __int64 v56; // rsi
  unsigned __int8 v57; // cl
  signed __int64 v58; // rdx
  signed __int64 v59; // rdi
  signed __int64 v60; // rcx
  __int64 v61; // r14
  signed __int64 v62; // rdi
  unsigned int v63; // r10d
  int v64; // edi
  unsigned int v65; // r9d
  int v66; // r8d
  unsigned int v67; // edi
  char v68; // cl
  unsigned int v69; // eax
  __int64 v70; // rax
  unsigned __int64 v71; // r14
  __int64 v72; // r8
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rax
  volatile signed __int64 *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // r13
  volatile signed __int64 v79; // rdx
  signed __int64 v80; // rdi
  signed __int64 v81; // rcx
  unsigned __int64 v82; // r12
  int v83; // eax
  __int64 DemandZeroPte; // rdi
  unsigned int v85; // ebx
  unsigned int v86; // edi
  unsigned __int64 v87; // rbx
  void *v88; // rdi
  char v89; // dl
  int v90; // esi
  __int64 TransitionPte; // rax
  unsigned __int64 v92; // rdi
  __int64 v93; // r11
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // r12
  __int64 v96; // rcx
  int v97; // eax
  int v98; // ecx
  __int64 Wsle; // rax
  __int64 v100; // rdi
  int v101; // eax
  unsigned __int64 v102; // rcx
  __int64 v103; // rdi
  __int64 v104; // rcx
  __int64 v105; // rax
  unsigned __int64 v106; // rsi
  __int64 v107; // rdi
  __int16 *v108; // r10
  __int16 *v109; // rcx
  int v110; // r14d
  __int64 v111; // rax
  __int64 v112; // r13
  unsigned __int64 *v113; // rsi
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rax
  __int64 v117; // r15
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rdi
  __int64 *v121; // rsi
  _QWORD *v122; // r12
  unsigned __int64 v123; // r14
  __int64 v124; // rdx
  unsigned __int64 v125; // rdx
  __int64 ProtoPteAddress; // rax
  _QWORD *v127; // rdi
  __int64 v128; // rax
  __int64 PrototypePteVadLookup; // rax
  __int64 v130; // rdi
  __int64 v131; // rax
  unsigned __int64 *v132; // rcx
  unsigned __int64 v133; // rax
  __int64 v134; // r15
  unsigned int v135; // eax
  __int64 ZeroedPages; // r13
  int v137; // edi
  __int64 v138; // rax
  __int64 v139; // r12
  ULONG_PTR v140; // rsi
  __int64 v141; // rdi
  __int64 *v142; // rcx
  __int64 v143; // r14
  char v144; // dl
  int v145; // edx
  unsigned __int64 v146; // r8
  __int64 v147; // rdx
  _QWORD *v148; // rsi
  unsigned __int64 v149; // rdx
  ULONG_PTR v150; // rsi
  __int64 v151; // rdi
  __int64 v152; // rdi
  __int64 v153; // rdx
  __int64 v154; // rdx
  bool v155; // zf
  unsigned int v156; // edi
  __int64 v157; // rdx
  unsigned __int64 v158; // rcx
  unsigned int v159; // r12d
  unsigned __int64 v160; // rdi
  unsigned __int64 v161; // rsi
  __int64 v162; // r13
  unsigned __int64 v163; // r9
  __int64 v164; // rdx
  __int64 v165; // rax
  int v166; // eax
  signed __int32 v167[10]; // [rsp+0h] [rbp-C1h] BYREF
  unsigned __int64 *v168; // [rsp+28h] [rbp-99h]
  int v169; // [rsp+40h] [rbp-81h]
  unsigned int v170; // [rsp+44h] [rbp-7Dh]
  __int64 v171; // [rsp+48h] [rbp-79h] BYREF
  __int64 v172; // [rsp+50h] [rbp-71h]
  int v173; // [rsp+58h] [rbp-69h]
  int v174; // [rsp+5Ch] [rbp-65h]
  unsigned int v175; // [rsp+60h] [rbp-61h] BYREF
  __int16 *v176; // [rsp+68h] [rbp-59h]
  unsigned __int8 v177[8]; // [rsp+70h] [rbp-51h] BYREF
  unsigned __int64 v178; // [rsp+78h] [rbp-49h] BYREF
  unsigned int *v179; // [rsp+80h] [rbp-41h]
  unsigned __int64 v180; // [rsp+88h] [rbp-39h]
  unsigned __int64 v181; // [rsp+90h] [rbp-31h]
  unsigned int *v182; // [rsp+98h] [rbp-29h] BYREF
  unsigned __int64 v183; // [rsp+A0h] [rbp-21h]
  int v184; // [rsp+A8h] [rbp-19h]
  int v185; // [rsp+ACh] [rbp-15h]
  int v186; // [rsp+B0h] [rbp-11h]
  __int64 PrototypePteDirect; // [rsp+B8h] [rbp-9h] BYREF
  unsigned __int64 v189; // [rsp+118h] [rbp+57h]
  unsigned __int64 v191; // [rsp+128h] [rbp+67h]

  v191 = (unsigned __int64)a4;
  v189 = a2;
  v178 = 1LL;
  v8 = a2;
  v174 = 8;
  v9 = a3 & 1;
  v173 = 0;
  v10 = 0;
  v169 = 0;
  v180 = v9;
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v10 = 4;
    v173 = 4;
    goto LABEL_11;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v10 = 8;
    }
    else
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_11;
      if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        v10 = 32;
    }
    v173 = v10;
  }
LABEL_11:
  if ( (v10 & 0x2C) != 0 )
  {
    v181 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v10 & 8) != 0 )
    {
      if ( (*(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
        return 0LL;
      v10 |= 0x10u;
      v173 = v10;
    }
  }
  else
  {
    v181 = 0LL;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v172 = (__int64)Process;
  if ( (a3 & 1) != 0 )
    v13 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  else
    v13 = 0LL;
  v14 = 0;
  v170 = 0;
  v15 = 0LL;
  v182 = 0LL;
  if ( *(_QWORD *)(a5 + 184) == 0xFFFFF58010804000uLL )
  {
    if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
    {
LABEL_29:
      if ( v13 && !v14 )
      {
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
        {
          CurrentThread = KeGetCurrentThread();
          v14 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
          v170 = v14;
        }
        v15 = (__int64)v182;
      }
      goto LABEL_37;
    }
    if ( v13 || MEMORY[0xFFFFF58010804250] == 1 )
    {
      Address = MiLocateAddress(a2);
      if ( !Address
        || (v17 = *((_DWORD *)Address + 12),
            v15 = (__int64)Address,
            v182 = (unsigned int *)Address,
            v14 = (v17 >> 8) & 0x3F,
            (v170 = v14) != 0) )
      {
        v8 = v189;
      }
      else
      {
        v8 = v189;
        if ( (v17 & 0x8000) == 0 )
        {
          v14 = (*(_DWORD *)(*(_QWORD *)Address[9] + 56LL) >> 20) & 0x3F;
          v170 = v14;
        }
      }
      goto LABEL_29;
    }
  }
  else
  {
    if ( (a3 & 1) == 0 )
      goto LABEL_38;
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      v14 = *(unsigned __int8 *)(v13 + 40);
      v170 = v14;
    }
  }
LABEL_37:
  Process = (_KPROCESS *)v172;
LABEL_38:
  if ( *(_QWORD *)(a5 + 184) == 0xFFFFF58010804000uLL )
  {
    v10 |= 1u;
    v173 = v10;
  }
  if ( v15 )
    goto LABEL_45;
  if ( Process == PsInitialSystemProcess )
  {
    if ( (unsigned __int64)a4 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      || (unsigned __int64)a4 < 0xFFFFF68000000000uLL
      || (v182 = (unsigned int *)MiLocateAddress(v8), (v15 = (__int64)v182) == 0) )
    {
LABEL_48:
      Process = (_KPROCESS *)v172;
      goto LABEL_49;
    }
LABEL_45:
    v19 = *(unsigned int *)(v15 + 52);
    v20 = v169;
    LODWORD(v19) = v19 & 0x7FFFFFFF;
    if ( (v19 | ((unsigned __int64)*(unsigned __int8 *)(v15 + 34) << 31)) == 0x7FFFFFFFELL )
      v20 = 64;
    v169 = v20;
    goto LABEL_48;
  }
LABEL_49:
  if ( !a7 )
  {
    v173 = v10 & 1;
    if ( (v10 & 1) != 0 && Process[1].Affinity.Bitmap[10] && (unsigned int)MiWaitForForkToComplete(Process, a6) == 1 )
      return 3221226548LL;
    PteShadow = *a4;
    if ( (unsigned __int64)(a4 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(a4, *a4);
    v22 = (PteShadow >> 5) & 0x1F;
    if ( v9 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      LODWORD(v22) = 4;
      v175 = 4;
    }
    else
    {
      if ( (PteShadow & 0x400) != 0 )
        LODWORD(v22) = 4;
      v175 = v22;
    }
    v185 = (v10 >> 4) & 1;
    if ( v185 && (unsigned int)v22 >> 3 != 1 && ((unsigned int)v22 >> 3 != 3 || (v22 & 7) == 0) )
    {
      MiAdvanceFaultList(v181);
      return 0LL;
    }
    if ( v15 && (v10 & 0x14) != 0 )
    {
      v23 = MiComputeZeroClusterMaximum(v181);
      v25 = 1LL;
      if ( v23 > 1 )
      {
        v26 = (__int64 *)(a4 + 1);
        v27 = 0x12090482600LL;
        do
        {
          v28 = *v26;
          if ( (unsigned __int64)&v26[v27] <= 0x7F8 )
            v28 = MiReadPteShadow(v26, v28);
          if ( (v28 & 1) != 0 )
            break;
          v29 = MiReverseSwizzleInvalidPte(v28, v28, v24, v25);
          if ( (v29 & 0x400) != 0 )
            break;
          if ( (v29 & 0x800) != 0 )
            break;
          if ( (v29 & 4) != 0 )
            break;
          if ( (_DWORD)v22 != ((v30 >> 5) & 0x1F) )
            break;
          ++v25;
          ++v26;
        }
        while ( v25 < v31 );
      }
      v178 = v25;
    }
    if ( (v10 & 1) != 0
      || (*(_BYTE *)(a5 + 216) & 7) == 1
      || v189 + 0x80000000000LL <= 0x7FFFFFFFFFLL
      || PsNtosImageBase
      && (v189 >= (unsigned __int64)PsNtosImageBase && v189 < PsNtosImageEnd
       || v189 >= (unsigned __int64)PsHalImageBase && v189 < PsHalImageEnd) )
    {
      if ( (unsigned int)v22 >> 3 == 3 && (v22 & 7) != 0 )
      {
        v174 = 578;
      }
      else
      {
        v33 = 194;
        if ( (unsigned int)v22 >> 3 == 1 )
          v33 = 322;
        v174 = v33;
      }
    }
    else if ( !v9 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
    {
      v32 = 0LL;
      v174 = 0;
LABEL_98:
      v34 = *(_BYTE *)(a5 + 216);
      v35 = MiSystemPartition;
      v176 = MiSystemPartition;
      v36 = v34 & 7;
      if ( !v36 )
      {
        v37 = *(_WORD *)(a5 + 180);
        if ( v37 != 1023 )
          v35 = *(__int16 **)(qword_14034F0E8 + 8LL * v37);
        v176 = v35;
      }
      if ( v14 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        NodeShiftedColor = ((_WORD)v14 - 1) << byte_14034EB89;
      }
      else
      {
        CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
        NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
      }
      v40 = 1LL;
      LOWORD(v40) = (1 << byte_14034EB98) - 1;
      if ( v36 >= 2u )
        p_PageColor = &CurrentPrcb->PageColor;
      else
        p_PageColor = (unsigned int *)(a5 + 192);
      v179 = p_PageColor;
      if ( v175 >> 3 == 3 && (v175 & 7) != 0 )
        v42 = 2LL;
      else
        v42 = v175 >> 3 != 1;
      v43 = v178;
      v44 = 0LL;
      v45 = 0LL;
      v183 = 0LL;
      v46 = 0x58000000000LL;
      v47 = 0xFFFFFFFFFLL;
      v170 = MiPlatformCacheAttributes[(unsigned int)v42];
      v48 = 0xFFFFFFFFFLL;
      if ( !v178 )
        goto LABEL_162;
      v49 = v174;
      v50 = NodeShiftedColor;
      v51 = (1 << byte_14034EB98) - 1;
      v52 = v174 & 2;
      v184 = (unsigned __int16)v40;
      v186 = v50;
      while ( 1 )
      {
        v53 = v50 | (unsigned int)(unsigned __int16)(v51 & ++*(_WORD *)p_PageColor);
        if ( v52 )
          v54 = 2LL;
        else
          v54 = 0LL;
        Page = MiGetPage(v35, v53, v54);
        v56 = Page;
        if ( Page == -1 )
        {
LABEL_158:
          v178 = v45;
          v43 = v45;
LABEL_159:
          if ( v183 )
            MiChangePageAttributeBatch(v183, v170, ZeroPte);
          v46 = 0x58000000000LL;
          v47 = 0xFFFFFFFFFLL;
          v32 = 0LL;
LABEL_162:
          if ( v44 )
          {
            result = 273LL;
            v170 = 273;
            if ( (v10 & 0x20) != 0 )
              v32 = (unsigned int *)v181;
            v179 = v32;
            v176 = 0LL;
            if ( !v43 )
              return result;
            v71 = v191;
            v72 = 0x2AAAAAAAAAAAAAABLL;
            while ( 2 )
            {
              v73 = *(_QWORD *)v71;
              if ( v71 + 0x90482413000LL <= 0x7F8
                && (unsigned int)MiPteHasShadow(v42, v40)
                && (v73 & 1) != 0
                && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
              {
                v74 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
                if ( v74 )
                {
                  v75 = *(_QWORD *)(v74 + 8 * ((v71 >> 3) & 0x1FF));
                  if ( (v75 & 0x20) != 0 )
                    v73 |= 0x20uLL;
                  if ( (v75 & 0x42) != 0 )
                    v73 |= 0x42uLL;
                }
              }
              v76 = (volatile signed __int64 *)(v44 + 24);
              v77 = v47 & *(_QWORD *)(v44 + 24);
              v171 = v73;
              v78 = v44;
              if ( v77 == v47 )
                v44 = 0LL;
              else
                v44 = 48 * v77 - v46;
              v79 = *v76;
              v80 = _InterlockedCompareExchange64(v76, *v76 & 0xFFFFFFF000000000uLL, *v76);
              if ( v79 != v80 )
              {
                do
                {
                  v81 = v80;
                  v80 = _InterlockedCompareExchange64(v76, v80 & 0xFFFFFFF000000000uLL, v80);
                }
                while ( v81 != v80 );
              }
              v82 = ((unsigned __int64)((unsigned __int128)((v46 + v78) * (__int128)v72) >> 64) >> 63)
                  + ((__int64)((unsigned __int128)((v46 + v78) * (__int128)v72) >> 64) >> 3);
              v83 = v169 | 0x10;
              v169 |= 0x10u;
              if ( v180 && (v83 = v169, *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 4) )
              {
                DemandZeroPte = v171;
                v85 = v175;
              }
              else
              {
                if ( (v73 & 0x400) != 0 )
                {
                  PrototypePteDirect = MiGetPrototypePteDirect(
                                         v73,
                                         (unsigned __int128)((v46 + v78) * (__int128)v72) >> 64,
                                         v72,
                                         0xFFFFFFF000000000uLL);
                  if ( PrototypePteDirect )
                  {
                    v86 = 0;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)v76, 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v86 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                          _mm_pause();
                        else
                          HvlNotifyLongSpinWait(v86);
                      }
                      while ( *v76 < 0 || _interlockedbittestandset64((volatile signed __int32 *)v76, 0x3FuLL) );
                    }
                    *(_QWORD *)(v78 + 40) = *(_QWORD *)(v78 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x100000000000000LL;
                    _InterlockedAnd64(v76, 0x7FFFFFFFFFFFFFFFuLL);
                    v87 = v171;
                  }
                  else if ( (v73 & 0x3E0) != 0 )
                  {
                    v87 = v73 & 0xFFFFFFFFFFFFFBFFuLL;
                  }
                  else
                  {
                    v87 = 0LL;
                  }
                  v88 = (void *)MiMapPageInHyperSpaceWorker(v82, 0LL, 0x80000000LL);
                  memset64(v88, v87 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
                  MiUnmapPageInHyperSpaceWorker((__int64)v88, 0x11u);
                  DemandZeroPte = MiMakeDemandZeroPte(4LL);
                  v83 = v169 | 8;
                  v169 |= 8u;
                }
                else
                {
                  DemandZeroPte = v171;
                }
                v85 = v175;
                if ( v175 != 31 && (v175 & 2) != 0 )
                {
                  if ( v189 + 0x98000000000LL > 0x7FFFFFFFFFLL && (BYTE2(MiFlags) & 3u) > 1 )
                  {
                    v89 = 2;
                    if ( (v175 & 4) != 0 && (v175 & 5) != 5 )
                      v89 = 3;
                    MiMarkPfnVerified(v78, v89);
                  }
                  v83 = v169;
                }
              }
              v90 = v185;
              if ( v185 )
              {
                v83 |= 0x20u;
                v169 = v83;
              }
              MiInitializePfn(v78, (__int64 *)v71, v85, v83);
              if ( (v169 & 8) != 0 )
                *(_QWORD *)(v78 + 16) = DemandZeroPte;
              if ( v90 )
              {
                TransitionPte = MiMakeTransitionPte(v82, v85);
                v171 = TransitionPte;
                *(_QWORD *)v71 = TransitionPte;
                if ( v71 + 0x90482413000LL <= 0x7F8 )
                  MiWritePteShadow(v71, TransitionPte);
                if ( v173 )
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(v172 + 920), 1uLL);
                MiLockAndDecrementShareCount(v78, 0LL);
                MiAdvanceFaultList(v181);
                goto LABEL_219;
              }
              v40 = (signed __int64)MmHighestUserAddress;
              v92 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              if ( v71 <= v92 && v71 >= 0xFFFFF68000000000uLL )
              {
                v93 = a5;
                v40 = MmProtectToPteMask[v85] & 0xFFFFFFFFFFFFFF7FuLL;
                v94 = v40 | (((16 * (v82 & 0xFFFFFFFFFLL)) | HIBYTE(word_14034EC18) & 1) << 8) | 0x25;
                v171 = v94;
                goto LABEL_265;
              }
              v93 = a5;
              v95 = v82 << 12;
              if ( (*(_BYTE *)(a5 + 216) & 7u) < 2 )
              {
                v94 = MmProtectToPteMask[v85] ^ (v95 ^ MmProtectToPteMask[v85]) & 0xFFFFFFFFF000LL | 0x21;
                v171 = v94;
                if ( v71 + 0x904C0000000LL <= 0x3FFFFFFF )
                {
                  v94 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
                  v171 = v94;
                }
                if ( v71 <= v92 && v71 >= 0xFFFFF68000000000uLL
                  || v71 >= 0xFFFFF6FB40000000uLL
                  && v71 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
                  || v71 >= 0xFFFFF6FB7DA00000uLL
                  && v71 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
                  || v71 >= 0xFFFFF6FB7DBED000uLL
                  && (v40 = ((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF, v71 <= 8 * v40 - 0x90482413000LL) )
                {
                  v94 |= 4uLL;
                  v171 = v94;
                }
                if ( v71 >= 0xFFFFF6C000000000uLL )
                {
                  if ( v71 + 0x90380000000LL <= 0x3FFFFFFF || v71 + 0x904C0000000LL <= 0x3FFFFFF8 )
                    goto LABEL_265;
                  v40 = 3221225464LL;
                  v98 = HIBYTE(word_14034EC18);
                  if ( v71 + 0x90540000000LL > 0xBFFFFFF8 )
                    v98 = (unsigned __int8)word_14034EC18;
                }
                else
                {
                  v98 = HIBYTE(word_14034EC18);
                }
                if ( v98 )
                {
                  v94 |= 0x100uLL;
                  goto LABEL_264;
                }
              }
              else
              {
                v96 = MmProtectToPteMask[v85] ^ (v95 ^ MmProtectToPteMask[v85]) & 0xFFFFFFFFF000LL | 0x21;
                if ( v71 + 0x904C0000000LL <= 0x3FFFFFFF )
                  v96 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
                if ( v71 <= v92 && v71 >= 0xFFFFF68000000000uLL
                  || v71 >= 0xFFFFF6FB40000000uLL
                  && v71 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
                  || v71 >= 0xFFFFF6FB7DA00000uLL
                  && v71 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
                  || v71 >= 0xFFFFF6FB7DBED000uLL
                  && v71 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
                {
                  v96 |= 4uLL;
                }
                v40 = (unsigned __int8)word_14034EC18;
                if ( v71 < 0xFFFFF6C000000000uLL )
                {
                  v97 = HIBYTE(word_14034EC18);
                  goto LABEL_242;
                }
                if ( v71 + 0x90380000000LL > 0x3FFFFFFF && v71 + 0x904C0000000LL > 0x3FFFFFF8 )
                {
                  v97 = HIBYTE(word_14034EC18);
                  if ( v71 + 0x90540000000LL > 0xBFFFFFF8 )
                    v97 = (unsigned __int8)word_14034EC18;
LABEL_242:
                  if ( v97 )
                    v96 |= 0x100uLL;
                }
                v94 = v96 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
LABEL_264:
                v171 = v94;
              }
LABEL_265:
              if ( (v94 & 0x800) != 0 )
              {
                v94 |= 0x42uLL;
                v171 = v94;
              }
              if ( v180 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
              {
                *(_QWORD *)v71 = v94;
                if ( v71 + 0x90482413000LL <= 0x7F8 )
                  MiWritePteShadow(v71, v94);
              }
              else
              {
                Wsle = MiAllocateWsle(v93, v71, v78, 0LL, v94, v179);
                v179 = 0LL;
                if ( Wsle )
                {
                  if ( v173 )
                  {
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(v172 + 920), 1uLL);
                    __incgsdword(0x2E1Cu);
                    goto LABEL_219;
                  }
                }
                else
                {
                  v100 = 48 * (*(_QWORD *)(v78 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
                  MiReleaseFreshPage(v78);
                  MiLockAndDecrementShareCount(v100, 0LL);
                  v40 = 3221225495LL;
                  v101 = v170;
                  if ( !v176 )
                    v101 = -1073741801;
                  v102 = (unsigned __int64)v176 + 1;
                  v170 = v101;
                  v176 = (__int16 *)v102;
                  if ( v102 < v178 )
                  {
                    v103 = v178 - v102;
                    v176 = (__int16 *)v178;
                    do
                    {
                      v104 = v44;
                      v105 = *(_QWORD *)(v44 + 24) & 0xFFFFFFFFFLL;
                      if ( v105 == 0xFFFFFFFFFLL )
                        v44 = 0LL;
                      else
                        v44 = 48 * v105 - 0x58000000000LL;
                      MiReleaseFreshPage(v104);
                      --v103;
                    }
                    while ( v103 );
                  }
                }
                __incgsdword(0x2E1Cu);
              }
LABEL_219:
              v71 += 8LL;
              v42 = (unsigned __int64)v176 + 1;
              v47 = 0xFFFFFFFFFLL;
              v72 = 0x2AAAAAAAAAAAAAABLL;
              v176 = (__int16 *)v42;
              v46 = 0x58000000000LL;
              if ( v42 >= v178 )
                return v170;
              continue;
            }
          }
          return 3221225495LL;
        }
        v44 = 48 * Page - 0x58000000000LL;
        if ( *(_QWORD *)(v44 + 16) && (v49 & 0x40) != 0 )
        {
          MiZeroPhysicalPage(Page, 1, v170);
          *(_QWORD *)(v44 + 16) = 0LL;
          _InterlockedOr(v167, 0);
          MiSetPfnTbFlushStamp(v44, (unsigned int)KiTbFlushTimeStamp, 0);
        }
        v57 = *(_BYTE *)(v44 + 34);
        if ( v57 >> 6 != v170 )
        {
          if ( v170 != 1
            || (v57 & 0xC0) != 0xC0
            && (v68 = *(_BYTE *)(v44 + 31) & 0xF,
                _InterlockedOr(v167, 0),
                v69 = ((_BYTE)KiTbFlushTimeStamp - v68) & 0xF,
                v69 <= 2)
            && ((v68 & 1) != 0 || v69 < 2) )
          {
            *(_QWORD *)(v44 + 16) = v183;
            v183 = v44;
            goto LABEL_127;
          }
          MiChangePageAttribute(v44, 1LL, 4LL);
        }
        v58 = *(_QWORD *)(v44 + 24);
        v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 24), v58 & 0xF0FFFFFFFFFFFFFFuLL, v58);
        if ( v58 != v59 )
        {
          do
          {
            v60 = v59;
            v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 24), v59 & 0xF0FFFFFFFFFFFFFFuLL, v59);
          }
          while ( v60 != v59 );
        }
LABEL_127:
        v40 = *(_QWORD *)(v44 + 24);
        v61 = v48 & 0xFFFFFFFFFLL;
        v42 = v61 | v40 & 0xFFFFFFF000000000uLL;
        v62 = _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 24), v42, v40);
        if ( v40 != v62 )
        {
          do
          {
            v42 = v62;
            v62 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v44 + 24),
                    v61 | v62 & 0xFFFFFFF000000000uLL,
                    v62);
          }
          while ( v42 != v62 );
        }
        ++v45;
        v48 = v56;
        if ( (v45 & 0xF) == 0 && (*(_DWORD *)a5 & 0x40000000) != 0 )
          goto LABEL_158;
        v42 = (unsigned __int64)KeGetCurrentPrcb();
        v63 = *(_DWORD *)(v42 + 22636);
        v64 = *(_DWORD *)(v42 + 11756);
        v65 = *(_DWORD *)(v42 + 23328);
        v40 = v63 > 7;
        if ( (v64 & 1) == 0 )
        {
          v66 = 0;
          if ( (v64 & 0x1E) != 0 )
          {
            v67 = 2;
            goto LABEL_153;
          }
          if ( *(_BYTE *)(v42 + 11753) )
          {
            v67 = 3;
            goto LABEL_153;
          }
          v70 = *(_QWORD *)(v42 + 16);
          if ( v70 && v70 != *(_QWORD *)(v42 + 8) )
          {
            v67 = 4;
            goto LABEL_153;
          }
LABEL_146:
          if ( v63 <= 7 )
            goto LABEL_156;
          if ( !v66 )
            goto LABEL_152;
          goto LABEL_148;
        }
        v66 = 1;
        if ( v65 <= 7 )
          goto LABEL_146;
        if ( *(_BYTE *)(v42 + 11753) )
        {
          v67 = 1;
          goto LABEL_153;
        }
LABEL_148:
        if ( (v64 & 0x1E) != 0 )
        {
          v67 = 5;
          goto LABEL_153;
        }
        if ( *(_QWORD *)(v42 + 8) != *(_QWORD *)(v42 + 24) )
        {
          v67 = 6;
          goto LABEL_153;
        }
LABEL_152:
        _disable();
        *(_DWORD *)(v42 + 22636) = 0;
        *(_DWORD *)(v42 + 23328) = 0;
        _enable();
        v67 = 0;
LABEL_153:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v67, v63, v65);
        if ( v67 )
          goto LABEL_158;
LABEL_156:
        v43 = v178;
        if ( v45 >= v178 )
          goto LABEL_159;
        p_PageColor = v179;
        v49 = v174;
        v51 = v184;
        v50 = v186;
        v35 = v176;
      }
    }
    v32 = 0LL;
    goto LABEL_98;
  }
  v106 = v191;
  v107 = *(_QWORD *)v191;
  if ( v191 + 0x90482413000LL <= 0x7F8 )
    LOBYTE(v107) = MiReadPteShadow(v191, *(_QWORD *)v191);
  v108 = MiSystemPartition;
  v109 = MiSystemPartition;
  if ( (*(_BYTE *)(a5 + 216) & 7) == 0 )
    v109 = MiPartitionIdToPointer(*(_WORD *)(a5 + 180));
  if ( (v107 & 8) != 0 )
    v108 = v109;
  v110 = 0;
  v176 = v108;
  v174 = 0;
  if ( ((v10 & 4) != 0 || (v10 & 0x10) != 0) && (v10 & 1) != 0 )
  {
    v111 = MiCheckVirtualAddress(v189, &v175, (__int64 *)&v182);
    v112 = v175;
    if ( (v10 & 0x10) != 0 && v175 >> 3 != 1 && (v175 >> 3 != 3 || (v175 & 7) == 0) )
    {
      v113 = (unsigned __int64 *)(((v191 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v114 = *v113;
      if ( (unsigned __int64)(v113 + 0x12090482600LL) <= 0x7F8 )
        v114 = MiReadPteShadow(v113, *v113);
      v171 = v114;
      if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
        v114 = MiReadPteShadow(&v171, v114);
      MiUnlockProtoPoolPage(48 * ((v114 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0x11u);
      return 0LL;
    }
    if ( v111 )
    {
      v179 = v182;
      if ( v182 )
      {
        if ( v175 != 24 && (v175 & 0xFFFFFFF8) != 0x10 )
        {
          v115 = *((_QWORD *)v182 + 15);
          if ( (v115 & 0x8000000000000000uLL) != 0 )
          {
            v10 |= 2u;
            v116 = *(_QWORD *)v115 - 1LL;
            v173 = v10;
            v180 = v116 >> 12;
          }
          else
          {
            v180 = 0LL;
          }
          v117 = (v189 >> 12) + 1;
          v118 = MiComputeZeroClusterMaximum(v181);
          v119 = v189;
          v120 = 1LL;
          v183 = v118;
          v178 = v118;
          v172 = 1LL;
          v121 = (__int64 *)(((v189 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( v118 > 1 )
          {
            v122 = v179;
            v123 = (unsigned __int64)(v121 + 0x12090482600LL);
            do
            {
              v124 = v121[1];
              ++v121;
              v123 += 8LL;
              if ( v123 <= 0x7F8 )
                v124 = MiReadPteShadow(v121, v124);
              if ( v124
                && ((v124 & 1) != 0
                 || (v124 & 0x400) == 0
                 || !(unsigned int)MiIsPrototypePteVadLookup(v124)
                 || ((v125 >> 5) & 0x1F) != v112) )
              {
                break;
              }
              ProtoPteAddress = MiGetProtoPteAddress(v122, v117, 0LL, &PrototypePteDirect);
              v127 = (_QWORD *)ProtoPteAddress;
              if ( !ProtoPteAddress
                || ((v191 ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0
                || (v10 & 2) != 0
                && v117 - (*((unsigned int *)v122 + 6) | ((unsigned __int64)*((unsigned __int8 *)v122 + 32) << 32)) > v180 )
              {
                goto LABEL_341;
              }
              v128 = *(_QWORD *)ProtoPteAddress;
              if ( (unsigned __int64)(v127 + 0x12090482600LL) <= 0x7F8 )
                v128 = MiReadPteShadow(v127, *v127);
              v171 = v128;
              if ( (v128 & 1) != 0 || !v128 || (v128 & 0x400) != 0 || (v128 & 0x800) != 0 )
                goto LABEL_341;
              if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
                LOBYTE(v128) = MiReadPteShadow(&v171, v128);
              if ( (v128 & 4) != 0 )
              {
LABEL_341:
                v120 = v172;
                break;
              }
              if ( (_DWORD)v112 == 256 )
                PrototypePteVadLookup = MiMakePrototypePteDirect(v127);
              else
                PrototypePteVadLookup = MiMakePrototypePteVadLookup((unsigned int)v112);
              v171 = PrototypePteVadLookup;
              v130 = PrototypePteVadLookup;
              v131 = *v121;
              if ( v123 <= 0x7F8 )
                v131 = MiReadPteShadow(v121, *v121);
              if ( !v131 )
              {
                *v121 = v130;
                if ( v123 <= 0x7F8 )
                  MiWritePteShadow(v121, v130);
                ++v174;
              }
              ++v117;
              v120 = v172 + 1;
              v172 = v120;
            }
            while ( v120 < v183 );
            v14 = v170;
            v110 = v174;
            v119 = v189;
          }
          v178 = v120;
          if ( v110 )
            MiUpdatePageTableUseCount(v119);
          v106 = v191;
        }
      }
    }
    v108 = v176;
  }
  v132 = (unsigned __int64 *)(((v106 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v133 = *v132;
  if ( (unsigned __int64)(v132 + 0x12090482600LL) <= 0x7F8 )
    v133 = MiReadPteShadow(v132, *v132);
  v171 = v133;
  if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
    v133 = MiReadPteShadow(&v171, v133);
  v168 = &v178;
  v167[8] = 66;
  v134 = 48 * ((v133 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v135 = (*(_DWORD *)v106 >> 5) & 0x1F;
  v179 = (unsigned int *)v134;
  v175 = v135;
  ZeroedPages = MiGetZeroedPages((__int64)v108, a5, v14, v135, 66, &v178);
  if ( !ZeroedPages )
  {
    MiUnlockProtoPoolPage(v134, 0x11u);
    return 3221225495LL;
  }
  v180 = v178;
  if ( !v178 )
    goto LABEL_416;
  v137 = (v10 >> 4) & 1;
  v170 = v137;
  do
  {
    v138 = *(_QWORD *)(ZeroedPages + 24) & 0xFFFFFFFFFLL;
    v139 = ZeroedPages;
    if ( v138 == 0xFFFFFFFFFLL )
      ZeroedPages = 0LL;
    else
      ZeroedPages = 48 * v138 - 0x58000000000LL;
    v140 = (v139 + 0x58000000000LL) / 48;
    if ( (MiFlags & 0x80u) != 0
      && v140 < 0x200000
      && (*(_BYTE *)(48 * v140 - 0x57FFFFFFFDDLL) & 0x40) == 0
      && (++dword_14034F204 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v141 = MiMapPageInHyperSpaceWorker(v140, v177, 0x80000000LL);
        if ( KeCheckForZeroPage(v141) )
          MiPageNotZero(v141, v140);
        MiUnmapPageInHyperSpaceWorker(v141, v177[0]);
        v137 = v170;
      }
    }
    v142 = (__int64 *)v191;
    v143 = (*(_DWORD *)v191 >> 5) & 0x1F;
    v175 = (*(_DWORD *)v191 >> 5) & 0x1F;
    if ( (BYTE2(MiFlags) & 3u) > 1 && (v143 & 2) != 0 )
    {
      v144 = 2;
      if ( (v143 & 4) != 0 && (v143 & 5) != 5 )
        v144 = 3;
      MiMarkPfnVerified(v139, v144);
      v142 = (__int64 *)v191;
    }
    v145 = v169 | 0x112;
    v169 |= 0x112u;
    if ( v137 || (((_DWORD)v143 - 4) & 0xFFFFFFFD) != 0 )
    {
      v145 |= 0x20u;
      v169 = v145;
    }
    MiInitializePfn(v139, v142, v143, v145);
    v146 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v191 <= v146 && v191 >= 0xFFFFF68000000000uLL )
    {
      v147 = (16 * (v140 & 0xFFFFFFFFFLL)) | HIBYTE(word_14034EC18) & 1;
      v148 = (_QWORD *)v191;
      v149 = MmProtectToPteMask[v143] & 0xFFFFFFFFFFFFFF7FuLL | (v147 << 8) | 0x25;
LABEL_407:
      v171 = v149;
      goto LABEL_408;
    }
    v150 = v140 << 12;
    if ( (*(_BYTE *)(a5 + 216) & 7u) >= 2 )
    {
      v151 = v150 ^ MmProtectToPteMask[v143];
      v148 = (_QWORD *)v191;
      v152 = MmProtectToPteMask[v143] ^ v151 & 0xFFFFFFFFF000LL | 0x21;
      if ( v191 + 0x904C0000000LL <= 0x3FFFFFFF )
        v152 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v191 <= v146 && v191 >= 0xFFFFF68000000000uLL
        || v191 >= 0xFFFFF6FB40000000uLL
        && v191 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || v191 >= 0xFFFFF6FB7DA00000uLL
        && v191 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || v191 >= 0xFFFFF6FB7DBED000uLL
        && v191 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v152 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v191) )
        v152 |= 0x100uLL;
      v149 = v152 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
      v137 = v170;
      goto LABEL_407;
    }
    v153 = v150 ^ MmProtectToPteMask[v143];
    v148 = (_QWORD *)v191;
    v154 = MmProtectToPteMask[v143] ^ v153 & 0xFFFFFFFFF000LL | 0x21;
    v171 = v154;
    if ( v191 + 0x904C0000000LL <= 0x3FFFFFFF )
    {
      v154 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      v171 = v154;
    }
    if ( v191 <= v146 && v191 >= 0xFFFFF68000000000uLL
      || v191 >= 0xFFFFF6FB40000000uLL
      && v191 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
      || v191 >= 0xFFFFF6FB7DA00000uLL
      && v191 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
      || v191 >= 0xFFFFF6FB7DBED000uLL
      && v191 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
    {
      v171 = v154 | 4;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v191) )
    {
      v149 |= 0x100uLL;
      goto LABEL_407;
    }
LABEL_408:
    if ( (v149 & 0x800) != 0 )
    {
      v149 |= 0x42uLL;
      v171 = v149;
    }
    *v148 = v149;
    if ( (unsigned __int64)(v148 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v148, v149);
    if ( v137 )
    {
      MiLockAndDecrementShareCount(v139, 0LL);
      MiAdvanceFaultList(v181);
    }
    v106 = (unsigned __int64)(v148 + 1);
    v155 = v180-- == 1;
    v191 = v106;
  }
  while ( !v155 );
  LOBYTE(v10) = v173;
  v134 = (__int64)v179;
LABEL_416:
  v156 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v134 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v156 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v156);
    }
    while ( (*(_QWORD *)(v134 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v134 + 24), 0x3FuLL) );
  }
  *(_BYTE *)(v134 + 34) &= ~0x20u;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v134) )
    MiPfnReferenceCountIsZero(v134, (v134 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v134 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v158 = v178;
  v159 = 273;
  v160 = v106 - 8 * v178;
  v161 = 0LL;
  if ( (v10 & 0x10) != 0 )
    v158 = 0LL;
  v178 = v158;
  if ( v158 )
  {
    v162 = a3;
    do
    {
      v163 = *(_QWORD *)v160;
      if ( v160 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(v158, v157)
        && (v163 & 1) != 0
        && ((v163 & 0x20) == 0 || (v163 & 0x42) == 0) )
      {
        v164 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v164 )
        {
          v165 = *(_QWORD *)(v164 + 8 * ((v160 >> 3) & 0x1FF));
          if ( (v165 & 0x20) != 0 )
            v163 |= 0x20uLL;
          if ( (v165 & 0x42) != 0 )
            v163 |= 0x42uLL;
        }
      }
      v166 = MiCompleteProtoPteFault(a5, a6, v189, v163, a1, 1, v162);
      v189 += 4096LL;
      if ( !v161 )
      {
        v158 = (unsigned __int8)v10;
        if ( v166 < 0 )
          v159 = v166;
        LOBYTE(v158) = v10 & 0x20;
        if ( (v10 & 0x20) != 0 )
          v162 = 0LL;
      }
      __incgsdword(0x2E1Cu);
      ++v161;
      v160 += 8LL;
    }
    while ( v161 < v178 );
  }
  return v159;
}
