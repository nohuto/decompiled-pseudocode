/*
 * XREFs of MiSetSystemCodeProtection @ 0x140023140
 * Callers:
 *     MiSetImageProtection @ 0x140023100 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x1405973F8 (MiProtectSystemImage.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KxFlushEntireTb @ 0x14003F924 (KxFlushEntireTb.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 *     VmpFlushTb @ 0x14025B680 (VmpFlushTb.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlFlushRangeListTb @ 0x140270884 (HvlFlushRangeListTb.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, unsigned int a4)
{
  int v4; // r10d
  ULONG_PTR v5; // r15
  __int64 v7; // r12
  unsigned __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rbx
  unsigned int v12; // edi
  volatile signed __int32 *v13; // rsi
  __int64 Process; // rcx
  unsigned int v15; // ebx
  signed __int32 v16; // edx
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // rbx
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  _KPROCESS *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int8 v27; // di
  unsigned int v28; // ebx
  signed __int32 j; // edx
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // r14
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned int v45; // esi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rbx
  __int64 v52; // rdi
  unsigned __int64 v53; // rdx
  __int64 v54; // r15
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  _KPROCESS *v57; // rdx
  __int64 v58; // rdx
  unsigned int v59; // r12d
  unsigned __int8 v60; // r14
  unsigned __int8 v61; // si
  int v62; // ecx
  unsigned __int64 v63; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  void **v67; // r11
  __int64 v68; // rbx
  int v69; // edi
  char *v70; // rax
  __int64 v71; // r8
  __int64 v72; // r10
  unsigned __int64 v73; // rcx
  bool v74; // zf
  unsigned int v75; // edi
  int v76; // ecx
  unsigned __int64 v77; // rcx
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rdx
  unsigned int v79; // r11d
  unsigned __int8 v80; // si
  struct _KPRCB *v81; // r10
  unsigned __int16 v82; // dx
  _KPROCESS *v83; // r8
  unsigned __int16 Count; // r9
  __int64 v85; // rax
  _WORD *v86; // rbx
  unsigned int v87; // r8d
  __int64 v88; // rcx
  int v89; // ecx
  unsigned __int64 v90; // rcx
  unsigned __int8 v91; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v93; // rcx
  unsigned int v94; // r12d
  unsigned __int8 v95; // r14
  unsigned __int8 v96; // si
  unsigned __int64 v97; // r10
  unsigned __int8 v98; // r15
  unsigned int v99; // ebx
  char v100; // cl
  int v101; // edi
  unsigned __int8 v102; // r14
  struct _KPRCB *v103; // rsi
  unsigned __int16 v104; // dx
  _KPROCESS *v105; // r8
  unsigned __int16 v106; // r9
  __int64 v107; // rax
  _WORD *v108; // r8
  unsigned int v109; // r10d
  __int64 v110; // rcx
  _QWORD *v111; // rdx
  int v112; // edx
  unsigned int v113; // ebx
  char v114; // cl
  int v115; // edi
  unsigned __int16 v116; // dx
  _KPROCESS *v117; // r8
  unsigned __int16 v118; // r9
  __int64 v119; // rax
  unsigned int v120; // ebx
  char v121; // cl
  int v122; // edi
  unsigned __int64 v123; // rcx
  unsigned __int8 v124; // bl
  struct _KTHREAD *v125; // rax
  __int64 v126; // rcx
  signed __int32 v127[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v128; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v129; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v130; // [rsp+50h] [rbp-B0h]
  __int64 v131; // [rsp+58h] [rbp-A8h]
  unsigned int v132; // [rsp+60h] [rbp-A0h]
  unsigned int v133; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v134; // [rsp+68h] [rbp-98h] BYREF
  __int64 CurrentIrql; // [rsp+70h] [rbp-90h]
  ULONG_PTR v136; // [rsp+78h] [rbp-88h]
  volatile signed __int32 *v137; // [rsp+80h] [rbp-80h]
  __int64 v138; // [rsp+88h] [rbp-78h] BYREF
  __int64 i; // [rsp+90h] [rbp-70h]
  ULONG_PTR v140; // [rsp+98h] [rbp-68h]
  __int64 v141; // [rsp+A0h] [rbp-60h]
  _QWORD *v142; // [rsp+A8h] [rbp-58h] BYREF
  int v143; // [rsp+B0h] [rbp-50h]
  int v144; // [rsp+B4h] [rbp-4Ch]
  __int64 v145; // [rsp+B8h] [rbp-48h]
  unsigned int v146; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v147; // [rsp+C4h] [rbp-3Ch]
  __int64 v148; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v149; // [rsp+D0h] [rbp-30h]
  _QWORD v150[21]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v151; // [rsp+180h] [rbp+80h]
  __int128 v152; // [rsp+190h] [rbp+90h]
  __int64 v153; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v154[21]; // [rsp+1A8h] [rbp+A8h] BYREF
  _WORD v155[2]; // [rsp+250h] [rbp+150h] BYREF
  int v156; // [rsp+254h] [rbp+154h]
  _QWORD v157[21]; // [rsp+258h] [rbp+158h] BYREF
  _WORD v158[2]; // [rsp+300h] [rbp+200h] BYREF
  int v159; // [rsp+304h] [rbp+204h]
  _QWORD v160[21]; // [rsp+308h] [rbp+208h] BYREF
  _WORD v161[2]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v162; // [rsp+3B4h] [rbp+2B4h]
  _QWORD v163[21]; // [rsp+3B8h] [rbp+2B8h]

  v4 = a1;
  v145 = a1;
  v133 = a4;
  v140 = a3;
  v5 = a2;
  if ( *(char *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
    return 1LL;
  v7 = a4;
  v132 = 1;
  v128 = a4;
  if ( a4 == 256 )
  {
    _R13D = 0;
    v141 = MiSectionControlArea(*(_QWORD *)(a1 + 112), 2LL);
    v130 = 0LL;
    v136 = 0LL;
  }
  else
  {
    _R13D = 0;
    v136 = a3;
    v141 = 0LL;
    v130 = 0LL;
    if ( (a4 & 5) == 5 )
    {
      v7 = a4 & 0xFFFFFFFE;
      v128 = a4 & 0xFFFFFFFE;
    }
    v10 = 0;
    LOBYTE(a4) = 17;
    if ( (v7 & 4) != 0 )
      v10 = 2;
    if ( (int)MiMakeDriverPagesPrivate(v4, a2, a3, a4, v10) < 0 )
      return 0LL;
    v9 = 2LL;
  }
  v11 = (__int64)(v5 << 25) >> 16;
  v131 = v11;
  if ( (unsigned __int64)(v11 + 0x70000000000LL) > 0x7FFFFFFFFFLL )
  {
    v12 = 0;
    v13 = &dword_14034FF40;
  }
  else
  {
    v12 = v9;
    v13 = (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
  }
  v137 = v13;
  v148 = 20LL;
  v146 = v12;
  v147 = 0;
  v149 = 0LL;
  v150[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v9);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13);
  }
  else
  {
    v15 = 0;
    if ( _interlockedbittestandset(v13, 0x1Fu) )
      v15 = ExpWaitForSpinLockExclusiveAndAcquire(v13);
    v16 = *v13;
    Process = *(unsigned int *)v13;
    LODWORD(Process) = Process & 0xBFFFFFFF;
    if ( (_DWORD)Process != 0x80000000 )
    {
      do
      {
        if ( (v16 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v13, v16 | 0x40000000, v16);
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
        v16 = *v13;
        Process = 0x80000000LL;
      }
      while ( (*v13 & 0xBFFFFFFF) != 0x80000000 );
    }
    v11 = v131;
  }
  v17 = 4096LL;
  if ( v5 <= v140 )
  {
    v18 = (int)v12;
    for ( i = (int)v12; ; v18 = i )
    {
      v19 = 0xFFFFF6FB7DBED000uLL;
      v20 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v5 <= v136 )
        goto LABEL_68;
      v21 = v11 - *(_QWORD *)(v145 + 48);
      if ( !v130 )
        break;
      Process = 0LL;
      v138 = 0LL;
      v26 = *(_QWORD *)(v130 + 16);
      v130 = v26;
LABEL_66:
      v30 = *(unsigned int *)(v26 + 44) - Process - 1;
      v7 = (*(unsigned __int16 *)(v26 + 32) >> 1) & 0x1F;
      v128 = v7;
      v136 = v5 + 8 * v30;
      if ( (v7 & 5) == 5 )
      {
        v7 = (unsigned int)v7 & 0xFFFFFFFE;
        v128 = v7;
      }
LABEL_68:
      v31 = *(_QWORD *)v5;
      v32 = v5 + 0x90482413000LL;
      if ( v5 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, 0x90482413000LL)
        && (v31 & 1) != 0
        && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v33 = *(_QWORD *)(Process + 1520);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v34 & 0x20) != 0 )
            v31 |= 0x20uLL;
          if ( (v34 & 0x42) != 0 )
            v31 |= 0x42uLL;
        }
      }
      v134 = v31;
      if ( (v31 & 1) != 0 )
      {
        v35 = v31;
        if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8 )
          v35 = MiReadPteShadow(&v134, v31);
        Process = (v35 >> 12) & 0xFFFFFFFFFLL;
        v36 = 48 * Process - 0x58000000000LL;
        v37 = *(_QWORD *)(v36 + 40);
        if ( (v37 & 0x200000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x30000) != 0 && (v133 & 4) != 0 && ((v37 >> 54) & 7) == 3 )
          {
            v132 = 0;
            v17 = 4096LL;
            goto LABEL_156;
          }
          v38 = 0x904C0000000LL;
          v39 = MmProtectToPteMask[v7] ^ ((Process << 12) ^ MmProtectToPteMask[v7]) & 0xFFFFFFFFF000LL | 0x21;
          v40 = v5 + 0x904C0000000LL;
          if ( v18 )
          {
            v129 = MmProtectToPteMask[v7] ^ ((Process << 12) ^ MmProtectToPteMask[v7]) & 0xFFFFFFFFF000LL | 0x21;
            if ( v40 <= 0x3FFFFFFF )
            {
              v39 &= v20 & ~qword_1403D0220;
              v129 = v39;
            }
            if ( v5 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
              && v5 >= 0xFFFFF68000000000uLL
              || v5 >= 0xFFFFF6FB40000000uLL
              && v5 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              || v5 >= 0xFFFFF6FB7DA00000uLL
              && (v38 = 0x90482600000LL,
                  v5 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
              || v5 >= v19 && v5 <= v19 + 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) )
            {
              v39 |= 4uLL;
              v129 = v39;
            }
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5, v39, v38) )
              v129 = v42 | 0x100;
          }
          else
          {
            if ( v40 <= 0x3FFFFFFF )
              v39 &= v20 & ~qword_1403D0220;
            if ( v5 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
              && v5 >= 0xFFFFF68000000000uLL
              || v5 >= 0xFFFFF6FB40000000uLL
              && v5 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              || v5 >= 0xFFFFF6FB7DA00000uLL
              && (v38 = 0x90482600000LL,
                  v5 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
              || v5 >= v19 && v5 <= v19 + 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) )
            {
              v39 |= 4uLL;
            }
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5, v39, v38) )
              v41 |= 0x100uLL;
            v129 = v41 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
          }
          MiWriteValidPteVolatile(&v129, (v31 >> 52) & 0x7FF | 0x80000000);
          if ( ((v128 - 4) & 0xFFFFFFFD) != 0 || (v31 & 0x42) == 0 )
          {
            v43 = v129;
          }
          else
          {
            v43 = v129 | 0x42;
            v129 |= 0x42uLL;
          }
          if ( (v31 & 0x20) != 0 )
          {
            v43 |= 0x20uLL;
            v129 = v43;
          }
          *(_QWORD *)v5 = v43;
          if ( v32 <= 0x7F8 )
          {
            MiWritePteShadow(v5, v43);
            v43 = v129;
          }
          Process = (unsigned int)MiFlags;
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
            || (v43 & 0x40) == 0 && (v31 & 0x40) != 0
            || (v43 & 2) == 0 && (v31 & 2) != 0
            || v43 < 0 && (v31 & 0x8000000000000000uLL) == 0 )
          {
            MiInsertTbFlushEntry(&v146, v131, 1LL, 0LL);
          }
          v44 = 0LL;
          v45 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
          {
            Process = 0x8000000000000000uLL;
            do
            {
              if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v45);
                Process = 0x8000000000000000uLL;
              }
            }
            while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
          }
          *(_QWORD *)(v36 + 16) ^= (*(_DWORD *)(v36 + 16) ^ (32 * (_DWORD)v7)) & 0x3E0;
          if ( (v31 & 0x42) != 0 )
            v44 = MiCaptureDirtyBitToPfn(v36);
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v44 )
          {
            v46 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v36 + 40)) >> 8) & 0x3FF);
            MiReleasePageFileInfo(v46, v44, 1LL);
          }
        }
        goto LABEL_151;
      }
      if ( (v31 & 0x400) != 0 )
        goto LABEL_151;
      if ( (v31 & 0x800) == 0 )
      {
        if ( v133 != 256 )
        {
          v53 = v31 ^ ((unsigned __int16)v31 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          v134 = v53;
          *(_QWORD *)v5 = v53;
          if ( v32 <= 0x7F8 )
            MiWritePteShadow(v5, v53);
        }
        goto LABEL_151;
      }
      if ( MiLockTransitionLeafPage(v5) )
      {
        v50 = MiReverseSwizzleInvalidPte(v31, v47, v48, v49);
        Process = 32 * (v7 & 0x1F);
        v51 = Process | v31 & 0xFFFFFFFFFFFFFC1FuLL;
        v52 = 48 * ((v50 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v134 = v51;
        *(_QWORD *)(v52 + 16) = Process | *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
        *(_QWORD *)v5 = v51;
        if ( v32 <= 0x7F8 )
          MiWritePteShadow(v5, v51);
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_151:
        v5 += 8LL;
        v17 = 4096LL;
        v11 = v131 + 4096;
        v131 += 4096LL;
        goto LABEL_153;
      }
      v11 = v131;
      v17 = 4096LL;
LABEL_153:
      if ( v5 > v140 )
        goto LABEL_156;
      v7 = v128;
      v13 = v137;
    }
    if ( !HIDWORD(v148) )
    {
LABEL_51:
      MiUnlockWorkingSetExclusive(v13, (unsigned __int8)CurrentIrql);
      v26 = MiOffsetToProtos(v141, v21, &v138);
      v130 = v26;
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13);
      }
      else
      {
        v28 = 0;
        if ( _interlockedbittestandset(v13, 0x1Fu) )
          v28 = ExpWaitForSpinLockExclusiveAndAcquire(v13);
        for ( j = *v13; (*v13 & 0xBFFFFFFF) != 0x80000000; j = *v13 )
        {
          if ( (j & 0x40000000) == 0 )
            _InterlockedCompareExchange(v13, j | 0x40000000, j);
          if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v28);
        }
        v26 = v130;
      }
      Process = v138;
      v18 = i;
      v20 = 0x7FFFFFFFFFFFFFFFLL;
      LOBYTE(CurrentIrql) = v27;
      v19 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_66;
    }
    v22 = qword_14034EBD8;
    if ( (v147 & 2) != 0 )
    {
      v23 = v146;
    }
    else
    {
      v23 = v146;
      v24 = KeGetCurrentThread()->ApcState.Process;
      if ( !v24[2].ActiveProcessors.Bitmap[11] )
      {
        if ( !v24->SecurePid )
          goto LABEL_39;
        if ( v146 != 1 )
        {
LABEL_40:
          v25 = 1LL;
LABEL_41:
          if ( HIBYTE(v147) || v149 > v22 )
          {
            if ( (v147 & 1) != 0 )
              KeFlushCurrentTbOnly(v23, v25, v22);
            else
              KeFlushTb(v23, v25, v22);
            HIBYTE(v147) = 0;
          }
          else if ( (v147 & 1) != 0 )
          {
            KeFlushMultipleRangeCurrentTb(HIDWORD(v148), v150, (unsigned int)v23);
          }
          else
          {
            KeFlushMultipleRangeTb(HIDWORD(v148), v150, (unsigned int)v23, (unsigned int)v25);
          }
          HIDWORD(v148) = 0;
          v149 = 0LL;
          goto LABEL_51;
        }
      }
      v22 = -1LL;
    }
LABEL_39:
    v25 = 0LL;
    if ( (_DWORD)v23 == 1 )
      goto LABEL_41;
    goto LABEL_40;
  }
LABEL_156:
  v54 = HIDWORD(v148);
  if ( HIDWORD(v148) )
  {
    v55 = qword_14034EBD8;
    if ( (v147 & 2) != 0 )
    {
      v56 = v146;
    }
    else
    {
      v56 = v146;
      v57 = KeGetCurrentThread()->ApcState.Process;
      if ( !v57[2].ActiveProcessors.Bitmap[11] )
      {
        if ( !v57->SecurePid )
          goto LABEL_163;
        if ( v146 != 1 )
          goto LABEL_165;
      }
      v55 = -1LL;
    }
LABEL_163:
    if ( (_DWORD)v56 == 1 )
    {
      v58 = 0LL;
LABEL_166:
      if ( !HIBYTE(v147) && v149 <= v55 )
      {
        if ( (v147 & 1) != 0 )
        {
          v59 = v56;
          if ( (_DWORD)v56 == 1 && (LODWORD(v56) = v146, KeGetCurrentThread()->ApcState.Process->SecurePid) )
          {
            v60 = v59;
          }
          else
          {
            v60 = 0;
            if ( (HvlEnlightenments & 6) == 0
              || (HvlEnlightenments & 2) == 0 && (LODWORD(v56) = v146, (unsigned int)KeNumberProcessors_0 <= 1) )
            {
              v67 = (void **)v150;
              v68 = HIDWORD(v148);
              v69 = __ROL4__(1, v56) & 0xA;
              do
              {
                v70 = (char *)*v67;
                if ( v69 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                {
                  *(_QWORD *)&v151 = 1LL;
                  *((_QWORD *)&v151 + 1) = v70;
                  __asm { invpcid r13d, [rbp+3A0h+var_320] }
                }
                __invlpg(v70);
                v71 = (unsigned __int16)v70 & 0x7FF;
                v72 = 0x200000LL;
                if ( ((unsigned __int16)v70 & 0x800) == 0 )
                  v72 = 4096LL;
                if ( ((unsigned __int16)v70 & 0x7FF) != 0 )
                {
                  do
                  {
                    v70 += v72;
                    if ( ((1 << v59) & 0xA) != 0
                      && KiFlushPcid
                      && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                    {
                      *(_QWORD *)&v152 = 1LL;
                      *((_QWORD *)&v152 + 1) = v70;
                      __asm { invpcid r13d, [rbp+3A0h+var_310] }
                    }
                    __invlpg(v70);
                    --v71;
                  }
                  while ( v71 );
                }
                ++v67;
                --v68;
              }
              while ( v68 );
              goto LABEL_203;
            }
          }
          if ( KiKvaShadow )
          {
            if ( !(_DWORD)v56 || (_DWORD)v56 == 2 )
            {
              v61 = 0;
LABEL_185:
              v63 = 0LL;
              goto LABEL_186;
            }
          }
          else if ( (_DWORD)v56 )
          {
            v62 = v56 - 1;
            if ( !v62 )
            {
              v63 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
              v61 = 0;
LABEL_186:
              CurrentPrcb = KeGetCurrentPrcb();
              v153 = 1310721LL;
              memset(v154, 0, 0xA0uLL);
              Group = CurrentPrcb->Group;
              GroupSetMember = CurrentPrcb->GroupSetMember;
              if ( CurrentPrcb->Group )
                LOWORD(v153) = Group + 1;
              v154[Group] |= GroupSetMember;
              HvlFlushRangeListTb(v63, &v153, v61, v60, HIDWORD(v148), v150);
LABEL_203:
              if ( VmTbFlushEnabled )
              {
                v73 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11];
                if ( v73 )
                  VmpFlushTb(v73, (unsigned int)v54, v150, v59);
              }
              if ( !ExTbFlushActive )
                goto LABEL_342;
              v74 = v59 == 1;
              goto LABEL_245;
            }
            if ( v62 == 1 )
            {
              v61 = 0;
              goto LABEL_185;
            }
          }
          v61 = 1;
          goto LABEL_185;
        }
        v75 = v56;
        if ( (_DWORD)v56 == 1 && (LODWORD(v56) = v146, KeGetCurrentThread()->ApcState.Process->SecurePid) )
        {
          v17 = (unsigned __int8)v75;
        }
        else
        {
          LOBYTE(v17) = 0;
          if ( (HvlEnlightenments & 6) == 0
            || (HvlEnlightenments & 2) == 0 && (LODWORD(v56) = v146, (unsigned int)KeNumberProcessors_0 <= 1) )
          {
            v144 = v56;
            v142 = v150;
            v79 = 4;
            v143 = HIDWORD(v148);
            if ( (_DWORD)v58 == 1 )
              v79 = -2147483644;
            v80 = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            v81 = KeGetCurrentPrcb();
            if ( (_DWORD)v58 )
            {
              LODWORD(v86) = 0;
              v89 = 1;
            }
            else
            {
              _InterlockedOr(v127, 0);
              v82 = 0;
              v83 = v81->CurrentThread->ApcState.Process;
              Count = v83->ActiveProcessors.Count;
              v161[0] = Count;
              v161[1] = v83->ActiveProcessors.Size;
              v162 = 0;
              if ( v83->ActiveProcessors.Count )
              {
                do
                {
                  v85 = v82++;
                  v163[v85] = v83->ActiveProcessors.Bitmap[v85];
                }
                while ( v82 < v83->ActiveProcessors.Count );
                Count = v161[0];
              }
              v86 = v161;
              v87 = KiProcessorIndexToNumberMappingTable[v81->Number];
              v88 = v87 >> 6;
              if ( Count > (unsigned int)v88 )
                v163[v88] &= ~(1LL << (v87 & 0x3F));
              v89 = 0;
            }
            KiIpiSendRequestEx(
              (_DWORD)v81,
              v89,
              (_DWORD)v86,
              (unsigned int)&v142,
              v54,
              v79,
              (__int64)KiFlushRangeWorker,
              (__int64)&v142);
            __writecr8(v80);
            goto LABEL_240;
          }
        }
        if ( KiKvaShadow )
        {
          if ( !(_DWORD)v56 || (_DWORD)v56 == 2 )
          {
            LOBYTE(v55) = 0;
LABEL_224:
            v77 = 0LL;
            goto LABEL_225;
          }
        }
        else if ( (_DWORD)v56 )
        {
          v76 = v56 - 1;
          if ( !v76 )
          {
            v77 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
            LOBYTE(v55) = 0;
LABEL_225:
            if ( (_DWORD)v58 )
              p_ActiveProcessors = 0LL;
            else
              p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
            HvlFlushRangeListTb(v77, p_ActiveProcessors, v55, v17, HIDWORD(v148), v150);
LABEL_240:
            if ( VmTbFlushEnabled )
            {
              v90 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11];
              if ( v90 )
                VmpFlushTb(v90, (unsigned int)v54, v150, v75);
            }
            if ( !ExTbFlushActive )
              goto LABEL_342;
            v74 = v75 == 1;
LABEL_245:
            v91 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            CurrentThread = KeGetCurrentThread();
            if ( v74 )
            {
              v93 = *(_QWORD *)&CurrentThread->ApcState.Process[2].ActiveProcessors.Count;
              if ( v93 )
                (*((void (__fastcall **)(__int64, _QWORD, _QWORD *))HalIommuDispatch[0] + 9))(
                  v93,
                  (unsigned int)v54,
                  v150);
              __writecr8(v91);
            }
            else
            {
              (*((void (__fastcall **)(__int64, _QWORD, _QWORD *))HalIommuDispatch[0] + 10))(
                ExpSvmIommuSystemContext,
                (unsigned int)v54,
                v150);
              __writecr8(v91);
            }
            goto LABEL_342;
          }
          if ( v76 == 1 )
          {
            LOBYTE(v55) = 0;
            goto LABEL_224;
          }
        }
        LOBYTE(v55) = 1;
        goto LABEL_224;
      }
      if ( (v147 & 1) != 0 )
      {
        KeFlushCurrentTbOnly(v56, v58, v55);
LABEL_341:
        HIBYTE(v147) = 0;
LABEL_342:
        HIDWORD(v148) = 0;
        v149 = 0LL;
        goto LABEL_343;
      }
      v94 = v56;
      if ( (_DWORD)v56 == 1 && (LODWORD(v56) = v146, KeGetCurrentThread()->ApcState.Process->SecurePid) )
        v95 = v94;
      else
        v95 = 0;
      if ( (HvlEnlightenments & 6) != 0 )
      {
        if ( (HvlEnlightenments & 2) != 0 || (LODWORD(v56) = v146, (unsigned int)KeNumberProcessors_0 > 1) )
        {
          if ( KiKvaShadow )
          {
            if ( !(_DWORD)v56 || (_DWORD)v56 == 2 )
            {
              v96 = 0;
              goto LABEL_271;
            }
          }
          else if ( (_DWORD)v56 )
          {
            if ( (_DWORD)v56 == 1 )
            {
              v97 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
            }
            else
            {
              if ( (_DWORD)v56 != 2 )
                goto LABEL_270;
              v97 = 0LL;
            }
            v96 = 0;
LABEL_268:
            HvlFlushAddressSpaceTb(v97, 0LL, v96, v95);
            goto LABEL_332;
          }
LABEL_270:
          v96 = 1;
LABEL_271:
          v97 = 0LL;
          if ( (unsigned int)(v56 - 1) > 1 )
          {
            v98 = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            v99 = 0;
            _m_prefetchw(&KiTbFlushTimeStamp);
            v100 = KiTbFlushTimeStamp;
            v101 = KiTbFlushTimeStamp;
            while ( (v100 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
            {
              if ( (++v99 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v99);
              v100 = KiTbFlushTimeStamp;
              if ( KiTbFlushTimeStamp - v101 >= 3 || KiTbFlushTimeStamp - v101 >= 2 && (v101 & 1) == 0 )
                goto LABEL_282;
            }
            HvlFlushAddressSpaceTb(0LL, 0LL, v96, v95);
            _InterlockedIncrement(&KiTbFlushTimeStamp);
LABEL_282:
            __writecr8(v98);
            goto LABEL_332;
          }
          goto LABEL_268;
        }
      }
      if ( KiKvaShadow )
      {
        if ( !(_DWORD)v56 || (_DWORD)v56 == 2 )
        {
          v102 = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          v103 = KeGetCurrentPrcb();
          if ( !(_DWORD)v58 )
          {
            _InterlockedOr(v127, 0);
            v104 = 0;
            v105 = v103->CurrentThread->ApcState.Process;
            v106 = v105->ActiveProcessors.Count;
            v155[0] = v106;
            v155[1] = v105->ActiveProcessors.Size;
            v156 = 0;
            if ( v105->ActiveProcessors.Count )
            {
              do
              {
                v107 = v104++;
                v157[v107] = v105->ActiveProcessors.Bitmap[v107];
              }
              while ( v104 < v105->ActiveProcessors.Count );
              v106 = v155[0];
            }
            v108 = v155;
            v109 = KiProcessorIndexToNumberMappingTable[v103->Number];
            v110 = v109 >> 6;
            if ( v106 <= (unsigned int)v110 )
              goto LABEL_295;
            v111 = v157;
LABEL_294:
            v111[v110] &= ~(1LL << (v109 & 0x3F));
LABEL_295:
            v112 = 0;
            goto LABEL_296;
          }
          v112 = 1;
          LODWORD(v108) = 0;
          if ( KiKvaShadow )
          {
            v113 = 0;
            _m_prefetchw(&KiTbFlushTimeStamp);
            v114 = KiTbFlushTimeStamp;
            v115 = KiTbFlushTimeStamp;
            while ( (v114 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
            {
              if ( (++v113 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v113);
              v114 = KiTbFlushTimeStamp;
              if ( KiTbFlushTimeStamp - v115 >= 3 || KiTbFlushTimeStamp - v115 >= 2 && (v115 & 1) == 0 )
                goto LABEL_329;
            }
LABEL_330:
            KiIpiSendRequestEx((_DWORD)v103, 1, 0, 0, 0LL, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
            _InterlockedIncrement(&KiTbFlushTimeStamp);
            __writecr8(v102);
            goto LABEL_332;
          }
          goto LABEL_296;
        }
      }
      else if ( (_DWORD)v56 && (int)v56 <= 2 )
      {
        v102 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        v103 = KeGetCurrentPrcb();
        if ( !(_DWORD)v58 )
        {
          _InterlockedOr(v127, 0);
          v116 = 0;
          v117 = v103->CurrentThread->ApcState.Process;
          v118 = v117->ActiveProcessors.Count;
          v158[0] = v118;
          v158[1] = v117->ActiveProcessors.Size;
          v159 = 0;
          if ( v117->ActiveProcessors.Count )
          {
            do
            {
              v119 = v116++;
              v160[v119] = v117->ActiveProcessors.Bitmap[v119];
            }
            while ( v116 < v117->ActiveProcessors.Count );
            v118 = v158[0];
          }
          v108 = v158;
          v109 = KiProcessorIndexToNumberMappingTable[v103->Number];
          v110 = v109 >> 6;
          if ( v118 <= (unsigned int)v110 )
            goto LABEL_295;
          v111 = v160;
          goto LABEL_294;
        }
        v112 = 1;
        LODWORD(v108) = 0;
        if ( KiKvaShadow )
        {
          v120 = 0;
          _m_prefetchw(&KiTbFlushTimeStamp);
          v121 = KiTbFlushTimeStamp;
          v122 = KiTbFlushTimeStamp;
          while ( (v121 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
          {
            if ( (++v120 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v120);
            v121 = KiTbFlushTimeStamp;
            if ( KiTbFlushTimeStamp - v122 >= 3 || KiTbFlushTimeStamp - v122 >= 2 && (v122 & 1) == 0 )
              goto LABEL_329;
          }
          goto LABEL_330;
        }
LABEL_296:
        KiIpiSendRequestEx((_DWORD)v103, v112, (_DWORD)v108, 0, 0LL, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
LABEL_329:
        __writecr8(v102);
        goto LABEL_332;
      }
      KxFlushEntireTb((unsigned int)v58);
LABEL_332:
      if ( VmTbFlushEnabled )
      {
        v123 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11];
        if ( v123 )
          VmpFlushTb(v123, 0LL, 0LL, v94);
      }
      if ( ExTbFlushActive )
      {
        v124 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        v125 = KeGetCurrentThread();
        if ( v94 == 1 )
        {
          v126 = *(_QWORD *)&v125->ApcState.Process[2].ActiveProcessors.Count;
          if ( v126 )
            (*((void (__fastcall **)(__int64, _QWORD, _QWORD))HalIommuDispatch[0] + 9))(v126, 0LL, 0LL);
        }
        else
        {
          (*((void (__fastcall **)(__int64, _QWORD, _QWORD))HalIommuDispatch[0] + 10))(
            ExpSvmIommuSystemContext,
            0LL,
            0LL);
        }
        __writecr8(v124);
      }
      goto LABEL_341;
    }
LABEL_165:
    v58 = 1LL;
    goto LABEL_166;
  }
LABEL_343:
  MiUnlockWorkingSetExclusive(v137, (unsigned __int8)CurrentIrql);
  return v132;
}
