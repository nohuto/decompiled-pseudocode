/*
 * XREFs of MiFreeWsleList @ 0x1400E1970
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetHelper @ 0x140015C78 (MiEmptyWorkingSetHelper.c)
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiConvertAndFlushWsleVas @ 0x14008FF58 (MiConvertAndFlushWsleVas.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiRemoveSingleWsle @ 0x1400FF0BC (MiRemoveSingleWsle.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110898 (MiDeprioritizeVirtualAddresses.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1401337A8 (MiEmptyWsPrivatePagesCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA350 (MmUpdateOldWorkingSetPages.c)
 *     MiConvertPrivateToDemandZero @ 0x1401F8668 (MiConvertPrivateToDemandZero.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiConfirmPageIsZero @ 0x14001D510 (MiConfirmPageIsZero.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCompressTbFlushList @ 0x140096CF0 (MiCompressTbFlushList.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400A8CE8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiPageMightBeZero @ 0x1400E2A70 (MiPageMightBeZero.c)
 *     MiCheckReservePageFileSpace @ 0x1400E2AF0 (MiCheckReservePageFileSpace.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MI_READ_PDE @ 0x1400E3E10 (MI_READ_PDE.c)
 *     MiVolunteerForTrimFirst @ 0x1400E3E30 (MiVolunteerForTrimFirst.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiCanMergeTbFlushEntryBackwards @ 0x1400E4658 (MiCanMergeTbFlushEntryBackwards.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x1401E2800 (MiLogRemoveWsleEvent.c)
 *     MiPteHasShadow @ 0x1401EF1B8 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiFreeWsleList(ULONG_PTR a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r11
  ULONG_PTR *SharedWorkingSetList; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  bool v9; // zf
  ULONG_PTR *v10; // rcx
  _KPROCESS *v11; // rdx
  _DWORD *v12; // r15
  unsigned int v13; // ebx
  ULONG_PTR v14; // r15
  __int64 *v15; // r14
  __int64 v16; // r12
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rax
  ULONG_PTR v21; // r9
  __int64 v22; // r10
  __int64 v23; // rsi
  char v24; // al
  __int64 v25; // r15
  char v26; // al
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r10
  __int64 v29; // r11
  unsigned __int8 v30; // al
  char v31; // r12
  unsigned __int64 v32; // r14
  unsigned int v33; // eax
  signed __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r8
  char v38; // r8
  unsigned __int64 v39; // rdx
  __int64 PrototypePteDirect; // r8
  __int64 v41; // r9
  __int64 v42; // r10
  _QWORD *CloneAddress; // rax
  __int64 v44; // r8
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v46; // rbx
  __int64 TransitionPte; // rax
  __int64 v48; // rax
  unsigned int v49; // r9d
  signed __int64 v50; // rdx
  __int64 v51; // rbx
  unsigned __int64 v52; // r14
  unsigned __int64 i; // rcx
  __int64 v54; // rax
  unsigned int v55; // r11d
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  struct _KEVENT *v58; // r14
  __int64 v59; // rdi
  unsigned __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int16 v65; // dx
  ULONG_PTR v66; // r13
  char v67; // dl
  ULONG_PTR *v68; // rdi
  ULONG_PTR v69; // rax
  __int64 v70; // rbx
  unsigned __int64 v71; // rcx
  ULONG_PTR v72; // rcx
  unsigned __int64 v73; // rcx
  char v74; // cl
  ULONG_PTR *v75; // rbx
  ULONG_PTR v76; // r8
  unsigned __int64 v77; // rax
  ULONG_PTR *v78; // rdx
  ULONG_PTR v79; // r14
  __int64 v80; // r10
  __int64 v81; // r11
  __int64 v82; // r8
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // r9
  __int64 v87; // rsi
  ULONG_PTR v88; // rdx
  ULONG_PTR v89; // r8
  __int64 v90; // r9
  int v91; // eax
  ULONG_PTR v92; // r9
  _QWORD *v93; // rdx
  int v94; // ecx
  unsigned int v96; // [rsp+30h] [rbp-D0h]
  bool v97; // [rsp+34h] [rbp-CCh]
  signed __int64 PrototypePteVadLookup; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v99; // [rsp+40h] [rbp-C0h]
  __int64 v100; // [rsp+48h] [rbp-B8h]
  ULONG_PTR *v101; // [rsp+50h] [rbp-B0h]
  _KPROCESS *v102; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v103; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v104; // [rsp+68h] [rbp-98h]
  unsigned int v105; // [rsp+70h] [rbp-90h]
  unsigned int *v106; // [rsp+78h] [rbp-88h]
  __int64 v107; // [rsp+80h] [rbp-80h]
  int v108; // [rsp+88h] [rbp-78h] BYREF
  int v109; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v110; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v111; // [rsp+98h] [rbp-68h]
  __int64 v112; // [rsp+A0h] [rbp-60h]
  int v113; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v114; // [rsp+B4h] [rbp-4Ch]
  __int64 v115; // [rsp+B8h] [rbp-48h]
  __int64 v116; // [rsp+C0h] [rbp-40h]
  _QWORD Base[41]; // [rsp+C8h] [rbp-38h] BYREF

  v105 = a3;
  v3 = 0LL;
  v100 = 0LL;
  v106 = a2;
  v104 = a1;
  v115 = 20LL;
  v113 = MiTbFlushType(a1);
  v107 = v4 - 1280;
  v114 = v5;
  v116 = v5;
  Base[0] = v5;
  SharedWorkingSetList = MiGetSharedWorkingSetList(v4);
  v9 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  v10 = SharedWorkingSetList;
  v101 = SharedWorkingSetList;
  v11 = (_KPROCESS *)SharedWorkingSetList[10];
  v102 = v11;
  v97 = v9 && *(_QWORD *)(qword_140327FD0 + 276840632) != v8;
  v12 = v106;
  v13 = v8;
  v96 = v8;
  v112 = 0xF000000000000LL;
  while ( 1 )
  {
    v9 = *v12 == 0;
    v99 = v8;
    if ( !v9 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)&v12[2 * v8 + 2];
        v111 = v14;
        if ( v14 )
          break;
LABEL_121:
        v12 = v106;
        ++v8;
        v7 = v104;
        v99 = v8;
        if ( v8 >= *v106 )
          goto LABEL_122;
      }
      v15 = (__int64 *)((char *)&v11->Header.Lock + v14 * *((unsigned int *)v10 + 8));
      v16 = *v15;
      if ( (*v15 & 0x800000000000LL) != 0 )
        v17 = v16 | 0xFFFF000000000000uLL;
      else
        v17 = v16 & 0xFFFFFFFFFFFFLL;
      v103 = v17;
      v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v13 )
        v19 = Base[v99 + 21];
      else
        v19 = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PrototypePteVadLookup = v19;
      v20 = MI_GET_PFN_FROM_PTE(&PrototypePteVadLookup);
      v23 = v20;
      if ( v96 )
      {
        v58 = 0LL;
        v59 = 0LL;
        if ( (v19 & 0x20) == 0 )
          goto LABEL_135;
        if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
        {
          v59 = v20;
          MiLockPageAtDpcInline(v20);
        }
        if ( (unsigned int)MiConfirmPageIsZero(v23, v105) == 1 )
        {
          if ( (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) == 0 && (*(_BYTE *)(v104 + 184) & 7) == 0 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v107 + 920), 0xFFFFFFFFFFFFFFFFuLL);
            LOBYTE(v19) = PrototypePteVadLookup;
          }
        }
        else
        {
          v19 &= ~0x20uLL;
          PrototypePteVadLookup = v19;
        }
        if ( !v59 )
        {
LABEL_135:
          v108 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v108);
              while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
            v14 = v111;
          }
          LOBYTE(v19) = PrototypePteVadLookup;
        }
        v60 = 0LL;
        if ( (v19 & 0x20) != 0 || (v19 & 4) != 0 )
        {
          v110 = MI_READ_PDE(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          *(_QWORD *)(v23 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(v23 + 34) &= 0xC7u;
          *(_BYTE *)(v23 + 35) &= ~0x20u;
          *(_QWORD *)(v23 + 24) &= 0xC000000000000000uLL;
          *(_WORD *)(v23 + 32) = 0;
          v60 = MiCapturePageFileInfoInline((_QWORD *)(v23 + 16), 0, 0);
          if ( v60 )
            v58 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v23 + 40)) >> 8) & 0x3FF);
          v65 = 2;
          if ( (PrototypePteVadLookup & 4) == 0 )
            v65 = 1;
          MiInsertPageInFreeOrZeroedList((v23 + 0x58000000000LL) / 48, v65);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v23 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v110) - 0x58000000000LL;
          MiLockPageAtDpcInline(v23);
          MiDecrementShareCount(v23);
        }
        else
        {
          if ( (v19 & 0x42) != 0 )
          {
            v60 = MiCaptureDirtyBitToPfn(v23);
            if ( v60 )
              v58 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v23 + 40)) >> 8) & 0x3FF);
          }
          if ( (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) != 0 )
          {
            v110 = MI_READ_PDE(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v61 = MI_GET_PAGE_FRAME_FROM_PTE(&v110);
          }
          else
          {
            v61 = -1LL;
          }
          v62 = 0x3FFFFFFFFFFFFFFFLL;
          if ( (v105 & 1) != 0
            && (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
            && *(_WORD *)(v23 + 32) == 1
            && (*(_BYTE *)(v23 + 34) & 0x10) == 0
            && (unsigned int)MiGetPfnPriority(v23) == 5 )
          {
            *(_BYTE *)(v23 + 35) = *(_BYTE *)(v23 + 35) & 0xF8 | 4;
          }
          v63 = *(_QWORD *)(v23 + 24);
          if ( (*(_BYTE *)(v23 + 34) & 7) != 6 )
            KeBugCheckEx(0x4Eu, 0x99uLL, (v23 + 0x58000000000LL) / 48, *(_BYTE *)(v23 + 34) & 7, v62 & v63);
          v64 = (v62 & v63) - 1;
          *(_QWORD *)(v23 + 24) = v63 ^ v62 & (v64 ^ v63);
          if ( (v62 & v63) == 1 )
            MiPfnShareCountIsZero(v23, v64);
          if ( v61 != -1 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v23 = 48 * v61 - 0x58000000000LL;
            v109 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v109);
                while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
              v14 = v111;
            }
            MiDecrementShareCount(v23);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v60 )
          MiReleasePageFileInfo(v58, v60, 1);
        v66 = v104;
        v67 = *(_BYTE *)(v104 + 184) & 7;
        if ( v67 == 2 )
          v68 = &BugCheckParameter2;
        else
          v68 = (ULONG_PTR *)(*(_QWORD *)(v104 + 16) + 416LL);
        if ( v14 > v68[3] )
          KeBugCheckEx(0x1Au, 0x41785uLL, (ULONG_PTR)v68, v14, 0LL);
        v69 = v14 * *((unsigned int *)v68 + 8);
        v70 = *(_QWORD *)(v69 + v68[10]);
        if ( (v70 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x5010uLL, (ULONG_PTR)v68, v14, *(_QWORD *)(v69 + v68[10]));
        if ( (v70 & 0x800000000000LL) != 0 )
          v71 = v70 | 0xFFFF000000000000uLL;
        else
          v71 = *(_QWORD *)(v69 + v68[10]) & 0xFFFFFFFFFFFFLL;
        v72 = v71 & 0xFFFFFFFFFFFFF000uLL;
        if ( v67 == 4 )
        {
          if ( PsNtosImageBase
            && (v72 >= (unsigned __int64)PsNtosImageBase && v72 < PsNtosImageEnd
             || v72 >= (unsigned __int64)PsHalImageBase && v72 < PsHalImageEnd) )
          {
            LODWORD(xmmword_1403268A8) = xmmword_1403268A8 - 1;
          }
          else if ( v72 >= qword_140328030 && v72 < qword_140328030 + 0x8000000000LL )
          {
            --DWORD1(xmmword_1403268A8);
          }
        }
        if ( (v70 & 8) == 0 && (v70 & 4) != 0 )
          MiUpdateWsleHash(v72, v14, v104, 1u);
        if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          if ( (v70 & 0x800000000000LL) != 0 )
            v73 = v70 | 0xFFFF000000000000uLL;
          else
            v73 = v70 & 0xFFFFFFFFFFFFLL;
          MiLogRemoveWsleEvent(v73, *(_BYTE *)(v66 + 184) & 7);
        }
        *(_QWORD *)(v14 * *((unsigned int *)v68 + 8) + v68[10]) = v70 & 0xFFFFFFFFFFFFFFFEuLL;
        v74 = *(_BYTE *)(v66 + 184) & 7;
        if ( v74 == 2 )
          v75 = &BugCheckParameter2;
        else
          v75 = (ULONG_PTR *)(*(_QWORD *)(v66 + 16) + 416LL);
        if ( v14 >= v75[1] )
        {
          v76 = v75[10] + v14 * *((unsigned int *)v75 + 8);
          v77 = *(_QWORD *)v76;
          if ( v74 == 2 )
            v78 = &BugCheckParameter2;
          else
            v78 = (ULONG_PTR *)(*(_QWORD *)(v66 + 16) + 416LL);
          if ( *((_DWORD *)v78 + 8) == 16 )
          {
            v79 = v78[10];
            if ( (__int64)(v76 - v79) >> 4 >= v78[1] )
            {
              v80 = *(unsigned int *)(v76 + 8) | (v77 >> 16) & 0xF00000000LL;
              v81 = *(unsigned int *)(v76 + 12) | (v77 >> 20) & 0xF00000000LL;
              v82 = 2 * ((unsigned int)(v77 >> 9) & 7);
              if ( (v77 & 0x800000000000LL) != 0 )
                v83 = v77 | 0xFFFF000000000000uLL;
              else
                v83 = v77 & 0xFFFFFFFFFFFFLL;
              if ( v83 < 0xFFFFF68000000000uLL
                || ((v77 & 0x800000000000LL) == 0 ? (v84 = v77 & 0xFFFFFFFFFFFFLL) : (v84 = v77 | 0xFFFF000000000000uLL),
                    v84 > 0xFFFFF6FFFFFFFFFFuLL) )
              {
                v82 = (unsigned int)(v82 + 1);
              }
              v85 = *(_QWORD *)(v66 + 16);
              v86 = v82 + 10;
              v87 = (unsigned int)v82;
              v88 = v79 + 16 * v81;
              v89 = v79 + 16 * v80;
              v90 = 2 * v86;
              if ( v81 == 0xFFFFFFFFFLL )
              {
                *(_QWORD *)(v85 + 8 * v90) = v80;
              }
              else
              {
                *(_DWORD *)(v88 + 8) = v80;
                *(_QWORD *)v88 ^= v112 & (*(_QWORD *)v88 ^ (v80 << 16));
              }
              if ( v80 == 0xFFFFFFFFFLL )
              {
                *(_QWORD *)(v85 + 8 * v90 + 8) = v81;
              }
              else
              {
                *(_DWORD *)(v89 + 12) = v81;
                *(_QWORD *)v89 ^= (*(_QWORD *)v89 ^ (v81 << 20)) & 0xF0000000000000LL;
              }
              --*(_QWORD *)(v85 + 8 * v87 + 32);
            }
          }
          v91 = (v77 >> 9) & 7;
          if ( v91 )
          {
            --*(_QWORD *)(v66 + 8LL * (unsigned int)(v91 - 1) + 40);
            if ( v91 == 7 )
              MiVolunteerForTrimFirst(v66, -1LL);
          }
        }
        v92 = *v75;
        if ( *v75 != 0xFFFFFFFFFLL )
        {
          if ( v92 < v75[1] || v92 > v75[3] )
            KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)v75, v92, v75[3]);
          v93 = (_QWORD *)(v75[10] + v92 * *((unsigned int *)v75 + 8));
          *v93 ^= (*(_DWORD *)v93 ^ (2 * (_DWORD)v14)) & 0xFFFFFFE;
        }
        *(_QWORD *)(v14 * *((unsigned int *)v75 + 8) + v75[10]) = (v92 << 28) | 0xFFFFFFE;
        *v75 = v14;
        --*(_QWORD *)(v66 + 128);
        if ( v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          --*(_QWORD *)(v66 + 112);
          v94 = 1;
        }
        else
        {
          v94 = 0;
        }
        if ( (*(_BYTE *)(v66 + 184) & 7) == 2 )
        {
          --qword_140327D48;
          v3 = v100;
          v9 = v94 == 1;
          v10 = v101;
          v8 = v99;
          v13 = v96;
          v11 = v102;
          if ( v9 )
            --qword_140327D50;
          goto LABEL_121;
        }
LABEL_118:
        v3 = v100;
LABEL_119:
        v8 = v99;
        goto LABEL_120;
      }
      if ( (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0
        || (v24 = *(_BYTE *)(v21 + 184) & 7) != 0 && *(_WORD *)(v23 + 32) > 1u )
      {
        *(_QWORD *)&v106[2 * v8 + 2] = 0LL;
LABEL_19:
        v100 = ++v3;
LABEL_120:
        v11 = v102;
        v10 = v101;
        v13 = v96;
        goto LABEL_121;
      }
      if ( v24 )
      {
        v25 = v23;
        MiLockPageAtDpcInline(v23);
        v21 = v104;
        v22 = v107;
      }
      else
      {
        v25 = 0LL;
      }
      if ( (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) == 0
        || (v26 = *(_BYTE *)(v21 + 184) & 7) != 0 && *(_WORD *)(v23 + 32) > 1u )
      {
        if ( v25 )
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v8 = v99;
        *(_QWORD *)&v106[2 * v99 + 2] = 0LL;
        goto LABEL_19;
      }
      v27 = v19 & 0xFFFFFFFFFFFFFFDBuLL;
      if ( !v26
        && (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) == 0
        && v18 <= 0xFFFFF6BFFFFFFF78uLL
        && v18 >= 0xFFFFF68000000000uLL
        && (v19 & 0x42) != 0
        && (*(_DWORD *)(v22 + 772) & 0x8000) != 0 )
      {
        MiCaptureWriteWatchDirtyBit(v22, v17, 0LL);
        v21 = v104;
      }
      v28 = *(_QWORD *)(v23 + 40);
      v29 = (v28 >> 57) & 1;
      if ( (v28 & 0x200000000000000LL) != 0 )
      {
        if ( *(__int64 *)(v23 + 8) >= 0 || (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
          goto LABEL_41;
      }
      else
      {
        v30 = *(_BYTE *)(v21 + 184) & 7;
        if ( v30 >= 2u )
          goto LABEL_41;
        if ( !v30 )
        {
          v19 = PrototypePteVadLookup;
          if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
            goto LABEL_41;
        }
      }
      if ( (unsigned int)MiPageMightBeZero(v23, v18, v105) )
      {
        v27 |= 0x20uLL;
      }
      else if ( (v38 & 2) != 0 )
      {
        if ( v25 )
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_QWORD *)&v106[2 * v99 + 2] = 0LL;
        v3 = ++v100;
        goto LABEL_119;
      }
LABEL_41:
      v31 = 0;
      if ( v29 )
      {
        if ( (((unsigned __int64)*v15 >> 4) & 0x1F) != 0 )
        {
          PrototypePteVadLookup = MiMakePrototypePteVadLookup(((unsigned __int64)*v15 >> 4) & 0x1F);
        }
        else
        {
          PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v23 + 8) | 0x8000000000000000uLL);
          PrototypePteVadLookup = PrototypePteDirect;
          if ( (*(_BYTE *)(v104 + 184) & 7u) >= 2 && (v19 & 0xA00) == 0 && (v19 & v42) != 0 )
          {
            PrototypePteDirect |= 8uLL;
            PrototypePteVadLookup = PrototypePteDirect;
          }
          if ( (v41 & v42) != 0 )
          {
            if ( v97 )
            {
              if ( *(_QWORD *)(v107 + 912) )
              {
                CloneAddress = MiLocateCloneAddress(v107, v39);
                if ( CloneAddress )
                {
                  v32 = v103;
                  if ( *(_QWORD *)(qword_140327FD0 + 276840632) > CloneAddress[9] )
                    PrototypePteVadLookup = v44 | 8;
                  goto LABEL_45;
                }
              }
            }
          }
          else
          {
            PrototypePteVadLookup = PrototypePteDirect | 0x800;
          }
        }
        v32 = v103;
LABEL_45:
        v33 = MiPteInShadowRange(v18, *(_QWORD *)v18);
        v37 = v33;
        if ( v33 && (unsigned int)MiPteHasShadow(v35, v34, v33) )
          v34 |= 0x20uLL;
        if ( (MiFlags & 0x800) != 0 )
        {
          v34 |= 0x20uLL;
        }
        else if ( (MiFlags & 0x1000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v34 & 0x20) != 0
          || v34 != _InterlockedCompareExchange64((volatile signed __int64 *)v18, PrototypePteVadLookup, v34) )
        {
          v50 = PrototypePteVadLookup;
          *(_QWORD *)v18 = PrototypePteVadLookup;
          if ( (_DWORD)v37 )
            MiWritePteShadow(v18, v50);
          v51 = 1LL;
          v52 = v32 & 0xFFFFFFFFFFFFF000uLL;
          if ( v113 != 1 )
          {
            if ( (v114 & 4) == 0 && v52 >= v36 && v52 <= 0xFFFFF6FFFFFFFFFFuLL )
              LOBYTE(v114) = v114 | 4;
            if ( v113 )
            {
              for ( i = v52; i >= v36; i = (__int64)((i << 25) - (v36 << 25)) >> 16 )
              {
                if ( i > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
              }
            }
          }
          if ( HIDWORD(v115)
            && (v36 = (unsigned __int64)&Base[HIDWORD(v115) - 1], v54 = *(_QWORD *)v36, (*(_QWORD *)v36 & 0xC00LL) == 0)
            && (v37 = *(_QWORD *)v36 & 0x3FFLL,
                v34 = (*(_QWORD *)v36 & 0xFFFFFFFFFFFFF000uLL) + ((v37 + 1) << 12),
                v34 == v52)
            && v37 + 1 >= v37
            && v37 + 1 <= 0x3FF )
          {
            ++v116;
            *(_QWORD *)v36 = v54 ^ (v54 ^ (v54 + 1)) & 0x3FF;
          }
          else if ( (unsigned int)MiCanMergeTbFlushEntryBackwards(&v113, v52, 1LL, 0LL) )
          {
            v37 = 1023LL;
            v34 = (signed __int64)&Base[v55 - 1];
            v56 = *(_QWORD *)v34;
            ++v116;
            *(_QWORD *)v34 = (v56 - 4096) ^ ((v56 - 4096) ^ (v56 - 4096 + 1)) & 0x3FF;
          }
          else if ( v55 < (unsigned int)v115 )
          {
            while ( 1 )
            {
              v34 = 1024LL;
              if ( (unsigned __int64)(v51 - 1) <= 0x3FF )
                v34 = v51;
              v51 -= v34;
              v57 = v52 & 0xFFFFFFFFFFFFF000uLL | (v34 - 1) & 0x3FF;
              v52 += v34 << 12;
              Base[v55] = v57;
              v116 += v34;
              v55 = HIDWORD(v115) + 1;
              HIDWORD(v115) = v55;
              if ( v55 == (_DWORD)v115 )
              {
                qsort(Base, v55, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                MiCompressTbFlushList((__int64)&v113);
                v55 = HIDWORD(v115);
                if ( HIDWORD(v115) == (_DWORD)v115 )
                  break;
              }
              if ( !v51 )
                goto LABEL_110;
            }
            if ( v51 )
            {
              HIBYTE(v114) = 1;
              v116 = HIDWORD(v115);
            }
          }
          else
          {
            HIBYTE(v114) = 1;
          }
        }
LABEL_110:
        v8 = v99;
        Base[v99 + 21] = v27;
        if ( v31 == 1 )
        {
          MiFlushTbList((__int64)&v113, (_KPROCESS *)v34, v37, v36);
          v8 = v99;
        }
        if ( v25 )
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v31 == 1 || (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) != 0 || (v105 & 2) != 0 )
        {
          v3 = v100;
          goto LABEL_120;
        }
        MiCheckReservePageFileSpace(v23, v18, v104);
        goto LABEL_118;
      }
      if ( ((v28 >> 54) & 7) == 4 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
        v46 = v104;
        if ( (char *)v104 == AnyMultiplexedVm )
        {
          MiReleasePageFileSpace((struct _KEVENT *)MiSystemPartition, *(_QWORD *)(v23 + 16), 1LL);
          v32 = v103;
          TransitionPte = MI_READ_PTE_LOCK_FREE(v103 & 0xFFFFFFFFFFFFF000uLL) | 2;
          v31 = 1;
          v27 |= 4uLL;
LABEL_74:
          --*(_QWORD *)(v46 + 136);
          PrototypePteVadLookup = TransitionPte;
          if ( v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
            --*(_QWORD *)(v46 + 120);
          goto LABEL_45;
        }
      }
      else
      {
        v46 = v104;
      }
      v48 = MI_GET_PAGE_FRAME_FROM_PTE(&PrototypePteVadLookup);
      TransitionPte = MiMakeTransitionPte(v48, v49);
      v32 = v103;
      goto LABEL_74;
    }
LABEL_122:
    if ( !v13 )
      MiFlushTbList((__int64)&v113, v11, 0xFFFFF68000000000uLL, v7);
    v96 = ++v13;
    if ( v13 >= 2 )
      return v3;
    v7 = v104;
    v8 = 0LL;
    v10 = v101;
    v11 = v102;
  }
}
