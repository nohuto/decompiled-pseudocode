/*
 * XREFs of MiProtectPool @ 0x14005EFD0
 * Callers:
 *     ExProtectPool @ 0x14005EE00 (ExProtectPool.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KxFlushEntireTb @ 0x14003F924 (KxFlushEntireTb.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MI_VA_IN_SESSION_SPECIAL_POOL @ 0x14005EDE4 (MI_VA_IN_SESSION_SPECIAL_POOL.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiLockNonPagedPoolPte @ 0x140116F58 (MiLockNonPagedPoolPte.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpFlushSecureAddressSpace @ 0x1401EE0C0 (HvlpFlushSecureAddressSpace.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     VmpFlushTb @ 0x14025B680 (VmpFlushTb.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x140270884 (HvlFlushRangeListTb.c)
 *     HvlpFlushAddressSpaceTb @ 0x140270BBC (HvlpFlushAddressSpaceTb.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int ProtectionMask; // eax
  unsigned __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  signed __int32 *v9; // rsi
  int v10; // r12d
  ULONG_PTR v11; // r13
  unsigned __int64 v12; // r14
  signed int v13; // edi
  __int64 CurrentIrql; // rbx
  unsigned __int64 v15; // r8
  int v16; // r10d
  unsigned __int64 v17; // rdx
  char *v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r14
  unsigned int v21; // r10d
  unsigned int v22; // ebx
  signed __int32 i; // edx
  __int64 v24; // r11
  __int64 v25; // r8
  unsigned __int64 PteShadow; // r15
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r8
  _KPROCESS *Process; // rcx
  __int64 v30; // rdx
  __int64 Wsle; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r8
  _KPROCESS *v34; // rcx
  __int64 v35; // rdx
  unsigned __int8 v36; // di
  unsigned int v37; // ebx
  signed __int32 j; // edx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdi
  unsigned __int8 v47; // si
  unsigned int v48; // ebx
  unsigned __int64 *v49; // r10
  unsigned __int64 v50; // rax
  signed __int64 TransitionPte; // rax
  signed __int64 v52; // r9
  signed __int64 v53; // rax
  unsigned __int64 v54; // r12
  int v55; // esi
  unsigned __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r14
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rax
  signed __int64 v63; // rax
  unsigned __int8 v64; // si
  unsigned int v65; // edi
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // rsi
  unsigned int v69; // r12d
  unsigned __int64 v70; // r8
  _KPROCESS *v71; // rcx
  __int64 v73; // rdx
  unsigned int v74; // r15d
  unsigned __int8 v75; // r14
  unsigned int v76; // r10d
  unsigned __int64 v77; // rdi
  unsigned __int8 v78; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  void **v82; // r11
  __int64 v83; // rbx
  int v84; // edi
  char *v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r10
  unsigned __int8 v88; // bl
  int v89; // r14d
  __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // r8
  unsigned __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // r8
  unsigned int v96; // edi
  __int64 v97; // r12
  unsigned __int64 v98; // rdx
  _KPROCESS *v99; // rcx
  __int64 v100; // r9
  int v101; // esi
  unsigned int v102; // r15d
  unsigned __int8 v103; // r14
  unsigned __int8 v104; // si
  unsigned int v105; // r10d
  unsigned __int64 v106; // rdi
  struct _KPRCB *v107; // rbx
  __int64 v108; // rcx
  unsigned __int64 v109; // rdx
  void **v110; // r11
  __int64 v111; // rbx
  int v112; // edi
  char *v113; // rdx
  __int64 v115; // r8
  __int64 v116; // r10
  unsigned __int8 v117; // bl
  unsigned int v118; // r14d
  unsigned int v119; // r10d
  unsigned __int64 v120; // r10
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rdx
  unsigned int v122; // ebx
  unsigned __int8 v123; // di
  struct _KPRCB *v124; // r11
  unsigned __int16 v125; // dx
  _KPROCESS *v126; // r8
  unsigned __int16 Count; // r9
  __int64 v128; // rax
  _WORD *v129; // r10
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rdx
  unsigned __int8 v134; // bl
  unsigned int v135; // ebx
  signed __int32 v136; // edx
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rdx
  unsigned __int64 v140; // rax
  __int64 v141; // r12
  unsigned __int64 v142; // r8
  _KPROCESS *v143; // rcx
  __int64 v145; // rdx
  unsigned int v146; // r15d
  unsigned __int8 v147; // r14
  unsigned __int8 v148; // si
  unsigned int v149; // r10d
  unsigned __int64 v150; // rdi
  struct _KPRCB *v151; // rbx
  __int64 v152; // rcx
  unsigned __int64 v153; // rdx
  void **v154; // r11
  __int64 v155; // rbx
  int v156; // edi
  char *v157; // rdx
  __int64 v158; // r8
  __int64 v159; // r10
  unsigned __int64 v160; // rcx
  bool v161; // zf
  unsigned int v162; // edi
  unsigned int v163; // r10d
  unsigned __int64 v164; // rcx
  volatile _KAFFINITY_EX *v165; // rdx
  unsigned int v166; // esi
  unsigned __int8 v167; // bl
  struct _KPRCB *v168; // r10
  unsigned __int16 v169; // dx
  _KPROCESS *v170; // r8
  unsigned __int16 v171; // r9
  __int64 v172; // rax
  _WORD *v173; // r8
  unsigned int v174; // r11d
  __int64 v175; // rcx
  __int64 v176; // rdx
  unsigned __int64 v177; // rcx
  unsigned __int8 v178; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v180; // rcx
  unsigned int v181; // r12d
  char v182; // r14
  unsigned __int8 v183; // si
  unsigned __int64 v184; // rcx
  unsigned __int8 v185; // r15
  unsigned int v186; // ebx
  char v187; // cl
  int v188; // edi
  unsigned __int8 v189; // r14
  struct _KPRCB *v190; // rsi
  unsigned __int16 v191; // dx
  _KPROCESS *v192; // r8
  unsigned __int16 v193; // r9
  __int64 v194; // rax
  _WORD *v195; // r8
  unsigned int v196; // r10d
  __int64 v197; // rcx
  _QWORD *v198; // rdx
  __int64 v199; // rdx
  unsigned int v200; // ebx
  char v201; // cl
  int v202; // edi
  unsigned __int16 v203; // dx
  _KPROCESS *v204; // r8
  unsigned __int16 v205; // r9
  __int64 v206; // rax
  unsigned int v207; // ebx
  char v208; // cl
  int v209; // edi
  unsigned __int64 v210; // rcx
  unsigned __int8 v211; // bl
  struct _KTHREAD *v212; // rax
  __int64 v213; // rcx
  signed __int32 v215[8]; // [rsp+0h] [rbp-100h] BYREF
  _BYTE v216[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v217; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v218; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v219; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v220; // [rsp+58h] [rbp-A8h]
  int v221; // [rsp+60h] [rbp-A0h]
  signed __int32 *v222; // [rsp+68h] [rbp-98h]
  signed __int64 v223; // [rsp+70h] [rbp-90h]
  __int64 v224; // [rsp+78h] [rbp-88h]
  unsigned __int64 v225; // [rsp+80h] [rbp-80h]
  _QWORD *v226; // [rsp+88h] [rbp-78h] BYREF
  int v227; // [rsp+90h] [rbp-70h]
  unsigned int v228; // [rsp+94h] [rbp-6Ch]
  _QWORD *v229; // [rsp+98h] [rbp-68h] BYREF
  int v230; // [rsp+A0h] [rbp-60h]
  unsigned int v231; // [rsp+A4h] [rbp-5Ch]
  ULONG_PTR v232; // [rsp+A8h] [rbp-58h]
  unsigned int v233; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v234; // [rsp+B4h] [rbp-4Ch]
  __int64 v235; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v236; // [rsp+C0h] [rbp-40h]
  _QWORD v237[21]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v238; // [rsp+170h] [rbp+70h]
  __int128 v239; // [rsp+180h] [rbp+80h]
  __int128 v240; // [rsp+190h] [rbp+90h]
  __int128 v241; // [rsp+1A0h] [rbp+A0h]
  __int128 v242; // [rsp+1B0h] [rbp+B0h]
  __int128 v243; // [rsp+1C0h] [rbp+C0h]
  __int64 v244; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v245[21]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v246; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v247[21]; // [rsp+288h] [rbp+188h] BYREF
  __int64 v248; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v249[21]; // [rsp+338h] [rbp+238h] BYREF
  _WORD v250[2]; // [rsp+3E0h] [rbp+2E0h] BYREF
  int v251; // [rsp+3E4h] [rbp+2E4h]
  _QWORD v252[21]; // [rsp+3E8h] [rbp+2E8h]
  _WORD v253[2]; // [rsp+490h] [rbp+390h] BYREF
  int v254; // [rsp+494h] [rbp+394h]
  _QWORD v255[21]; // [rsp+498h] [rbp+398h]
  _WORD v256[2]; // [rsp+540h] [rbp+440h] BYREF
  int v257; // [rsp+544h] [rbp+444h]
  _QWORD v258[21]; // [rsp+548h] [rbp+448h] BYREF
  _WORD v259[2]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v260; // [rsp+5F4h] [rbp+4F4h]
  _QWORD v261[21]; // [rsp+5F8h] [rbp+4F8h] BYREF
  int v262; // [rsp+6A0h] [rbp+5A0h] BYREF
  unsigned __int64 v263; // [rsp+6A8h] [rbp+5A8h]

  v3 = a3;
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x30000) != 0 )
    v3 = a3 & 0xFFFFFFEF;
  ProtectionMask = MiMakeProtectionMask(v3, a2, a1);
  v217 = ProtectionMask;
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v222 = 0LL;
  v221 = 0;
  v11 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v220 = 2LL;
  v12 = v5 + v6 - 1;
  v13 = 0;
  CurrentIrql = 0x904C0000000LL;
  if ( v5 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
  {
    if ( qword_14034EDB0 && v5 >= qword_14034EDB0 && v5 < qword_14034EDB0 + (qword_14034ED90 << 21) )
    {
      if ( ((v12 ^ v5) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        if ( (*(_BYTE *)(48 * ((*(_QWORD *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
        {
          v9 = dword_14034FE40;
          v222 = dword_14034FE40;
        }
        goto LABEL_23;
      }
    }
    else if ( MI_VA_IN_SESSION_SPECIAL_POOL(v5) )
    {
      if ( ((v12 ^ v15) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        v17 = v220;
        v13 = v220;
        v9 = (signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
        v222 = v9;
        goto LABEL_24;
      }
    }
    else if ( v15 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    {
      v18 = (char *)(((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v19 = ((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( (unsigned __int64)v18 > v19 )
      {
LABEL_22:
        v10 = v16;
        v221 = v16;
        goto LABEL_23;
      }
      while ( *v18 >= 0 )
      {
        v18 += 8;
        if ( (unsigned __int64)v18 > v19 )
          goto LABEL_22;
      }
    }
    return 0LL;
  }
  v9 = dword_14034FE40;
  v222 = dword_14034FE40;
LABEL_23:
  v17 = v220;
LABEL_24:
  v235 = 20LL;
  v20 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v233 = v13;
  v232 = v20;
  v21 = v13;
  v234 = v8;
  v236 = v8;
  v237[0] = v8;
  if ( v9 )
  {
    v225 = *((_QWORD *)v9 + 23);
    CurrentIrql = KeGetCurrentIrql();
    v219 = CurrentIrql;
    __writecr8(v17);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
      v21 = v233;
      v7 = v217;
    }
    else
    {
      v22 = v8;
      if ( _interlockedbittestandset(v9, 0x1Fu) )
        v22 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
      for ( i = *v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = *v9 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v9, i | 0x40000000, i);
        if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v22);
      }
      LOBYTE(CurrentIrql) = v219;
      v21 = v233;
      v7 = v217;
    }
  }
  else
  {
    LOBYTE(CurrentIrql) = 17;
    v225 = v8;
    v219 = CurrentIrql;
  }
  v24 = v13;
  v224 = v13;
  v25 = 4LL;
  if ( v11 <= v20 )
  {
    do
    {
      PteShadow = *(_QWORD *)v11;
      v27 = v11 + 0x90482413000LL;
      if ( v11 + 0x90482413000LL <= 0x7F8 )
      {
        PteShadow = MiReadPteShadow(v11, *(_QWORD *)v11);
        v25 = 4LL;
      }
      v218 = PteShadow;
      if ( (_DWORD)v7 == 24 )
      {
        if ( !v9 )
        {
          if ( v10 == 1 )
          {
            v44 = MiLockNonPagedPoolPte(v11, v216);
            v45 = *(_QWORD *)v11;
            v46 = v44;
            if ( v27 <= 0x7F8 )
              v45 = MiReadPteShadow(v11, *(_QWORD *)v11);
            v218 = v45;
          }
          else
          {
            if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
              PteShadow = MiReadPteShadow(&v218, PteShadow);
            v46 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v47 = KeGetCurrentIrql();
            __writecr8(v220);
            v48 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v48);
              }
              while ( (*(_QWORD *)(v46 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) );
            }
            v45 = v218;
            LOBYTE(CurrentIrql) = v219;
            v216[0] = v47;
          }
          *(_QWORD *)(v46 + 16) = *(_QWORD *)(v46 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v49 = &STACK[0x90482413048];
          while ( 1 )
          {
            v50 = v45;
            if ( (unsigned __int64)v49 <= 0x7F8 )
              v50 = MiReadPteShadow(&v218, v45);
            TransitionPte = MiMakeTransitionPte((v50 >> 12) & 0xFFFFFFFFFLL, 24LL);
            if ( v10 != 1 )
              break;
            v53 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, TransitionPte, v52);
            v161 = v52 == v53;
            v45 = v53;
            if ( v161 )
            {
              if ( (v218 & 0x200) != 0 )
                *(_QWORD *)(v46 + 24) = *(_QWORD *)(v46 + 24) & 0xC000000000000000uLL | 0x10000;
              goto LABEL_143;
            }
            v218 = v53;
          }
          *(_QWORD *)v11 = TransitionPte;
          if ( v27 <= 0x7F8 )
            MiWritePteShadow(v11, TransitionPte);
LABEL_143:
          _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v216[0]);
          MiInsertTbFlushEntry(&v233, (__int64)(v11 << 25) >> 16, 1LL, 0LL);
          goto LABEL_437;
        }
        if ( (PteShadow & 1) != 0 )
        {
          if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
            PteShadow = MiReadPteShadow(&v218, PteShadow);
          if ( (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
          {
            Wsle = MiLocateWsle((__int64)(v11 << 25) >> 16);
            v32 = Wsle;
            if ( dword_14034F248
              && (*(_BYTE *)v11 & 0x20) != 0
              && (*(_DWORD *)(*(_QWORD *)(v225 + 496) + Wsle * *(unsigned int *)(v225 + 64)) & 0xE00) != 0xE00LL )
            {
              MiLogPageAccess(v9, v11);
            }
            v263 = v32;
            v262 = 1;
            if ( v32 >= *(_QWORD *)(v225 + 8) && !MiFreeWsleList(v9, &v262, 0LL) )
              v11 -= 8LL;
            goto LABEL_75;
          }
          if ( !HIDWORD(v235) )
            goto LABEL_67;
          v28 = qword_14034EBD8;
          if ( (v234 & 2) != 0 )
            goto LABEL_54;
          v21 = v233;
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process[2].ActiveProcessors.Bitmap[11] )
            goto LABEL_53;
          if ( !Process->SecurePid )
          {
LABEL_54:
            if ( v21 != 1 )
              goto LABEL_56;
            v30 = 0LL;
          }
          else
          {
            if ( v233 == 1 )
            {
LABEL_53:
              v28 = -1LL;
              goto LABEL_54;
            }
LABEL_56:
            v30 = 1LL;
          }
          if ( HIBYTE(v234) || v236 > v28 )
          {
            if ( (v234 & 1) != 0 )
              KeFlushCurrentTbOnly(v21, v30, v28);
            else
              KeFlushTb(v21, v30);
            HIBYTE(v234) = 0;
            HIDWORD(v235) = 0;
            v236 = 0LL;
          }
          else
          {
            if ( (v234 & 1) != 0 )
              KeFlushMultipleRangeCurrentTb(HIDWORD(v235), v237, v21);
            else
              KeFlushMultipleRangeTb(HIDWORD(v235), v237, v21, (unsigned int)v30);
            HIDWORD(v235) = 0;
            v236 = 0LL;
          }
          goto LABEL_67;
        }
        if ( (PteShadow & 0x400) != 0 )
        {
          if ( HIDWORD(v235) )
          {
            v33 = qword_14034EBD8;
            if ( (v234 & 2) != 0 )
              goto LABEL_83;
            v21 = v233;
            v34 = KeGetCurrentThread()->ApcState.Process;
            if ( v34[2].ActiveProcessors.Bitmap[11] )
              goto LABEL_82;
            if ( !v34->SecurePid )
            {
LABEL_83:
              if ( v21 != 1 )
                goto LABEL_85;
              v35 = 0LL;
            }
            else
            {
              if ( v233 == 1 )
              {
LABEL_82:
                v33 = -1LL;
                goto LABEL_83;
              }
LABEL_85:
              v35 = 1LL;
            }
            if ( HIBYTE(v234) || v236 > v33 )
            {
              if ( (v234 & 1) != 0 )
                KeFlushCurrentTbOnly(v21, v35, v33);
              else
                KeFlushTb(v21, v35);
              HIBYTE(v234) = 0;
              HIDWORD(v235) = 0;
              v236 = 0LL;
            }
            else
            {
              if ( (v234 & 1) != 0 )
                KeFlushMultipleRangeCurrentTb(HIDWORD(v235), v237, v21);
              else
                KeFlushMultipleRangeTb(HIDWORD(v235), v237, v21, (unsigned int)v35);
              HIDWORD(v235) = 0;
              v236 = 0LL;
            }
          }
          MiUnlockWorkingSetExclusive(v9, (unsigned __int8)CurrentIrql);
          MmAccessFault(0LL, (__int64)(v11 << 25) >> 16);
          v36 = KeGetCurrentIrql();
          __writecr8(v220);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
LABEL_97:
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
            LOBYTE(CurrentIrql) = v36;
            v11 -= 8LL;
            v219 = v36;
            goto LABEL_437;
          }
          v37 = 0;
          if ( _interlockedbittestandset(v9, 0x1Fu) )
            v37 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
          for ( j = *v9; (*v9 & 0xBFFFFFFF) != 0x80000000; j = *v9 )
          {
            if ( (j & 0x40000000) == 0 )
              _InterlockedCompareExchange(v9, j | 0x40000000, j);
            if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v37);
          }
LABEL_108:
          LOBYTE(CurrentIrql) = v36;
          v11 -= 8LL;
          v219 = v36;
          goto LABEL_437;
        }
        if ( (PteShadow & 0x800) != 0 )
        {
          CurrentIrql = MiLockTransitionLeafPage(v11);
          if ( CurrentIrql )
          {
            v39 = *(_QWORD *)v11;
            if ( v27 <= 0x7F8 )
              v39 = MiReadPteShadow(v11, *(_QWORD *)v11);
            v40 = v39 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            v41 = *(_QWORD *)(CurrentIrql + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            v218 = v40;
            *(_QWORD *)(CurrentIrql + 16) = v41;
            *(_QWORD *)v11 = v40;
            if ( v27 <= 0x7F8 )
              MiWritePteShadow(v11, v40);
            _InterlockedAnd64((volatile signed __int64 *)(CurrentIrql + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LOBYTE(CurrentIrql) = v219;
          }
          else
          {
            LOBYTE(CurrentIrql) = v219;
            v11 -= 8LL;
          }
          goto LABEL_437;
        }
        v42 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v218 = v42;
        *(_QWORD *)v11 = v42;
        if ( v27 <= 0x7F8 )
        {
          v43 = v42;
LABEL_436:
          MiWritePteShadow(v11, v43);
          goto LABEL_437;
        }
      }
      else
      {
        if ( !v9 )
        {
          v54 = v11 + 0x90482413000LL;
          v55 = v7 & 4;
          while ( 1 )
          {
            v56 = PteShadow;
            if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
              v56 = MiReadPteShadow(&v218, PteShadow);
            v57 = 0x904C0000000LL;
            v58 = 48 * ((v56 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( v24 )
            {
              CurrentIrql = MmProtectToPteMask[(unsigned int)v7] ^ (PteShadow ^ MmProtectToPteMask[(unsigned int)v7]) & 0xFFFFFFFFF000LL | 0x21;
              if ( v11 + 0x904C0000000LL <= 0x3FFFFFFF )
                CurrentIrql &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
              v61 = 0x98000000000LL;
              if ( v11 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                && v11 >= 0xFFFFF68000000000uLL
                || v11 >= 0xFFFFF6FB40000000uLL
                && v11 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
                || v11 >= 0xFFFFF6FB7DA00000uLL
                && (v61 = 0x90482600000LL,
                    v11 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
                || v11 >= 0xFFFFF6FB7DBED000uLL
                && v11 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
              {
                CurrentIrql |= 4uLL;
              }
              if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v11, v61, 0x904C0000000LL) )
                CurrentIrql |= 0x100uLL;
            }
            else
            {
              v59 = MmProtectToPteMask[(unsigned int)v7] ^ (PteShadow ^ MmProtectToPteMask[(unsigned int)v7]) & 0xFFFFFFFFF000LL | 0x21;
              if ( v11 + 0x904C0000000LL <= 0x3FFFFFFF )
                v59 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
              if ( v11 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                && v11 >= 0xFFFFF68000000000uLL
                || v11 >= 0xFFFFF6FB40000000uLL
                && v11 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
                || v11 >= 0xFFFFF6FB7DA00000uLL
                && (v57 = 0x90482600000LL,
                    v11 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
                || v11 >= 0xFFFFF6FB7DBED000uLL
                && v11 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
              {
                v59 |= 4uLL;
              }
              if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v11, v59, v57) )
                v60 |= 0x100uLL;
              CurrentIrql = v60 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
            }
            if ( v55 )
              CurrentIrql |= 0x42uLL;
            if ( (PteShadow & 1) == 0 )
              break;
            if ( v221 != 1 )
            {
              v216[0] = 17;
              *(_QWORD *)v11 = CurrentIrql;
              if ( v54 <= 0x7F8 )
              {
                MiWritePteShadow(v11, CurrentIrql);
                v7 = v217;
              }
LABEL_191:
              *(_QWORD *)(v58 + 16) ^= (*(_DWORD *)(v58 + 16) ^ (32 * (_DWORD)v7)) & 0x3E0;
              if ( v221 == 1 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v216[0]);
                PteShadow = v218;
              }
              if ( (MiFlags & 0x100) == 0
                || (CurrentIrql & 0x40) == 0 && (PteShadow & 0x40) != 0
                || (CurrentIrql & 2) == 0 && (PteShadow & 2) != 0
                || CurrentIrql < 0 && (PteShadow & 0x8000000000000000uLL) == 0 )
              {
                MiInsertTbFlushEntry(&v233, (__int64)(v11 << 25) >> 16, 1LL, 0LL);
                LOBYTE(CurrentIrql) = v219;
                goto LABEL_437;
              }
              goto LABEL_434;
            }
            v58 = MiLockNonPagedPoolPte(v11, v216);
            v62 = *(_QWORD *)v11;
            if ( v54 <= 0x7F8 )
              v62 = MiReadPteShadow(v11, *(_QWORD *)v11);
            if ( v62 == PteShadow )
            {
              if ( (PteShadow & 0x200) != 0 )
                CurrentIrql |= 0x200uLL;
              v63 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, CurrentIrql, PteShadow);
              v161 = PteShadow == v63;
              v7 = v217;
              PteShadow = v63;
              if ( v161 )
              {
                PteShadow = v218;
                goto LABEL_191;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v216[0]);
              v24 = v224;
              v218 = v63;
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v216[0]);
              LODWORD(v7) = v217;
              PteShadow = v62;
              v24 = v224;
              v218 = v62;
            }
          }
          if ( (*(_QWORD *)(v58 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            v64 = KeGetCurrentIrql();
            __writecr8(v220);
            v65 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v58 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v65 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v65);
              }
              while ( (*(_QWORD *)(v58 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v58 + 24), 0x3FuLL) );
              v7 = v217;
            }
            v66 = *(_QWORD *)(v58 + 24) & 0xC000000000000001uLL;
            v216[0] = v64;
            *(_QWORD *)(v58 + 24) = v66 | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v64);
            CurrentIrql |= 0x200uLL;
          }
          *(_QWORD *)(v58 + 16) ^= (*(_DWORD *)(v58 + 16) ^ (32 * (_DWORD)v7)) & 0x3E0;
          *(_QWORD *)v11 = CurrentIrql;
          if ( v54 <= 0x7F8 )
          {
            MiWritePteShadow(v11, CurrentIrql);
            LOBYTE(CurrentIrql) = v219;
            goto LABEL_437;
          }
          goto LABEL_434;
        }
        if ( (PteShadow & 1) != 0 )
        {
          v67 = PteShadow;
          if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8 )
            v67 = MiReadPteShadow(&v218, PteShadow);
          v68 = 48 * ((v67 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( (*(_QWORD *)(v68 + 40) & 0x200000000000000LL) != 0 )
          {
            v69 = HIDWORD(v235);
            LODWORD(v223) = HIDWORD(v235);
            if ( HIDWORD(v235) )
            {
              v70 = qword_14034EBD8;
              if ( (v234 & 2) != 0 )
                goto LABEL_223;
              v21 = v233;
              v71 = KeGetCurrentThread()->ApcState.Process;
              if ( v71[2].ActiveProcessors.Bitmap[11] )
                goto LABEL_222;
              if ( !v71->SecurePid )
              {
LABEL_223:
                if ( v21 != 1 )
                  goto LABEL_225;
                _ESI = 0;
                v73 = 0LL;
              }
              else
              {
                if ( v233 == 1 )
                {
LABEL_222:
                  v70 = -1LL;
                  goto LABEL_223;
                }
LABEL_225:
                _ESI = 0;
                v73 = 1LL;
              }
              if ( HIBYTE(v234) || v236 > v70 )
              {
                if ( (v234 & 1) != 0 )
                  KeFlushCurrentTbOnly(v21, v73, v70);
                else
                  KeFlushTb(v21, v73);
                HIBYTE(v234) = 0;
              }
              else if ( (v234 & 1) != 0 )
              {
                v74 = v21;
                if ( v21 == 1 )
                {
                  v21 = v233;
                  if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
                  {
                    v75 = 1;
                    goto LABEL_235;
                  }
                }
                v75 = 0;
                if ( (HvlEnlightenments & 6) != 0
                  && ((HvlEnlightenments & 2) != 0 || (v21 = v233, (unsigned int)KeNumberProcessors_0 > 1)) )
                {
LABEL_235:
                  if ( KiKvaShadow )
                  {
                    if ( !v21 )
                      goto LABEL_245;
                    v76 = v21 - 1;
                    if ( !v76 )
                      goto LABEL_238;
LABEL_244:
                    if ( v76 == 1 )
                    {
LABEL_245:
                      v77 = 0LL;
                      v78 = 0;
                      goto LABEL_239;
                    }
LABEL_238:
                    v77 = 0LL;
                    v78 = 1;
                    goto LABEL_239;
                  }
                  if ( !v21 )
                    goto LABEL_238;
                  v76 = v21 - 1;
                  if ( v76 )
                    goto LABEL_244;
                  v77 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
                  v78 = 0;
LABEL_239:
                  CurrentPrcb = KeGetCurrentPrcb();
                  v248 = 1310721LL;
                  memset(v249, 0, 0xA0uLL);
                  Group = CurrentPrcb->Group;
                  GroupSetMember = CurrentPrcb->GroupSetMember;
                  if ( CurrentPrcb->Group )
                    LOWORD(v248) = Group + 1;
                  v249[Group] |= GroupSetMember;
                  HvlFlushRangeListTb(v77, &v248, v78, v75, HIDWORD(v235), v237);
                }
                else
                {
                  v82 = (void **)v237;
                  v83 = HIDWORD(v235);
                  v84 = __ROL4__(1, v21) & 0xA;
                  do
                  {
                    v85 = (char *)*v82;
                    if ( v84 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                    {
                      *(_QWORD *)&v238 = 1LL;
                      *((_QWORD *)&v238 + 1) = v85;
                      __asm { invpcid esi, [rbp+680h+var_610] }
                    }
                    __invlpg(v85);
                    v86 = (unsigned __int16)v85 & 0x7FF;
                    v87 = 0x200000LL;
                    if ( ((unsigned __int16)v85 & 0x800) == 0 )
                      v87 = 4096LL;
                    if ( ((unsigned __int16)v85 & 0x7FF) != 0 )
                    {
                      do
                      {
                        v85 += v87;
                        if ( ((1 << v74) & 0xA) != 0
                          && KiFlushPcid
                          && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                        {
                          *(_QWORD *)&v240 = 1LL;
                          *((_QWORD *)&v240 + 1) = v85;
                          __asm { invpcid esi, [rbp+680h+var_5F0] }
                        }
                        __invlpg(v85);
                        --v86;
                      }
                      while ( v86 );
                    }
                    ++v82;
                    --v83;
                  }
                  while ( v83 );
                  v69 = v223;
                }
                if ( VmTbFlushEnabled )
                  VmFlushTb(v69, v237);
                if ( ExTbFlushActive )
                {
                  v88 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  ExFlushTb(v69, v237, v74);
                  __writecr8(v88);
                }
              }
              else
              {
                KeFlushMultipleRangeTb(HIDWORD(v235), v237, v21, (unsigned int)v73);
              }
              LOBYTE(CurrentIrql) = v219;
              HIDWORD(v235) = 0;
              v236 = 0LL;
            }
LABEL_67:
            MiCopyOnWriteEx((__int64)(v11 << 25) >> 16, (volatile __int64 *)v11, -1LL, CurrentIrql, 0);
            v11 -= 8LL;
            goto LABEL_437;
          }
          v89 = v7;
          if ( v24 )
          {
            v94 = MmProtectToPteMask[(unsigned int)v7] ^ (PteShadow ^ MmProtectToPteMask[(unsigned int)v7]) & 0xFFFFFFFFF000LL | 0x21;
            if ( v11 + 0x904C0000000LL <= 0x3FFFFFFF )
              v94 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
            v95 = 0x98000000000LL;
            if ( v11 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
              && v11 >= 0xFFFFF68000000000uLL
              || v11 >= 0xFFFFF6FB40000000uLL
              && v11 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              || v11 >= 0xFFFFF6FB7DA00000uLL
              && (v95 = 0x90482600000LL,
                  v11 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
              || v11 >= 0xFFFFF6FB7DBED000uLL
              && v11 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
            {
              v94 |= 4uLL;
            }
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v11, v94, v95) )
              v93 |= 0x100uLL;
          }
          else
          {
            v90 = MmProtectToPteMask[(unsigned int)v7] ^ (PteShadow ^ MmProtectToPteMask[(unsigned int)v7]) & 0xFFFFFFFFF000LL | 0x21;
            if ( v11 + 0x904C0000000LL <= 0x3FFFFFFF )
              v90 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
            v91 = 0x98000000000LL;
            if ( v11 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
              && v11 >= 0xFFFFF68000000000uLL
              || v11 >= 0xFFFFF6FB40000000uLL
              && v11 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              || v11 >= 0xFFFFF6FB7DA00000uLL
              && (v91 = 0x90482600000LL,
                  v11 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
              || v11 >= 0xFFFFF6FB7DBED000uLL
              && v11 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
            {
              v90 |= 4uLL;
            }
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v11, v91, v90) )
              v92 |= 0x100uLL;
            v93 = v92 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
          }
          v223 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v93, PteShadow);
          if ( PteShadow != v223 )
          {
            v11 -= 8LL;
            goto LABEL_438;
          }
          if ( (MiFlags & 0x100) == 0
            || (v93 & 0x40) == 0 && (PteShadow & 0x40) != 0
            || (v93 & 2) == 0 && (PteShadow & 2) != 0
            || (v93 & 0x8000000000000000uLL) != 0 && (PteShadow & 0x8000000000000000uLL) == 0 )
          {
            MiInsertTbFlushEntry(&v233, (__int64)(v11 << 25) >> 16, 1LL, 0LL);
          }
          CurrentIrql = 0LL;
          v96 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v96 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v96);
            }
            while ( (*(_QWORD *)(v68 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) );
          }
          *(_QWORD *)(v68 + 16) ^= (*(_DWORD *)(v68 + 16) ^ (32 * v89)) & 0x3E0;
          if ( (PteShadow & 0x42) != 0 )
            CurrentIrql = MiCaptureDirtyBitToPfn(v68);
          _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql )
          {
            MiReleasePageFileInfo(MiSystemPartition, CurrentIrql, 1LL);
            LOBYTE(CurrentIrql) = v219;
            goto LABEL_437;
          }
LABEL_75:
          LOBYTE(CurrentIrql) = v219;
          goto LABEL_437;
        }
        if ( (PteShadow & 0x400) != 0 )
        {
          LODWORD(v223) = HIDWORD(v235);
          v97 = HIDWORD(v235);
          if ( !HIDWORD(v235) )
            goto LABEL_414;
          v98 = qword_14034EBD8;
          if ( (v234 & 2) != 0 )
            goto LABEL_328;
          v21 = v233;
          v99 = KeGetCurrentThread()->ApcState.Process;
          if ( v99[2].ActiveProcessors.Bitmap[11] )
            goto LABEL_327;
          if ( !v99->SecurePid )
          {
LABEL_328:
            if ( v21 != 1 )
              goto LABEL_330;
            v100 = 1LL;
            v101 = 0;
          }
          else
          {
            if ( v233 == 1 )
            {
LABEL_327:
              v98 = -1LL;
              goto LABEL_328;
            }
LABEL_330:
            v100 = 1LL;
            v101 = 1;
          }
          if ( HIBYTE(v234) || v236 > v98 )
          {
            if ( (v234 & 1) != 0 )
              KeFlushCurrentTbOnly(v21, v98, 4LL);
            else
              KeFlushTb(v21, v101);
            HIBYTE(v234) = 0;
            goto LABEL_413;
          }
          if ( (v234 & 1) != 0 )
          {
            v102 = v21;
            if ( v21 == 1 )
            {
              v21 = v233;
              if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
              {
                v103 = 1;
                goto LABEL_340;
              }
            }
            v103 = 0;
            if ( (HvlEnlightenments & 6) != 0
              && ((HvlEnlightenments & 2) != 0 || (v21 = v233, (unsigned int)KeNumberProcessors_0 > 1)) )
            {
LABEL_340:
              if ( KiKvaShadow )
              {
                if ( !v21 || v21 == 2 )
                {
                  v104 = 0;
                  goto LABEL_350;
                }
LABEL_349:
                v104 = 1;
                goto LABEL_350;
              }
              if ( !v21 )
                goto LABEL_349;
              v105 = v21 - 1;
              if ( v105 )
              {
                if ( v105 != 1 )
                  goto LABEL_349;
                v104 = 0;
LABEL_350:
                v106 = 0LL;
              }
              else
              {
                v106 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
                v104 = 0;
              }
              v107 = KeGetCurrentPrcb();
              v244 = 1310721LL;
              memset(v245, 0, 0xA0uLL);
              v108 = v107->Group;
              v109 = v107->GroupSetMember;
              if ( v107->Group )
                LOWORD(v244) = v108 + 1;
              v245[v108] |= v109;
              HvlFlushRangeListTb(v106, &v244, v104, v103, HIDWORD(v235), v237);
            }
            else
            {
              v110 = (void **)v237;
              v111 = HIDWORD(v235);
              v112 = __ROL4__(1, v21) & 0xA;
              do
              {
                v113 = (char *)*v110;
                _ESI = 0;
                if ( v112 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                {
                  *(_QWORD *)&v243 = 1LL;
                  *((_QWORD *)&v243 + 1) = v113;
                  __asm { invpcid esi, [rbp+680h+var_5C0] }
                }
                __invlpg(v113);
                v115 = (unsigned __int16)v113 & 0x7FF;
                v116 = 0x200000LL;
                if ( ((unsigned __int16)v113 & 0x800) == 0 )
                  v116 = 4096LL;
                if ( ((unsigned __int16)v113 & 0x7FF) != 0 )
                {
                  do
                  {
                    v113 += v116;
                    if ( ((1 << v102) & 0xA) != 0
                      && KiFlushPcid
                      && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                    {
                      *(_QWORD *)&v242 = 1LL;
                      *((_QWORD *)&v242 + 1) = v113;
                      __asm { invpcid esi, [rbp+680h+var_5D0] }
                    }
                    __invlpg(v113);
                    --v115;
                  }
                  while ( v115 );
                }
                ++v110;
                --v111;
              }
              while ( v111 );
              LODWORD(v97) = v223;
            }
            if ( VmTbFlushEnabled )
              VmFlushTb((unsigned int)v97, v237);
            if ( ExTbFlushActive )
            {
              v117 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              ExFlushTb((unsigned int)v97, v237, v102);
              __writecr8(v117);
            }
LABEL_413:
            v9 = v222;
            LOBYTE(CurrentIrql) = v219;
            HIDWORD(v235) = 0;
            v236 = 0LL;
LABEL_414:
            MiUnlockWorkingSetExclusive(v9, (unsigned __int8)CurrentIrql);
            MmAccessFault(0LL, (__int64)(v11 << 25) >> 16);
            v36 = KeGetCurrentIrql();
            __writecr8(v220);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              goto LABEL_97;
            v135 = 0;
            if ( _interlockedbittestandset(v9, 0x1Fu) )
              v135 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
            v136 = *v9;
            if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
              goto LABEL_108;
            do
            {
              if ( (v136 & 0x40000000) == 0 )
                _InterlockedCompareExchange(v9, v136 | 0x40000000, v136);
              if ( (++v135 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v135);
              v136 = *v9;
            }
            while ( (*v9 & 0xBFFFFFFF) != 0x80000000 );
            LOBYTE(CurrentIrql) = v36;
            v11 -= 8LL;
            v219 = v36;
LABEL_437:
            v7 = v217;
            goto LABEL_438;
          }
          v118 = v21;
          if ( v21 == 1 )
          {
            v21 = v233;
            if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
            {
              v100 = 1LL;
              goto LABEL_379;
            }
          }
          LOBYTE(v100) = 0;
          if ( (HvlEnlightenments & 6) != 0
            && ((HvlEnlightenments & 2) != 0 || (v21 = v233, (unsigned int)KeNumberProcessors_0 > 1)) )
          {
LABEL_379:
            if ( KiKvaShadow )
            {
              if ( !v21 || v21 == 2 )
              {
                LOBYTE(v25) = 0;
                goto LABEL_389;
              }
LABEL_388:
              LOBYTE(v25) = 1;
              goto LABEL_389;
            }
            if ( !v21 )
              goto LABEL_388;
            v119 = v21 - 1;
            if ( v119 )
            {
              if ( v119 != 1 )
                goto LABEL_388;
              LOBYTE(v25) = 0;
LABEL_389:
              v120 = 0LL;
            }
            else
            {
              v120 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
              LOBYTE(v25) = 0;
            }
            if ( v101 )
              p_ActiveProcessors = 0LL;
            else
              p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
            HvlFlushRangeListTb(v120, p_ActiveProcessors, v25, v100, HIDWORD(v235), v237);
          }
          else
          {
            v228 = v21;
            v226 = v237;
            v122 = 4;
            v227 = HIDWORD(v235);
            if ( v101 == 1 )
              v122 = -2147483644;
            v123 = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            v124 = KeGetCurrentPrcb();
            if ( v101 )
            {
              v129 = 0LL;
              v133 = 1LL;
            }
            else
            {
              _InterlockedOr(v215, 0);
              v125 = 0;
              v126 = v124->CurrentThread->ApcState.Process;
              Count = v126->ActiveProcessors.Count;
              v250[0] = Count;
              v250[1] = v126->ActiveProcessors.Size;
              v251 = 0;
              if ( v126->ActiveProcessors.Count )
              {
                do
                {
                  v128 = v125++;
                  v252[v128] = v126->ActiveProcessors.Bitmap[v128];
                }
                while ( v125 < v126->ActiveProcessors.Count );
                Count = v250[0];
              }
              v129 = v250;
              v130 = (unsigned int)KiProcessorIndexToNumberMappingTable[v124->Number] >> 6;
              if ( Count > (unsigned int)v130 )
              {
                v131 = v130;
                v132 = v252[v130];
                _bittestandreset64(&v132, KiProcessorIndexToNumberMappingTable[v124->Number] & 0x3F);
                v252[v131] = v132;
              }
              v133 = 0LL;
            }
            KiIpiSendRequestEx(
              (__int64)v124,
              v133,
              v129,
              (int)&v226,
              v97,
              v122,
              (__int64 (__fastcall *)(__int64, __int64))KiFlushRangeWorker,
              (__int64)&v226);
            __writecr8(v123);
          }
          if ( VmTbFlushEnabled )
            VmFlushTb((unsigned int)v97, v237);
          if ( ExTbFlushActive )
          {
            v134 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            ExFlushTb((unsigned int)v97, v237, v118);
            __writecr8(v134);
          }
          goto LABEL_413;
        }
        if ( (PteShadow & 0x800) != 0 )
        {
          v137 = MiLockTransitionLeafPage(v11);
          if ( !v137 )
          {
            LOBYTE(CurrentIrql) = v219;
            v11 -= 8LL;
            goto LABEL_437;
          }
          v138 = *(_QWORD *)v11;
          if ( v27 <= 0x7F8 )
            v138 = MiReadPteShadow(v11, *(_QWORD *)v11);
          v7 = v217;
          v139 = 32LL * (v217 & 0x1F);
          v140 = v139 | v138 & 0xFFFFFFFFFFFFFC1FuLL;
          *(_QWORD *)(v137 + 16) = v139 | *(_QWORD *)(v137 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v218 = v140;
          *(_QWORD *)v11 = v140;
          if ( v27 <= 0x7F8 )
          {
            MiWritePteShadow(v11, v140);
            v7 = v217;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v137 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_434:
          LOBYTE(CurrentIrql) = v219;
LABEL_438:
          v21 = v233;
          goto LABEL_439;
        }
        v43 = PteShadow ^ ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * v7)) & 0x3E0;
        v218 = v43;
        *(_QWORD *)v11 = v43;
        if ( v27 <= 0x7F8 )
          goto LABEL_436;
      }
LABEL_439:
      v9 = v222;
      v11 += 8LL;
      v10 = v221;
      v24 = v224;
      v25 = 4LL;
    }
    while ( v11 <= v232 );
  }
  LODWORD(v223) = HIDWORD(v235);
  v141 = HIDWORD(v235);
  if ( !HIDWORD(v235) )
    goto LABEL_630;
  v142 = qword_14034EBD8;
  if ( (v234 & 2) == 0 )
  {
    v21 = v233;
    v143 = KeGetCurrentThread()->ApcState.Process;
    if ( !v143[2].ActiveProcessors.Bitmap[11] )
    {
      if ( !v143->SecurePid )
        goto LABEL_446;
      if ( v233 != 1 )
      {
LABEL_448:
        _R13D = 0;
        v145 = 1LL;
        goto LABEL_449;
      }
    }
    v142 = -1LL;
  }
LABEL_446:
  if ( v21 != 1 )
    goto LABEL_448;
  _R13D = 0;
  v145 = 0LL;
LABEL_449:
  if ( !HIBYTE(v234) && v236 <= v142 )
  {
    if ( (v234 & 1) != 0 )
    {
      v146 = v21;
      if ( v21 == 1 && (v21 = v233, KeGetCurrentThread()->ApcState.Process->SecurePid) )
      {
        v147 = v146;
      }
      else
      {
        v147 = 0;
        if ( (HvlEnlightenments & 6) == 0
          || (HvlEnlightenments & 2) == 0 && (v21 = v233, (unsigned int)KeNumberProcessors_0 <= 1) )
        {
          v154 = (void **)v237;
          v155 = HIDWORD(v235);
          v156 = __ROL4__(1, v21) & 0xA;
          do
          {
            v157 = (char *)*v154;
            if ( v156 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              *(_QWORD *)&v239 = 1LL;
              *((_QWORD *)&v239 + 1) = v157;
              __asm { invpcid r13d, [rbp+680h+var_600] }
            }
            __invlpg(v157);
            v158 = (unsigned __int16)v157 & 0x7FF;
            v159 = 0x200000LL;
            if ( ((unsigned __int16)v157 & 0x800) == 0 )
              v159 = 4096LL;
            if ( ((unsigned __int16)v157 & 0x7FF) != 0 )
            {
              do
              {
                v157 += v159;
                if ( ((1 << v146) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                {
                  *(_QWORD *)&v241 = 1LL;
                  *((_QWORD *)&v241 + 1) = v157;
                  __asm { invpcid r13d, [rbp+680h+var_5E0] }
                }
                __invlpg(v157);
                --v158;
              }
              while ( v158 );
            }
            ++v154;
            --v155;
          }
          while ( v155 );
          LODWORD(v141) = v223;
          goto LABEL_487;
        }
      }
      if ( KiKvaShadow )
      {
        if ( !v21 || v21 == 2 )
        {
          v148 = 0;
LABEL_468:
          v150 = 0LL;
          goto LABEL_469;
        }
      }
      else if ( v21 )
      {
        v149 = v21 - 1;
        if ( !v149 )
        {
          v150 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          v148 = 0;
LABEL_469:
          v151 = KeGetCurrentPrcb();
          v246 = 1310721LL;
          memset(v247, 0, 0xA0uLL);
          v152 = v151->Group;
          v153 = v151->GroupSetMember;
          if ( v151->Group )
            LOWORD(v246) = v152 + 1;
          v247[v152] |= v153;
          HvlFlushRangeListTb(v150, &v246, v148, v147, HIDWORD(v235), v237);
LABEL_487:
          if ( VmTbFlushEnabled )
          {
            v160 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11];
            if ( v160 )
              VmpFlushTb(v160, (unsigned int)v141, v237, v146);
          }
          if ( !ExTbFlushActive )
            goto LABEL_629;
          v161 = v146 == 1;
          goto LABEL_529;
        }
        if ( v149 == 1 )
        {
          v148 = 0;
          goto LABEL_468;
        }
      }
      v148 = 1;
      goto LABEL_468;
    }
    v162 = v21;
    if ( v21 == 1 && (v21 = v233, KeGetCurrentThread()->ApcState.Process->SecurePid) )
    {
      v7 = (unsigned __int8)v162;
    }
    else
    {
      LOBYTE(v7) = 0;
      if ( (HvlEnlightenments & 6) == 0
        || (HvlEnlightenments & 2) == 0 && (v21 = v233, (unsigned int)KeNumberProcessors_0 <= 1) )
      {
        v231 = v21;
        v229 = v237;
        v166 = 4;
        v230 = HIDWORD(v235);
        if ( (_DWORD)v145 == 1 )
          v166 = -2147483644;
        v167 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        v168 = KeGetCurrentPrcb();
        if ( (_DWORD)v145 )
        {
          v173 = 0LL;
          v176 = 1LL;
        }
        else
        {
          _InterlockedOr(v215, 0);
          v169 = 0;
          v170 = v168->CurrentThread->ApcState.Process;
          v171 = v170->ActiveProcessors.Count;
          v253[0] = v171;
          v253[1] = v170->ActiveProcessors.Size;
          v254 = 0;
          if ( v170->ActiveProcessors.Count )
          {
            do
            {
              v172 = v169++;
              v255[v172] = v170->ActiveProcessors.Bitmap[v172];
            }
            while ( v169 < v170->ActiveProcessors.Count );
            v171 = v253[0];
          }
          v173 = v253;
          v174 = KiProcessorIndexToNumberMappingTable[v168->Number];
          v175 = v174 >> 6;
          if ( v171 > (unsigned int)v175 )
            v255[v175] &= ~(1LL << (v174 & 0x3F));
          v176 = 0LL;
        }
        KiIpiSendRequestEx(
          (__int64)v168,
          v176,
          v173,
          (int)&v229,
          v141,
          v166,
          (__int64 (__fastcall *)(__int64, __int64))KiFlushRangeWorker,
          (__int64)&v229);
        __writecr8(v167);
        goto LABEL_524;
      }
    }
    if ( KiKvaShadow )
    {
      if ( !v21 || v21 == 2 )
      {
        LOBYTE(v142) = 0;
LABEL_508:
        v164 = 0LL;
        goto LABEL_509;
      }
    }
    else if ( v21 )
    {
      v163 = v21 - 1;
      if ( !v163 )
      {
        v164 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        LOBYTE(v142) = 0;
LABEL_509:
        if ( (_DWORD)v145 )
          v165 = 0LL;
        else
          v165 = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        HvlFlushRangeListTb(v164, v165, v142, v7, HIDWORD(v235), v237);
LABEL_524:
        if ( VmTbFlushEnabled )
        {
          v177 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11];
          if ( v177 )
            VmpFlushTb(v177, (unsigned int)v141, v237, v162);
        }
        if ( !ExTbFlushActive )
          goto LABEL_629;
        v161 = v162 == 1;
LABEL_529:
        v178 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        CurrentThread = KeGetCurrentThread();
        if ( v161 )
        {
          v180 = *(_QWORD *)&CurrentThread->ApcState.Process[2].ActiveProcessors.Count;
          if ( v180 )
            (*((void (__fastcall **)(__int64, _QWORD, _QWORD *))HalIommuDispatch[0] + 9))(
              v180,
              (unsigned int)v141,
              v237);
          __writecr8(v178);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD, _QWORD *))HalIommuDispatch[0] + 10))(
            ExpSvmIommuSystemContext,
            (unsigned int)v141,
            v237);
          __writecr8(v178);
        }
        goto LABEL_629;
      }
      if ( v163 == 1 )
      {
        LOBYTE(v142) = 0;
        goto LABEL_508;
      }
    }
    LOBYTE(v142) = 1;
    goto LABEL_508;
  }
  if ( (v234 & 1) == 0 )
  {
    v181 = v21;
    if ( v21 == 1 && (v21 = v233, KeGetCurrentThread()->ApcState.Process->SecurePid) )
      v182 = v181;
    else
      v182 = 0;
    if ( (HvlEnlightenments & 6) != 0 )
    {
      if ( (HvlEnlightenments & 2) != 0 || (v21 = v233, (unsigned int)KeNumberProcessors_0 > 1) )
      {
        if ( KiKvaShadow )
        {
          if ( !v21 || v21 == 2 )
          {
            v183 = 0;
            goto LABEL_556;
          }
        }
        else if ( v21 )
        {
          if ( v21 == 1 )
          {
            v184 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          }
          else
          {
            if ( v21 != 2 )
              goto LABEL_555;
            v184 = 0LL;
          }
          v183 = 0;
LABEL_552:
          HvlpFlushAddressSpaceTb(v184, 0LL, v183, v7);
          if ( v182 )
            HvlpFlushSecureAddressSpace();
          goto LABEL_619;
        }
LABEL_555:
        v183 = 1;
LABEL_556:
        v184 = 0LL;
        if ( v21 - 1 > 1 )
        {
          v185 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          v186 = 0;
          _m_prefetchw(&KiTbFlushTimeStamp);
          v187 = KiTbFlushTimeStamp;
          v188 = KiTbFlushTimeStamp;
          while ( (v187 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
          {
            if ( (++v186 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v186);
            v187 = KiTbFlushTimeStamp;
            if ( KiTbFlushTimeStamp - v188 >= 3 || KiTbFlushTimeStamp - v188 >= 2 && (v188 & 1) == 0 )
              goto LABEL_567;
          }
          HvlpFlushAddressSpaceTb(0LL, 0LL, v183, v7);
          if ( v182 )
            HvlpFlushSecureAddressSpace();
          _InterlockedIncrement(&KiTbFlushTimeStamp);
LABEL_567:
          __writecr8(v185);
          goto LABEL_619;
        }
        goto LABEL_552;
      }
    }
    if ( KiKvaShadow )
    {
      if ( !v21 || v21 == 2 )
      {
        v189 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        v190 = KeGetCurrentPrcb();
        if ( !(_DWORD)v145 )
        {
          _InterlockedOr(v215, 0);
          v191 = 0;
          v192 = v190->CurrentThread->ApcState.Process;
          v193 = v192->ActiveProcessors.Count;
          v259[0] = v193;
          v259[1] = v192->ActiveProcessors.Size;
          v260 = 0;
          if ( v192->ActiveProcessors.Count )
          {
            do
            {
              v194 = v191++;
              v261[v194] = v192->ActiveProcessors.Bitmap[v194];
            }
            while ( v191 < v192->ActiveProcessors.Count );
            v193 = v259[0];
          }
          v195 = v259;
          v196 = KiProcessorIndexToNumberMappingTable[v190->Number];
          v197 = v196 >> 6;
          if ( v193 <= (unsigned int)v197 )
            goto LABEL_582;
          v198 = v261;
LABEL_581:
          v198[v197] &= ~(1LL << (v196 & 0x3F));
LABEL_582:
          v199 = 0LL;
          goto LABEL_583;
        }
        v199 = 1LL;
        v195 = 0LL;
        if ( KiKvaShadow )
        {
          v200 = 0;
          _m_prefetchw(&KiTbFlushTimeStamp);
          v201 = KiTbFlushTimeStamp;
          v202 = KiTbFlushTimeStamp;
          while ( (v201 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
          {
            if ( (++v200 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v200);
            v201 = KiTbFlushTimeStamp;
            if ( KiTbFlushTimeStamp - v202 >= 3 || KiTbFlushTimeStamp - v202 >= 2 && (v202 & 1) == 0 )
              goto LABEL_616;
          }
LABEL_617:
          KiIpiSendRequestEx(
            (__int64)v190,
            1LL,
            0LL,
            0,
            0LL,
            1LL,
            (__int64 (__fastcall *)(__int64, __int64))KiFlushProcessTbWorker,
            0LL);
          _InterlockedIncrement(&KiTbFlushTimeStamp);
          __writecr8(v189);
          goto LABEL_619;
        }
        goto LABEL_583;
      }
    }
    else if ( v21 && (int)v21 <= 2 )
    {
      v189 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      v190 = KeGetCurrentPrcb();
      if ( !(_DWORD)v145 )
      {
        _InterlockedOr(v215, 0);
        v203 = 0;
        v204 = v190->CurrentThread->ApcState.Process;
        v205 = v204->ActiveProcessors.Count;
        v256[0] = v205;
        v256[1] = v204->ActiveProcessors.Size;
        v257 = 0;
        if ( v204->ActiveProcessors.Count )
        {
          do
          {
            v206 = v203++;
            v258[v206] = v204->ActiveProcessors.Bitmap[v206];
          }
          while ( v203 < v204->ActiveProcessors.Count );
          v205 = v256[0];
        }
        v195 = v256;
        v196 = KiProcessorIndexToNumberMappingTable[v190->Number];
        v197 = v196 >> 6;
        if ( v205 <= (unsigned int)v197 )
          goto LABEL_582;
        v198 = v258;
        goto LABEL_581;
      }
      v199 = 1LL;
      v195 = 0LL;
      if ( KiKvaShadow )
      {
        v207 = 0;
        _m_prefetchw(&KiTbFlushTimeStamp);
        v208 = KiTbFlushTimeStamp;
        v209 = KiTbFlushTimeStamp;
        while ( (v208 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
        {
          if ( (++v207 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v207);
          v208 = KiTbFlushTimeStamp;
          if ( KiTbFlushTimeStamp - v209 >= 3 || KiTbFlushTimeStamp - v209 >= 2 && (v209 & 1) == 0 )
            goto LABEL_616;
        }
        goto LABEL_617;
      }
LABEL_583:
      KiIpiSendRequestEx(
        (__int64)v190,
        v199,
        v195,
        0,
        0LL,
        1LL,
        (__int64 (__fastcall *)(__int64, __int64))KiFlushProcessTbWorker,
        0LL);
LABEL_616:
      __writecr8(v189);
      goto LABEL_619;
    }
    KxFlushEntireTb(v145);
LABEL_619:
    if ( VmTbFlushEnabled )
    {
      v210 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11];
      if ( v210 )
        VmpFlushTb(v210, 0LL, 0LL, v181);
    }
    if ( ExTbFlushActive )
    {
      v211 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      v212 = KeGetCurrentThread();
      if ( v181 == 1 )
      {
        v213 = *(_QWORD *)&v212->ApcState.Process[2].ActiveProcessors.Count;
        if ( v213 )
          (*((void (__fastcall **)(__int64, _QWORD, _QWORD))HalIommuDispatch[0] + 9))(v213, 0LL, 0LL);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD, _QWORD))HalIommuDispatch[0] + 10))(ExpSvmIommuSystemContext, 0LL, 0LL);
      }
      __writecr8(v211);
    }
    goto LABEL_628;
  }
  KeFlushCurrentTbOnly(v21, v145, v142);
LABEL_628:
  HIBYTE(v234) = 0;
LABEL_629:
  HIDWORD(v235) = 0;
  v236 = 0LL;
LABEL_630:
  if ( v222 )
    MiUnlockWorkingSetExclusive(v222, (unsigned __int8)v219);
  return 1LL;
}
