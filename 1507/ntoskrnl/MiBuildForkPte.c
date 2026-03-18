/*
 * XREFs of MiBuildForkPte @ 0x14000253C
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 * Callees:
 *     MiFindZeroCloneBlock @ 0x140003338 (MiFindZeroCloneBlock.c)
 *     MiWriteSharedDemandZeroPte @ 0x1400039D0 (MiWriteSharedDemandZeroPte.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiDuplicateCloneLeaf @ 0x140004A08 (MiDuplicateCloneLeaf.c)
 *     MiLockPageTablePage @ 0x140035180 (MiLockPageTablePage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401228AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015F7F4 (MiLockAndInsertPageInFreeList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140225A30 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x140225C48 (MiMakePrototypePteVadLookup.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        char a13,
        _QWORD *a14)
{
  unsigned __int64 PteShadow; // rbx
  __int64 v15; // r13
  _QWORD *v16; // r12
  unsigned int v17; // r15d
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // r9
  __int64 Process; // rcx
  _QWORD *v25; // rsi
  ULONG_PTR v26; // r10
  __int64 v27; // r8
  unsigned __int64 v28; // r11
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned __int64 Wsle; // r9
  __int64 v35; // r11
  unsigned __int64 v36; // r10
  unsigned __int64 *v37; // rcx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r8
  volatile signed __int32 *v42; // rsi
  __int64 v43; // rcx
  __int16 v44; // r9
  unsigned int v45; // ebx
  int v46; // eax
  __int64 v47; // rsi
  __int16 v48; // ax
  __int64 v49; // r8
  unsigned __int64 v50; // r11
  volatile signed __int32 *v51; // rsi
  unsigned int v52; // ebx
  unsigned int v53; // r12d
  unsigned int v54; // r12d
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int64 *v58; // rbx
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r9
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // r9
  ULONG_PTR v68; // rax
  unsigned __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // r8
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rcx
  __int64 ZeroCloneBlock; // rax
  _QWORD *v77; // rax
  bool v78; // cc
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // rbx
  __int64 v83; // rbx
  __int64 v84; // r9
  __int64 PrototypePteDirect; // rdi
  signed __int64 v86; // rax
  int v87; // [rsp+50h] [rbp-79h]
  _QWORD v88[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v89; // [rsp+78h] [rbp-51h]
  ULONG_PTR v90; // [rsp+80h] [rbp-49h]
  __int64 CurrentIrql; // [rsp+88h] [rbp-41h]
  __int64 Page; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int64 v93; // [rsp+98h] [rbp-31h] BYREF
  _QWORD *v94; // [rsp+A0h] [rbp-29h]
  _WORD *v95; // [rsp+A8h] [rbp-21h] BYREF
  __int16 v96; // [rsp+B0h] [rbp-19h]
  unsigned __int16 v97; // [rsp+B2h] [rbp-17h]
  _QWORD v98[10]; // [rsp+B8h] [rbp-11h] BYREF

  PteShadow = *(_QWORD *)a3;
  v15 = a1;
  v16 = a4;
  if ( a3 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
  v17 = 0;
  v88[0] = PteShadow;
  if ( PteShadow )
  {
    v22 = MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(a8, 1LL);
    LOBYTE(v22) = a13;
    v23 = 0LL;
    Page = -1LL;
    Process = 0LL;
    v89 = v22;
    LODWORD(v90) = 0;
    while ( 2 )
    {
      v25 = a14;
      while ( 1 )
      {
        if ( (_DWORD)Process == 1 )
        {
          MiMakeSystemAddressValid(a3, 1);
          v26 = a3;
          v27 = 0x12090482600LL;
          v28 = 2040LL;
          PteShadow = *(_QWORD *)a3;
          if ( a3 + 0x90482413000LL <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v21)
            && (PteShadow & 1) != 0
            && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            v21 = *(_QWORD *)(Process + 1520);
            if ( v21 )
            {
              v29 = *(_QWORD *)(v21 + 8 * ((v26 >> 3) & 0x1FF));
              if ( (v29 & 0x20) != 0 )
                PteShadow |= 0x20uLL;
              if ( (v29 & 0x42) != 0 )
                PteShadow |= 0x42uLL;
            }
          }
          LOBYTE(v22) = v89;
          v23 = (unsigned int)v90;
          v88[0] = PteShadow;
        }
        else
        {
          v26 = a3;
          v28 = 2040LL;
          v27 = 0x12090482600LL;
        }
        if ( (PteShadow & 1) != 0 )
          break;
        if ( (PteShadow & 0x400) != 0 )
        {
          PrototypePteDirect = MiGetPrototypePteDirect(PteShadow, v21, v27 * 8, v23);
          if ( !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) && (PteShadow & 0x800) != 0 )
          {
            _InterlockedAdd64((volatile signed __int64 *)(PrototypePteDirect - 48 + 32), 1uLL);
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(((PrototypePteDirect - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10) + 384LL),
              1u);
            goto LABEL_181;
          }
          if ( MiLocateCloneAddress(v15, PrototypePteDirect) )
          {
            _InterlockedAdd64((volatile signed __int64 *)(PrototypePteDirect + 24), 1uLL);
            if ( (a12 & 1) != 0 )
            {
              if ( *(_QWORD *)(PrototypePteDirect + 16) >> 59 != 24 )
                v88[0] |= 8uLL;
              v86 = _InterlockedExchangeAdd64((volatile signed __int64 *)(PrototypePteDirect + 16), 1uLL);
              PteShadow = v88[0];
              if ( ((v86 + 1) & 0x7FFFFFFFFFFFFFFLL) == 1 )
                ++v25[1];
              else
                ++*v25;
            }
            else
            {
LABEL_181:
              PteShadow = v88[0];
            }
          }
          v78 = (unsigned __int64)(v16 + 0x12090482600LL) <= 0x7F8;
          goto LABEL_183;
        }
        if ( (PteShadow & 0x800) != 0 )
        {
          LOBYTE(v87) = v22;
          v46 = MiHandleForkTransitionPte(v15, a2, v26, v16, a6, a7, a9, &Page, a12, v87, v25);
          if ( v46 )
          {
            LOBYTE(v17) = v46 != 1;
            goto LABEL_186;
          }
LABEL_61:
          LOBYTE(v22) = v89;
          goto LABEL_62;
        }
        v47 = (PteShadow >> 5) & 0x1F;
        v48 = MiReverseSwizzleInvalidPte(PteShadow, v21, v27 * 8, v23);
        if ( (v48 & 0x400) == 0 && (v48 & 0x800) == 0 && (v48 & 4) == 0 )
        {
          if ( (PteShadow & 2) != 0 )
          {
            PteShadow &= ~2uLL;
            v88[0] = PteShadow;
          }
          v75 = a5;
          if ( a5 )
            ZeroCloneBlock = MiFindZeroCloneBlock(a5, (unsigned int)v47);
          else
            ZeroCloneBlock = 0LL;
          if ( ZeroCloneBlock )
          {
            MiWriteSharedDemandZeroPte(v75, ZeroCloneBlock, v16, a14);
            goto LABEL_186;
          }
          v77 = v16 + 0x12090482600LL;
LABEL_160:
          v78 = (unsigned __int64)v77 <= v50;
LABEL_183:
          *v16 = PteShadow;
          if ( !v78 )
            goto LABEL_186;
          v73 = PteShadow;
          goto LABEL_185;
        }
        if ( (_DWORD)v47 == 16 )
        {
          if ( (PteShadow & 2) != 0 )
          {
            PteShadow &= ~2uLL;
            v88[0] = PteShadow;
          }
          v77 = (_QWORD *)((char *)v16 + v49);
          goto LABEL_160;
        }
        if ( ((PteShadow >> 5) & 0x18) != 0x10 )
        {
          MI_MAKE_PROTECT_WRITE_COPY(v88);
          v79 = v88[0];
          if ( (v88[0] & 2) != 0 )
          {
            v80 = MiPartitionIdToPointer(*(unsigned __int16 *)(v15 + 1452));
            MiReleasePageFileInfo(v80, v81, 1LL);
            v79 &= ~2uLL;
          }
          v82 = v79 | 8;
          *(_QWORD *)a6 = 0LL;
          v88[0] = v82;
          *(_QWORD *)a6 = v82;
          if ( a6 + 0x90482413000LL <= 0x7F8 )
            MiWritePteShadow(a6, v82);
          *(_QWORD *)(a6 + 24) = 2LL;
          v83 = MiMakePrototypePteDirect(a6);
          v88[0] = v83;
          *(_QWORD *)a3 = v83;
          if ( a3 + v84 * 8 <= 0x7F8 )
          {
            MiWritePteShadow(a3, v83);
            v84 = 0x12090482600LL;
          }
          if ( (a12 & 1) != 0 )
          {
            if ( (_DWORD)v47 != 24 )
            {
              v83 |= 8uLL;
              v88[0] = v83;
            }
            *(_QWORD *)(a6 + 16) = 1LL;
            ++a14[1];
          }
          else
          {
            *(_QWORD *)(a6 + 16) = 0LL;
          }
          *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v47 << 59);
          *v16 = v83;
          if ( (unsigned __int64)&v16[v84] <= 0x7F8 )
            MiWritePteShadow(v16, v83);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          goto LABEL_130;
        }
        MiFlushTbList(a9);
        v51 = (volatile signed __int32 *)(v15 + 1272);
        MiUnlockWorkingSetExclusive(v15 + 1272, v89);
        v98[0] = (__int64)(a3 << 25) >> 16;
        v98[1] = 4096LL;
        MiPrefetchVirtualMemory(1LL, v98, v15 + 1272, 45LL);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          v22 = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15 + 1272);
        }
        else
        {
          v52 = 0;
          if ( _interlockedbittestandset(v51, 0x1Fu) )
            v52 = ExpWaitForSpinLockExclusiveAndAcquire(v15 + 1272);
          while ( 1 )
          {
            v21 = *(unsigned int *)v51;
            v22 = v21 & 0xFFFFFFFFBFFFFFFFuLL;
            if ( (v21 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v21 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v51, v21 | 0x40000000, v21);
            if ( (++v52 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v52);
          }
          PteShadow = v88[0];
        }
        LOBYTE(v22) = CurrentIrql;
        v25 = a14;
        v89 = v22;
LABEL_62:
        v23 = (unsigned int)v90;
        Process = 1LL;
      }
      v30 = PteShadow;
      if ( (unsigned __int64)&v88[v27] <= v28
        && (unsigned int)MiPteHasShadow(Process, PteShadow)
        && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
      {
        PteShadow = v88[0];
        v31 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 8 * (((unsigned __int64)v88 >> 3) & 0x1FF));
          if ( (v32 & 0x20) != 0 )
            v30 = v88[0] | 0x20LL;
          if ( (v32 & 0x42) != 0 )
            v30 |= 0x42uLL;
        }
        else
        {
          v30 = v88[0];
        }
      }
      v33 = 48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( (_DWORD)v23 != 1 && (*(_WORD *)(v33 + 32) <= 1u || (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) != 0) )
      {
        v90 = (__int64)(v26 << 25) >> 16;
        Wsle = MiLocateWsle(v90);
        v94 = (_QWORD *)(Wsle * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL);
        if ( (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) == 0 )
        {
          v35 = 0x90482413000LL;
          v36 = 2040LL;
          v37 = (unsigned __int64 *)(((a6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v38 = *v37;
          if ( (unsigned __int64)(v37 + 0x12090482600LL) <= 0x7F8 )
            v38 = MiReadPteShadow(v37, *v37);
          v93 = v38;
          v39 = v38;
          if ( (unsigned __int64)&v93 + v35 <= v36 )
            v39 = MiReadPteShadow(&v93, v38);
          v40 = 0LL;
          v41 = 48 * ((v39 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          CurrentIrql = v41;
          if ( Wsle < MEMORY[0xFFFFF58010804008] )
          {
            if ( !(unsigned int)MiLockPageTablePage(v41, 2LL) )
            {
              v15 = a1;
              v23 = 1LL;
              LOBYTE(v22) = v89;
              Process = 1LL;
              LODWORD(v90) = 1;
              continue;
            }
            v41 = CurrentIrql;
          }
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
          {
            v53 = 0;
            do
            {
              if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v53);
                v41 = CurrentIrql;
              }
            }
            while ( (*(_QWORD *)(v41 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
            v16 = a4;
          }
          *(_QWORD *)(v41 + 24) ^= (*(_QWORD *)(v41 + 24) ^ (*(_QWORD *)(v41 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
          {
            v54 = 0;
            do
            {
              if ( (++v54 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v54);
            }
            while ( (*(_QWORD *)(v33 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) );
            v16 = a4;
          }
          v55 = v88[0];
          if ( (v88[0] & 0x42) != 0 )
          {
            if ( (*(_DWORD *)(a10 + 48) & 7) == 4 && (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) == 0 )
              MiCaptureWriteWatchDirtyBit(a1, v90);
            v40 = MiCaptureDirtyBitToPfn(v33);
            v88[0] = v55 & 0xFFFFFFFFFFFFFFBDuLL;
          }
          v56 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v33 + 40)) >> 8) & 0x3FF);
          CurrentIrql = v56;
          v58 = (unsigned __int64 *)(v33 + 16);
          if ( (*(_QWORD *)(v33 + 16) & 2) != 0 )
          {
            v59 = 2LL;
            if ( v40 )
              v59 = 3LL;
            v60 = MiReverseSwizzleInvalidPte(
                    *(_QWORD *)(v33 + 16),
                    *(_QWORD *)(v56 + 8LL * ((unsigned __int16)*(_QWORD *)(v33 + 16) >> 12) + 5344),
                    v57,
                    v59);
            v62 = MiTransferSoftwarePte(*v58, v61, HIDWORD(v60));
            *v58 &= ~2uLL;
            v40 = v62;
          }
          *(_QWORD *)(v33 + 8) = a6;
          *(_QWORD *)(v33 + 40) |= 0x200000000000000uLL;
          v63 = *(_QWORD *)(v33 + 40);
          if ( (unsigned __int64)&STACK[0x90482413098] <= 0x7F8 )
            v38 = MiReadPteShadow(&v93, v38);
          *(_QWORD *)(v33 + 40) = v63 ^ (v63 ^ (v38 >> 12)) & 0xFFFFFFFFFLL;
          MI_MAKE_PROTECT_WRITE_COPY(v33 + 16);
          v64 = *v58 | 8;
          *v58 = v64;
          v89 = (v64 >> 5) & 0x1F;
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v40 )
            MiReleasePageFileInfo(CurrentIrql, v40, 1LL);
          v65 = v88[0];
          if ( (v88[0] & 0x800) != 0 )
          {
            v65 = v88[0] & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
            v88[0] = v65;
          }
          *(_QWORD *)a3 = v65;
          if ( a3 + 0x90482413000LL <= 0x7F8 )
            MiWritePteShadow(a3, v65);
          MiInsertTbFlushEntry(a9, v90, 1LL, 0LL);
          *(_QWORD *)a6 = 0LL;
          *(_QWORD *)a6 = v65;
          if ( a6 + 0x90482413000LL <= 0x7F8 )
            MiWritePteShadow(a6, v65);
          *(_QWORD *)(a6 + 24) = 2LL;
          *v94 &= 0xFFFFFFFFFFFFFE0FuLL;
          v66 = MiMakePrototypePteDirect(*(_QWORD *)(v33 + 8) | 0x8000000000000000uLL);
          v88[0] = v66;
          if ( (a12 & 1) != 0 )
          {
            v66 |= 8uLL;
            *(_QWORD *)(a6 + 16) = 1LL;
            v88[0] = v66;
            ++a14[1];
          }
          else
          {
            *(_QWORD *)(a6 + 16) = 0LL;
          }
          *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v89 << 59);
          *v16 = v66;
          if ( (unsigned __int64)v16 + v67 <= 0x7F8 )
            MiWritePteShadow(v16, v66);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          v68 = v90;
          --*(_QWORD *)(a1 + 1400);
          if ( v68 + 0x98000000000LL > 0x7FFFFFFFFFLL )
            --*(_QWORD *)(a1 + 1384);
LABEL_130:
          v17 = 1;
LABEL_186:
          if ( Page != -1 )
            MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL);
          return v17;
        }
        v69 = *(_QWORD *)(v33 + 8) | 0x8000000000000000uLL;
        if ( ((*(_QWORD *)(Wsle * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL) >> 4) & 0x1F) != 0 )
        {
          v88[0] = MiMakePrototypePteVadLookup((*(_QWORD *)(Wsle * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL) >> 4) & 0x1FLL);
          goto LABEL_135;
        }
        v88[0] = MiMakePrototypePteDirect(*(_QWORD *)(v33 + 8) | 0x8000000000000000uLL);
        if ( (v71 & v70) != 0 )
          goto LABEL_198;
        v88[0] |= 0x800uLL;
LABEL_135:
        if ( (v71 & v70) != 0 )
        {
LABEL_198:
          if ( MiLocateCloneAddress(a1, v69) )
          {
            _InterlockedAdd64((volatile signed __int64 *)(v69 + 24), 1uLL);
            if ( (a12 & 1) != 0 )
            {
              v88[0] |= 8uLL;
              if ( (_InterlockedIncrement64((volatile signed __int64 *)(v69 + 16)) & 0x7FFFFFFFFFFFFFFLL) == 1 )
                ++v25[1];
              else
                ++*v25;
            }
          }
        }
        else
        {
          _InterlockedAdd64((volatile signed __int64 *)(v69 - 48 + 32), 1uLL);
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(*(_QWORD *)(((v69 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10) + 384LL),
            1u);
        }
        v72 = v88[0];
        *v16 = v88[0];
        if ( (unsigned __int64)(v16 + 0x12090482600LL) > 0x7F8 )
          goto LABEL_186;
        v73 = v72;
LABEL_185:
        MiWritePteShadow(v16, v73);
        goto LABEL_186;
      }
      break;
    }
    v42 = (volatile signed __int32 *)(a1 + 1272);
    MI_INITIALIZE_COLOR_BASE(a1 + 1272, 0LL, &v95);
    ++*v95;
    v43 = MiPartitionIdToPointer(*(unsigned __int16 *)(a2 + 1452));
    CurrentIrql = v43;
    if ( Page != -1 || (Page = MiGetPage(v43, v97 | (unsigned int)(unsigned __int16)(v96 & v44), 0LL), Page != -1) )
    {
      v74 = 48 * Page - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( (*(_QWORD *)(v74 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) );
      }
      MiFinalizePageAttribute(v74, *(unsigned __int8 *)(v33 + 34) >> 6, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiDuplicateCloneLeaf(a3, (_DWORD)v16, Page, v89, 17);
      ++*a7;
      return 0LL;
    }
    MiFlushTbList(a9);
    MiUnlockWorkingSetExclusive(v42, v89);
    MiWaitForFreePage(CurrentIrql);
    v89 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v42);
    }
    else
    {
      v45 = 0;
      if ( _interlockedbittestandset(v42, 0x1Fu) )
        v45 = ExpWaitForSpinLockExclusiveAndAcquire(v42);
      while ( 1 )
      {
        v21 = *(unsigned int *)v42;
        if ( (*v42 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v21 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v42, v21 | 0x40000000, v21);
        if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v45);
      }
      PteShadow = v88[0];
    }
    v25 = a14;
    v15 = a1;
    goto LABEL_61;
  }
  if ( a5 && *(int *)(a11 + 52) < 0 )
  {
    v18 = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 3) & 0x1F);
    if ( v18 )
    {
      MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(a8, 1LL);
      MiWriteSharedDemandZeroPte(v19, v18, v16, a14);
    }
  }
  return 0LL;
}
