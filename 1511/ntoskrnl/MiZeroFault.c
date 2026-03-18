/*
 * XREFs of MiZeroFault @ 0x14004D290
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUpdatePageTableUseCount @ 0x14001EC38 (MiUpdatePageTableUseCount.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiSetPfnTbFlushStamp @ 0x140071D20 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiAdvanceFaultList @ 0x1400AD868 (MiAdvanceFaultList.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     MiAllowGuardFault @ 0x1400E5F90 (MiAllowGuardFault.c)
 *     MiComputeZeroClusterMaximum @ 0x1400E71AC (MiComputeZeroClusterMaximum.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiWaitForForkToComplete @ 0x14012FC18 (MiWaitForForkToComplete.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPrefetchJumpVad @ 0x1401D6AD0 (MiPrefetchJumpVad.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 *     EtwTraceShouldYieldProcessor @ 0x14020E308 (EtwTraceShouldYieldProcessor.c)
 *     MiCheckForUserStackOverflow @ 0x1404A7F9C (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiZeroFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned __int64 a3,
        __int64 a4,
        _BYTE *a5,
        int *a6,
        _QWORD *a7,
        __int64 *a8)
{
  _QWORD *v9; // rdi
  unsigned int v10; // r15d
  ULONG_PTR PteAddress; // rax
  ULONG_PTR v12; // r10
  unsigned __int64 v13; // r8
  __int64 v15; // r12
  __int64 v16; // r13
  _KPROCESS *Process; // r11
  ULONG_PTR v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // rbx
  ULONG_PTR v21; // rdi
  int v22; // r9d
  __int64 VadEvent; // rax
  int v24; // r9d
  __int64 ProtoPteAddress; // rax
  unsigned int v26; // eax
  ULONG_PTR v27; // rsi
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  _QWORD *v30; // rcx
  __int64 v31; // r8
  ULONG_PTR v32; // rsi
  __int64 v33; // r11
  unsigned __int64 v34; // rbx
  _QWORD *v35; // rdi
  int *v36; // r10
  char v37; // r9
  unsigned __int8 v38; // r9
  unsigned __int16 v39; // ax
  struct _KPRCB *CurrentPrcb; // rax
  int v41; // edx
  unsigned int *p_PageColor; // rcx
  unsigned __int16 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 Page; // rax
  unsigned __int64 v48; // r9
  __int64 v49; // rbx
  unsigned __int8 v50; // cl
  signed __int64 v51; // rdx
  signed __int64 v52; // r8
  signed __int64 v53; // rcx
  signed __int64 v54; // rdx
  __int64 v55; // rdi
  signed __int64 v56; // r8
  signed __int64 v57; // rcx
  struct _KPRCB *v58; // rcx
  unsigned int v59; // ebx
  unsigned int DpcWatchdogCount; // r11d
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcTimeCount; // r10d
  char v63; // cl
  unsigned int v64; // eax
  _KTHREAD *NextThread; // rax
  unsigned int v66; // ecx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  int v72; // r13d
  __int64 v73; // rax
  unsigned int v74; // r12d
  __int64 *v75; // r15
  __int64 v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // rax
  bool v79; // zf
  int v80; // ecx
  __int64 v81; // rax
  __int64 v82; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue_high; // r12d
  unsigned int v85; // r12d
  char v86; // al
  __int64 v87; // rax
  char v88; // cl
  __int64 v89; // rbx
  __int64 v90; // rbx
  unsigned __int64 v91; // r15
  unsigned __int64 v92; // r12
  unsigned __int64 v93; // rdi
  __int64 v94; // rdx
  unsigned __int64 v95; // rsi
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r13
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rbx
  __int64 v104; // rdx
  __int64 Wsle; // rax
  int v106; // eax
  __int64 v107; // rsi
  __int64 v108; // rcx
  unsigned __int64 v109; // r8
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rdi
  unsigned __int64 v112; // rcx
  unsigned int v113; // r13d
  _QWORD *v114; // rax
  char v115; // al
  unsigned __int64 v116; // rdx
  ULONG_PTR v117; // rax
  unsigned int v118; // ecx
  ULONG_PTR v119; // r8
  unsigned __int64 v120; // rax
  __int64 v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rbx
  _QWORD *v124; // rdi
  _QWORD *v125; // rcx
  unsigned __int64 v126; // rsi
  _QWORD *v127; // rdx
  __int64 v128; // rax
  unsigned __int64 v129; // r11
  unsigned __int64 v130; // r14
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  unsigned __int64 v134; // rbx
  unsigned __int64 v135; // r15
  unsigned __int64 v136; // r11
  __int64 v137; // rdi
  unsigned __int64 v138; // r13
  unsigned __int64 v139; // rdx
  _QWORD *v140; // r11
  unsigned __int64 v141; // rsi
  __int64 v142; // rbx
  _QWORD *v143; // rdx
  __int64 v144; // rbx
  unsigned __int64 v145; // rax
  _QWORD *v146; // rcx
  signed __int32 v147[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v148; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v149; // [rsp+34h] [rbp-CCh]
  unsigned int v150; // [rsp+38h] [rbp-C8h]
  unsigned int v151; // [rsp+3Ch] [rbp-C4h]
  _QWORD *v152; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v153; // [rsp+48h] [rbp-B8h]
  int v154; // [rsp+50h] [rbp-B0h]
  _BYTE *v155; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v157; // [rsp+68h] [rbp-98h]
  int i; // [rsp+70h] [rbp-90h]
  unsigned int v159; // [rsp+74h] [rbp-8Ch]
  unsigned int v160; // [rsp+78h] [rbp-88h]
  unsigned __int64 v161; // [rsp+80h] [rbp-80h]
  _QWORD *v162; // [rsp+88h] [rbp-78h]
  unsigned int v163; // [rsp+90h] [rbp-70h]
  unsigned __int64 v164; // [rsp+98h] [rbp-68h]
  int *v165; // [rsp+A0h] [rbp-60h]
  __int64 *v166; // [rsp+A8h] [rbp-58h]
  _QWORD *v167; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v168; // [rsp+B8h] [rbp-48h]
  int v169; // [rsp+C0h] [rbp-40h] BYREF
  int v170; // [rsp+C4h] [rbp-3Ch] BYREF
  int v171; // [rsp+C8h] [rbp-38h] BYREF
  int v172; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v173; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v174; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v175; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v176; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v177; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v178; // [rsp+F8h] [rbp-8h]
  __int64 v179; // [rsp+100h] [rbp+0h]
  unsigned __int64 v180; // [rsp+108h] [rbp+8h]
  unsigned __int64 v181; // [rsp+110h] [rbp+10h]
  unsigned __int64 v182; // [rsp+118h] [rbp+18h]
  __int64 v183; // [rsp+120h] [rbp+20h]

  v165 = a6;
  v9 = (_QWORD *)a3;
  v162 = a7;
  v10 = 0;
  v166 = a8;
  v149 = a4;
  v152 = (_QWORD *)a3;
  BugCheckParameter1 = a2;
  v155 = a5;
  *a5 = 1;
  v154 = 0;
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v10 = 1;
    v154 = 1;
    goto LABEL_11;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v10 = 2;
    }
    else
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_11;
      if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        v10 = 8;
    }
    v154 = v10;
  }
LABEL_11:
  if ( (v10 & 0xB) != 0 )
    v157 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  else
    v157 = 0LL;
  PteAddress = MiGetPteAddress(a2, a2, a3, a4);
  v12 = BugCheckParameter1;
  v167 = (_QWORD *)PteAddress;
  v13 = 0x98000000000LL;
  if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( (v10 & 2) != 0 )
      return 0LL;
    if ( BugCheckParameter1 + 0x98000000000LL <= 0x7FFFFFFFFFLL && v9 )
      KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, PteAddress, 6uLL);
  }
  v15 = 0LL;
  LODWORD(v16) = 4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v161 = (unsigned __int64)Process;
  if ( BugCheckParameter1 > (unsigned __int64)MmHighestUserAddress )
  {
    if ( BugCheckParameter1 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
    {
      v19 = 4;
      v148 = 4;
      v20 = 0LL;
      goto LABEL_73;
    }
    goto LABEL_25;
  }
  v18 = BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL;
  if ( (BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000
    || (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 1) != 0 )
  {
    v13 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    v15 = *(_QWORD *)(v13 + 1568);
    if ( !v15 )
    {
LABEL_24:
      v15 = 0LL;
      goto LABEL_25;
    }
    v21 = BugCheckParameter1 >> 12;
    if ( BugCheckParameter1 >> 12 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
      || v21 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
    {
      v15 = *(_QWORD *)(v13 + 1552);
      if ( v15 )
      {
        while ( 1 )
        {
          if ( v21 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
          {
            v15 = *(_QWORD *)(v15 + 8);
          }
          else
          {
            if ( v21 >= (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) )
            {
              *(_QWORD *)(v13 + 1568) = v15;
              goto LABEL_41;
            }
            v15 = *(_QWORD *)v15;
          }
          if ( !v15 )
            goto LABEL_24;
        }
      }
      goto LABEL_24;
    }
LABEL_41:
    if ( v18 == 2147352576 && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 1) == 0 )
    {
      v19 = 1;
      v148 = 1;
      v20 = qword_1402FE6A8;
      goto LABEL_71;
    }
    v22 = *(_DWORD *)(v15 + 48);
    v13 = v22 & 7;
    if ( (_DWORD)v13 == 2 && (*(_DWORD *)(v15 + 64) & 0x20000000) != 0 )
    {
      VadEvent = MiLocateVadEvent(v15, 32LL);
      if ( VadEvent )
      {
        if ( *(struct _KTHREAD **)(VadEvent + 16) != KeGetCurrentThread() )
          goto LABEL_48;
      }
    }
    if ( (v22 & 0x80000) != 0 )
    {
      v20 = 0LL;
      v19 = 24;
      v148 = 24;
    }
    else if ( (_DWORD)v13 == 1 )
    {
      v20 = 0LL;
      v19 = 24;
      v148 = 24;
    }
    else if ( (v22 & 0x8000) != 0 )
    {
      if ( (_DWORD)v13 == 3 || (_DWORD)v13 == 5 || *(int *)(v15 + 52) >= 0 )
      {
LABEL_48:
        v20 = 0LL;
        v19 = 24;
        v148 = 24;
        goto LABEL_71;
      }
      v20 = 0LL;
      v19 = (unsigned __int8)v22 >> 3;
      v148 = v19;
    }
    else if ( (*(_BYTE *)(v15 + 67) & 1) != 0 )
    {
      v20 = 0LL;
      v19 = 24;
      v148 = 24;
    }
    else
    {
      v24 = (unsigned __int8)v22 >> 3;
      v148 = v24;
      if ( v24 == 7 )
      {
        if ( (_DWORD)v13 == 2 )
          v24 = 256;
        v148 = v24;
      }
      ProtoPteAddress = MiGetProtoPteAddress(v15, v21, 0, &v174);
      v19 = v148;
      v13 = *(_QWORD *)(v15 + 120);
      v20 = ProtoPteAddress;
      if ( !ProtoPteAddress )
        v19 = 24;
      v148 = v19;
      if ( (v13 & 0x8000000000000000uLL) != 0 )
      {
        if ( v21 - (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) > (unsigned __int64)(*(_QWORD *)v13 - 1LL) >> 12 )
          v19 = 24;
        v148 = v19;
      }
      v12 = BugCheckParameter1;
      Process = (_KPROCESS *)v161;
    }
LABEL_71:
    if ( v19 != 24 )
    {
      v9 = v152;
      goto LABEL_73;
    }
LABEL_25:
    if ( v12 >= 0x10000
      && (char *)v12 <= (char *)MmHighestUserAddress - 0x10000
      && !v15
      && (BugCheckParameter2 & 2) != 0
      && Process == PsInitialSystemProcess )
    {
      KeBugCheckEx(0x1Au, 0x4477uLL, v12, 0LL, 0LL);
    }
    if ( (v10 & 2) != 0 && v15 )
      MiPrefetchJumpVad(v157, v15, v12);
    return 3221225477LL;
  }
  v19 = 1;
  v148 = 1;
  v20 = qword_1402FE6A8;
LABEL_73:
  v26 = v19 >> 3;
  v160 = v19 >> 3;
  if ( v19 >> 3 == 2 )
  {
    if ( (v10 & 2) == 0 )
    {
      if ( (unsigned int)MiAllowGuardFault(v9) )
      {
        v27 = BugCheckParameter1;
        MiUpdatePageTableUseCount(BugCheckParameter1, 1u);
        v28 = 32LL * (v148 & 0xF);
        if ( v20 )
          v28 |= 0xFFFFFFFF00000400uLL;
        v29 = v167;
        v30 = v167;
        *v167 = v28;
        if ( (unsigned int)MiPteInShadowRange(v30) )
          MiWritePteShadow(v29, v28);
        MiUnlockWorkingSetExclusive(v161 + 1280, v149, v31);
        *v155 = 2;
        return MiCheckForUserStackOverflow(v27);
      }
      return 3221225477LL;
    }
    return 0LL;
  }
  if ( (v10 & 2) != 0 && (*(_DWORD *)(v157 + 80) & 0x4000) != 0 )
  {
    v10 |= 4u;
    v154 = v10;
  }
  if ( v20 )
  {
    v151 = 0;
    if ( (v10 & 2) == 0 )
    {
      if ( v15 )
      {
        v107 = *(_QWORD *)(v15 + 120);
        if ( (v107 & 0x8000000000000000uLL) == 0 )
        {
          v108 = *(_QWORD *)(v15 + 120) & 0xFFFLL;
          v164 = v108;
          v109 = v107 & 0xFFFFFFFFFFFFF000uLL;
          v110 = (v107 & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)(v107 & 0xFFF) << 12);
          v153 = v107 & 0xFFFFFFFFFFFFF000uLL;
          v111 = v12 & 0xFFFFFFFFFFFFF000uLL | 1;
          v168 = v110;
          LOBYTE(v10) = v10 | 0x10;
          if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == v110 )
          {
            if ( v108 == 4095 )
              v111 = (v109 + 4096) | 0xFFF;
            else
              v111 = v109 | ((_WORD)v107 + 1) & 0xFFF;
          }
          else if ( v12 <= v110 || (v112 = (v12 - v110) >> 12, v161 = v112, v112 >= 8) )
          {
            if ( v110
              || v12 >> 12 != (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) )
            {
              LOBYTE(v10) = v10 & 0xEF;
            }
          }
          else
          {
            v113 = ((unsigned int)v167 >> 3) & 0x1FF;
            if ( v113 <= v112 )
            {
              if ( v113 )
                LOBYTE(v10) = v10 & 0xEF;
            }
            else
            {
              v113 = (v12 - v110) >> 12;
            }
            if ( (v10 & 0x10) != 0 )
            {
              v114 = v167 - 1;
              v152 = v167 - 1;
              if ( v113 )
              {
                while ( 1 )
                {
                  v115 = MI_READ_PTE_LOCK_FREE(v114);
                  if ( (v115 & 1) == 0 || (v115 & 0x20) == 0 )
                    break;
                  v114 = --v152;
                  if ( !--v113 )
                  {
                    v109 = v153;
                    LODWORD(v112) = v161;
                    goto LABEL_282;
                  }
                }
                LOBYTE(v10) = v10 & 0xEF;
              }
              else
              {
LABEL_282:
                if ( (unsigned int)(v112 + 1) + v164 > 0xFFF )
                  v111 = (v107 + ((unsigned __int64)((unsigned int)(v107 & 0xFFF) + (_DWORD)v112 - 4094) << 12)) | 0xFFF;
                else
                  v111 = v109 | ((_WORD)v112 + 1 + (_WORD)v107) & 0xFFF;
              }
            }
            LODWORD(v16) = 4;
          }
          if ( (v10 & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(v15 + 64) & 0x2000000) != 0 )
            {
              v117 = v168 - 4096;
              if ( !v168 )
                v117 = BugCheckParameter1;
              v116 = *(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32);
              if ( (((v117 >> 12) - v116) >> 8) + 1 == ((BugCheckParameter1 >> 12) - v116) >> 8 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v15 + 36));
                v151 = -1073741280;
              }
            }
          }
          else
          {
            *(_DWORD *)(v15 + 64) &= ~0x2000000u;
          }
          v19 = v148;
          *(_QWORD *)(v15 + 120) = v111;
        }
      }
    }
    v118 = 0;
    v119 = BugCheckParameter1;
    *v155 = 0;
    *v165 = v19;
    *v162 = v20;
    *v166 = v15;
    v120 = v119;
    while ( v120 > (unsigned __int64)MmHighestUserAddress )
    {
      ++v118;
      v120 = (__int64)(v120 << 25) >> 16;
      if ( v118 >= 3 )
        goto LABEL_313;
    }
    v171 = 0;
    v121 = MI_GET_USED_PTES_HANDLE(v119);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v121 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v171);
        while ( (*(_QWORD *)(v121 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v121 + 24), 0x3FuLL) );
      LODWORD(v16) = 4;
    }
    *(_QWORD *)(v121 + 16) ^= ((unsigned int)*(_QWORD *)(v121 + 16) ^ ((*(_QWORD *)(v121 + 16) & 0xFFFFC000) + 0x4000)) & 0xFFC000;
    _InterlockedAnd64((volatile signed __int64 *)(v121 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (__int64)(*(_QWORD *)(v121 + 8) | 0x8000000000000000uLL) >> 47 == -1
      || (__int64)(*(_QWORD *)(v121 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
    {
      v180 = (((*(_QWORD *)(v121 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v181 = ((v180 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v182 = ((v181 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v183 = ((v182 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v16 = (unsigned int)(v16 - 1);
        v122 = *(_QWORD *)*(&v180 + v16);
      }
      while ( (v122 & 1) != 0 && ((unsigned int)v16 > 1 || (v122 & 0x80u) == 0LL) && (_DWORD)v16 );
    }
    v19 = v148;
LABEL_313:
    if ( v19 == 256 )
      v123 = (v20 << 16) | 0x400;
    else
      v123 = 32 * (v19 & 0x1F | 0xFFFFFFFFF8000020uLL);
    v124 = v167;
    v125 = v167;
    *v167 = v123;
    if ( (unsigned int)MiPteInShadowRange(v125) )
      MiWritePteShadow(v124, v123);
    if ( (v10 & 2) != 0 && v15 )
    {
      v126 = *(_QWORD *)(v157 + 24);
      v127 = *(_QWORD **)(v157 + 32);
      v128 = *(_QWORD *)(v157 + 8);
      v129 = *(_QWORD *)(v157 + 16);
      v168 = v126;
      v130 = *(_QWORD *)(v128 + 16 * v126) + ((_QWORD)v127 << 12);
      v152 = v127;
      v164 = v129;
      MiAdvanceFaultList(v157);
      v134 = *(_QWORD *)(v157 + 24);
      v135 = 1LL;
      if ( v134 < v136 )
      {
        v137 = MiGetPteAddress(v130, v131, v132, v133) + 8;
        v138 = 256LL;
        v139 = (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32))
             - (BugCheckParameter1 >> 12)
             + 1;
        if ( v139 >= 0x100
          || (v138 = (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32))
                   - (BugCheckParameter1 >> 12)
                   + 1,
              v139 > 1) )
        {
          v140 = (_QWORD *)v157;
          while ( (v137 & 0xFFF) != 0 )
          {
            v141 = *(_QWORD *)(v140[1] + 16 * v134) + (v140[4] << 12);
            if ( (v141 & 0xFFFFFFFFFFFFF000uLL) - 4096 != (v130 & 0xFFFFFFFFFFFFF000uLL) )
              break;
            if ( !MI_READ_PTE_LOCK_FREE(v137) )
            {
              v142 = MiGetProtoPteAddress(v15, v141 >> 12, 0, &v175);
              if ( !v142 )
                break;
              v143 = *(_QWORD **)(v15 + 120);
              if ( (__int64)v143 < 0
                && (v141 >> 12)
                 - (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) > (unsigned __int64)(*v143 - 1LL) >> 12 )
              {
                break;
              }
              MiUpdatePageTableUseCount(BugCheckParameter1, 1u);
              if ( v148 == 256 )
                v144 = (v142 << 16) | 0x400;
              else
                v144 = 32 * (v148 & 0x1F | 0xFFFFFFFFF8000020uLL);
              *(_QWORD *)v137 = v144;
              if ( (unsigned int)MiPteInShadowRange(v137) )
                MiWritePteShadow(v137, v144);
            }
            ++v135;
            v137 += 8LL;
            MiAdvanceFaultList(v157);
            v134 = v140[3];
            if ( v134 != v164 )
            {
              v130 = v141;
              if ( v135 < v138 )
                continue;
            }
            break;
          }
          v126 = v168;
        }
      }
      v145 = v157;
      v146 = v152;
      *(_QWORD *)(v157 + 24) = v126;
      *(_QWORD *)(v145 + 32) = v146;
    }
    return v151;
  }
  if ( (v10 & 2) != 0 && ((v26 != 3 || (v19 & 7) == 0) && v26 != 1 || (v10 & 4) == 0)
    || Process[1].Affinity.Bitmap[10] && (unsigned int)MiWaitForForkToComplete(Process, v149) == 1 )
  {
    return 0LL;
  }
  v32 = BugCheckParameter2 >> 57;
  if ( v15 )
    v32 = (*(_DWORD *)(v15 + 48) >> 8) & 0x3F;
  v33 = 1LL;
  v153 = 1LL;
  if ( v15 )
  {
    if ( (v10 & 5) != 0 )
    {
      v153 = MiComputeZeroClusterMaximum(v157, v15, v13);
      v33 = v153;
      v34 = 1LL;
      if ( v153 > 1 )
      {
        v35 = v167 + 1;
        while ( !MI_READ_PTE_LOCK_FREE(v35) )
        {
          v33 = v153;
          ++v34;
          ++v35;
          if ( v34 >= v153 )
            goto LABEL_105;
        }
        v33 = v34;
        v153 = v34;
      }
    }
  }
LABEL_105:
  v36 = &MiSystemPartition;
  v37 = *(_BYTE *)(v161 + 1496);
  v165 = &MiSystemPartition;
  v38 = v37 & 7;
  if ( !v38 )
  {
    v39 = *(_WORD *)(v161 + 1460);
    if ( v39 != 1023 )
      v36 = *(int **)(qword_1402FEC28 + 8LL * v39);
    v165 = v36;
  }
  if ( (_DWORD)v32 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    LOWORD(v32) = ((_WORD)v32 - 1) << byte_1402FE6D9;
    v152 = (_QWORD *)v32;
    LOWORD(v41) = v32;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    LOWORD(v41) = CurrentPrcb->NodeShiftedColor;
  }
  p_PageColor = (unsigned int *)(v161 + 1472);
  v43 = (1 << byte_1402FE6E8) - 1;
  if ( v38 >= 2u )
    p_PageColor = &CurrentPrcb->PageColor;
  v166 = (__int64 *)p_PageColor;
  if ( v160 == 3 && (v148 & 7) != 0 )
    v44 = 2LL;
  else
    v44 = v160 != 1;
  v162 = 0LL;
  v45 = 0xFFFFFFFFFLL;
  v150 = MiPlatformCacheAttributes[v44];
  v46 = 0LL;
  v155 = 0LL;
  if ( !v33 )
    return 3221225495LL;
  v41 = (unsigned __int16)v41;
  v151 = v43;
  for ( i = (unsigned __int16)v41; ; v41 = i )
  {
    Page = MiGetPage(v36, (unsigned __int16)(v43 & ++*(_WORD *)p_PageColor) | (unsigned int)v41, 2LL);
    v49 = Page;
    if ( Page == -1 )
      break;
    v46 = 48 * Page - 0x58000000000LL;
    if ( *(_QWORD *)(v46 + 16) )
    {
      MiZeroPhysicalPage(Page, 1LL, v150);
      *(_QWORD *)(v46 + 16) = 0LL;
      _InterlockedOr(v147, 0);
      MiSetPfnTbFlushStamp(v46, (unsigned int)KiTbFlushTimeStamp, 0LL);
    }
    v50 = *(_BYTE *)(v46 + 34);
    if ( v50 >> 6 != v150 )
    {
      if ( v150 != 1
        || (v50 & 0xC0) != 0xC0
        && (v63 = *(_BYTE *)(v46 + 31) & 0xF,
            _InterlockedOr(v147, 0),
            v64 = ((_BYTE)KiTbFlushTimeStamp - v63) & 0xF,
            v64 <= 2)
        && ((v63 & 1) != 0 || v64 < 2) )
      {
        *(_QWORD *)(v46 + 16) = v162;
        v162 = (_QWORD *)v46;
        goto LABEL_129;
      }
      MiChangePageAttribute(v46, 1LL, 4LL);
    }
    v51 = *(_QWORD *)(v46 + 24);
    v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 24), v51 & 0xF0FFFFFFFFFFFFFFuLL, v51);
    if ( v51 != v52 )
    {
      do
      {
        v53 = v52;
        v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 24), v52 & 0xF0FFFFFFFFFFFFFFuLL, v52);
      }
      while ( v53 != v52 );
    }
LABEL_129:
    v54 = *(_QWORD *)(v46 + 24);
    v55 = v45 & 0xFFFFFFFFFLL;
    v48 = 0xFFFFFFF000000000uLL;
    v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 24), v55 | v54 & 0xFFFFFFF000000000uLL, v54);
    if ( v54 != v56 )
    {
      do
      {
        v57 = v56;
        v56 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v46 + 24),
                v55 | v56 & 0xFFFFFFF000000000uLL,
                v56);
      }
      while ( v57 != v56 );
    }
    v45 = v49;
    if ( ((unsigned __int8)++v155 & 0xF) == 0 && (*(_DWORD *)(v161 + 1280) & 0x40000000) != 0 )
      break;
    v58 = KeGetCurrentPrcb();
    v59 = 1;
    DpcWatchdogCount = v58->DpcWatchdogCount;
    DpcRequestSummary = v58->DpcRequestSummary;
    DpcTimeCount = v58->DpcTimeCount;
    if ( (DpcRequestSummary & 1) == 0 )
    {
      v48 = 0LL;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v59 = 2;
        goto LABEL_155;
      }
      if ( v58->QuantumEnd )
      {
        v59 = 3;
        goto LABEL_155;
      }
      NextThread = v58->NextThread;
      if ( NextThread && NextThread != v58->CurrentThread )
      {
        v59 = 4;
        goto LABEL_155;
      }
LABEL_148:
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_158;
      if ( (_DWORD)v48 )
      {
LABEL_150:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v59 = 5;
          goto LABEL_155;
        }
        if ( v58->CurrentThread != v58->IdleThread )
        {
          v59 = 6;
          goto LABEL_155;
        }
      }
      _disable();
      v58->DpcWatchdogCount = 0;
      v58->DpcTimeCount = 0;
      _enable();
      v59 = 0;
      goto LABEL_155;
    }
    v48 = 1LL;
    if ( DpcTimeCount <= 7 )
      goto LABEL_148;
    if ( !v58->QuantumEnd )
      goto LABEL_150;
LABEL_155:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v59, DpcWatchdogCount, DpcTimeCount, v48);
    if ( v59 )
      break;
LABEL_158:
    if ( (unsigned __int64)v155 >= v153 )
      goto LABEL_161;
    p_PageColor = (unsigned int *)v166;
    v36 = v165;
    v43 = v151;
  }
  v153 = (unsigned __int64)v155;
LABEL_161:
  if ( v162 )
    MiChangePageAttributeBatch(v162, v150, 0LL, v48);
  if ( !v46 )
    return 3221225495LL;
  v66 = 0;
  v67 = BugCheckParameter1;
  while ( v67 > (unsigned __int64)MmHighestUserAddress )
  {
    ++v66;
    v67 = (__int64)(v67 << 25) >> 16;
    if ( v66 >= 3 )
    {
      v68 = v153;
      goto LABEL_178;
    }
  }
  v69 = MI_GET_USED_PTES_HANDLE(BugCheckParameter1);
  v172 = 0;
  v70 = v69;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v172);
    while ( (*(_QWORD *)(v70 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v68 = v153;
  *(_QWORD *)(v70 + 16) ^= ((unsigned int)*(_QWORD *)(v70 + 16) ^ ((unsigned int)*(_QWORD *)(v70 + 16)
                                                                 + ((unsigned __int16)v153 << 14))) & 0xFFC000;
  _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned int)v68 <= 1
    && ((__int64)(*(_QWORD *)(v70 + 8) | 0x8000000000000000uLL) >> 47 == -1
     || (__int64)(*(_QWORD *)(v70 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
  {
    v176 = (((*(_QWORD *)(v70 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v177 = ((v176 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v178 = ((v177 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v179 = ((v178 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v16 = (unsigned int)(v16 - 1);
      v71 = *(_QWORD *)*(&v176 + v16);
    }
    while ( (v71 & 1) != 0 && ((unsigned int)v16 > 1 || (v71 & 0x80u) == 0LL) && (_DWORD)v16 );
  }
LABEL_178:
  __incgsdword(0x2E1Cu);
  v72 = 272;
  v163 = 273;
  v151 = (v10 >> 2) & 1;
  if ( v151 )
    v72 = 304;
  v150 = v72;
  if ( v15 )
  {
    v73 = *(unsigned int *)(v15 + 52);
    LODWORD(v73) = v73 & 0x7FFFFFFF;
    if ( (v73 | ((unsigned __int64)*(unsigned __int8 *)(v15 + 34) << 31)) == 0x7FFFFFFFELL )
    {
      v72 |= 0x40u;
      v150 = v72;
    }
  }
  if ( v68 )
  {
    v74 = v148;
    v75 = v167;
    LODWORD(v166) = v72 & 4;
    v152 = (_QWORD *)v68;
    LODWORD(v162) = v72 & 2;
    v76 = 32LL * v148;
    LODWORD(v165) = v72 & 0x20;
    LODWORD(v155) = v72 & 0x40;
    i = v72 & 1;
    v168 = v148 & 0x1F;
    do
    {
      *v75 = v76;
      LODWORD(BugCheckParameter1) = MiPteInShadowRange(v75);
      if ( (_DWORD)BugCheckParameter1 )
        MiWritePteShadow(v75, v76);
      v77 = *(_QWORD *)(v46 + 24) & 0xFFFFFFFFFLL;
      *(_QWORD *)v46 = 0LL;
      v164 = 48 * v77 - 0x58000000000LL;
      v78 = MI_READ_PTE_LOCK_FREE(v75);
      if ( (_DWORD)v166 )
        v78 = v76;
      v79 = (_DWORD)v162 == 0;
      *(_QWORD *)(v46 + 16) = v78;
      if ( v79 )
      {
        if ( (v72 & 8) == 0 )
          *(_QWORD *)(v46 + 16) = v78 & 0xFFFFFFFFFF003FFFuLL;
      }
      else
      {
        *(_QWORD *)(v46 + 40) |= 0x200000000000000uLL;
      }
      v80 = 1;
      v159 = 1;
      if ( v74 == 31 )
      {
        v159 = 1;
      }
      else if ( v160 == 3 )
      {
        if ( (v74 & 7) != 0 )
          v159 = dword_1403812A8;
      }
      else
      {
        if ( v160 == 1 )
          v80 = MiPlatformCacheAttributes[0];
        v159 = v80;
      }
      v79 = (_DWORD)v165 == 0;
      *(_WORD *)(v46 + 32) = 1;
      if ( v79 )
        *(_BYTE *)(v46 + 34) |= 0x10u;
      v173 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v75 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v81 = MI_GET_PAGE_FRAME_FROM_PTE(&v173);
      *(_QWORD *)(v46 + 40) ^= (*(_QWORD *)(v46 + 40) ^ v81) & 0xFFFFFFFFFLL;
      v82 = 48 * v81 - 0x58000000000LL;
      CurrentThread = KeGetCurrentThread();
      Queue_high = HIDWORD(CurrentThread[1].Queue);
      if ( (Queue_high & 0x100) != 0 )
      {
        v85 = (Queue_high >> 9) & 7;
      }
      else
      {
        v85 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v86 = 2;
          if ( v85 < 2 )
            v86 = v85;
          LOBYTE(v85) = v86;
        }
      }
      v149 = 17;
      if ( !i )
      {
        if ( (v150 & 0x10) != 0 )
        {
          v170 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v170);
            while ( (*(_QWORD *)(v46 + 24) & 0x8000000000000000uLL) != 0 );
          }
        }
        else
        {
          v149 = MiLockPageInline(v46);
        }
      }
      v169 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v82 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v169);
        while ( (*(_QWORD *)(v82 + 24) & 0x8000000000000000uLL) != 0 );
      }
      *(_QWORD *)(v82 + 24) ^= (*(_QWORD *)(v82 + 24) ^ (*(_QWORD *)(v82 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( *(unsigned __int8 *)(v46 + 34) >> 6 != v159 )
        MiChangePageAttribute(v46, v159, 1LL);
      v87 = *(_QWORD *)(v46 + 24);
      *(_BYTE *)(v46 + 35) ^= (*(_BYTE *)(v46 + 35) ^ v85) & 7;
      v88 = *(_BYTE *)(v46 + 35);
      *(_QWORD *)(v46 + 24) = v87 & 0xC000000000000000uLL | 1;
      LOBYTE(v87) = *(_BYTE *)(v46 + 34);
      *(_QWORD *)(v46 + 8) = v75;
      v79 = (_DWORD)v155 == 0;
      *(_BYTE *)(v46 + 34) = v87 & 0xF8 | 6;
      if ( !v79 )
        *(_BYTE *)(v46 + 35) = v88 | 0x20;
      LOBYTE(v72) = v150;
      if ( !i )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v72 & 0x10) == 0 )
          __writecr8(v149);
      }
      v89 = 32 * (v168 | ((((v46 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 7) | 0x40);
      v79 = (_DWORD)BugCheckParameter1 == 0;
      *v75 = v89;
      if ( !v79 )
        MiWritePteShadow(v75, v89);
      v46 = v164;
      ++v75;
      v79 = v152 == (_QWORD *)1;
      v152 = (_QWORD *)((char *)v152 - 1);
      v74 = v148;
    }
    while ( !v79 );
    LOBYTE(v10) = v154;
    v68 = v153;
  }
  v79 = (v10 & 8) == 0;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  if ( !v79 )
    v91 = v157;
  v152 = (_QWORD *)v91;
  LOBYTE(v90) = v151 == 0;
  if ( v68 )
  {
    while ( 2 )
    {
      v93 = (unsigned __int64)&v167[v92];
      v95 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v93) >> 12) & 0xFFFFFFFFFLL;
      v98 = 48 * v95 - 0x58000000000LL;
      if ( !v90 )
        goto LABEL_254;
      v164 = MiGetPteAddress(MmHighestUserAddress, v94, v96, v97);
      v102 = v164;
      if ( v93 <= v164 )
      {
        if ( v93 >= MiGetPteAddress(0LL, v99, v100, v101) )
        {
          v103 = MmProtectToPteMask[v148] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v95 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1) << 8) | 0x25;
          goto LABEL_251;
        }
        v102 = v164;
      }
      v104 = 0xFFFFFFFFF000LL;
      v103 = MmProtectToPteMask[v148] ^ ((v95 << 12) ^ MmProtectToPteMask[v148]) & 0xFFFFFFFFF000LL | 0x21;
      if ( v93 + 0x904C0000000LL <= 0x3FFFFFFF )
      {
        v104 = 0x7FFFFFFFFFFFFFFFLL;
        v103 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
      }
      if ( v93 <= v102 && v93 >= MiGetPteAddress(0LL, v104, 0x904C0000000LL, v101)
        || v93 >= 0xFFFFF6FB40000000uLL
        && v93 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || v93 >= 0xFFFFF6FB7DA00000uLL
        && v93 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || v93 >= 0xFFFFF6FB7DBED000uLL
        && v93 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v103 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v93) )
        v103 |= 0x100uLL;
LABEL_251:
      if ( (v103 & 0x800) != 0 )
        v103 |= 0x42uLL;
      Wsle = MiAllocateWsle(v161 + 1280, v93, v98, 0LL, v103, v152);
      v152 = 0LL;
      v90 = Wsle;
      if ( !Wsle )
      {
LABEL_254:
        MiLockAndDecrementShareCount(v98, 0);
        if ( !v92 )
        {
          v106 = v163;
          if ( !v151 )
            v106 = -1073741801;
          v163 = v106;
        }
      }
      if ( v157 )
        MiAdvanceFaultList(v157);
      if ( ++v92 >= v153 )
        break;
      continue;
    }
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v161 + 920), v92);
  return v163;
}
