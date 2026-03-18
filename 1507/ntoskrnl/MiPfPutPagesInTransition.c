/*
 * XREFs of MiPfPutPagesInTransition @ 0x1400356F0
 * Callers:
 *     MmPrefetchForCacheManager @ 0x140477744 (MmPrefetchForCacheManager.c)
 *     MmPrefetchPagesEx @ 0x14049D750 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x14051B0F4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x14003696C (MiReduceMdl.c)
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiPrefetchNormally @ 0x1400552D0 (MiPrefetchNormally.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     MiSetInPagePriority @ 0x1400619CC (MiSetInPagePriority.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUpdatePfnPriority @ 0x140080A64 (MiUpdatePfnPriority.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x14049D6C4 (MiFreeReadListPages.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  unsigned int v3; // r11d
  char *v4; // r14
  _QWORD *v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  char v10; // r11
  struct _KTHREAD *CurrentThread; // r8
  __int64 v12; // rdi
  __int64 v13; // r13
  _KPROCESS *Process; // rcx
  int v15; // edx
  _QWORD *v16; // r15
  int v17; // edx
  int v18; // esi
  _QWORD *v19; // rbx
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 i; // rdx
  unsigned int v23; // ecx
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  ULONG_PTR v26; // r12
  unsigned __int64 v27; // rcx
  int v28; // r13d
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // edi
  __int64 v38; // r14
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // edi
  __int16 v43; // ax
  _QWORD *v44; // r12
  _BYTE *v45; // r15
  __int64 v46; // r12
  _WORD *v47; // rax
  unsigned int v48; // edx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 Page; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 PrototypePteDirect; // r15
  __int64 v56; // r14
  volatile signed __int32 *v57; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v59; // ebx
  __int64 v60; // rbx
  __int64 v61; // r13
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // rax
  int v68; // r15d
  __int64 v69; // r13
  __int64 v70; // r14
  __int64 v71; // rbx
  __int64 *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  char *v80; // rcx
  _QWORD *v81; // rdx
  PVOID *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rax
  _QWORD *v86; // rcx
  _QWORD *v87; // rbx
  __int64 v89; // [rsp+30h] [rbp-A9h]
  _QWORD *v90; // [rsp+38h] [rbp-A1h]
  __int64 v91; // [rsp+40h] [rbp-99h]
  BOOL v92; // [rsp+48h] [rbp-91h]
  int v93; // [rsp+4Ch] [rbp-8Dh]
  __int64 v94; // [rsp+50h] [rbp-89h]
  unsigned int v95; // [rsp+58h] [rbp-81h]
  __int64 v96; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v97; // [rsp+68h] [rbp-71h]
  int v98; // [rsp+6Ch] [rbp-6Dh]
  ULONG_PTR v99; // [rsp+70h] [rbp-69h]
  _QWORD *v100; // [rsp+78h] [rbp-61h]
  unsigned __int64 v101; // [rsp+80h] [rbp-59h]
  void *Src; // [rsp+88h] [rbp-51h]
  unsigned int v103; // [rsp+90h] [rbp-49h]
  _QWORD *v104; // [rsp+98h] [rbp-41h]
  __int64 v105; // [rsp+A0h] [rbp-39h]
  unsigned __int64 v106; // [rsp+A8h] [rbp-31h] BYREF
  unsigned __int64 v107; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int64 v108; // [rsp+B8h] [rbp-21h]
  unsigned __int64 v109; // [rsp+C0h] [rbp-19h]
  PVOID P; // [rsp+C8h] [rbp-11h]
  _QWORD *v111; // [rsp+D0h] [rbp-9h]
  __int64 *v112; // [rsp+D8h] [rbp-1h]
  _WORD *v113; // [rsp+E0h] [rbp+7h] BYREF
  __int16 v114; // [rsp+E8h] [rbp+Fh]
  unsigned __int16 v115; // [rsp+EAh] [rbp+11h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int8 v119; // [rsp+150h] [rbp+77h] BYREF
  int v120; // [rsp+158h] [rbp+7Fh]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = 0LL;
  v97 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v95 = v3;
  v104 = 0LL;
  v7 = MiPartitionIdToPointer(*(_WORD *)(v6 + 60) & 0x3FF);
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  v105 = v7;
  v13 = 0LL;
  v89 = 0LL;
  Process = CurrentThread->Process;
  v15 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  v103 = *(_DWORD *)(v2 + 56) + 1;
  LODWORD(v7) = HIDWORD(Process[1].DirectoryTableBase);
  v94 = 0LL;
  v119 = 17;
  v92 = ((v7 & 0x100000) != 0 || v15 < 2)
     && (CurrentThread != KeGetCurrentThread() || !HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink));
  v16 = *(_QWORD **)(v2 + 88);
  v17 = *(_DWORD *)(v8 + 56) >> 20;
  v112 = (__int64 *)(v2 + 88);
  v90 = v16;
  v91 = 0LL;
  v120 = v10 & 7 | 0x18;
  MI_INITIALIZE_COLOR_BASE(v9 + 1272, v17 & 0x3F, &v113);
  if ( v16 == (_QWORD *)(v2 + 88) )
    goto LABEL_185;
  v18 = v120;
  do
  {
    P = v16;
    if ( v92 )
    {
      *((_BYTE *)v16 + 189) |= 0x40u;
    }
    else if ( (*(_DWORD *)(v2 + 72) & 1) != 0 )
    {
      *((_BYTE *)v16 + 189) |= 0x10u;
    }
    v19 = (_QWORD *)v16[29];
    v20 = 0LL;
    v100 = v19;
    v16[29] = *v19 & 0xFFFFFFFFFFFFFFFCuLL;
    v109 = *v19 & 0xFFFFFFFFFFFFFFFCuLL;
    v108 = v16[24] + 8LL;
    Src = (void *)v16[31];
    v21 = *((unsigned int *)Src + 10);
    v111 = (char *)Src + 48;
    i = (unsigned __int64)Src + 48;
    v23 = 0;
    v24 = ((unsigned __int64)((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF) + v21 + 4095) >> 12;
    if ( v24 )
    {
      do
      {
        ++v23;
        *(_QWORD *)i = qword_14034F708;
        i += 8LL;
      }
      while ( v23 < v24 );
    }
    v93 = 0;
    if ( !v4 )
    {
      v91 = MiGetInPageSupportBlock(0LL, i);
      v4 = (char *)v91;
      if ( v91 )
      {
        v25 = v97;
        *(_QWORD *)(v91 + 240) = 0LL;
        MiSetInPagePriority(v91, v25, v95);
      }
    }
    if ( (unsigned __int64)v19 >= v108 )
      goto LABEL_171;
    while ( 2 )
    {
      v26 = *v19 & 0xFFFFFFFFFFFFFFFCuLL;
      v99 = v26;
      if ( !v12 )
        goto LABEL_22;
      if ( v13 != ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        MiUnlockProtoPoolPage(v12, v119);
LABEL_22:
        v94 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v89 = MiLockProtoPoolPage(v26, &v119);
        if ( !v89 )
        {
          do
          {
            MmAccessFault(2uLL, v26);
            v89 = MiLockProtoPoolPage(v26, &v119);
          }
          while ( !v89 );
          v18 = v120;
        }
      }
      v27 = 0x90482413000LL;
      v28 = 0;
      v29 = v26 + 0x90482413000LL;
      while ( 1 )
      {
        v30 = *(_QWORD *)v26;
        if ( v29 <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(0x90482413000LL, i)
            && (v30 & 1) != 0
            && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
          {
            i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( i )
            {
              v31 = *(_QWORD *)(i + 8 * ((v26 >> 3) & 0x1FF));
              if ( (v31 & 0x20) != 0 )
                v30 |= 0x20uLL;
              if ( (v31 & 0x42) != 0 )
                v30 |= 0x42uLL;
            }
          }
          v27 = 0x90482413000LL;
        }
        v107 = v30;
        if ( (v30 & 1) != 0 )
        {
          v32 = v30;
          if ( (unsigned __int64)&STACK[0x904824130B0] <= 0x7F8
            && (unsigned int)MiPteHasShadow(0x90482413000LL, i)
            && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
          {
            v33 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v33 )
            {
              v34 = *(_QWORD *)(v33 + 8 * (((unsigned __int64)&v107 >> 3) & 0x1FF));
              if ( (v34 & 0x20) != 0 )
                v32 |= 0x20uLL;
              if ( (v34 & 0x42) != 0 )
                v32 |= 0x42uLL;
            }
          }
          goto LABEL_51;
        }
        if ( (v30 & 0x400) != 0 || (v30 & 0x800) == 0 )
          break;
        v35 = MiInvalidPteConforms(v30, i);
        v27 = 0x90482413000LL;
        if ( v35 )
        {
          v32 = MiReverseSwizzleInvalidPte(v30, i, v24, v20);
LABEL_51:
          v36 = MI_IS_PFN((v32 >> 12) & 0xFFFFFFFFFLL);
          v27 = 0x90482413000LL;
          if ( v36 )
          {
            v37 = 0;
            v38 = 48 * v20 - 0x58000000000LL;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
            {
              v27 = 0x8000000000000000uLL;
              do
              {
                if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                {
                  _mm_pause();
                }
                else
                {
                  HvlNotifyLongSpinWait(v37);
                  v27 = 0x8000000000000000uLL;
                }
              }
              while ( (*(_QWORD *)(v38 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
            }
            i = *(_QWORD *)v26;
            if ( v29 <= 0x7F8
              && (unsigned int)MiPteHasShadow(v27, i)
              && (i & 1) != 0
              && ((i & 0x20) == 0 || (i & 0x42) == 0) )
            {
              v27 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v24 = *(_QWORD *)(v27 + 1520);
              if ( v24 )
              {
                v39 = *(_QWORD *)(v24 + 8 * ((v26 >> 3) & 0x1FF));
                if ( (v39 & 0x20) != 0 )
                  i |= 0x20uLL;
                if ( (v39 & 0x42) != 0 )
                  i |= 0x42uLL;
              }
            }
            if ( i == v30 )
              goto LABEL_73;
            _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v27 = 0x90482413000LL;
          }
        }
      }
      v38 = 0LL;
LABEL_73:
      v40 = *(_QWORD *)v26;
      if ( v29 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v27, i)
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( i )
        {
          v41 = *(_QWORD *)(i + 8 * ((v26 >> 3) & 0x1FF));
          if ( (v41 & 0x20) != 0 )
            v40 |= 0x20uLL;
          if ( (v41 & 0x42) != 0 )
            v40 |= 0x42uLL;
        }
      }
      v106 = v40;
      if ( v38 )
      {
        MiUpdatePfnPriority(v38, v95, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_85;
      }
      if ( (v40 & 0x400) != 0 )
      {
        v4 = (char *)v91;
        v42 = 1;
        goto LABEL_98;
      }
      if ( (v40 & 1) == 0 )
      {
        v43 = MiReverseSwizzleInvalidPte(v40, i, v24, v20);
        if ( (v43 & 0x400) == 0 && (v43 & 0x800) == 0 && (v43 & 4) == 0 )
        {
LABEL_85:
          v4 = (char *)v91;
LABEL_86:
          v12 = v89;
          goto LABEL_87;
        }
      }
      v4 = (char *)v91;
      if ( !v91 )
        goto LABEL_86;
      v42 = 2;
LABEL_98:
      v98 = 0;
      v44 = *(_QWORD **)(a1 + 40);
      if ( v44 )
      {
        v45 = v100;
        *(_QWORD *)(a1 + 40) = *v44;
        v96 = (__int64)(v44 + 0xB000000000LL) / 48;
        goto LABEL_110;
      }
      v46 = v105;
      if ( (unsigned int)MiPrefetchNormally(v105, v103) )
      {
        if ( !a2 )
          goto LABEL_104;
        if ( *a2 )
        {
          --*a2;
LABEL_104:
          if ( MiObtainFaultCharges(v46, 1LL, 1LL) )
          {
            v47 = v113;
            v45 = v100;
            v48 = v115;
            ++*v113;
            v49 = (unsigned __int16)(v114 & *v47) | v48;
            if ( (*v45 & 1) != 0 )
              v50 = 2LL;
            else
              v50 = 0LL;
            Page = MiGetPage(v46, v49, v50);
            v96 = Page;
            if ( Page != -1 )
            {
              v44 = (_QWORD *)(48 * Page - 0x58000000000LL);
LABEL_110:
              if ( (*v45 & 1) != 0 )
              {
                if ( v44[2] )
                  v28 = 1;
                v98 = v28;
              }
              if ( v42 == 1 )
              {
                if ( !v90[30] )
                  v90[30] = v44;
                ++v93;
                MiInitializeReadInProgressPfn(-1, (unsigned int)&v96, 1, v99, (__int64)(v90 + 4), v18);
                PrototypePteDirect = MiGetPrototypePteDirect(v40, v52, v53, v54);
                v56 = *(_QWORD *)(a1 + 8);
                if ( (*(_DWORD *)(v56 + 56) & 0x20) != 0 || !*(_QWORD *)(v56 + 64) )
                  PrototypePteDirect = 0LL;
                v57 = (volatile signed __int32 *)(v56 + 72);
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v56 + 72);
                }
                else
                {
                  v59 = 0;
                  if ( _interlockedbittestandset(v57, 0x1Fu) )
                    v59 = ExpWaitForSpinLockExclusiveAndAcquire(v56 + 72);
                  for ( i = *(unsigned int *)v57; (*v57 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v57 )
                  {
                    if ( (i & 0x40000000) == 0 )
                      _InterlockedCompareExchange(v57, i | 0x40000000, i);
                    if ( (++v59 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v59);
                  }
                }
                ++*(_QWORD *)(v56 + 32);
                if ( PrototypePteDirect )
                  ++*(_QWORD *)(PrototypePteDirect + 104);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v56 + 72, retaddr);
                else
                  *v57 = 0;
                __writecr8(CurrentIrql);
                v16 = v90;
                v60 = v96;
                *((_QWORD *)Src + ((__int64)(v99 - v109) >> 3) + 6) = v96;
                if ( !v90[20] )
                {
                  MiObtainProtoReference(v89, 0LL);
                  v90[20] = v89;
                }
                if ( v28 == 1 )
                {
                  MiUnlockProtoPoolPage(v89, v119);
                  v89 = 0LL;
                  v12 = 0LL;
                  MiZeroPhysicalPage(v60, 1LL, *(unsigned __int8 *)(48 * v60 - 0x57FFFFFFFDELL) >> 6);
                  v4 = (char *)v91;
                }
                else
                {
                  v4 = (char *)v91;
                  v12 = v89;
                }
LABEL_88:
                v13 = v94;
                v19 = v100 + 1;
                v100 = v19;
                if ( (unsigned __int64)v19 >= v108 )
                  goto LABEL_170;
                continue;
              }
              v61 = v105;
              MiReturnCommit(v105, 1LL);
              MiInitializeReadInProgressPfn(-1, (unsigned int)&v96, 1, v99, (__int64)(v4 + 32), v18);
              v63 = (unsigned __int16)v40 >> 12;
              v64 = v40;
              if ( (unsigned __int64)&STACK[0x904824130A8] <= 0x7F8
                && (unsigned int)MiPteHasShadow(0x90482413000LL, v40)
                && (v40 & 1) != 0
                && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
              {
                v62 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
                if ( v62 )
                {
                  v65 = *(_QWORD *)(v62 + 8 * (((unsigned __int64)&v106 >> 3) & 0x1FF));
                  if ( (v65 & 0x20) != 0 )
                    v64 |= 0x20uLL;
                  if ( (v65 & 0x42) != 0 )
                    v64 |= 0x42uLL;
                }
              }
              if ( (v64 & 4) != 0 )
              {
                v67 = MiReverseSwizzleInvalidPte(v64, v64, v62, v63);
                v66 = HIDWORD(v67);
                LODWORD(v101) = HIDWORD(v67);
              }
              else
              {
                LODWORD(v66) = 0;
                LODWORD(v101) = 0;
              }
              v68 = 0;
              if ( (v40 & 4) != 0 )
                LOBYTE(v68) = (_DWORD)v63 == *(_DWORD *)(v61 + 1044);
              v69 = *(_QWORD *)(v61 + 8 * v63 + 5344);
              v70 = (unsigned int)v63;
              *(_QWORD *)(v91 + 248) = v91 + 256;
              if ( v92 )
                *(_BYTE *)(v91 + 189) |= 0x40u;
              v71 = v96;
              *(_QWORD *)(v91 + 256) = 0LL;
              *(_QWORD *)(v91 + 288) = 0LL;
              *(_DWORD *)(v91 + 264) = 56;
              *(_QWORD *)(v91 + 296) = 4096LL;
              *(_WORD *)(v91 + 266) |= 0x4042u;
              *(_QWORD *)(v91 + 304) = v71;
              MiObtainProtoReference(v89, 0LL);
              v72 = v112;
              *(_QWORD *)(v91 + 160) = v89;
              v73 = *v72;
              *(_QWORD *)v91 = *v72;
              *(_QWORD *)(v91 + 8) = v72;
              if ( *(__int64 **)(v73 + 8) != v72 )
                __fastfail(3u);
              *(_QWORD *)(v73 + 8) = v91;
              *v72 = v91;
              v74 = v119;
              ++*(_DWORD *)(a1 + 76);
              MiUnlockProtoPoolPage(v89, v74);
              v89 = 0LL;
              if ( v98 == 1 )
                MiZeroPhysicalPage(v71, 1LL, *(unsigned __int8 *)(48 * v71 - 0x57FFFFFFFDELL) >> 6);
              *(_QWORD *)(v91 + 216) = 0LL;
              if ( v68 )
              {
                v75 = 0xFFFFFFFFFFFFFFFLL;
                v76 = (v70 << 60) | (unsigned int)v66;
                *(_BYTE *)(v91 + 189) |= 0x80u;
              }
              else
              {
                v76 = (unsigned __int64)(unsigned int)v101 << 12;
                v101 = v76;
              }
              *(_QWORD *)(v91 + 96) = v76;
              v77 = *(_QWORD *)(v69 + 64);
              *(_BYTE *)(v91 + 191) |= 0x10u;
              *(_QWORD *)(v91 + 192) = v77;
              *(_QWORD *)(v91 + 232) = v99;
              *(_QWORD *)(v91 + 240) = v44;
              v78 = MiGetInPageSupportBlock(0LL, v75);
              v91 = v78;
              v4 = (char *)v78;
              if ( v78 )
              {
                v79 = v97;
                *(_QWORD *)(v78 + 240) = 0LL;
                MiSetInPagePriority(v78, v79, v95);
              }
              v12 = 0LL;
LABEL_87:
              v16 = v90;
              goto LABEL_88;
            }
            MiReturnFaultCharges(v46, 1LL, 1LL);
          }
        }
      }
      break;
    }
    v13 = v94;
    v16 = v90;
    v12 = v89;
LABEL_170:
    v2 = a1;
LABEL_171:
    if ( v12 )
    {
      MiUnlockProtoPoolPage(v12, v119);
      v12 = 0LL;
      v89 = 0LL;
    }
    if ( v93 )
    {
      v83 = MiReduceMdl(Src, i);
      if ( v83 )
      {
        v16[12] += v83 << 12;
        v84 = 48LL * *v111 - 0x58000000000LL;
        v85 = *(_QWORD *)(v84 + 8) | 0x8000000000000000uLL;
        v16[30] = v84;
        v16[29] = v85;
      }
      if ( Src != v16 + 32 && *((_DWORD *)Src + 10) <= 0x10000u )
      {
        memmove(v16 + 32, Src, *((__int16 *)Src + 4));
        v86 = v104;
        v104 = Src;
        *(_QWORD *)Src = v86;
        v16[31] = v16 + 32;
      }
      v16 = (_QWORD *)*v16;
      v90 = v16;
    }
    else
    {
      v80 = (char *)P;
      v16 = (_QWORD *)*v16;
      v90 = v16;
      v81 = *(_QWORD **)P;
      v82 = (PVOID *)*((_QWORD *)P + 1);
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v82 != P )
        __fastfail(3u);
      *v82 = v81;
      v81[1] = v82;
      --*(_DWORD *)(v2 + 76);
      MiFreeInPageSupportBlock(v80);
    }
  }
  while ( v16 != (_QWORD *)(v2 + 88) );
  v5 = v104;
LABEL_185:
  MiFreeReadListPages(v2);
  if ( v5 )
  {
    do
    {
      v87 = (_QWORD *)*v5;
      ExFreePoolWithTag(v5, 0);
      v5 = v87;
    }
    while ( v87 );
  }
  if ( v4 )
    MiFreeInPageSupportBlock(v4);
  return 0LL;
}
