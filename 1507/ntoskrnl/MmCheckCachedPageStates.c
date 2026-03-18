/*
 * XREFs of MmCheckCachedPageStates @ 0x1400509D0
 * Callers:
 *     CcMapAndRead @ 0x140050800 (CcMapAndRead.c)
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x140053320 (CcFetchDataForRead.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     CcMapDataForOverwrite @ 0x140118944 (CcMapDataForOverwrite.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiMarkPteDirty @ 0x1400539D4 (MiMarkPteDirty.c)
 *     MiUnlinkStandbyBatch @ 0x140053B30 (MiUnlinkStandbyBatch.c)
 *     MiReadyStandbyPageForActive @ 0x140053F00 (MiReadyStandbyPageForActive.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_CAPTURE_SYSTEM_CACHE_PTE @ 0x1402176D0 (MI_CAPTURE_SYSTEM_CACHE_PTE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, unsigned int a3, char *a4)
{
  ULONG_PTR v4; // r11
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // bl
  unsigned __int64 *v10; // rcx
  unsigned int v11; // r10d
  ULONG_PTR v12; // rsi
  __int64 v13; // r14
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rdx
  char v18; // di
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned int v23; // r10d
  ULONG_PTR v24; // r14
  ULONG_PTR v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned int v36; // esi
  ULONG_PTR v37; // r14
  __int64 v38; // rax
  bool v39; // zf
  unsigned __int16 v40; // ax
  __int16 *v41; // r10
  __int64 v42; // r9
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  char v46; // r9
  __int64 v47; // r10
  __int64 v48; // r11
  unsigned int v49; // eax
  __int64 v50; // rsi
  unsigned int v51; // r15d
  int v52; // r12d
  __int64 v53; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v55; // rax
  _QWORD *v56; // r13
  __int64 v57; // r15
  unsigned int v58; // edx
  __int64 v59; // rax
  __int16 v60; // r9
  __int64 Page; // rax
  __int64 v62; // r12
  __int64 v63; // r14
  unsigned int v64; // eax
  char v65; // r9
  unsigned int v66; // eax
  __int64 v67; // r8
  __int64 *v68; // rbx
  __int64 v69; // r9
  __int64 v70; // rax
  unsigned int v71; // esi
  signed __int32 i; // edx
  unsigned int v73; // eax
  _QWORD *v74; // rsi
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r8
  unsigned __int64 v79; // rdx
  bool v80; // cc
  unsigned __int8 CurrentIrql; // si
  unsigned int v82; // ebx
  struct _KTHREAD *CurrentThread; // rbx
  int Teb_low; // eax
  unsigned int Flink; // ecx
  unsigned int v86; // esi
  __int64 v87; // rax
  int v88; // eax
  int v89; // ecx
  unsigned __int64 v90; // rdx
  ULONG_PTR v91; // rsi
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rax
  char v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  unsigned __int8 v102; // [rsp+30h] [rbp-D0h] BYREF
  char v103; // [rsp+31h] [rbp-CFh]
  int v104; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v105; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+40h] [rbp-C0h]
  unsigned int v107; // [rsp+48h] [rbp-B8h]
  ULONG_PTR PrototypePteDirect; // [rsp+50h] [rbp-B0h]
  int v109; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v110; // [rsp+60h] [rbp-A0h]
  __int64 v111; // [rsp+68h] [rbp-98h]
  unsigned __int64 v112; // [rsp+70h] [rbp-90h]
  unsigned __int64 v113; // [rsp+78h] [rbp-88h]
  __int64 v114; // [rsp+80h] [rbp-80h]
  __int64 v115; // [rsp+88h] [rbp-78h] BYREF
  __int64 v116; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v117; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v119; // [rsp+B8h] [rbp-48h] BYREF
  _WORD *v120; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v121; // [rsp+C8h] [rbp-38h]
  unsigned __int16 v122; // [rsp+CAh] [rbp-36h]
  char *v123; // [rsp+D0h] [rbp-30h]
  _QWORD v124[16]; // [rsp+E0h] [rbp-20h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v4 = 0LL;
  v107 = a3;
  v123 = a4;
  v103 = 1;
  v5 = a3;
  v109 = 0;
  v104 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0x98000000000LL;
  v114 = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v106 = 0LL;
  v8 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v112 = v7;
  v113 = v8;
  v9 = 17;
  v102 = 17;
  v10 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  PteShadow = *v10;
  if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v10, *v10);
  v117 = PteShadow;
  if ( (unsigned __int64)&STACK[0x90482413098] <= 0x7F8 )
    PteShadow = MiReadPteShadow(&v117, PteShadow);
  v15 = 0xFFFFFFFFFLL;
  v16 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v111 = v16;
  while ( v7 <= v8 )
  {
    v17 = *(_QWORD *)v7;
    v18 = v4;
    if ( v7 + 0x90482413000LL <= 0x7F8 && (unsigned int)MiPteHasShadow(v15, v17) )
    {
      if ( (v17 & 1) == 0 )
        goto LABEL_23;
      if ( (v17 & 0x20) == 0 || (v17 & 0x42) == 0 )
      {
        v6 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v6 )
        {
          v19 = *(_QWORD *)(v6 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v17 |= 0x20uLL;
          if ( (v19 & 0x42) != 0 )
            v17 |= 0x42uLL;
        }
        v9 = v102;
      }
    }
    if ( (v17 & 1) != 0 )
      goto LABEL_19;
LABEL_23:
    v20 = MI_CAPTURE_SYSTEM_CACHE_PTE(v7);
    v105 = v20;
    if ( (v20 & 1) != 0 )
    {
LABEL_19:
      if ( (v5 & 4) == 0 )
        goto LABEL_221;
      if ( v9 != 17 )
      {
        MiUnlockProtoPoolPage(v13, v9);
        v9 = 17;
        v102 = 17;
      }
      MiMarkPteDirty(v7, v17, v6, v5);
LABEL_220:
      v4 = 0LL;
      goto LABEL_221;
    }
    if ( (v20 & 8) != 0 )
      v18 = 1;
    PrototypePteDirect = MiGetPrototypePteDirect(v20, v17, v6, v5);
    v24 = PrototypePteDirect;
    if ( v9 == 17 )
      goto LABEL_29;
    if ( ((PrototypePteDirect ^ v12) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiUnlockProtoPoolPage(v106, v9);
      v23 = v104;
      v9 = 17;
      v102 = 17;
      v4 = 0LL;
LABEL_29:
      if ( ((v24 ^ v12) & 0xFFFFFFFFFFFFF000uLL) != 0 && v23 )
      {
        MiMakeSystemCacheRangeValid(v7 - 8LL * v23, v124, v23, v16);
        v4 = 0LL;
        v104 = 0;
      }
      v12 = PrototypePteDirect;
      v25 = PrototypePteDirect + 0x90482413000LL;
      v110 = PrototypePteDirect + 0x90482413000LL;
      v26 = *(_QWORD *)PrototypePteDirect;
      if ( PrototypePteDirect + 0x90482413000LL <= 0x7F8 )
        v26 = MiReadPteShadow(PrototypePteDirect, *(_QWORD *)PrototypePteDirect);
      v115 = v26;
      if ( (v26 & 1) == 0 && ((v26 & 0x400) != 0 || (v26 & 0x800) == 0) )
      {
        v13 = v4;
        v106 = v4;
LABEL_146:
        v28 = v25;
LABEL_147:
        v56 = (_QWORD *)MiGetPrototypePteDirect(v26, v21, v6, v22);
        v57 = *v56;
        v58 = *(_DWORD *)(*v56 + 56LL);
        if ( (v58 & 0x40000000) == 0 && (v107 & 1) != 0 )
        {
          MI_INITIALIZE_COLOR_BASE(0LL, (v58 >> 20) & 0x3F, &v120);
          ++*v120;
          v59 = MiPartitionIdToPointer(*(_WORD *)(v57 + 60) & 0x3FF);
          Page = MiGetPage(v59, v122 | (unsigned int)(unsigned __int16)(v60 & v121), 2LL);
          v62 = Page;
          if ( Page != -1 )
          {
            v63 = 48 * Page - 0x58000000000LL;
            if ( *(_QWORD *)(v63 + 16) )
            {
              if ( v9 != 17 )
              {
                MiUnlockProtoPoolPage(v106, v9);
                v9 = 17;
                v102 = 17;
              }
              v64 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v115);
              v65 = v64;
              v66 = v64 >> 3;
              if ( v66 == 3 && (v65 & 7) != 0 )
                v67 = 2LL;
              else
                v67 = v66 != 1;
              MiZeroPhysicalPage(v62, 1LL, v67);
              *(_QWORD *)(v63 + 16) = 0LL;
            }
            if ( v9 == 17 )
            {
              v68 = (__int64 *)PrototypePteDirect;
              v106 = MiLockProtoPoolPage(PrototypePteDirect, &v102);
              v69 = v106;
              if ( !v106 )
              {
                do
                {
                  MmAccessFault(2uLL, (ULONG_PTR)v68);
                  v106 = MiLockProtoPoolPage(v68, &v102);
                  v69 = v106;
                }
                while ( !v106 );
                v28 = v110;
              }
              v70 = *v68;
              if ( v28 <= 0x7F8 )
                v70 = MiReadPteShadow(v68, *v68);
              v115 = v70;
              if ( (v70 & 1) != 0 || (v70 & 0x800) != 0 && (v70 & 0x400) == 0 )
              {
                MiUnlockProtoPoolPage(v69, v102);
                MiReleaseFreshPage(v63);
                v16 = v111;
                v4 = 0LL;
                v7 = v112;
                v9 = 17;
                v13 = v106;
                v12 = 0LL;
                v11 = v104;
                v5 = v107;
                v8 = v113;
                v102 = 17;
                continue;
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v57 + 72);
            }
            else
            {
              v71 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)(v57 + 72), 0x1Fu) )
                v71 = ExpWaitForSpinLockExclusiveAndAcquire(v57 + 72);
              for ( i = *(_DWORD *)(v57 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v57 + 72) )
              {
                if ( (i & 0x40000000) == 0 )
                  _InterlockedCompareExchange((volatile signed __int32 *)(v57 + 72), i | 0x40000000, i);
                if ( (++v71 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v71);
              }
            }
            ++*(_QWORD *)(v57 + 32);
            if ( *(_QWORD *)(v57 + 64) )
              ++v56[13];
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v57 + 72, retaddr);
            else
              *(_DWORD *)(v57 + 72) = 0;
            v73 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v115);
            v74 = (_QWORD *)PrototypePteDirect;
            v75 = v73;
            MiInitializePfn(v63, PrototypePteDirect, v73);
            v7 = v112;
            v76 = 0x904C0000000LL;
            v77 = MmProtectToPteMask[v75] ^ ((v62 << 12) ^ MmProtectToPteMask[v75]) & 0xFFFFFFFFF000LL | 0x21;
            if ( v112 + 0x904C0000000LL <= 0x3FFFFFFF )
              v77 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
            if ( v112 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
              && v112 >= 0xFFFFF68000000000uLL
              || v112 >= 0xFFFFF6FB40000000uLL
              && v112 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              || v112 >= 0xFFFFF6FB7DA00000uLL
              && (v76 = 0x90482600000LL,
                  v112 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
              || v112 >= 0xFFFFF6FB7DBED000uLL
              && v112 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
            {
              v77 |= 4uLL;
            }
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v112, v76, v77) )
              v78 |= 0x100uLL;
            v6 = v78 & 0xFFFFFFFFFFFFFE7FuLL;
            v79 = v6 | ((unsigned __int64)(word_14034EC18 & 1) << 8);
            v80 = v110 <= 0x7F8;
            v105 = v79;
            *v74 = v79;
            if ( v80 )
              MiWritePteShadow(v74, v79);
            v16 = v111;
            goto LABEL_201;
          }
        }
        if ( (v107 & 2) != 0 )
        {
          v7 = v112;
        }
        else
        {
          if ( v9 != 17 )
          {
            MiUnlockProtoPoolPage(v13, v9);
            v102 = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v7 = v112;
          Teb_low = LOBYTE(CurrentThread[1].Teb);
          Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          LOBYTE(CurrentThread[1].Teb) = 1;
          v86 = Teb_low + 4 * Flink;
          v87 = (__int64)(v113 - v7) >> 3;
          if ( (unsigned int)v87 > Flink )
          {
            if ( (unsigned int)v87 > 0xF )
              LODWORD(v87) = 15;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v87;
          }
          v88 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16);
          if ( v88 < 0 )
          {
            v89 = v109;
            if ( v109 >= 0 )
              v89 = v88;
            v109 = v89;
          }
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v86 >> 2;
          LOBYTE(CurrentThread[1].Teb) = v86 & 3;
          v9 = v102;
        }
        v16 = v111;
        v12 = PrototypePteDirect;
        v103 = 0;
        goto LABEL_220;
      }
      v106 = MiLockProtoPoolPage(v12, &v102);
      v13 = v106;
      if ( v106 )
      {
        v9 = v102;
        v4 = 0LL;
      }
      else
      {
        do
        {
          MmAccessFault(2uLL, v12);
          v27 = MiLockProtoPoolPage(v12, &v102);
          v106 = v27;
        }
        while ( !v27 );
        v16 = v111;
        v4 = 0LL;
        v7 = v112;
        v13 = v27;
        v9 = v102;
      }
      goto LABEL_43;
    }
    v12 = PrototypePteDirect;
    v13 = v106;
LABEL_43:
    if ( (*(_BYTE *)v7 & 1) != 0 )
      goto LABEL_221;
    v26 = *(_QWORD *)v12;
    v28 = v12 + 0x90482413000LL;
    v110 = v28;
    if ( v28 <= 0x7F8 )
      v26 = MiReadPteShadow(PrototypePteDirect, v26);
    v115 = v26;
    if ( (v26 & 1) == 0 && ((v26 & 0x400) != 0 || (v26 & 0x800) == 0) )
      goto LABEL_147;
    v12 = PrototypePteDirect;
    v25 = PrototypePteDirect + 0x90482413000LL;
    v110 = PrototypePteDirect + 0x90482413000LL;
    while ( 1 )
    {
      v29 = *(_QWORD *)v12;
      if ( v25 <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v21)
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v21 )
        {
          v30 = *(_QWORD *)(v21 + 8 * ((v12 >> 3) & 0x1FF));
          if ( (v30 & 0x20) != 0 )
            v29 |= 0x20uLL;
          if ( (v30 & 0x42) != 0 )
            v29 |= 0x42uLL;
        }
      }
      v119 = v29;
      if ( (v29 & 1) != 0 )
      {
        v31 = v29;
        if ( (unsigned __int64)&STACK[0x904824130B8] <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, v21)
          && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
        {
          v32 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 8 * (((unsigned __int64)&v119 >> 3) & 0x1FF));
            if ( (v33 & 0x20) != 0 )
              v31 |= 0x20uLL;
            if ( (v33 & 0x42) != 0 )
              v31 |= 0x42uLL;
          }
        }
        goto LABEL_74;
      }
      if ( (v29 & 0x400) != 0 || (v29 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(v29, v21) )
      {
        v31 = MiReverseSwizzleInvalidPte(v29, v21, v6, v22);
LABEL_74:
        v34 = MI_IS_PFN((v31 >> 12) & 0xFFFFFFFFFLL);
        v35 = 0x90482413000LL;
        if ( v34 )
        {
          v36 = v4;
          v37 = 48 * v22 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
          {
            v35 = 0x8000000000000000uLL;
            do
            {
              if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v36);
                v35 = 0x8000000000000000uLL;
              }
            }
            while ( (*(_QWORD *)(v37 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) );
            v4 = 0LL;
          }
          v12 = PrototypePteDirect;
          v21 = *(_QWORD *)PrototypePteDirect;
          if ( v25 <= 0x7F8
            && (unsigned int)MiPteHasShadow(v35, v21)
            && (v21 & 1) != 0
            && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            v6 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v6 )
            {
              v38 = *(_QWORD *)(v6 + 8 * ((v12 >> 3) & 0x1FF));
              if ( (v38 & 0x20) != 0 )
                v21 |= 0x20uLL;
              if ( (v38 & 0x42) != 0 )
                v21 |= 0x42uLL;
            }
          }
          if ( v21 == v29 )
            goto LABEL_97;
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
    }
    v37 = v4;
LABEL_97:
    v26 = *(_QWORD *)v12;
    if ( v25 <= 0x7F8 )
      v26 = MiReadPteShadow(v12, *(_QWORD *)v12);
    v115 = v26;
    if ( !v37 )
    {
      v9 = v102;
      v13 = v106;
      goto LABEL_146;
    }
    if ( (v26 & 1) == 0 )
    {
      v40 = ((unsigned int)HIDWORD(*(_QWORD *)(v37 + 40)) >> 8) & 0x3FF;
      if ( v40 == 1023 )
        v41 = MiSystemPartition;
      else
        v41 = *(__int16 **)(qword_14034F0E8 + 8LL * v40);
      v6 = *(unsigned __int8 *)(v37 + 34);
      if ( (v6 & 0x20) == 0 )
      {
        v42 = *(unsigned __int8 *)(v37 + 35);
        if ( (v42 & 0x40) == 0 )
        {
          if ( (v43 = *((_QWORD *)v41 + 688), v43 >= 0x80)
            || ((__int64)KeGetCurrentThread()[1].Queue & 2) != 0 && v43 >= 2
            || v41 != MiSystemPartition && v43 >= 2 )
          {
            LOBYTE(v6) = v6 & 7;
            v44 = ((__int64)(v113 - v7) >> 3) + 1;
            if ( (_BYTE)v6 != 2 || v44 <= 1 )
              goto LABEL_140;
            v45 = MiGetPrototypePteDirect(*(_QWORD *)(v37 + 16), v43, v6, v42);
            if ( (__int64)(*(_QWORD *)(v45 + 8) + 8LL * *(unsigned int *)(v45 + 44) - v12) >> 3 < v44 )
              v44 = (__int64)(*(_QWORD *)(v45 + 8) + 8LL * *(unsigned int *)(v45 + 44) - v12) >> 3;
            v49 = 4096 - (v12 & 0xFFF);
            if ( v44 > (unsigned __int64)v49 >> 3 )
              v44 = (unsigned __int64)v49 >> 3;
            if ( v44 > (unsigned int)(16 - v104) )
              v44 = (unsigned int)(16 - v104);
            if ( v44 > 1 )
            {
              v116 = v48;
              v50 = v48;
              if ( (v46 & 8) != 0 )
                v51 = 5;
              else
                v51 = v46 & 7;
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v47 + 40 * (v51 + 44LL)), &LockHandle);
              v52 = MiUnlinkPageFromList(v37);
              if ( v52 == 1 )
              {
                v53 = MiUnlinkStandbyBatch(v37, (int)PrototypePteDirect + 8, v51, v7, v44 - 1, (__int64)&v116);
                v50 = v116;
                v114 = v53;
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
                goto LABEL_135;
              }
              _m_prefetchw(&LockHandle);
              Next = LockHandle.LockQueue.Next;
              if ( LockHandle.LockQueue.Next )
              {
LABEL_133:
                LockHandle.LockQueue.Next = 0LL;
                _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
              }
              else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                        (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                        0LL,
                                                        (signed __int64)&LockHandle) != &LockHandle )
              {
                Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
                goto LABEL_133;
              }
              v50 = v116;
LABEL_135:
              if ( v50 )
              {
                MiDiscardTransitionPte(v50);
                _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              v12 = PrototypePteDirect;
              v16 = v111;
            }
            else
            {
LABEL_140:
              v52 = MiUnlinkPageFromList(v37);
            }
            if ( !v52 )
            {
              MiDiscardTransitionPte(v37);
              _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v9 = v102;
              v4 = 0LL;
              v13 = v106;
              v12 = 0LL;
              v11 = v104;
              v5 = v107;
              v8 = v113;
              continue;
            }
            MiReadyStandbyPageForActive(v37, v7);
            v55 = *(_QWORD *)v12;
            if ( v110 <= 0x7F8 )
              v55 = MiReadPteShadow(v12, *(_QWORD *)v12);
            v105 = v55;
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_201:
            v4 = 0LL;
            goto LABEL_202;
          }
        }
      }
LABEL_102:
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = v102;
      v13 = v106;
LABEL_221:
      v15 = v4;
      goto LABEL_222;
    }
    v39 = (*(_BYTE *)(v37 + 35) & 0x40) == 0;
    v105 = v26;
    if ( !v39 )
      goto LABEL_102;
    *(_QWORD *)(v37 + 24) ^= (*(_QWORD *)(v37 + 24) ^ (*(_QWORD *)(v37 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    while ( 1 )
    {
LABEL_202:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v82 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v82 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v82);
        }
        while ( (*(_QWORD *)(v16 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
        v4 = 0LL;
      }
      *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v95 = word_14034EC18;
      if ( (v18 & 1) != 0 )
      {
        v96 = v105;
        if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
          v96 = MiReadPteShadow(&v105, v105);
        v97 = 0x904C0000000LL;
        v98 = qword_1403D0218 ^ (qword_1403D0218 ^ v96) & 0xFFFFFFFFF000LL | 0x21;
        if ( v7 + 0x904C0000000LL <= 0x3FFFFFFF )
          v98 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v7 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v7 >= 0xFFFFF68000000000uLL
          || v7 >= 0xFFFFF6FB40000000uLL
          && v7 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
          || v7 >= 0xFFFFF6FB7DA00000uLL
          && (v97 = 0x90482600000LL, v7 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
          || v7 >= 0xFFFFF6FB7DBED000uLL
          && v7 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
        {
          v98 |= 4uLL;
        }
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v7, v98, v97) )
          v99 |= 0x100uLL;
        v100 = v99 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(v95 & 1) << 8);
      }
      else
      {
        v100 = v105;
        if ( (v107 & 4) != 0 && (v105 & 0x42) == 0 && (v105 & 0x800) != 0 )
          v100 = v105 | 0x42;
      }
      v9 = v102;
      v12 = PrototypePteDirect;
      v13 = v106;
      v15 = v100 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(v95 & 1) << 8);
LABEL_222:
      v105 = v15;
      v7 += 8LL;
      if ( (v18 & 2) != 0 )
      {
        v15 &= ~1uLL;
        v105 = v15;
      }
      v11 = v104;
      if ( v104 || v15 )
      {
        v124[v104] = v15;
        v104 = ++v11;
        if ( v11 == 16 )
        {
          if ( v9 != 17 )
          {
            MiUnlockProtoPoolPage(v13, v9);
            v9 = 17;
            v102 = 17;
          }
          MiMakeSystemCacheRangeValid(v7 - 128, v124, 16LL, v16);
          v4 = 0LL;
          v11 = 0;
          v104 = 0;
        }
      }
      if ( !v114 )
        break;
      v90 = *(_QWORD *)(v12 + 8);
      v91 = v12 + 8;
      PrototypePteDirect = v91;
      --v114;
      if ( v91 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(v15, v90)
        && (v90 & 1) != 0
        && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
      {
        v92 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v92 )
        {
          v93 = *(_QWORD *)(v92 + 8 * ((v91 >> 3) & 0x1FF));
          if ( (v93 & 0x20) != 0 )
            v90 |= 0x20uLL;
          if ( (v93 & 0x42) != 0 )
            v90 |= 0x42uLL;
        }
      }
      v105 = v90;
      v94 = MI_CAPTURE_SYSTEM_CACHE_PTE(v7);
      v117 = v94;
      v18 = v4;
      if ( (v94 & 1) != 0 )
      {
        v18 = 2;
      }
      else if ( (v94 & 8) != 0 )
      {
        v18 = 1;
      }
    }
    v5 = v107;
    v8 = v113;
    v112 = v7;
  }
  if ( v9 != 17 )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        v4 = (unsigned int)(v4 + 1);
        v114 = v4;
        if ( ((unsigned int)v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait((unsigned int)v4);
          LODWORD(v4) = v114;
        }
      }
      while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
    }
    *(_BYTE *)(v13 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(v13);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v102);
    v11 = v104;
  }
  if ( v11 )
    MiMakeSystemCacheRangeValid(v7 - 8LL * v11, v124, v11, v16);
  if ( v123 )
    *v123 = v103;
  return (unsigned int)v109;
}
