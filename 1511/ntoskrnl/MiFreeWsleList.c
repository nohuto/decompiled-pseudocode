/*
 * XREFs of MiFreeWsleList @ 0x14006C330
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSet @ 0x14001F584 (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetHelper @ 0x14001F788 (MiEmptyWorkingSetHelper.c)
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MiConvertAndFlushWsleVas @ 0x1400D05B4 (MiConvertAndFlushWsleVas.c)
 *     MiRemoveSingleWsle @ 0x1400E47D4 (MiRemoveSingleWsle.c)
 *     MiConvertPrivateToDemandZero @ 0x14012B468 (MiConvertPrivateToDemandZero.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14012BE8C (MiEmptyWsPrivatePagesCallback.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401D8810 (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiCheckReservePageFileSpace @ 0x14006D470 (MiCheckReservePageFileSpace.c)
 *     MiVolunteerForTrimFirst @ 0x14006DCF0 (MiVolunteerForTrimFirst.c)
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiConfirmPageIsZero @ 0x1400AD8D0 (MiConfirmPageIsZero.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400EF48C (MiCaptureWriteWatchDirtyBit.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLogRemoveWsleEvent @ 0x1401D297C (MiLogRemoveWsleEvent.c)
 *     MiPteHasShadow @ 0x1401DE8C4 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFreeWsleList(ULONG_PTR a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  ULONG_PTR v4; // r14
  int v5; // eax
  unsigned __int64 v6; // r11
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r12
  unsigned int v12; // ebx
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // r12
  unsigned __int64 *v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r8
  char v22; // al
  __int64 v23; // r12
  __int64 v24; // r11
  char v25; // al
  unsigned __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  char v30; // r14
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // r15
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  unsigned __int64 v36; // r8
  _QWORD *CloneAddress; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  __int64 v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // r8d
  __int64 v45; // rdx
  _KPROCESS *v46; // rdx
  __int64 v47; // rdi
  char v48; // r15
  __int64 v49; // r14
  __int64 v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  ULONG_PTR v57; // r15
  ULONG_PTR v58; // rdi
  ULONG_PTR v59; // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // rcx
  ULONG_PTR v62; // rcx
  unsigned __int64 v63; // rcx
  ULONG_PTR v64; // rbx
  unsigned __int64 v65; // r8
  __int64 v66; // rsi
  unsigned __int64 *v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // r10
  __int64 v70; // r11
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  int v78; // eax
  ULONG_PTR v79; // r9
  _QWORD *v80; // rdx
  unsigned __int64 v81; // rax
  unsigned int v83; // [rsp+30h] [rbp-D0h]
  bool v84; // [rsp+34h] [rbp-CCh]
  __int64 v85; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+40h] [rbp-C0h]
  unsigned int v87; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v88; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v89; // [rsp+58h] [rbp-A8h]
  __int64 v90; // [rsp+60h] [rbp-A0h]
  __int64 v91; // [rsp+68h] [rbp-98h]
  unsigned __int64 v92; // [rsp+70h] [rbp-90h]
  unsigned int *v93; // [rsp+78h] [rbp-88h]
  __int64 v94; // [rsp+80h] [rbp-80h] BYREF
  int v95; // [rsp+88h] [rbp-78h] BYREF
  int v96; // [rsp+8Ch] [rbp-74h] BYREF
  ULONG_PTR v97; // [rsp+90h] [rbp-70h]
  int v98; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v99; // [rsp+A4h] [rbp-5Ch]
  __int64 v100; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v101; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v102; // [rsp+B8h] [rbp-48h]
  _QWORD v103[20]; // [rsp+160h] [rbp+60h]

  v87 = a3;
  v3 = 0LL;
  v91 = 0LL;
  v93 = a2;
  v4 = a1;
  v89 = a1;
  v100 = 20LL;
  v5 = MiTbFlushType(a1);
  v8 = (*(_BYTE *)(v7 + 216) & 7) == 0;
  v9 = *(_QWORD *)(v7 + 184);
  v98 = v5;
  v99 = 0;
  v101 = v6;
  v102 = v6;
  v10 = *(_QWORD *)(v9 + 496);
  v90 = v10;
  v86 = v9;
  v84 = v8 && *(_QWORD *)(v9 + 688) != v6;
  v11 = v93;
  v12 = v6;
  v83 = v6;
  while ( 1 )
  {
    v8 = *v11 == 0;
    v13 = v6;
    v88 = v6;
    if ( !v8 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)&v11[2 * v13 + 2];
        v97 = v14;
        if ( v14 )
          break;
LABEL_94:
        v11 = v93;
        v88 = ++v13;
        if ( v13 >= *v93 )
          goto LABEL_95;
      }
      v15 = (unsigned __int64 *)(v10 + v14 * *(unsigned int *)(v9 + 64));
      v16 = *v15;
      if ( (*v15 & 0x800000000000LL) != 0 )
        v17 = v16 | 0xFFFF000000000000uLL;
      else
        v17 = v16 & 0xFFFFFFFFFFFFLL;
      v92 = v17;
      v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v12 )
        v19 = v103[v88];
      else
        v19 = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v85 = v19;
      v20 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v85) - 0x58000000000LL;
      if ( v83 )
      {
        v47 = 0LL;
        if ( (v19 & 0x20) != 0 )
        {
          if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
          {
            v47 = v20;
            MiLockPageAtDpcInline(v20);
          }
          v48 = v87;
          if ( (unsigned int)MiConfirmPageIsZero(v20, v87) == 1 )
          {
            if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0 && (*(_BYTE *)(v4 + 216) & 7) == 0 )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 360), 0xFFFFFFFFFFFFFFFFuLL);
              LOBYTE(v19) = v85;
            }
          }
          else
          {
            v19 &= ~0x20uLL;
            v85 = v19;
          }
          if ( v47 )
          {
            v49 = 0LL;
LABEL_109:
            v50 = 0LL;
            if ( (v19 & 0x20) != 0 || (v19 & 4) != 0 )
            {
              v55 = MI_READ_PDE(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              *(_BYTE *)(v20 + 34) &= 0xC7u;
              *(_BYTE *)(v20 + 35) &= ~0x20u;
              v94 = v55;
              *(_QWORD *)(v20 + 40) &= ~0x200000000000000uLL;
              *(_QWORD *)(v20 + 24) &= 0xC000000000000000uLL;
              *(_WORD *)(v20 + 32) = 0;
              v50 = MiCapturePageFileInfoInline(v20 + 16, 0LL, 0LL);
              if ( v50 )
                v49 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v20 + 40)) >> 8) & 0x3FF);
              v56 = 2LL;
              if ( (v19 & 4) == 0 )
                v56 = 1LL;
              MiInsertPageInFreeOrZeroedList((v20 + 0x58000000000LL) / 48, v56);
              _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v20 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v94) - 0x58000000000LL;
              MiLockPageAtDpcInline(v20);
              MiDecrementShareCount(v20);
            }
            else
            {
              if ( (v19 & 0x42) != 0 )
              {
                v50 = MiCaptureDirtyBitToPfn(v20);
                if ( v50 )
                  v49 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v20 + 40)) >> 8) & 0x3FF);
              }
              if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
              {
                v94 = MI_READ_PDE(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                v51 = MI_GET_PAGE_FRAME_FROM_PTE(&v94);
              }
              else
              {
                v51 = -1LL;
              }
              if ( (v48 & 1) != 0
                && (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
                && *(_WORD *)(v20 + 32) == 1
                && (*(_BYTE *)(v20 + 34) & 0x10) == 0
                && (unsigned int)MI_GET_PFN_PRIORITY(v20) == 5 )
              {
                *(_BYTE *)(v20 + 35) = *(_BYTE *)(v20 + 35) & 0xF8 | 4;
              }
              if ( (*(_BYTE *)(v20 + 34) & 7) != 6 )
                KeBugCheckEx(
                  0x4Eu,
                  0x99uLL,
                  (v20 + 0x58000000000LL) / 48,
                  *(_BYTE *)(v20 + 34) & 7,
                  *(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL);
              v52 = (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
              *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ v52) & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v52 )
                MiPfnShareCountIsZero(v20, 0LL);
              if ( v51 != -1 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v20 = 48 * v51 - 0x58000000000LL;
                v96 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v96);
                    while ( (*(_QWORD *)(v20 + 24) & 0x8000000000000000uLL) != 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
                  v14 = v97;
                }
                if ( (*(_BYTE *)(v20 + 34) & 7) != 6 )
                  KeBugCheckEx(
                    0x4Eu,
                    0x99uLL,
                    48 * v51 / 48,
                    *(_BYTE *)(48 * v51 - 0x58000000000LL + 34) & 7,
                    *(_QWORD *)(48 * v51 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
                v53 = *(_QWORD *)(v20 + 24);
                v54 = (v53 & 0x3FFFFFFFFFFFFFFFLL) - 1;
                *(_QWORD *)(v20 + 24) = v53 ^ (v54 ^ v53) & 0x3FFFFFFFFFFFFFFFLL;
                if ( (v53 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
                  MiPfnShareCountIsZero(v20, v54);
              }
            }
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v50 )
              MiReleasePageFileInfo(v49, v50, 1LL);
            v57 = v89;
            v58 = *(_QWORD *)(v89 + 184);
            if ( v14 > *(_QWORD *)(v58 + 32) )
              KeBugCheckEx(0x1Au, 0x41785uLL, v58, v14, 0LL);
            v59 = v14 * *(unsigned int *)(v58 + 64);
            v60 = *(_QWORD *)(v59 + *(_QWORD *)(v58 + 496));
            if ( (v60 & 1) == 0 )
              KeBugCheckEx(0x1Au, 0x5010uLL, v58, v14, *(_QWORD *)(v59 + *(_QWORD *)(v58 + 496)));
            if ( (v60 & 0x800000000000LL) != 0 )
              v61 = v60 | 0xFFFF000000000000uLL;
            else
              v61 = v60 & 0xFFFFFFFFFFFFLL;
            v62 = v61 & 0xFFFFFFFFFFFFF000uLL;
            if ( (LONG *)v89 == &dword_1402FFA80 )
            {
              if ( PsNtosImageBase
                && (v62 >= (unsigned __int64)PsNtosImageBase && v62 < PsNtosImageEnd
                 || v62 >= (unsigned __int64)PsHalImageBase && v62 < PsHalImageEnd) )
              {
                LODWORD(xmmword_1402FE598) = xmmword_1402FE598 - 1;
              }
              else if ( v62 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
              {
                --DWORD1(xmmword_1402FE598);
              }
            }
            if ( (v60 & 8) == 0 && (v60 & 4) != 0 )
              MiUpdateWsleHash(v62, v14, v89, 1u);
            if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
            {
              if ( (v60 & 0x800000000000LL) != 0 )
                v63 = v60 | 0xFFFF000000000000uLL;
              else
                v63 = v60 & 0xFFFFFFFFFFFFLL;
              MiLogRemoveWsleEvent(v63, *(_BYTE *)(v57 + 216) & 7, v21);
            }
            *(_QWORD *)(v14 * *(unsigned int *)(v58 + 64) + *(_QWORD *)(v58 + 496)) = v60 & 0xFFFFFFFFFFFFFFFEuLL;
            v64 = *(_QWORD *)(v57 + 184);
            v65 = *(_QWORD *)(v64 + 8);
            if ( v14 >= v65 )
            {
              v66 = *(_QWORD *)(v64 + 496);
              v67 = (unsigned __int64 *)(v66 + v14 * *(unsigned int *)(v64 + 64));
              v68 = *v67;
              if ( *(_DWORD *)(v64 + 64) == 16 && (__int64)(v14 * *(unsigned int *)(v64 + 64)) >> 4 >= v65 )
              {
                v69 = *((unsigned int *)v67 + 2) | (v68 >> 16) & 0xF00000000LL;
                v70 = *((unsigned int *)v67 + 3) | (v68 >> 20) & 0xF00000000LL;
                v71 = 2 * ((unsigned int)(v68 >> 9) & 7);
                if ( (v68 & 0x800000000000LL) != 0 )
                  v72 = v68 | 0xFFFF000000000000uLL;
                else
                  v72 = v68 & 0xFFFFFFFFFFFFLL;
                if ( v72 < 0xFFFFF68000000000uLL
                  || ((v68 & 0x800000000000LL) == 0
                    ? (v73 = v68 & 0xFFFFFFFFFFFFLL)
                    : (v73 = v68 | 0xFFFF000000000000uLL),
                      v73 > 0xFFFFF6FFFFFFFFFFuLL) )
                {
                  v71 = (unsigned int)(v71 + 1);
                }
                v74 = (unsigned int)v71;
                v75 = 2 * (v71 + 15);
                v76 = v66 + 16 * v70;
                v77 = v66 + 16 * v69;
                if ( v70 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v64 + 8 * v75) = v69;
                }
                else
                {
                  *(_DWORD *)(v76 + 8) = v69;
                  *(_QWORD *)v76 ^= (*(_QWORD *)v76 ^ (v69 << 16)) & 0xF000000000000LL;
                }
                if ( v69 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v64 + 8 * v75 + 8) = v70;
                }
                else
                {
                  *(_DWORD *)(v77 + 12) = v70;
                  *(_QWORD *)v77 ^= (*(_QWORD *)v77 ^ (v70 << 20)) & 0xF0000000000000LL;
                }
                --*(_QWORD *)(v64 + 8 * v74 + 112);
              }
              v78 = (v68 >> 9) & 7;
              if ( v78 )
              {
                --*(_QWORD *)(v57 + 8LL * (unsigned int)(v78 - 1) + 40);
                if ( v78 == 7 )
                  MiVolunteerForTrimFirst(v57, -1LL);
              }
            }
            v79 = *(_QWORD *)v64;
            if ( *(_QWORD *)v64 != 0xFFFFFFFFFLL )
            {
              if ( v79 < *(_QWORD *)(v64 + 8) || v79 > *(_QWORD *)(v64 + 32) )
                KeBugCheckEx(0x1Au, 0x5004uLL, v64, v79, *(_QWORD *)(v64 + 32));
              v80 = (_QWORD *)(*(_QWORD *)(v64 + 496) + v79 * *(unsigned int *)(v64 + 64));
              *v80 ^= (*(_DWORD *)v80 ^ (2 * (_DWORD)v14)) & 0xFFFFFFE;
            }
            v4 = v57;
            v3 = v91;
            v9 = v86;
            v10 = v90;
            *(_QWORD *)(v14 * *(unsigned int *)(v64 + 64) + *(_QWORD *)(v64 + 496)) = (v79 << 28) | 0xFFFFFFE;
            v81 = v92;
            *(_QWORD *)v64 = v14;
            --*(_QWORD *)(v57 + 120);
            v12 = v83;
            v13 = v88;
            if ( v81 + 0x98000000000LL > 0x7FFFFFFFFFLL )
              --*(_QWORD *)(v57 + 104);
            goto LABEL_94;
          }
        }
        else
        {
          v48 = v87;
        }
        v49 = 0LL;
        v95 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v95);
            while ( (*(_QWORD *)(v20 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
          v14 = v97;
        }
        LOBYTE(v19) = v85;
        goto LABEL_109;
      }
      if ( (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0
        || (v22 = *(_BYTE *)(v4 + 216) & 7) != 0 && *(_WORD *)(v20 + 32) > 1u )
      {
        v13 = v88;
        v91 = ++v3;
        *(_QWORD *)&v93[2 * v88 + 2] = 0LL;
LABEL_93:
        v12 = 0;
        v9 = v86;
        v10 = v90;
        goto LABEL_94;
      }
      if ( v22 )
      {
        v23 = v20;
        MiLockPageAtDpcInline(v20);
        v24 = 0LL;
      }
      else
      {
        v24 = 0LL;
        v23 = 0LL;
      }
      if ( (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0
        || (v25 = *(_BYTE *)(v4 + 216) & 7) != 0 && *(_WORD *)(v20 + 32) > 1u )
      {
        if ( v23 )
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v13 = v88;
        v91 = ++v3;
        *(_QWORD *)&v93[2 * v88 + 2] = 0LL;
        goto LABEL_93;
      }
      v26 = v19 & 0xFFFFFFFFFFFFFFDBuLL;
      if ( !v25 )
      {
        v27 = v4 - 1280;
        if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0
          || v18 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          || v18 < 0xFFFFF68000000000uLL
          || (v19 & 0x42) == 0
          || (*(_DWORD *)(v27 + 772) & 0x8000) == 0 )
        {
LABEL_37:
          v28 = (*(_QWORD *)(v20 + 40) >> 57) & 1LL;
          if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
          {
            if ( *(__int64 *)(v20 + 8) >= 0 || (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
              goto LABEL_41;
          }
          else
          {
            v29 = *(_BYTE *)(v4 + 216) & 7;
            if ( v29 >= 2u )
              goto LABEL_41;
            if ( !v29 )
            {
              v19 = v85;
              if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
                goto LABEL_41;
            }
          }
          if ( (!v28 || (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1)
            && *(_WORD *)(v20 + 32) == 1
            && (*(_BYTE *)(v20 + 34) & 0xC0) == 0x40
            && (*(_BYTE *)(v20 + 35) & 0x40) == 0
            && ((v87 & 2) != 0
             || !(*(_QWORD *)((__int64)(v18 << 25) >> 16) | *(_QWORD *)(((__int64)(v18 << 25) >> 16) + 0xFF8))) )
          {
            v26 |= 0x20uLL;
          }
          else if ( (v87 & 2) != 0 )
          {
            if ( v23 )
              _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)&v93[2 * v88 + 2] = v24;
            v13 = v88;
            v3 = ++v91;
            goto LABEL_93;
          }
LABEL_41:
          v30 = 0;
          if ( v28 )
          {
            v31 = *v15;
            v32 = v89;
            v33 = v31 >> 4;
            if ( (v33 & 0x1F) != 0 )
            {
              v85 = 32 * (v33 & 0x1F | 0xFFFFFFFFF8000020uLL);
            }
            else
            {
              v34 = *(_QWORD *)(v20 + 8);
              v35 = *(_BYTE *)(v89 + 216) & 7;
              v36 = ((v34 | 0x8000000000000000uLL) << 16) | 0x400;
              v85 = v36;
              if ( v35 >= 2u && (v19 & 0xA00) == 0 && v19 < 0 )
              {
                v36 = ((v34 | 0x8000000000000000uLL) << 16) | 0x500;
                v85 = v36;
              }
              if ( v34 < 0 )
              {
                if ( v84 )
                {
                  if ( *(_QWORD *)(v27 + 912) )
                  {
                    CloneAddress = MiLocateCloneAddress(v27, v34 | 0x8000000000000000uLL);
                    if ( CloneAddress )
                    {
                      if ( *(_QWORD *)(v86 + 688) > CloneAddress[9] )
                        v85 = v38 | 0x100;
                    }
                  }
                }
              }
              else
              {
                v85 = v36 | 0x200;
              }
            }
          }
          else
          {
            v32 = v89;
            if ( ((*(_QWORD *)(v20 + 40) >> 54) & 7) == 4 && (LONG *)v89 == &dword_1402FF980 )
            {
              MiReleasePageFileSpace(&MiSystemPartition, *(_QWORD *)(v20 + 16), 1LL);
              v39 = MI_READ_PTE_LOCK_FREE(v92 & 0xFFFFFFFFFFFFF000uLL) | 2;
              v30 = 1;
              v26 |= 4uLL;
            }
            else
            {
              v39 = v19 & 0xFFFFFFFFFFFFF81EuLL | (32 * ((*(_DWORD *)(v20 + 16) >> 5) & 0x1F | 0x40LL));
            }
            --*(_QWORD *)(v32 + 128);
            v85 = v39;
            if ( v92 + 0x98000000000LL > 0x7FFFFFFFFFLL )
              --*(_QWORD *)(v32 + 112);
          }
          v40 = *(_QWORD *)v18;
          v41 = MiPteInShadowRange(v18);
          v44 = v41;
          if ( v41 && (unsigned int)MiPteHasShadow(v43, v42, v41) )
            LOBYTE(v40) = v40 | 0x20;
          v45 = v85;
          if ( (v40 & 0x20) != 0 )
          {
            *(_QWORD *)v18 = v85;
            if ( v44 )
              MiWritePteShadow(v18, v45);
          }
          else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v18, v85) & 0x20) == 0 )
          {
LABEL_84:
            v13 = v88;
            v103[v88] = v26;
            if ( v30 == 1 )
            {
              MiFlushTbList((__int64)&v98, v46);
              v13 = v88;
            }
            if ( v23 )
              _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v30 != 1 && (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0 && (v87 & 2) == 0 )
            {
              MiCheckReservePageFileSpace(v20, v18, v32);
              v13 = v88;
            }
            v3 = v91;
            v4 = v89;
            goto LABEL_93;
          }
          MiInsertTbFlushEntry((__int64)&v98, v92 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
          goto LABEL_84;
        }
        MiCaptureWriteWatchDirtyBit(v4 - 1280, v92);
      }
      v27 = v4 - 1280;
      goto LABEL_37;
    }
LABEL_95:
    if ( !v12 )
      MiFlushTbList((__int64)&v98, (_KPROCESS *)v9);
    v83 = ++v12;
    if ( v12 >= 2 )
      return v3;
    v9 = v86;
    v6 = 0LL;
    v10 = v90;
  }
}
