/*
 * XREFs of MiFreeWsleList @ 0x1400AE6D0
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiEmptyWorkingSet @ 0x14007B85C (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetHelper @ 0x14007BAE0 (MiEmptyWorkingSetHelper.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiConvertAndFlushWsleVas @ 0x1401076E8 (MiConvertAndFlushWsleVas.c)
 *     MiRemoveSingleWsle @ 0x1401224EC (MiRemoveSingleWsle.c)
 *     MiDeprioritizeVARange @ 0x140126B74 (MiDeprioritizeVARange.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1402138D0 (MiEmptyWsPrivatePagesCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021B8BC (MmUpdateOldWorkingSetPages.c)
 *     MiConvertPrivateToDemandZero @ 0x140228598 (MiConvertPrivateToDemandZero.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiVolunteerForTrimFirst @ 0x1400AD700 (MiVolunteerForTrimFirst.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiPageMightBeZero @ 0x1400AE560 (MiPageMightBeZero.c)
 *     MiCheckReservePageFileSpace @ 0x1400AE5D0 (MiCheckReservePageFileSpace.c)
 *     MiPfnCanBecomeDemandZero @ 0x1400AFAA0 (MiPfnCanBecomeDemandZero.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiConfirmPageIsZero @ 0x1400E6230 (MiConfirmPageIsZero.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401228AC (MiCaptureWriteWatchDirtyBit.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x140213CAC (MiLogRemoveWsleEvent.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x140225C48 (MiMakePrototypePteVadLookup.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiFreeWsleList(__int64 a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned int *v4; // rdi
  ULONG_PTR v5; // rsi
  int v6; // eax
  ULONG_PTR BugCheckParameter4; // r8
  __int64 v8; // r10
  bool v9; // zf
  __int64 v10; // rcx
  ULONG_PTR v11; // r11
  _KPROCESS *Process; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rax
  __int64 *v17; // r13
  __int64 v18; // r9
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  char v29; // al
  ULONG_PTR v30; // rdi
  unsigned int *v31; // rax
  __int64 v32; // r12
  unsigned int v33; // ebx
  char v34; // al
  unsigned __int64 v35; // rsi
  char v36; // r8
  unsigned __int64 v37; // rax
  char v38; // r14
  __int64 PrototypePteVadLookup; // rax
  __int64 v40; // rcx
  __int64 v41; // r13
  __int64 v42; // r10
  unsigned __int64 v43; // rdi
  volatile signed __int64 *v44; // rbx
  signed __int64 v45; // rdx
  unsigned __int64 v46; // r8
  signed __int64 v47; // rdx
  __int64 PrototypePteDirect; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  _QWORD *CloneAddress; // rax
  __int64 v54; // rax
  __int64 TransitionPte; // rax
  __int64 v56; // rdi
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  unsigned __int64 v59; // rsi
  __int16 *v60; // r12
  __int64 v61; // r14
  unsigned __int64 v62; // rbx
  __int64 v63; // r10
  __int64 v64; // rbx
  char v65; // cl
  __int64 v66; // rcx
  volatile signed __int32 *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // r14
  unsigned int v70; // ebx
  __int64 v71; // r14
  unsigned __int64 v72; // r14
  ULONG_PTR v73; // rdi
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rsi
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rax
  unsigned int v87; // ebx
  __int64 v88; // r8
  __int64 v89; // r13
  ULONG_PTR v90; // r14
  ULONG_PTR v91; // rdi
  ULONG_PTR v92; // rax
  __int64 v93; // rbx
  unsigned __int64 v94; // rcx
  ULONG_PTR v95; // rcx
  unsigned __int64 v96; // rcx
  ULONG_PTR v97; // rbx
  unsigned __int64 v98; // r8
  __int64 v99; // rsi
  unsigned __int64 *v100; // rdx
  unsigned __int64 v101; // rax
  __int64 v102; // rdi
  __int64 v103; // r10
  __int64 v104; // rdx
  __int64 v105; // rdi
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rcx
  __int64 v108; // r11
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r8
  int v112; // eax
  ULONG_PTR v113; // r9
  _QWORD *v114; // rdx
  unsigned __int64 v115; // rax
  bool v116; // cc
  unsigned __int64 v117; // rdi
  bool v118; // cf
  ULONG_PTR PteShadow; // rax
  ULONG_PTR v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rax
  unsigned __int64 v124; // [rsp+30h] [rbp-D0h] BYREF
  bool v125; // [rsp+38h] [rbp-C8h]
  unsigned int v126; // [rsp+3Ch] [rbp-C4h]
  unsigned int v127; // [rsp+40h] [rbp-C0h]
  __int64 v128; // [rsp+48h] [rbp-B8h]
  __int64 v129; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v130; // [rsp+58h] [rbp-A8h]
  unsigned int *v131; // [rsp+60h] [rbp-A0h]
  _KPROCESS *v132; // [rsp+68h] [rbp-98h]
  ULONG_PTR v133; // [rsp+70h] [rbp-90h]
  __int64 v134; // [rsp+78h] [rbp-88h]
  unsigned __int64 v135; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-78h]
  signed __int64 *v137; // [rsp+90h] [rbp-70h]
  int v138; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v139; // [rsp+A4h] [rbp-5Ch]
  __int64 v140; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v141; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v142; // [rsp+B8h] [rbp-48h]
  _QWORD v143[20]; // [rsp+160h] [rbp+60h]

  v3 = a3;
  v127 = a3;
  v131 = a2;
  v129 = 0LL;
  v4 = a2;
  v128 = a1;
  v5 = a1;
  v6 = MiTbFlushType(a1);
  v9 = (*(_BYTE *)(v5 + 216) & 7) == 0;
  v11 = v10 - 1272;
  Process = *(_KPROCESS **)(v10 + 184);
  v140 = 20LL;
  v138 = v6;
  v139 = BugCheckParameter4;
  v141 = BugCheckParameter4;
  v142 = BugCheckParameter4;
  v13 = *(_QWORD *)&Process->ThreadSeed[12];
  v134 = v13;
  v132 = Process;
  if ( v9 )
    v125 = Process->ContextSwitches != BugCheckParameter4;
  else
    v125 = BugCheckParameter4;
  v14 = BugCheckParameter4;
  v126 = BugCheckParameter4;
  while ( 1 )
  {
    v9 = *v4 == 0;
    v15 = BugCheckParameter4;
    v133 = BugCheckParameter4;
    if ( !v9 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)&v4[2 * v15 + 2];
        BugCheckParameter3 = v16;
        if ( !v16 )
          break;
        v17 = (__int64 *)(v13 + v16 * Process->ProcessLock);
        v18 = *v17;
        if ( (*v17 & 0x800000000000LL) != 0 )
          v19 = v18 | 0xFFFF000000000000uLL;
        else
          v19 = v18 & 0xFFFFFFFFFFFFLL;
        v130 = v19;
        v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v137 = (signed __int64 *)v20;
        if ( v14 )
        {
          v21 = v143[v133];
        }
        else
        {
          v21 = *(_QWORD *)v20;
          if ( v20 + 0x90482413000LL <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v13)
            && (v21 & 1) != 0
            && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v22 = *(_QWORD *)&Process[2].ProcessLock;
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 8 * ((v20 >> 3) & 0x1FF));
              if ( (v23 & 0x20) != 0 )
                v21 |= 0x20uLL;
              if ( (v23 & 0x42) != 0 )
                v21 |= 0x42uLL;
            }
          }
        }
        v124 = v21;
        v24 = v21;
        if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, v21) && (v21 & 1) != 0 && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            v21 = v124;
            Process = KeGetCurrentThread()->ApcState.Process;
            v25 = *(_QWORD *)&Process[2].ProcessLock;
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 8 * (((unsigned __int64)&v124 >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v24 = v124 | 0x20;
              if ( (v26 & 0x42) != 0 )
                v24 |= 0x42uLL;
            }
            else
            {
              v24 = v124;
            }
          }
          BugCheckParameter4 = 0LL;
        }
        v27 = (v24 >> 12) & 0xFFFFFFFFFLL;
        v28 = 48 * v27 - 0x58000000000LL;
        if ( v126 )
        {
          v56 = BugCheckParameter4;
          if ( (v21 & 0x20) == 0 )
            goto LABEL_131;
          if ( (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0 )
          {
            v56 = 48 * v27 - 0x58000000000LL;
            v57 = BugCheckParameter4;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v57 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v57);
              }
              while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
            }
            v21 = v124;
          }
          if ( (unsigned int)MiConfirmPageIsZero(v28, v3) == 1 )
          {
            if ( (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) == 0 && (*(_BYTE *)(v5 + 216) & 7) == 0 )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 352), 0xFFFFFFFFFFFFFFFFuLL);
              LOBYTE(v21) = v124;
            }
          }
          else
          {
            v21 &= ~0x20uLL;
            v124 = v21;
          }
          BugCheckParameter4 = 0LL;
          if ( !v56 )
          {
LABEL_131:
            v58 = BugCheckParameter4;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v58 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v58);
              }
              while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
              LOBYTE(v21) = v124;
              BugCheckParameter4 = 0LL;
            }
            else
            {
              LOBYTE(v21) = v124;
            }
          }
          v59 = BugCheckParameter4;
          v60 = (__int16 *)BugCheckParameter4;
          if ( (v21 & 0x20) != 0 || (v21 & 4) != 0 )
          {
            v72 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v73 = *(_QWORD *)v72;
            if ( (*(_QWORD *)v72 & 1) == 0 )
            {
              v120 = *(_QWORD *)v72;
              if ( v72 + 0x90482413000LL <= 0x7F8
                && (unsigned int)MiPteHasShadow(Process, v27)
                && (v120 & 1) != 0
                && ((v120 & 0x20) == 0 || (v120 & 0x42) == 0) )
              {
                v121 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
                if ( v121 )
                {
                  v122 = *(_QWORD *)(v121 + 8 * ((v72 >> 3) & 0x1FF));
                  if ( (v122 & 0x20) != 0 )
                    v120 |= 0x20uLL;
                  if ( (v122 & 0x42) != 0 )
                    v120 |= 0x42uLL;
                }
              }
              KeBugCheckEx(0x1Au, 0x61940uLL, (__int64)(v72 << 25) >> 16, v120, BugCheckParameter4);
            }
            v74 = 0x90482413000LL;
            if ( v72 + 0x90482413000LL <= 0x7F8
              && (unsigned int)MiPteHasShadow(Process, v27)
              && (v73 & 1) != 0
              && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
            {
              v75 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v75 )
              {
                v76 = *(_QWORD *)(v75 + 8 * ((v72 >> 3) & 0x1FF));
                if ( (v76 & 0x20) != 0 )
                  v73 |= 0x20uLL;
                if ( (v76 & 0x42) != 0 )
                  v73 |= 0x42uLL;
              }
            }
            *(_BYTE *)(v28 + 34) &= 0xC7u;
            v77 = v28 + 16;
            *(_BYTE *)(v28 + 35) &= ~0x20u;
            *(_QWORD *)(v28 + 40) &= ~0x200000000000000uLL;
            v78 = *(_QWORD *)(v28 + 40);
            *(_QWORD *)(v28 + 24) &= 0xC000000000000000uLL;
            *(_WORD *)(v28 + 32) = 0;
            v79 = *(_QWORD *)(v28 + 16);
            v135 = v73;
            if ( (v79 & 4) != 0 )
            {
              if ( (unsigned __int64)(v77 + v74) <= 0x7F8
                && (unsigned int)MiPteHasShadow(0LL, v77)
                && (v79 & 1) != 0
                && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
              {
                v81 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
                if ( v81 )
                {
                  v82 = *(_QWORD *)(v81 + 8 * ((v80 >> 3) & 0x1FF));
                  if ( (v82 & 0x20) != 0 )
                    v79 |= 0x20uLL;
                  if ( (v82 & 0x42) != 0 )
                    v79 |= 0x42uLL;
                }
              }
              v59 = v79 & 0xFFFFFFFFFFFFFFFDuLL;
            }
            else
            {
              v59 = 0LL;
            }
            if ( v59 )
              v60 = MiPartitionIdToPointer((HIDWORD(v78) >> 8) & 0x3FF);
            MiInsertPageInFreeOrZeroedList((v28 + 0x58000000000LL) / 48);
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (unsigned __int64)&STACK[0x90482413080] <= 0x7F8
              && (unsigned int)MiPteHasShadow(v84, v83)
              && (v73 & 1) != 0
              && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
            {
              v85 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v85 )
              {
                v86 = *(_QWORD *)(v85 + 8 * (((unsigned __int64)&v135 >> 3) & 0x1FF));
                if ( (v86 & 0x20) != 0 )
                  v73 |= 0x20uLL;
                if ( (v86 & 0x42) != 0 )
                  v73 |= 0x42uLL;
              }
            }
            v71 = 48 * ((v73 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v87 = 0;
            v67 = (volatile signed __int32 *)(v71 + 24);
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v87 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v87);
              }
              while ( (*(_QWORD *)v67 & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v67, 0x3FuLL) );
            }
            if ( (*(_BYTE *)(v71 + 34) & 7) != 6 )
              KeBugCheckEx(
                0x4Eu,
                0x99uLL,
                (v71 + 0x58000000000LL) / 48,
                *(_BYTE *)(v71 + 34) & 7,
                *(_QWORD *)(v71 + 24) & 0x3FFFFFFFFFFFFFFFLL);
LABEL_217:
            v88 = (*(_QWORD *)v67 & 0x3FFFFFFFFFFFFFFFLL) - 1;
            *(_QWORD *)v67 ^= (*(_QWORD *)v67 ^ v88) & 0x3FFFFFFFFFFFFFFFLL;
            if ( !v88 )
              MiPfnShareCountIsZero(v71, 0LL);
          }
          else
          {
            if ( (v21 & 0x42) != 0 )
            {
              v59 = MiCaptureDirtyBitToPfn(v28);
              if ( v59 )
                v60 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v28 + 40)) >> 8) & 0x3FF);
            }
            if ( (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0 )
            {
              v61 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v62 = *(_QWORD *)v61;
              if ( (*(_QWORD *)v61 & 1) == 0 )
              {
                PteShadow = *(_QWORD *)v61;
                if ( (unsigned __int64)(v61 + 0x90482413000LL) <= 0x7F8 )
                  PteShadow = MiReadPteShadow(v61, *(_QWORD *)v61);
                KeBugCheckEx(0x1Au, 0x61940uLL, v61 << 25 >> 16, PteShadow, 0LL);
              }
              v63 = 0x90482413000LL;
              if ( (unsigned __int64)(v61 + 0x90482413000LL) <= 0x7F8 )
                v62 = MiReadPteShadow(v61, *(_QWORD *)v61);
              v135 = v62;
              if ( (unsigned __int64)&v135 + v63 <= 0x7F8 )
                v62 = MiReadPteShadow(&v135, v62);
              v64 = (v62 >> 12) & 0xFFFFFFFFFLL;
            }
            else
            {
              v64 = -1LL;
            }
            if ( (v127 & 1) != 0
              && (*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
              && *(_WORD *)(v28 + 32) == 1
              && (*(_BYTE *)(v28 + 34) & 0x10) == 0 )
            {
              v65 = *(_BYTE *)(v28 + 35);
              if ( (v65 & 8) != 0 || (v65 & 7) == 5 )
                *(_BYTE *)(v28 + 35) = v65 & 0xF8 | 4;
            }
            if ( (*(_BYTE *)(v28 + 34) & 7) != 6 )
              KeBugCheckEx(
                0x4Eu,
                0x99uLL,
                (v28 + 0x58000000000LL) / 48,
                *(_BYTE *)(v28 + 34) & 7,
                *(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL);
            v66 = *(_QWORD *)(v28 + 24);
            v67 = (volatile signed __int32 *)(v28 + 24);
            v68 = (v66 & 0x3FFFFFFFFFFFFFFFLL) - 1;
            *(_QWORD *)(v28 + 24) = v66 ^ (v68 ^ v66) & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v66 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              MiPfnShareCountIsZero(v28, v68);
            if ( v64 != -1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)v67, 0x7FFFFFFFFFFFFFFFuLL);
              v69 = 48 * v64;
              v70 = 0;
              v71 = v69 - 0x58000000000LL;
              v67 = (volatile signed __int32 *)(v71 + 24);
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v70 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v70);
                }
                while ( (*(_QWORD *)v67 & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v67, 0x3FuLL) );
              }
              if ( (*(_BYTE *)(v71 + 34) & 7) != 6 )
                KeBugCheckEx(
                  0x4Eu,
                  0x99uLL,
                  (v71 + 0x58000000000LL) / 48,
                  *(_BYTE *)(v71 + 34) & 7,
                  *(_QWORD *)(v71 + 24) & 0x3FFFFFFFFFFFFFFFLL);
              goto LABEL_217;
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)v67, 0x7FFFFFFFFFFFFFFFuLL);
          if ( v59 )
            MiReleasePageFileInfo(v60, v59, 1LL);
          v89 = v128;
          v90 = BugCheckParameter3;
          v91 = *(_QWORD *)(v128 + 184);
          if ( BugCheckParameter3 > *(_QWORD *)(v91 + 32) )
            KeBugCheckEx(0x1Au, 0x41785uLL, v91, BugCheckParameter3, 0LL);
          v92 = BugCheckParameter3 * *(unsigned int *)(v91 + 64);
          v93 = *(_QWORD *)(v92 + *(_QWORD *)(v91 + 496));
          if ( (v93 & 1) == 0 )
            KeBugCheckEx(0x1Au, 0x5010uLL, v91, BugCheckParameter3, *(_QWORD *)(v92 + *(_QWORD *)(v91 + 496)));
          if ( (v93 & 0x800000000000LL) != 0 )
            v94 = v93 | 0xFFFF000000000000uLL;
          else
            v94 = v93 & 0xFFFFFFFFFFFFLL;
          v95 = v94 & 0xFFFFFFFFFFFFF000uLL;
          if ( (signed __int32 *)v128 == dword_14034FF40 )
          {
            if ( PsNtosImageBase
              && (v95 >= (unsigned __int64)PsNtosImageBase && v95 < PsNtosImageEnd
               || v95 >= (unsigned __int64)PsHalImageBase && v95 < PsHalImageEnd) )
            {
              LODWORD(xmmword_14034EA58) = xmmword_14034EA58 - 1;
            }
            else if ( v95 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
            {
              --DWORD1(xmmword_14034EA58);
            }
          }
          if ( (v93 & 8) == 0 && (v93 & 4) != 0 )
            MiUpdateWsleHash(v95, BugCheckParameter3, v128, 1u);
          if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
          {
            if ( (v93 & 0x800000000000LL) != 0 )
              v96 = v93 | 0xFFFF000000000000uLL;
            else
              v96 = v93 & 0xFFFFFFFFFFFFLL;
            MiLogRemoveWsleEvent(v96, *(_BYTE *)(v89 + 216) & 7);
          }
          *(_QWORD *)(v90 * *(unsigned int *)(v91 + 64) + *(_QWORD *)(v91 + 496)) = v93 & 0xFFFFFFFFFFFFFFFEuLL;
          v97 = *(_QWORD *)(v89 + 184);
          v98 = *(_QWORD *)(v97 + 8);
          if ( v90 >= v98 )
          {
            v99 = *(_QWORD *)(v97 + 496);
            v100 = (unsigned __int64 *)(v99 + v90 * *(unsigned int *)(v97 + 64));
            v101 = *v100;
            if ( *(_DWORD *)(v97 + 64) == 16 && (__int64)(v90 * *(unsigned int *)(v97 + 64)) >> 4 >= v98 )
            {
              v102 = *((unsigned int *)v100 + 3);
              v103 = (v101 >> 16) & 0xF00000000LL | *((unsigned int *)v100 + 2);
              v104 = 2 * ((unsigned int)(v101 >> 9) & 7);
              v105 = (v101 >> 20) & 0xF00000000LL | v102;
              if ( (v101 & 0x800000000000LL) != 0 )
                v106 = v101 | 0xFFFF000000000000uLL;
              else
                v106 = v101 & 0xFFFFFFFFFFFFLL;
              if ( v106 < 0xFFFFF68000000000uLL
                || ((v101 & 0x800000000000LL) == 0
                  ? (v107 = v101 & 0xFFFFFFFFFFFFLL)
                  : (v107 = v101 | 0xFFFF000000000000uLL),
                    v107 > 0xFFFFF6FFFFFFFFFFuLL) )
              {
                v104 = (unsigned int)(v104 + 1);
              }
              v108 = (unsigned int)v104;
              v109 = 2 * (v104 + 15);
              v110 = v99 + 16 * v105;
              v111 = v99 + 16 * v103;
              if ( v105 == 0xFFFFFFFFFLL )
              {
                *(_QWORD *)(v97 + 8 * v109) = v103;
              }
              else
              {
                *(_DWORD *)(v110 + 8) = v103;
                *(_QWORD *)v110 ^= (*(_QWORD *)v110 ^ (v103 << 16)) & 0xF000000000000LL;
              }
              if ( v103 == 0xFFFFFFFFFLL )
              {
                *(_QWORD *)(v97 + 8 * v109 + 8) = v105;
              }
              else
              {
                *(_DWORD *)(v111 + 12) = v105;
                *(_QWORD *)v111 ^= (*(_QWORD *)v111 ^ (v105 << 20)) & 0xF0000000000000LL;
              }
              --*(_QWORD *)(v97 + 8 * v108 + 112);
            }
            v112 = (v101 >> 9) & 7;
            if ( v112 )
            {
              --*(_QWORD *)(v89 + 8LL * (unsigned int)(v112 - 1) + 40);
              if ( v112 == 7 )
                MiVolunteerForTrimFirst(v89, -1LL);
            }
          }
          v113 = *(_QWORD *)v97;
          if ( *(_QWORD *)v97 != 0xFFFFFFFFFLL )
          {
            if ( v113 < *(_QWORD *)(v97 + 8) || v113 > *(_QWORD *)(v97 + 32) )
              KeBugCheckEx(0x1Au, 0x5004uLL, v97, v113, *(_QWORD *)(v97 + 32));
            v114 = (_QWORD *)(*(_QWORD *)(v97 + 496) + v113 * *(unsigned int *)(v97 + 64));
            *v114 ^= (*(_DWORD *)v114 ^ (2 * (_DWORD)v90)) & 0xFFFFFFE;
          }
          v5 = v89;
          v8 = v129;
          v3 = v127;
          v30 = v133;
          v13 = v134;
          *(_QWORD *)(v90 * *(unsigned int *)(v97 + 64) + *(_QWORD *)(v97 + 496)) = (v113 << 28) | 0xFFFFFFE;
          *(_QWORD *)v97 = v90;
          v115 = v130 + 0x98000000000LL;
          --*(_QWORD *)(v89 + 120);
          v14 = v126;
          v116 = v115 <= 0x7FFFFFFFFFLL;
          v31 = v131;
          Process = v132;
          if ( !v116 )
            --*(_QWORD *)(v89 + 104);
          BugCheckParameter4 = 0LL;
          goto LABEL_274;
        }
        if ( (*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0 )
        {
          v29 = *(_BYTE *)(v5 + 216) & 7;
          if ( !v29 || *(_WORD *)(v28 + 32) <= 1u )
          {
            if ( v29 )
            {
              v32 = 48 * v27 - 0x58000000000LL;
              v33 = BugCheckParameter4;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v33);
                }
                while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0
                     || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
                v21 = v124;
                v11 = v5 - 1272;
                v19 = v130;
                BugCheckParameter4 = 0LL;
                v8 = v129;
              }
              else
              {
                v21 = v124;
              }
            }
            else
            {
              v32 = BugCheckParameter4;
            }
            if ( ((*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1
               || (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0)
              && ((v34 = *(_BYTE *)(v5 + 216) & 7) == 0 || *(_WORD *)(v28 + 32) <= 1u) )
            {
              v35 = v21 & 0xFFFFFFFFFFFFFFDBuLL;
              if ( !v34
                && (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) == 0
                && v20 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                && v20 >= 0xFFFFF68000000000uLL
                && (v21 & 0x42) != 0
                && (*(_DWORD *)(v11 + 772) & 0x8000) != 0 )
              {
                MiCaptureWriteWatchDirtyBit(v11, v19);
              }
              if ( !(unsigned int)MiPfnCanBecomeDemandZero(v128, v28, BugCheckParameter4, v19) )
                goto LABEL_68;
              if ( MiPageMightBeZero(v28, v20, v127) )
              {
                v35 |= 0x20uLL;
LABEL_68:
                v37 = *(_QWORD *)(v28 + 40);
                v38 = 0;
                if ( (v37 & 0x200000000000000LL) != 0 )
                {
                  if ( (((unsigned __int64)*v17 >> 4) & 0x1F) != 0 )
                  {
                    PrototypePteVadLookup = MiMakePrototypePteVadLookup(((unsigned __int64)*v17 >> 4) & 0x1F);
                    v41 = v128;
                    v124 = PrototypePteVadLookup;
                    goto LABEL_71;
                  }
                  PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL);
                  v41 = v128;
                  v52 = PrototypePteDirect;
                  v124 = PrototypePteDirect;
                  if ( (*(_BYTE *)(v128 + 216) & 7u) >= 2 && (v21 & 0xA00) == 0 && (v21 & v51) != 0 )
                  {
                    v52 = PrototypePteDirect | 8;
                    v124 = PrototypePteDirect | 8;
                  }
                  if ( (v49 & v51) == 0 )
                  {
                    v124 = v52 | 0x800;
                    goto LABEL_71;
                  }
                  if ( v125
                    && (v40 = v128 - 1272, *(_QWORD *)(v128 - 360))
                    && (CloneAddress = MiLocateCloneAddress(v40, v50)) != 0LL )
                  {
                    v40 = (__int64)v132;
                    v42 = 0x12090482600LL;
                    if ( v132->ContextSwitches > CloneAddress[9] )
                      v124 = v52 | 8;
                  }
                  else
                  {
LABEL_71:
                    v42 = 0x12090482600LL;
                  }
                  v43 = v130;
                }
                else
                {
                  v41 = v128;
                  if ( ((v37 >> 54) & 7) == 4 && (signed __int32 *)v128 == dword_14034FE40 )
                  {
                    MiReleasePageFileSpace(MiSystemPartition, *(_QWORD *)(v28 + 16), 1LL);
                    v43 = v130;
                    v42 = 0x12090482600LL;
                    v54 = *(_QWORD *)(v130 & 0xFFFFFFFFFFFFF000uLL);
                    if ( (v130 & 0xFFFFFFFFFFFFF000uLL) + 0x90482413000LL <= 0x7F8 )
                      v54 = MiReadPteShadow(v130 & 0xFFFFFFFFFFFFF000uLL, *(_QWORD *)(v130 & 0xFFFFFFFFFFFFF000uLL));
                    TransitionPte = v54 | 2;
                    v38 = 1;
                    v35 |= 4uLL;
                  }
                  else
                  {
                    if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
                      v21 = MiReadPteShadow(&v124, v21);
                    TransitionPte = MiMakeTransitionPte(
                                      (v21 >> 12) & 0xFFFFFFFFFLL,
                                      (*(_DWORD *)(v28 + 16) >> 5) & 0x1F);
                    v43 = v130;
                    v42 = 0x12090482600LL;
                  }
                  --*(_QWORD *)(v41 + 128);
                  v40 = 0x7FFFFFFFFFLL;
                  v124 = TransitionPte;
                  if ( v43 + 0x98000000000LL > 0x7FFFFFFFFFLL )
                    --*(_QWORD *)(v41 + 112);
                }
                v44 = v137;
                v45 = *v137;
                v46 = (unsigned __int64)&v137[v42];
                if ( (unsigned __int64)&v137[v42] <= 0x7F8 && (unsigned int)MiPteHasShadow(v40, v45) )
                  v45 |= 0x20uLL;
                if ( (v45 & 0x20) != 0 || v45 != _InterlockedCompareExchange64(v44, v124, v45) )
                {
                  v47 = v124;
                  *v44 = v124;
                  if ( v46 <= 0x7F8 )
                    MiWritePteShadow(v44, v47);
                  MiInsertTbFlushEntry((__int64)&v138, v43 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
                }
                v30 = v133;
                v143[v133] = v35;
                if ( v38 == 1 )
                  MiFlushTbList((__int64)&v138);
                if ( v32 )
                  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v3 = v127;
                if ( v38 != 1 && (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) == 0 && (v127 & 2) == 0 )
                  MiCheckReservePageFileSpace(v28, (__int64)v44, v41);
                v5 = v128;
                BugCheckParameter4 = 0LL;
                v8 = v129;
                v14 = v126;
                Process = v132;
                v13 = v134;
LABEL_273:
                v31 = v131;
                goto LABEL_274;
              }
              if ( (v36 & 2) == 0 )
                goto LABEL_68;
              if ( v32 )
                _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v8 = v129;
              BugCheckParameter4 = 0LL;
              v5 = v128;
              v3 = v127;
            }
            else
            {
              if ( v32 )
                _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v3 = v127;
            }
          }
        }
        v30 = v133;
        ++v8;
        v31 = v131;
        v14 = v126;
        Process = v132;
        v13 = v134;
        *(_QWORD *)&v131[2 * v133 + 2] = BugCheckParameter4;
        v129 = v8;
LABEL_274:
        v11 = v5 - 1272;
        v117 = v30 + 1;
        v118 = v117 < *v31;
        v133 = v117;
        v15 = v117;
        v4 = v131;
        if ( !v118 )
          goto LABEL_275;
      }
      v30 = v133;
      goto LABEL_273;
    }
LABEL_275:
    if ( !v14 )
      MiFlushTbList((__int64)&v138);
    v126 = ++v14;
    if ( v14 >= 2 )
      return v129;
    v8 = v129;
    v11 = v5 - 1272;
    Process = v132;
    BugCheckParameter4 = 0LL;
    v13 = v134;
  }
}
