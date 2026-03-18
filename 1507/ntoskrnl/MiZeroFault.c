/*
 * XREFs of MiZeroFault @ 0x1400C0DC0
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiUpdatePageTableUseCount @ 0x14005DCE0 (MiUpdatePageTableUseCount.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiVadCompareVpn @ 0x1400C2460 (MiVadCompareVpn.c)
 *     MiAdvanceFaultList @ 0x1400DF8F4 (MiAdvanceFaultList.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiAllowGuardFault @ 0x1401114C4 (MiAllowGuardFault.c)
 *     MiCheckBadSystemProcessAccess @ 0x14011ECB4 (MiCheckBadSystemProcessAccess.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 *     MiComputeZeroClusterMaximum @ 0x140125EF8 (MiComputeZeroClusterMaximum.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPrefetchJumpVad @ 0x140219414 (MiPrefetchJumpVad.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x140225C48 (MiMakePrototypePteVadLookup.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiWaitForForkToComplete @ 0x1402314F8 (MiWaitForForkToComplete.c)
 *     EtwTraceShouldYieldProcessor @ 0x14025D5E8 (EtwTraceShouldYieldProcessor.c)
 *     MiCheckForUserStackOverflow @ 0x140530548 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiZeroFault(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        _BYTE *a5,
        __int16 *a6,
        unsigned __int64 a7,
        __int64 *a8)
{
  _BYTE *v9; // r13
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  unsigned __int8 v12; // bp
  __int64 v15; // r12
  _KPROCESS *Process; // r8
  unsigned __int64 v17; // rbp
  __int64 v18; // r11
  unsigned int v19; // r9d
  _KPROCESS *v20; // r13
  unsigned __int64 v21; // rdi
  int v22; // eax
  int v23; // r9d
  int v24; // r8d
  __int64 VadEvent; // rax
  int v26; // r9d
  __int64 ProtoPteAddress; // rax
  _QWORD *v28; // r8
  unsigned int v29; // edi
  ULONG_PTR v30; // rbx
  __int64 v31; // rcx
  __int64 PrototypePteVadLookup; // rax
  __int64 *v33; // r9
  unsigned __int64 v34; // r8
  ULONG_PTR v35; // r14
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // r10
  __int64 *v38; // r9
  __int64 v39; // rax
  __int16 *v40; // r9
  char Blink; // r8
  unsigned __int8 v42; // r8
  unsigned __int16 v43; // ax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r14
  unsigned int *p_WaitListHead; // rcx
  __int64 v47; // rax
  unsigned int v48; // r13d
  __int64 v49; // rsi
  __int64 v50; // rbp
  unsigned __int64 v51; // r12
  int v52; // r8d
  unsigned __int16 v53; // ax
  __int64 Page; // rax
  __int64 v55; // rdi
  signed __int64 v56; // rdx
  signed __int64 v57; // r8
  signed __int64 v58; // rcx
  signed __int64 v59; // rdx
  __int64 v60; // rbp
  signed __int64 v61; // r8
  signed __int64 v62; // rcx
  struct _KPRCB *v63; // rcx
  unsigned int v64; // edi
  unsigned int DpcWatchdogCount; // r11d
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // r10d
  int v68; // edx
  char v69; // cl
  unsigned int v70; // eax
  _KTHREAD *NextThread; // rax
  unsigned __int64 v72; // rdi
  ULONG_PTR v73; // r9
  unsigned int v74; // ecx
  unsigned __int64 v75; // rax
  __int64 v76; // rbp
  unsigned __int64 v77; // r11
  unsigned int v78; // edi
  __int64 v79; // rdx
  __int64 v80; // rax
  unsigned int v81; // ebp
  int v82; // r12d
  __int64 v83; // r8
  int v84; // edx
  int v85; // r13d
  __int64 v86; // rax
  __int64 *v87; // rdi
  char v88; // bl
  __int64 DemandZeroPte; // rax
  __int64 v90; // rax
  __int64 v91; // rbp
  __int64 TransitionPte; // rax
  bool v93; // zf
  __int64 v94; // r12
  ULONG_PTR Wsle; // rdi
  unsigned __int64 v96; // rbx
  __int64 *v97; // r10
  __int64 v98; // rax
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // r8
  unsigned __int64 v101; // r10
  __int64 v102; // rsi
  unsigned __int64 v103; // rdx
  __int64 v104; // r10
  __int64 v105; // rcx
  unsigned __int64 v106; // r13
  unsigned __int64 v107; // r14
  unsigned __int64 v108; // r9
  unsigned __int64 v109; // rbp
  unsigned int v110; // r11d
  __int64 *v111; // rdi
  unsigned __int64 v112; // rsi
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  ULONG_PTR v115; // rax
  unsigned int v116; // ecx
  ULONG_PTR v117; // rbp
  unsigned __int64 v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 PrototypePteDirect; // rax
  __int64 *v123; // r8
  unsigned __int64 v124; // rcx
  __int64 *v125; // rdi
  _BYTE *v126; // rsi
  unsigned __int64 v127; // r13
  unsigned __int64 v128; // r11
  _QWORD *v129; // r8
  unsigned __int64 v130; // r15
  unsigned __int64 v131; // rdx
  unsigned __int64 v132; // r12
  __int64 v133; // r14
  __int64 v134; // rbx
  unsigned __int64 v135; // rcx
  unsigned __int64 v136; // rbp
  unsigned __int64 v137; // rsi
  __int64 PteShadow; // rax
  __int64 v139; // r14
  _QWORD *v140; // rax
  __int64 v141; // rax
  signed __int32 v142[8]; // [rsp+0h] [rbp-148h] BYREF
  unsigned int v143; // [rsp+30h] [rbp-118h]
  unsigned __int8 v144; // [rsp+34h] [rbp-114h]
  __int64 v145; // [rsp+38h] [rbp-110h]
  unsigned int v146; // [rsp+40h] [rbp-108h]
  unsigned __int64 v147; // [rsp+48h] [rbp-100h]
  unsigned int v148; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v149; // [rsp+58h] [rbp-F0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+60h] [rbp-E8h]
  _BYTE *v151; // [rsp+68h] [rbp-E0h]
  __int64 v152; // [rsp+70h] [rbp-D8h]
  _KPROCESS *v153; // [rsp+78h] [rbp-D0h]
  __int64 *v154; // [rsp+80h] [rbp-C8h]
  __int64 v155; // [rsp+88h] [rbp-C0h]
  __int16 *v156; // [rsp+90h] [rbp-B8h]
  __int64 *v157; // [rsp+98h] [rbp-B0h]
  unsigned int *v158; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned int *v159; // [rsp+A8h] [rbp-A0h] BYREF
  unsigned __int64 v160; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v161; // [rsp+B8h] [rbp-90h]
  unsigned __int64 v162; // [rsp+C0h] [rbp-88h]
  __int64 v163; // [rsp+C8h] [rbp-80h]
  unsigned __int64 v164; // [rsp+D0h] [rbp-78h]
  unsigned __int64 v165; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v166; // [rsp+E0h] [rbp-68h]
  __int64 v167; // [rsp+E8h] [rbp-60h]

  v9 = a5;
  v10 = 0;
  v156 = a6;
  v149 = a7;
  v11 = 0;
  v12 = a4;
  v157 = a8;
  v144 = a4;
  BugCheckParameter2a = a2;
  v151 = a5;
  *a5 = 1;
  v148 = 0;
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
  {
    v11 = 1;
  }
  else
  {
    if ( (a3 & 1) == 0 )
      goto LABEL_11;
    if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v11 = 2;
    }
    else
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_11;
      if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        v11 = 8;
    }
  }
  v148 = v11;
LABEL_11:
  if ( (v11 & 0xB) != 0 )
    v147 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  else
    v147 = 0LL;
  v154 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    if ( (v11 & 2) != 0 )
      return 0LL;
    if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL && a3 )
      KeBugCheckEx(0x50u, a2, BugCheckParameter2, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 6uLL);
  }
  v15 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v153 = Process;
  v152 = 0LL;
  if ( a2 > (unsigned __int64)MmHighestUserAddress )
  {
    if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
    {
      v19 = 4;
      v145 = 0LL;
      v143 = 4;
      v18 = 0LL;
      goto LABEL_68;
    }
    goto LABEL_25;
  }
  v17 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000
    || (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 1) != 0 )
  {
    v20 = KeGetCurrentThread()->ApcState.Process;
    v15 = v20[2].Affinity.Bitmap[2];
    v152 = v15;
    if ( !v15 )
    {
LABEL_24:
      v15 = 0LL;
      goto LABEL_25;
    }
    v21 = a2 >> 12;
    if ( a2 >> 12 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
      || v21 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
    {
      v15 = v20[2].Affinity.Bitmap[0];
      v152 = v15;
      if ( v15 )
      {
        while ( 1 )
        {
          v22 = MiVadCompareVpn(v21, v15);
          if ( v22 >= 0 )
          {
            if ( v22 <= 0 )
            {
              v20[2].Affinity.Bitmap[2] = v15;
              goto LABEL_39;
            }
            v15 = *(_QWORD *)(v15 + 8);
          }
          else
          {
            v15 = *(_QWORD *)v15;
          }
          v152 = v15;
          if ( !v15 )
            goto LABEL_24;
        }
      }
      goto LABEL_24;
    }
LABEL_39:
    if ( v17 == 2147352576 && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 1) == 0 )
    {
      v18 = qword_14034EB58;
      v19 = 1;
      v145 = qword_14034EB58;
      v143 = 1;
      goto LABEL_65;
    }
    v23 = *(_DWORD *)(v15 + 48);
    v24 = v23 & 7;
    if ( (v24 != 2
       || (*(_DWORD *)(v15 + 64) & 0x20000000) == 0
       || (VadEvent = MiLocateVadEvent(v15, 32LL)) == 0
       || *(struct _KTHREAD **)(VadEvent + 16) == KeGetCurrentThread())
      && v23 >= 0
      && v24 != 1 )
    {
      if ( (v23 & 0x8000) != 0 )
      {
        if ( v24 != 3 && v24 != 5 && *(int *)(v15 + 52) < 0 )
        {
          v18 = 0LL;
          v19 = (unsigned __int8)v23 >> 3;
          v145 = 0LL;
          v143 = v19;
          goto LABEL_65;
        }
      }
      else if ( (*(_BYTE *)(v15 + 67) & 1) == 0 )
      {
        v26 = (unsigned __int8)v23 >> 3;
        v143 = v26;
        if ( v26 == 7 )
        {
          if ( v24 == 2 )
            v26 = 256;
          v143 = v26;
        }
        ProtoPteAddress = MiGetProtoPteAddress(v15, v21, 0, &v159);
        v19 = v143;
        v28 = *(_QWORD **)(v15 + 120);
        v18 = ProtoPteAddress;
        v145 = ProtoPteAddress;
        if ( !ProtoPteAddress )
          v19 = 24;
        v143 = v19;
        if ( (__int64)v28 < 0 )
        {
          if ( v21 - (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) > (unsigned __int64)(*v28 - 1LL) >> 12 )
            v19 = 24;
          v143 = v19;
        }
LABEL_65:
        if ( v19 != 24 )
        {
          v9 = v151;
          a2 = BugCheckParameter2a;
          Process = v153;
          goto LABEL_67;
        }
LABEL_25:
        MiCheckBadSystemProcessAccess(BugCheckParameter2a);
        if ( (v11 & 2) != 0 && v15 )
          MiPrefetchJumpVad(v147, v15, BugCheckParameter2a);
        return 3221225477LL;
      }
    }
    v145 = 0LL;
    v19 = 24;
    v143 = 24;
    v18 = 0LL;
    goto LABEL_65;
  }
  v18 = qword_14034EB58;
  v19 = 1;
  v145 = qword_14034EB58;
  v143 = 1;
LABEL_67:
  v12 = v144;
LABEL_68:
  v29 = v19 >> 3;
  if ( v19 >> 3 == 2 )
  {
    if ( (v11 & 2) == 0 )
    {
      if ( (unsigned int)MiAllowGuardFault(a3) )
      {
        v30 = BugCheckParameter2a;
        MiUpdatePageTableUseCount(BugCheckParameter2a);
        v31 = v143 & 0xFFFFFFEF;
        if ( v145 )
          PrototypePteVadLookup = MiMakePrototypePteVadLookup(v31);
        else
          PrototypePteVadLookup = MiMakeDemandZeroPte(v31);
        v33 = v154;
        v34 = (unsigned __int64)(v154 + 0x12090482600LL);
        *v154 = PrototypePteVadLookup;
        if ( v34 <= 0x7F8 )
          MiWritePteShadow(v33, PrototypePteVadLookup);
        MiUnlockWorkingSetExclusive((__int64)&v153[1].IdealNode[8], v12);
        *v9 = 2;
        return MiCheckForUserStackOverflow(v30);
      }
      return 3221225477LL;
    }
    return 0LL;
  }
  if ( (v11 & 2) != 0 && (*(_DWORD *)(v147 + 80) & 0x4000) != 0 )
  {
    v11 |= 4u;
    v148 = v11;
  }
  if ( v18 )
  {
    v146 = 0;
    if ( (v11 & 2) == 0 )
    {
      if ( v15 )
      {
        v104 = *(_QWORD *)(v15 + 120);
        if ( (v104 & 0x8000000000000000uLL) == 0 )
        {
          v105 = *(_QWORD *)(v15 + 120) & 0xFFFLL;
          v155 = v105;
          v106 = v104 & 0xFFFFFFFFFFFFF000uLL;
          v107 = (v104 & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)(v104 & 0xFFF) << 12);
          v108 = a2 & 0xFFFFFFFFFFFFF000uLL | 1;
          LOBYTE(v11) = v11 | 0x10;
          if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == v107 )
          {
            if ( v105 == 4095 )
              v108 = (v106 + 4096) | 0xFFF;
            else
              v108 = v106 | ((_WORD)v104 + 1) & 0xFFF;
          }
          else if ( a2 <= v107 || (v109 = (a2 - v107) >> 12, v109 >= 8) )
          {
            if ( v107
              || a2 >> 12 != (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) )
            {
              LOBYTE(v11) = v11 & 0xEF;
            }
          }
          else
          {
            v110 = ((unsigned int)v154 >> 3) & 0x1FF;
            if ( v110 <= v109 )
            {
              if ( v110 )
                LOBYTE(v11) = v11 & 0xEF;
            }
            else
            {
              v110 = (a2 - v107) >> 12;
            }
            if ( (v11 & 0x10) != 0 )
            {
              v111 = v154 - 1;
              if ( !v110 )
                goto LABEL_246;
              v112 = (unsigned __int64)(v111 + 0x12090482600LL);
              while ( 1 )
              {
                v113 = *v111;
                if ( v112 <= 0x7F8 )
                  LOBYTE(v113) = MiReadPteShadow(v111, *v111);
                if ( (v113 & 1) == 0 || (v113 & 0x20) == 0 )
                  break;
                --v111;
                v112 -= 8LL;
                if ( !--v110 )
                  goto LABEL_246;
              }
              if ( v110 )
              {
                LOBYTE(v11) = v11 & 0xEF;
              }
              else
              {
LABEL_246:
                if ( (unsigned __int64)(unsigned int)(v109 + 1) + v155 > 0xFFF )
                  v108 = (v104 + ((unsigned __int64)((unsigned int)(v104 & 0xFFF) + (_DWORD)v109 - 4094) << 12)) | 0xFFF;
                else
                  v108 = v106 | ((_WORD)v109 + 1 + (_WORD)v104) & 0xFFF;
              }
            }
            v18 = v145;
          }
          if ( (v11 & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(v15 + 64) & 0x2000000) != 0 )
            {
              v115 = v107 - 4096;
              if ( !v107 )
                v115 = BugCheckParameter2a;
              v114 = *(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32);
              if ( (((v115 >> 12) - v114) >> 8) + 1 == ((BugCheckParameter2a >> 12) - v114) >> 8 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v15 + 36));
                v146 = -1073741280;
              }
            }
          }
          else
          {
            *(_DWORD *)(v15 + 64) &= ~0x2000000u;
          }
          *(_QWORD *)(v15 + 120) = v108;
          v19 = v143;
        }
      }
    }
    v116 = 0;
    v117 = BugCheckParameter2a;
    *v151 = 0;
    *(_DWORD *)v156 = v19;
    *(_QWORD *)v149 = v18;
    *v157 = v15;
    v118 = v117;
    while ( v118 > (unsigned __int64)MmHighestUserAddress )
    {
      ++v116;
      v118 = (__int64)(v118 << 25) >> 16;
      if ( v116 >= 3 )
        goto LABEL_283;
    }
    v119 = MI_GET_USED_PTES_HANDLE(v117);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v119 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( (*(_QWORD *)(v119 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v119 + 24), 0x3FuLL) );
      v18 = v145;
    }
    *(_QWORD *)(v119 + 16) ^= ((unsigned int)*(_QWORD *)(v119 + 16) ^ ((*(_QWORD *)(v119 + 16) & 0xFFFF0000) + 0x10000)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v119 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (__int64)(*(_QWORD *)(v119 + 8) | 0x8000000000000000uLL) >> 47 == -1
      || (__int64)(*(_QWORD *)(v119 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
    {
      LODWORD(v120) = 4;
      v164 = (((*(_QWORD *)(v119 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v165 = ((v164 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v166 = ((v165 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v167 = ((v166 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v120 = (unsigned int)(v120 - 1);
        v121 = *(_QWORD *)*(&v164 + v120);
      }
      while ( (v121 & 1) != 0 && ((unsigned int)v120 > 1 || (v121 & 0x80u) == 0LL) && (_DWORD)v120 );
      v19 = v143;
    }
    else
    {
      v19 = v143;
    }
LABEL_283:
    if ( v19 == 256 )
      PrototypePteDirect = MiMakePrototypePteDirect(v18);
    else
      PrototypePteDirect = MiMakePrototypePteVadLookup(v19);
    v123 = v154;
    v124 = (unsigned __int64)(v154 + 0x12090482600LL);
    *v154 = PrototypePteDirect;
    if ( v124 <= 0x7F8 )
      MiWritePteShadow(v123, PrototypePteDirect);
    if ( (v11 & 2) == 0 || !v15 )
      return v146;
    v125 = *(__int64 **)(v147 + 24);
    v126 = *(_BYTE **)(v147 + 32);
    v127 = *(_QWORD *)(v147 + 16);
    v157 = v125;
    v151 = v126;
    MiAdvanceFaultList(v147);
    v129 = (_QWORD *)v147;
    v130 = 1LL;
    v131 = *(_QWORD *)(v147 + 24);
    if ( v131 >= v127 )
      goto LABEL_313;
    v132 = 256LL;
    v133 = v152;
    v134 = ((v128 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v135 = (*(unsigned int *)(v152 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v152 + 33) << 32)) - (v117 >> 12) + 1;
    if ( v135 < 0x100 )
    {
      v132 = (*(unsigned int *)(v152 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v152 + 33) << 32))
           - (v117 >> 12)
           + 1;
      if ( v135 <= 1 )
        goto LABEL_313;
    }
    v136 = v134 + 0x90482413000LL;
    while ( 1 )
    {
      if ( (v134 & 0xFFF) == 0 )
        goto LABEL_312;
      v137 = *(_QWORD *)(v129[1] + 16 * v131) + (v129[4] << 12);
      if ( (v137 & 0xFFFFFFFFFFFFF000uLL) - 4096 != (v128 & 0xFFFFFFFFFFFFF000uLL) )
        goto LABEL_312;
      PteShadow = *(_QWORD *)v134;
      if ( v136 <= 0x7F8 )
        PteShadow = MiReadPteShadow(v134, *(_QWORD *)v134);
      if ( !PteShadow )
      {
        v139 = MiGetProtoPteAddress(v133, v137 >> 12, 0, &v158);
        if ( !v139
          || (v140 = *(_QWORD **)(v152 + 120), (__int64)v140 < 0)
          && (v137 >> 12) - (*(unsigned int *)(v152 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v152 + 32) << 32)) > (unsigned __int64)(*v140 - 1LL) >> 12 )
        {
          v129 = (_QWORD *)v147;
LABEL_312:
          v125 = v157;
          v126 = v151;
LABEL_313:
          v129[3] = v125;
          v129[4] = v126;
          return v146;
        }
        MiUpdatePageTableUseCount(BugCheckParameter2a);
        if ( v143 == 256 )
          v141 = MiMakePrototypePteDirect(v139);
        else
          v141 = MiMakePrototypePteVadLookup(v143);
        *(_QWORD *)v134 = v141;
        if ( v136 <= 0x7F8 )
          MiWritePteShadow(v134, v141);
        v133 = v152;
      }
      ++v130;
      v134 += 8LL;
      v136 += 8LL;
      MiAdvanceFaultList(v147);
      v129 = (_QWORD *)v147;
      v131 = *(_QWORD *)(v147 + 24);
      if ( v131 != v127 )
      {
        v128 = v137;
        if ( v130 < v132 )
          continue;
      }
      goto LABEL_312;
    }
  }
  if ( (v11 & 2) != 0 && ((v29 != 3 || (v19 & 7) == 0) && v29 != 1 || (v11 & 4) == 0)
    || Process[1].Affinity.Bitmap[10] && (unsigned int)MiWaitForForkToComplete(Process, v12) == 1 )
  {
    return 0LL;
  }
  v35 = BugCheckParameter2 >> 57;
  if ( v15 )
    LODWORD(v35) = (*(_DWORD *)(v15 + 48) >> 8) & 0x3F;
  v149 = 1LL;
  v36 = 1LL;
  if ( v15 )
  {
    if ( (v11 & 5) != 0 )
    {
      v149 = MiComputeZeroClusterMaximum(v147);
      v36 = v149;
      v37 = 1LL;
      if ( v149 > 1 )
      {
        v38 = v154 + 1;
        while ( 1 )
        {
          v39 = *v38;
          if ( (unsigned __int64)(v38 + 0x12090482600LL) <= 0x7F8 )
            v39 = MiReadPteShadow(v38, *v38);
          if ( v39 )
            break;
          ++v37;
          ++v38;
          if ( v37 >= v36 )
            goto LABEL_103;
        }
        v36 = v37;
        v149 = v37;
      }
    }
  }
LABEL_103:
  v40 = MiSystemPartition;
  Blink = (char)v153[2].ProfileListHead.Blink;
  v156 = MiSystemPartition;
  v42 = Blink & 7;
  if ( !v42 )
  {
    v43 = WORD2(v153[1].SecurePid);
    if ( v43 != 1023 )
      v40 = *(__int16 **)(qword_14034F0E8 + 8LL * v43);
    v156 = v40;
  }
  if ( (_DWORD)v35 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)v35 - 1) << byte_14034EB89;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  p_WaitListHead = (unsigned int *)&v153[2].Header.WaitListHead;
  if ( v42 >= 2u )
    p_WaitListHead = &CurrentPrcb->PageColor;
  v151 = p_WaitListHead;
  if ( v29 == 3 && (v143 & 7) != 0 )
    v47 = 2LL;
  else
    v47 = v29 != 1;
  v48 = MiPlatformCacheAttributes[v47];
  v49 = 0LL;
  v155 = 0LL;
  v50 = 0xFFFFFFFFFLL;
  v51 = 0LL;
  if ( !v36 )
    return 3221225495LL;
  v52 = NodeShiftedColor;
  v53 = (1 << byte_14034EB98) - 1;
  v146 = v53;
  LODWORD(v145) = NodeShiftedColor;
  while ( 1 )
  {
    Page = MiGetPage((__int64)v40, v52 | (unsigned int)(unsigned __int16)(v53 & ++*(_WORD *)p_WaitListHead), 2u);
    v55 = Page;
    if ( Page == -1 )
      break;
    v49 = 48 * Page - 0x58000000000LL;
    if ( *(_QWORD *)(v49 + 16) )
    {
      MiZeroPhysicalPage(Page, 1, v48);
      *(_QWORD *)(v49 + 16) = 0LL;
      _InterlockedOr(v142, 0);
      MiSetPfnTbFlushStamp(v49, (unsigned int)KiTbFlushTimeStamp, 0);
    }
    if ( *(unsigned __int8 *)(v49 + 34) >> 6 != v48 )
    {
      if ( v48 != 1
        || (*(_BYTE *)(v49 + 34) & 0xC0) != 0xC0
        && (v69 = *(_BYTE *)(v49 + 31) & 0xF,
            _InterlockedOr(v142, 0),
            v70 = ((_BYTE)KiTbFlushTimeStamp - v69) & 0xF,
            v70 <= 2)
        && ((v69 & 1) != 0 || v70 < 2) )
      {
        *(_QWORD *)(v49 + 16) = v155;
        v155 = v49;
        goto LABEL_127;
      }
      MiChangePageAttribute(v49, 1LL, 4LL);
    }
    v56 = *(_QWORD *)(v49 + 24);
    v57 = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 24), v56 & 0xF0FFFFFFFFFFFFFFuLL, v56);
    if ( v56 != v57 )
    {
      do
      {
        v58 = v57;
        v57 = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 24), v57 & 0xF0FFFFFFFFFFFFFFuLL, v57);
      }
      while ( v58 != v57 );
    }
LABEL_127:
    v59 = *(_QWORD *)(v49 + 24);
    v60 = v50 & 0xFFFFFFFFFLL;
    v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 24), v60 | v59 & 0xFFFFFFF000000000uLL, v59);
    if ( v59 != v61 )
    {
      do
      {
        v62 = v61;
        v61 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v49 + 24),
                v60 | v61 & 0xFFFFFFF000000000uLL,
                v61);
      }
      while ( v62 != v61 );
    }
    ++v51;
    v50 = v55;
    if ( (v51 & 0xF) == 0 && (*(_DWORD *)&v153[1].IdealNode[8] & 0x40000000) != 0 )
      break;
    v63 = KeGetCurrentPrcb();
    v64 = 1;
    DpcWatchdogCount = v63->DpcWatchdogCount;
    DpcRequestSummary = v63->DpcRequestSummary;
    DpcTimeCount = v63->DpcTimeCount;
    if ( (DpcRequestSummary & 1) == 0 )
    {
      v68 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v64 = 2;
        goto LABEL_153;
      }
      if ( v63->QuantumEnd )
      {
        v64 = 3;
        goto LABEL_153;
      }
      NextThread = v63->NextThread;
      if ( NextThread && NextThread != v63->CurrentThread )
      {
        v64 = 4;
        goto LABEL_153;
      }
LABEL_146:
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_156;
      if ( v68 )
      {
LABEL_148:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v64 = 5;
          goto LABEL_153;
        }
        if ( v63->CurrentThread != v63->IdleThread )
        {
          v64 = 6;
          goto LABEL_153;
        }
      }
      _disable();
      v63->DpcWatchdogCount = 0;
      v63->DpcTimeCount = 0;
      _enable();
      v64 = 0;
      goto LABEL_153;
    }
    v68 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_146;
    if ( !v63->QuantumEnd )
      goto LABEL_148;
LABEL_153:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v64, DpcWatchdogCount, DpcTimeCount);
    if ( v64 )
      break;
LABEL_156:
    v72 = v149;
    if ( v51 >= v149 )
      goto LABEL_159;
    p_WaitListHead = (unsigned int *)v151;
    v40 = v156;
    v53 = v146;
    v52 = v145;
  }
  v149 = v51;
  v72 = v51;
LABEL_159:
  if ( v155 )
    MiChangePageAttributeBatch(v155, v48, ZeroPte);
  if ( !v49 )
    return 3221225495LL;
  v73 = BugCheckParameter2a;
  v74 = 0;
  v75 = BugCheckParameter2a;
  while ( v75 > (unsigned __int64)MmHighestUserAddress )
  {
    ++v74;
    v75 = (__int64)(v75 << 25) >> 16;
    if ( v74 >= 3 )
      goto LABEL_183;
  }
  v76 = MI_GET_USED_PTES_HANDLE(BugCheckParameter2a);
  v78 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v78 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v78);
    }
    while ( (*(_QWORD *)(v76 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) );
    v77 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v72 = v149;
  *(_QWORD *)(v76 + 16) ^= ((unsigned int)*(_QWORD *)(v76 + 16) ^ ((unsigned int)*(_QWORD *)(v76 + 16)
                                                                 + ((unsigned __int16)v149 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), v77);
  if ( (unsigned int)v72 > 1 )
  {
    v73 = BugCheckParameter2a;
  }
  else
  {
    if ( (__int64)(*(_QWORD *)(v76 + 8) | 0x8000000000000000uLL) >> 47 == -1
      || (__int64)(*(_QWORD *)(v76 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
    {
      LODWORD(v79) = 4;
      v160 = (((*(_QWORD *)(v76 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v161 = ((v160 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v162 = ((v161 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v163 = ((v162 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v79 = (unsigned int)(v79 - 1);
        v80 = *(_QWORD *)*(&v160 + v79);
      }
      while ( (v80 & 1) != 0 && ((unsigned int)v79 > 1 || (v80 & 0x80u) == 0LL) && (_DWORD)v79 );
    }
    v73 = BugCheckParameter2a;
  }
LABEL_183:
  __incgsdword(0x2E1Cu);
  v81 = 273;
  v82 = 0;
  v83 = v143;
  if ( (BYTE2(MiFlags) & 3u) > 1 && (v143 & 2) != 0 && v73 + 0x98000000000LL > 0x7FFFFFFFFFLL )
  {
    v82 = 2;
    if ( (v143 & 4) != 0 )
      v82 = 3;
  }
  v84 = 272;
  v85 = (v11 >> 2) & 1;
  LODWORD(v145) = v85;
  if ( v85 )
    v84 = 304;
  v146 = v84;
  if ( v152 )
  {
    v86 = *(unsigned int *)(v152 + 52);
    LODWORD(v86) = v86 & 0x7FFFFFFF;
    if ( (v86 | ((unsigned __int64)*(unsigned __int8 *)(v152 + 34) << 31)) == 0x7FFFFFFFELL )
      v146 = v84 | 0x40;
  }
  if ( v72 )
  {
    v87 = v154;
    v88 = v146;
    v151 = (_BYTE *)v149;
    do
    {
      DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v83);
      *v87 = DemandZeroPte;
      if ( (unsigned __int64)(v87 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v87, DemandZeroPte);
      v90 = *(_QWORD *)(v49 + 24) & 0xFFFFFFFFFLL;
      *(_QWORD *)v49 = 0LL;
      v91 = 48 * v90 - 0x58000000000LL;
      if ( v82 )
        MiMarkPfnVerified(v49, v82);
      MiInitializePfn(v49, v87, v143, v88);
      TransitionPte = MiMakeTransitionPte((v49 + 0x58000000000LL) / 48, v143);
      *v87 = TransitionPte;
      if ( (unsigned __int64)(v87 + 0x12090482600LL) <= 0x7F8 )
      {
        MiWritePteShadow(v87, TransitionPte);
        v83 = v143;
      }
      ++v87;
      v49 = v91;
      --v151;
    }
    while ( v151 );
    LOBYTE(v11) = v148;
    v81 = 273;
    v85 = v145;
  }
  v93 = (v11 & 8) == 0;
  v94 = 0LL;
  Wsle = 0LL;
  v96 = 0LL;
  if ( !v93 )
    v94 = v147;
  LOBYTE(Wsle) = v85 == 0;
  if ( v149 )
  {
    do
    {
      v97 = &v154[v96];
      v98 = *v97;
      if ( (unsigned __int64)(v97 + 0x12090482600LL) <= 0x7F8 )
        v98 = MiReadPteShadow(&v154[v96], *v97);
      v100 = ((unsigned __int64)MiReverseSwizzleInvalidPte(v98, 0xFFFFF68000000000uLL, v83, v73) >> 12) & 0xFFFFFFFFFLL;
      v102 = 48 * v100 - 0x58000000000LL;
      if ( !Wsle )
        goto LABEL_217;
      if ( v101 > v99 + (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) || v101 < v99 )
      {
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v101) )
          v103 |= 0x100uLL;
      }
      else
      {
        v103 = MmProtectToPteMask[v143] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v100 & 0xFFFFFFFFFLL)) | HIBYTE(word_14034EC18) & 1) << 8) | 0x25;
      }
      if ( (v103 & 0x800) != 0 )
        v103 |= 0x42uLL;
      Wsle = MiAllocateWsle((__int64)&v153[1].IdealNode[8], v101, v102, 0LL, v103, v94);
      v94 = 0LL;
      if ( !Wsle )
      {
LABEL_217:
        MiLockAndDecrementShareCount(v102, 0LL);
        if ( !v96 && !v85 )
          v81 = -1073741801;
      }
      if ( v147 )
        MiAdvanceFaultList(v147);
      ++v96;
    }
    while ( v96 < v149 );
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v153[1].Affinity.Bitmap[13], v96);
  return v81;
}
