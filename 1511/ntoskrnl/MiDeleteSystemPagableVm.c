/*
 * XREFs of MiDeleteSystemPagableVm @ 0x14003C140
 * Callers:
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MiDeleteBootRange @ 0x1401332F0 (MiDeleteBootRange.c)
 *     MmFreeSpecialPool @ 0x1401DB2D8 (MmFreeSpecialPool.c)
 *     MiDeleteSessionPoolRange @ 0x1401DBB98 (MiDeleteSessionPoolRange.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x1403CDAD4 (MiFreeInitializationCode.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MmReturnChargesToLockPagedPool @ 0x140621C54 (MmReturnChargesToLockPagedPool.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiVolunteerForTrimFirst @ 0x14006DCF0 (MiVolunteerForTrimFirst.c)
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiMakeProtoTransition @ 0x1400ED218 (MiMakeProtoTransition.c)
 *     MI_IS_PFN_SYSTEM_CHARGED @ 0x1400EEC9C (MI_IS_PFN_SYSTEM_CHARGED.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDriverPageIsDangling @ 0x1401CEE4C (MiDriverPageIsDangling.c)
 *     MiLogRemoveWsleEvent @ 0x1401D297C (MiLogRemoveWsleEvent.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        volatile LONG *a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v6; // r12
  ULONG_PTR v8; // r13
  PEX_SPIN_LOCK v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 CurrentIrql; // r14
  signed __int32 v15; // edx
  bool v16; // zf
  signed __int32 v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  ULONG_PTR Wsle; // r13
  __int64 v27; // r8
  ULONG_PTR v28; // r15
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  PEX_SPIN_LOCK v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  ULONG_PTR *v35; // rax
  PEX_SPIN_LOCK v36; // r15
  ULONG_PTR v37; // rbx
  unsigned __int64 v38; // r8
  __int64 v39; // r12
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  __int64 v47; // r15
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  ULONG_PTR v52; // r9
  _QWORD *v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rbx
  unsigned __int64 v59; // r13
  __int64 v60; // rax
  __int64 v61; // r15
  _QWORD *v62; // r14
  __int64 v63; // r9
  int v64; // r12d
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  char v68; // al
  char v69; // al
  int v70; // r14d
  char v71; // al
  unsigned __int16 v72; // ax
  int *v73; // r14
  __int64 v74; // rax
  char v75; // al
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  unsigned __int64 v79; // rbx
  unsigned __int64 v80; // r14
  unsigned int SessionId; // eax
  __int64 v82; // r9
  unsigned int v83; // r15d
  __int64 v84; // rbx
  unsigned __int64 v85; // rcx
  unsigned int v86; // esi
  __int64 SharedProtos; // rax
  unsigned __int64 v88; // rcx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  char v93; // dl
  int v94; // eax
  signed __int32 v96[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v97; // [rsp+30h] [rbp-D0h]
  int v98; // [rsp+38h] [rbp-C8h]
  int v99; // [rsp+3Ch] [rbp-C4h]
  _QWORD *v100; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v101; // [rsp+48h] [rbp-B8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+50h] [rbp-B0h]
  BOOL v103; // [rsp+58h] [rbp-A8h]
  int v104; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v105; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+68h] [rbp-98h]
  __int64 v107; // [rsp+70h] [rbp-90h]
  unsigned __int64 v108; // [rsp+78h] [rbp-88h]
  int v109; // [rsp+80h] [rbp-80h] BYREF
  __int64 v110; // [rsp+88h] [rbp-78h] BYREF
  int v111; // [rsp+90h] [rbp-70h] BYREF
  __int64 v112; // [rsp+98h] [rbp-68h]
  __int64 v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h]
  __int64 v115; // [rsp+B0h] [rbp-50h]
  __int64 v116; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v117; // [rsp+C0h] [rbp-40h]
  _QWORD v118[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v119; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v120[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v121; // [rsp+100h] [rbp+0h] BYREF
  __int16 v122; // [rsp+104h] [rbp+4h]
  __int64 v123; // [rsp+108h] [rbp+8h]
  __int64 v124; // [rsp+110h] [rbp+10h]
  __int64 v125; // [rsp+118h] [rbp+18h]

  v6 = a6;
  v97 = a4;
  v101 = a3;
  v8 = a3;
  v106 = a2;
  v9 = a1;
  SpinLock = a1;
  v100 = a6;
  if ( a2 )
    v99 = *(_BYTE *)(*(_QWORD *)a2 + 14LL) & 1;
  else
    v99 = 0;
  v103 = 0;
  v10 = (__int64)(a3 << 25) >> 16;
  v11 = 0LL;
  v108 = 0LL;
  v12 = 0;
  if ( v9 != &dword_1402FF980 && v9 != &dword_1402FFA80 )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v108 = v11;
    if ( (a5 & 2) != 0 )
      v103 = dword_1402FED88 != 0;
    v12 = 2;
  }
  v114 = *((_QWORD *)v9 + 23);
  v123 = 20LL;
  v98 = a5 & 8;
  v13 = 0xFFFFFFFFFFFFLL;
  v121 = v12;
  v122 = 0;
  v124 = 0LL;
  v125 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v118[2] = (unsigned int)a4;
    v118[1] = v10;
    if ( v9 == &dword_1402FFA80 )
    {
      v118[0] = 6LL;
    }
    else if ( v9 == &dword_1402FF980 )
    {
      v118[0] = 4LL;
    }
    else
    {
      v118[0] = (16 * (v11 & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v120[1] = 24LL;
    v120[0] = v118;
    EtwTraceKernelEvent((int)v120, 1, 0x20000001u, 0x279u, 289413890);
  }
  CurrentIrql = KeGetCurrentIrql();
  v107 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v104 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v104 = ExpWaitForSpinLockExclusiveAndAcquire(v9, (unsigned __int8)CurrentIrql, v13);
    v15 = *v9;
    while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v15 & 0x40000000) == 0 )
      {
        v17 = _InterlockedCompareExchange(v9, v15 | 0x40000000, v15);
        v16 = v15 == v17;
        v15 = v17;
        if ( !v16 )
          continue;
      }
      KeYieldProcessorEx(&v104);
      v15 = *v9;
    }
  }
  if ( a4 )
  {
    v18 = v12;
    v19 = v97;
    v113 = v18;
    v117 = 0xFFFFF68000000000uLL;
    v115 = 0xF000000000000LL;
    do
    {
      v20 = MI_READ_PTE_LOCK_FREE(v8);
      v105 = v20;
      v21 = v20;
      if ( !v20 )
        goto LABEL_163;
      if ( (v20 & 1) != 0 )
      {
        v22 = (__int64)(v8 << 25) >> 16;
        v112 = v22;
        v23 = MI_GET_PAGE_FRAME_FROM_PTE(&v105);
        v24 = 48 * v23 - 0x58000000000LL;
        if ( !v98 )
        {
          if ( !*(_QWORD *)v24 || (*(_BYTE *)(v24 + 35) & 8) != 0 )
          {
            ++*v6;
            if ( v113 == 2 )
            {
              _InterlockedDecrement64((volatile signed __int64 *)(v108 + 40));
              LOWORD(v21) = v105;
            }
          }
          else
          {
            Wsle = MiLocateWsle((__int64)(v8 << 25) >> 16);
            if ( v103 && v113 == 2 )
            {
              v119 = *(_QWORD *)(*(_QWORD *)(v108 + 3224) + Wsle * *(unsigned int *)(v114 + 64));
              MI_WSLE_LOG_ACCESS(v9, &v119, v101);
            }
            v27 = 0x7FFFFFFFFFLL;
            if ( (*(_QWORD *)(v24 + 40) & 0x200000000000000LL) == 0 )
            {
              --*((_QWORD *)v9 + 16);
              if ( (unsigned __int64)(v22 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
                --*((_QWORD *)v9 + 14);
            }
            v28 = *((_QWORD *)v9 + 23);
            if ( Wsle > *(_QWORD *)(v28 + 32) )
              KeBugCheckEx(0x1Au, 0x41785uLL, v28, Wsle, 0LL);
            BugCheckParameter4 = *(_QWORD *)(*(_QWORD *)(v28 + 496) + Wsle * *(unsigned int *)(v28 + 64));
            if ( (BugCheckParameter4 & 1) == 0 )
              KeBugCheckEx(0x1Au, 0x5010uLL, v28, Wsle, BugCheckParameter4);
            v30 = *(_QWORD *)(*(_QWORD *)(v28 + 496) + Wsle * *(unsigned int *)(v28 + 64));
            if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
              v31 = v30 | 0xFFFF000000000000uLL;
            else
              v31 = v30 & 0xFFFFFFFFFFFFLL;
            v32 = SpinLock;
            v33 = v31 & 0xFFFFFFFFFFFFF000uLL;
            if ( SpinLock == &dword_1402FFA80 )
            {
              if ( PsNtosImageBase
                && (v33 >= (unsigned __int64)PsNtosImageBase && v33 < PsNtosImageEnd
                 || v33 >= (unsigned __int64)PsHalImageBase && v33 < PsHalImageEnd) )
              {
                LODWORD(xmmword_1402FE598) = xmmword_1402FE598 - 1;
              }
              else if ( v33 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
              {
                --DWORD1(xmmword_1402FE598);
              }
            }
            if ( (BugCheckParameter4 & 8) == 0 && (BugCheckParameter4 & 4) != 0 )
            {
              MiUpdateWsleHash(v33, Wsle, SpinLock, 1LL);
              v32 = SpinLock;
            }
            if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
            {
              if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
                v34 = BugCheckParameter4 | 0xFFFF000000000000uLL;
              else
                v34 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
              MiLogRemoveWsleEvent(v34, v32[54] & 7, v27);
            }
            v35 = (ULONG_PTR *)(*(_QWORD *)(v28 + 496) + Wsle * *(unsigned int *)(v28 + 64));
            v36 = SpinLock;
            *v35 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL;
            v37 = *((_QWORD *)v36 + 23);
            v38 = *(_QWORD *)(v37 + 8);
            if ( Wsle >= v38 )
            {
              v39 = *(_QWORD *)(v37 + 496);
              v40 = (unsigned __int64 *)(v39 + Wsle * *(unsigned int *)(v37 + 64));
              v41 = *v40;
              if ( *(_DWORD *)(v37 + 64) == 16 && (__int64)(Wsle * *(unsigned int *)(v37 + 64)) >> 4 >= v38 )
              {
                v42 = *((unsigned int *)v40 + 2) | (v41 >> 16) & 0xF00000000LL;
                v43 = *((unsigned int *)v40 + 3) | (v41 >> 20) & 0xF00000000LL;
                v44 = 2 * ((unsigned int)(v41 >> 9) & 7);
                if ( (v41 & 0x800000000000LL) != 0 )
                  v45 = v41 | 0xFFFF000000000000uLL;
                else
                  v45 = v41 & 0xFFFFFFFFFFFFLL;
                if ( v45 < v117
                  || ((v41 & 0x800000000000LL) == 0
                    ? (v46 = v41 & 0xFFFFFFFFFFFFLL)
                    : (v46 = v41 | 0xFFFF000000000000uLL),
                      v46 > 0xFFFFF6FFFFFFFFFFuLL) )
                {
                  v44 = (unsigned int)(v44 + 1);
                }
                v47 = (unsigned int)v44;
                v48 = 2 * (v44 + 15);
                v49 = v39 + 16 * v42;
                v50 = v39 + 16 * v43;
                if ( v43 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v37 + 8 * v48) = v42;
                }
                else
                {
                  *(_DWORD *)(v50 + 8) = v42;
                  *(_QWORD *)v50 ^= v115 & (*(_QWORD *)v50 ^ (v42 << 16));
                }
                if ( v42 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v37 + 8 * v48 + 8) = v43;
                }
                else
                {
                  *(_DWORD *)(v49 + 12) = v43;
                  *(_QWORD *)v49 ^= (*(_QWORD *)v49 ^ (v43 << 20)) & 0xF0000000000000LL;
                }
                --*(_QWORD *)(v37 + 8 * v47 + 112);
                v36 = SpinLock;
              }
              v51 = (v41 >> 9) & 7;
              if ( (_DWORD)v51 )
              {
                --*(_QWORD *)&v36[2 * (unsigned int)(v51 - 1) + 10];
                if ( (_DWORD)v51 == 7 )
                  MiVolunteerForTrimFirst(v36, -1LL);
              }
            }
            v52 = *(_QWORD *)v37;
            if ( *(_QWORD *)v37 != 0xFFFFFFFFFLL )
            {
              if ( v52 < *(_QWORD *)(v37 + 8) || v52 > *(_QWORD *)(v37 + 32) )
                KeBugCheckEx(0x1Au, 0x5004uLL, v37, v52, *(_QWORD *)(v37 + 32));
              v53 = (_QWORD *)(*(_QWORD *)(v37 + 496) + v52 * *(unsigned int *)(v37 + 64));
              *v53 ^= (*(_DWORD *)v53 ^ (2 * (_DWORD)Wsle)) & 0xFFFFFFE;
            }
            *(_QWORD *)(*(_QWORD *)(v37 + 496) + Wsle * *(unsigned int *)(v37 + 64)) = (v52 << 28) | 0xFFFFFFE;
            v54 = v112 + 0x98000000000LL;
            *(_QWORD *)v37 = Wsle;
            --*((_QWORD *)v36 + 15);
            if ( v54 > 0x7FFFFFFFFFLL )
              --*((_QWORD *)v36 + 13);
            v55 = v114;
            v6 = v100;
            if ( Wsle < *(_QWORD *)(v114 + 8) )
            {
              _InterlockedDecrement64((volatile signed __int64 *)(v108 + 40));
              ++*v6;
              v56 = *(_QWORD *)(v55 + 8) - 1LL;
              if ( Wsle != v56 )
                MiSwapWslEntries(v56, Wsle, v36);
              --*(_QWORD *)(v55 + 8);
              LOWORD(v21) = v105;
            }
          }
          v57 = *(_QWORD *)(v24 + 40);
          v58 = 0LL;
          v59 = 0LL;
          if ( (v57 & 0x200000000000000LL) != 0 )
          {
            v60 = *(_QWORD *)(v24 + 8);
            if ( v60 >= 0 )
              v59 = v60 | 0x8000000000000000uLL;
            if ( (*(_DWORD *)(v24 + 16) & 0x400LL) == 0 || v99 == 1 || (v21 & 0x200) != 0 )
              ++v6[3];
            v116 = MI_READ_PDE(((v101 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v61 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v116) - 0x58000000000LL;
            MiLockPageAtDpcInline(v24);
            if ( (v21 & 0x42) != 0 )
              v58 = MiCaptureDirtyBitToPfn(v24);
          }
          else
          {
            ++v6[3];
            v111 = 0;
            v61 = 48 * (v57 & 0xFFFFFFFFFLL) - 0x58000000000LL;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v111);
              while ( (*(_QWORD *)(v24 + 24) & 0x8000000000000000uLL) != 0 );
            }
            *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
            if ( (a5 & 4) != 0 && (unsigned int)MI_IS_PFN_SYSTEM_CHARGED(v24) )
            {
              MiDriverPageIsDangling();
              *(_BYTE *)(v24 + 35) &= ~0x20u;
            }
          }
          v62 = (_QWORD *)v101;
          *(_BYTE *)(v24 + 35) &= ~8u;
          *v62 = 0LL;
          v64 = MiPteInShadowRange(v62);
          if ( v64 )
            MiWritePteShadow(v62, 0LL);
          if ( (*(_BYTE *)(v24 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v24 + 0x58000000000LL) / 48,
              *(_BYTE *)(v24 + 34) & 7,
              *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v65 = *(_QWORD *)(v24 + 24);
          v66 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v24 + 24) = v65 ^ (((v65 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v65) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v65 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            if ( (*(_QWORD *)(v24 + 40) & 0x200000000000000LL) != 0 )
              MiMakeProtoTransition(v24);
            v16 = (*(_WORD *)(v24 + 32))-- == 1;
            v67 = *(_QWORD *)(v24 + 24);
            if ( v16 )
            {
              if ( (v67 & 0x4000000000000000LL) != 0 )
              {
                v71 = *(_BYTE *)(v24 + 35);
                if ( (v71 & 0x10) != 0 )
                  *(_BYTE *)(v24 + 35) = v71 & 0xEF;
                v72 = ((unsigned int)HIDWORD(*(_QWORD *)(v24 + 40)) >> 8) & 0x3FF;
                if ( v72 == 1023 )
                  v73 = &MiSystemPartition;
                else
                  v73 = *(int **)(qword_1402FEC28 + 8LL * v72);
                v110 = *(_QWORD *)(v24 + 16);
                if ( (v110 & 0x400) == 0 )
                {
                  v74 = (v110 & 0x2000) != 0 || (v110 & 0x1000) != 0 ? MI_READ_PTE_LOCK_FREE(&v110) : 0LL;
                  v110 = v74;
                  if ( v74 )
                    MiReleasePageFileInfo(v73, v74, 0LL);
                }
                MiInsertPageInFreeOrZeroedList((v24 + 0x58000000000LL) / 48);
                v70 = 4;
              }
              else
              {
                v75 = *(_BYTE *)(v24 + 34);
                if ( (v75 & 0x10) != 0 )
                {
                  MiInsertPageInList(v24, 8LL, v66, v63);
                }
                else
                {
                  *(_BYTE *)(v24 + 34) = v75 & 0xF8 | 2;
                  MiInsertPageInList(v24, 4LL, v66, v63);
                }
                v70 = 4;
              }
            }
            else
            {
              if ( (v67 & 0x4000000000000000LL) != 0 )
              {
                *(_BYTE *)(v24 + 34) |= 7u;
              }
              else
              {
                v68 = *(_BYTE *)(v24 + 34);
                if ( (v68 & 0x10) != 0 )
                  v69 = v68 & 0xF8 | 3;
                else
                  v69 = v68 & 0xF8 | 2;
                *(_BYTE *)(v24 + 34) = v69;
              }
              if ( (*(_DWORD *)(v24 + 16) & 0x400LL) == 0 && (unsigned int)MI_GET_PAGING_FILE_OFFSET(v24 + 16) )
                *(_BYTE *)(MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v24 + 40)) >> 8) & 0x3FF) + 594) = 1;
              v70 = 3;
            }
          }
          else
          {
            v70 = 2;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v109 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v109);
            while ( (*(_QWORD *)(v61 + 24) & 0x8000000000000000uLL) != 0 );
          }
          if ( (*(_BYTE *)(v61 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v61 + 0x58000000000LL) / 48,
              *(_BYTE *)(v61 + 34) & 7,
              *(_QWORD *)(v61 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v76 = *(_QWORD *)(v61 + 24);
          *(_QWORD *)(v61 + 24) = v76 ^ (((v76 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v76) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v76 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v61);
          _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v58 )
            MiReleasePageFileInfo(&MiSystemPartition, v58, 1LL);
          if ( v59 )
            v70 = MiDecrementCombinedPte(v59);
          if ( v70 == 3 )
            ++v100[1];
          if ( (a5 & 1) != 0 )
          {
            MiInsertTbFlushEntry(&v121, v112, 1LL, 0LL);
            v6 = v100;
            v8 = v101;
          }
          else
          {
            _InterlockedOr(v96, 0);
            v8 = v101;
            v79 = (unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32;
            v105 = v79;
            *(_QWORD *)v101 = v79;
            if ( v64 )
              MiWritePteShadow(v8, v79);
            if ( (v79 & 0xFFFFFFFF00000000uLL) == 0 )
              MiInsertTbFlushEntry(&v121, v112, 1LL, 0LL);
            v6 = v100;
          }
          goto LABEL_162;
        }
        v25 = MI_IS_PFN_SYSTEM_CHARGED(48 * v23 - 0x58000000000LL);
        v19 = v97;
        if ( v25 )
        {
          *(_BYTE *)(v24 + 35) &= ~0x20u;
          ++v6[1];
        }
      }
      else if ( (v20 & 0x400) != 0 )
      {
        if ( !v98 )
        {
          if ( (v20 & 2) != 0 )
            goto LABEL_195;
          if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v20) )
          {
            ++v6[3];
            if ( (unsigned int)MiDecrementCombinedPte(v21 >> 16) == 3 )
              ++v6[1];
            goto LABEL_196;
          }
          if ( v99 == 1 )
            goto LABEL_195;
          v80 = v21 >> 16;
          SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
          v82 = v106;
          v83 = SessionId;
          v84 = v106 + 120;
          if ( v106 != -120 )
          {
            do
            {
              v85 = *(_QWORD *)(v84 + 8);
              v86 = (*(unsigned __int16 *)(v84 + 32) >> 1) & 0x1F;
              if ( v80 >= v85 && v80 < v85 + 8LL * *(unsigned int *)(v84 + 44) )
                break;
              if ( (*(_BYTE *)(v84 + 34) & 2) != 0 && (*(_DWORD *)(v82 + 56) & 0x4000020) == 0x4000020 )
              {
                SharedProtos = MiGetSharedProtos(v82, v83, v84);
                if ( SharedProtos )
                {
                  v88 = *(_QWORD *)(SharedProtos + 32);
                  if ( v80 >= v88 && v80 < v88 + 8LL * *(unsigned int *)(v84 + 44) )
                    break;
                }
                v82 = v106;
              }
              else if ( (*(_DWORD *)(v82 + 56) & 0x20) != 0 )
              {
                SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v84);
                if ( SubsectionDriverProtos )
                {
                  v90 = *(_QWORD *)(SubsectionDriverProtos + 32);
                  if ( v80 >= v90 && v80 < v90 + 8LL * *(unsigned int *)(v84 + 44) )
                    goto LABEL_195;
                }
              }
              v84 = *(_QWORD *)(v84 + 16);
            }
            while ( v84 );
            if ( v86 >= 4 )
LABEL_195:
              ++v6[3];
          }
LABEL_196:
          *(_QWORD *)v8 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v8) )
            MiWritePteShadow(v8, 0LL);
LABEL_162:
          v19 = v97;
        }
      }
      else if ( (v20 & 0x800) != 0 )
      {
        if ( !v98 )
        {
          v93 = 1;
          if ( (a5 & 4) != 0 )
            v93 = 3;
          v94 = MiDeleteTransitionPte(v8, v93);
          if ( v94 == 1 )
            goto LABEL_211;
          if ( v94 == 3 )
            ++v6[1];
LABEL_207:
          ++v6[3];
          goto LABEL_163;
        }
        v91 = MI_GET_PFN_FROM_PTE(&v105);
        if ( (unsigned int)MI_IS_PFN_SYSTEM_CHARGED(v91) )
        {
          *(_BYTE *)(v92 + 35) &= ~0x20u;
          ++v6[1];
        }
      }
      else if ( !v98 )
      {
        MiReleasePageFileSpace(&MiSystemPartition, v20, 1LL);
        *(_QWORD *)v8 = 0LL;
        if ( !(unsigned int)MiPteInShadowRange(v8) )
          goto LABEL_207;
        MiWritePteShadow(v8, 0LL);
        ++v6[3];
      }
LABEL_163:
      v9 = SpinLock;
      --v19;
      v8 += 8LL;
      v97 = v19;
      v101 = v8;
      if ( (v8 & 0xFFF) == 0 )
      {
        MiUnlockWorkingSetExclusive(SpinLock, (unsigned __int8)v107);
        if ( !v19 )
          return MiFlushTbList(&v121, v77, v78);
        LOBYTE(CurrentIrql) = ExAcquireSpinLockExclusive(v9);
        v107 = (unsigned __int8)CurrentIrql;
        continue;
      }
LABEL_211:
      LOBYTE(CurrentIrql) = v107;
    }
    while ( v19 );
  }
  MiUnlockWorkingSetExclusive(v9, (unsigned __int8)CurrentIrql);
  return MiFlushTbList(&v121, v77, v78);
}
