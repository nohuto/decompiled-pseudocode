/*
 * XREFs of MiDeleteSystemPagableVm @ 0x1400AFDF0
 * Callers:
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     MiDeleteBootRange @ 0x140162804 (MiDeleteBootRange.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MiDeleteSessionPoolRange @ 0x14022074C (MiDeleteSessionPoolRange.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406A1364 (MmReturnChargesToLockPagedPool.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 *     MiVolunteerForTrimFirst @ 0x1400AD700 (MiVolunteerForTrimFirst.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiRemoveWsle @ 0x1400AFB10 (MiRemoveWsle.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x14020E314 (MiDriverPageIsDangling.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall MiDeleteSystemPagableVm(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, char a5, _QWORD *a6)
{
  _QWORD *v6; // r14
  unsigned __int64 *v8; // r15
  signed __int32 *v9; // r13
  unsigned __int64 v10; // rcx
  int v11; // edi
  __int64 CurrentIrql; // rbx
  __int64 i; // rdx
  unsigned int v14; // ebx
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  __int64 v17; // r11
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // rcx
  ULONG_PTR Wsle; // r15
  ULONG_PTR v27; // r14
  __int64 *v28; // rdx
  unsigned __int64 v29; // rbx
  int v30; // ebx
  ULONG_PTR v31; // r9
  _QWORD *v32; // rdx
  __int64 v33; // rbx
  ULONG_PTR v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // r10
  ULONG_PTR PteShadow; // rax
  unsigned __int64 v41; // rcx
  unsigned int v42; // r14d
  __int64 v43; // r15
  unsigned int v44; // edi
  unsigned __int64 v45; // rcx
  unsigned __int64 *v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rdx
  int IsZero; // r14d
  unsigned int v50; // edi
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 updated; // rax
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 PrototypePteDirect; // rdi
  unsigned int SessionId; // eax
  __int64 v67; // r9
  unsigned int v68; // r15d
  __int64 v69; // rbx
  unsigned __int64 v70; // rcx
  unsigned int v71; // r14d
  __int64 SharedProtos; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  char v77; // dl
  int v78; // eax
  __int64 v79; // rbx
  unsigned __int8 v80; // di
  unsigned int v81; // ebx
  signed __int32 v82[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 *v83; // [rsp+30h] [rbp-D0h]
  int v84; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v85; // [rsp+40h] [rbp-C0h] BYREF
  int v86; // [rsp+48h] [rbp-B8h]
  _QWORD *v87; // [rsp+50h] [rbp-B0h]
  BOOL v88; // [rsp+58h] [rbp-A8h]
  __int64 v89; // [rsp+60h] [rbp-A0h]
  __int64 v90; // [rsp+70h] [rbp-90h]
  unsigned __int64 v91; // [rsp+78h] [rbp-88h]
  __int64 v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h]
  signed __int32 *v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  ULONG_PTR v96; // [rsp+A0h] [rbp-60h] BYREF
  __int64 j; // [rsp+A8h] [rbp-58h]
  char *v98; // [rsp+B0h] [rbp-50h]
  _QWORD v99[3]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v100[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v101; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v102; // [rsp+E4h] [rbp-1Ch]
  __int64 v103; // [rsp+E8h] [rbp-18h]
  __int64 v104; // [rsp+F0h] [rbp-10h]
  __int64 v105; // [rsp+F8h] [rbp-8h]

  v6 = a6;
  v93 = a4;
  v83 = a3;
  v8 = a3;
  v92 = a2;
  v9 = (signed __int32 *)a1;
  v94 = (signed __int32 *)a1;
  v87 = a6;
  if ( a2 )
    v86 = *(_BYTE *)(*(_QWORD *)a2 + 14LL) & 1;
  else
    v86 = 0;
  v88 = 0;
  v10 = 0LL;
  v91 = 0LL;
  v11 = 0;
  if ( v9 != dword_14034FE40 && v9 != dword_14034FF40 )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v91 = v10;
    if ( (a5 & 2) != 0 )
      v88 = dword_14034F248 != 0;
    v11 = 2;
  }
  v95 = *((_QWORD *)v9 + 23);
  v103 = 20LL;
  v84 = a5 & 8;
  v101 = v11;
  v102 = 0;
  v104 = 0LL;
  v105 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v99[2] = (unsigned int)a4;
    v99[1] = (__int64)((_QWORD)a3 << 25) >> 16;
    if ( v9 == dword_14034FF40 )
    {
      v99[0] = 6LL;
    }
    else if ( v9 == dword_14034FE40 )
    {
      v99[0] = 4LL;
    }
    else
    {
      v99[0] = (16 * (v10 & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v100[1] = 24LL;
    v100[0] = v99;
    EtwTraceKernelEvent((int)v100, 1, 0x20000001u, 0x279u, 289413890);
  }
  CurrentIrql = KeGetCurrentIrql();
  v90 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
  }
  else
  {
    v14 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v14 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
    for ( i = (unsigned int)*v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = (unsigned int)*v9 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, i | 0x40000000, i);
      if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v14);
    }
    LOBYTE(CurrentIrql) = v90;
  }
  if ( a4 )
  {
    v15 = v11;
    for ( j = v11; ; v15 = j )
    {
      v16 = *v8;
      v17 = 0x90482413000LL;
      v18 = 0x98000000000LL;
      v19 = 0x8000000000000000uLL;
      v20 = (unsigned __int64)(v8 + 0x12090482600LL);
      if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow(3LL, i)
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( i )
        {
          v21 = *(_QWORD *)(i + 8 * (((unsigned __int64)v8 >> 3) & 0x1FF));
          if ( (v21 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v21 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
      }
      v85 = v16;
      if ( !v16 )
        goto LABEL_192;
      if ( (v16 & 1) != 0 )
      {
        v22 = (__int64)((_QWORD)v8 << 25) >> 16;
        v23 = v16;
        v89 = v22;
        v98 = (char *)&v85 + v17;
        if ( (unsigned __int64)&v85 + v17 <= 0x7F8 )
        {
          v23 = MiReadPteShadow(&v85, v16);
          v18 = 0x98000000000LL;
        }
        v24 = 48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( v84 )
        {
          i = 0x7FFFFFFFF8LL;
          v25 = v19 | *(_QWORD *)(v24 + 8);
          if ( (v25 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - v18
             || v25 < 0xFFFFF68000000000uLL)
            && ((*(unsigned __int8 *)(v24 + 35) >> 5) & 1) != 0 )
          {
            *(_BYTE *)(v24 + 35) &= ~0x20u;
            ++v6[1];
          }
        }
        else
        {
          if ( !*(_QWORD *)v24 || (*(_BYTE *)(v24 + 35) & 8) != 0 )
          {
            ++*v6;
            if ( v15 == 2 )
              _InterlockedDecrement64((volatile signed __int64 *)(v91 + 40));
          }
          else
          {
            Wsle = MiLocateWsle((__int64)((_QWORD)v8 << 25) >> 16, (__int64)v9, *(_QWORD *)v24);
            if ( v88
              && j == 2
              && (*(_BYTE *)v83 & 0x20) != 0
              && (*(_DWORD *)(Wsle * *(unsigned int *)(v95 + 64) + *(_QWORD *)(v91 + 3224)) & 0xE00) != 0xE00LL )
            {
              MiLogPageAccess((__int64)v9, (unsigned __int64)v83, (__int64)v83);
            }
            if ( (*(_QWORD *)(v24 + 40) & 0x200000000000000LL) == 0 )
            {
              --*((_QWORD *)v9 + 16);
              if ( (unsigned __int64)(v22 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
                --*((_QWORD *)v9 + 14);
            }
            MiRemoveWsle(Wsle, (ULONG_PTR)v9);
            v27 = *((_QWORD *)v9 + 23);
            if ( Wsle >= *(_QWORD *)(v27 + 8) )
            {
              v28 = (__int64 *)(*(_QWORD *)(v27 + 496) + Wsle * *(unsigned int *)(v27 + 64));
              v29 = *v28;
              MiRemoveEntryWsle(*((_QWORD *)v9 + 23), v28);
              v30 = (v29 >> 9) & 7;
              if ( v30 )
              {
                --*(_QWORD *)&v9[2 * (v30 - 1) + 10];
                if ( v30 == 7 )
                  MiVolunteerForTrimFirst((__int64)v9, -1LL);
              }
              v22 = v89;
            }
            v31 = *(_QWORD *)v27;
            if ( *(_QWORD *)v27 != 0xFFFFFFFFFLL )
            {
              if ( v31 < *(_QWORD *)(v27 + 8) || v31 > *(_QWORD *)(v27 + 32) )
                KeBugCheckEx(0x1Au, 0x5004uLL, v27, v31, *(_QWORD *)(v27 + 32));
              v32 = (_QWORD *)(*(_QWORD *)(v27 + 496) + v31 * *(unsigned int *)(v27 + 64));
              *v32 ^= (*(_DWORD *)v32 ^ (2 * (_DWORD)Wsle)) & 0xFFFFFFE;
            }
            v15 = (v31 << 28) | 0xFFFFFFE;
            *(_QWORD *)(Wsle * *(unsigned int *)(v27 + 64) + *(_QWORD *)(v27 + 496)) = v15;
            *(_QWORD *)v27 = Wsle;
            --*((_QWORD *)v9 + 15);
            if ( (unsigned __int64)(v22 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
              --*((_QWORD *)v9 + 13);
            v33 = v95;
            v6 = v87;
            if ( Wsle >= *(_QWORD *)(v95 + 8) )
            {
              v8 = v83;
              v19 = 0x8000000000000000uLL;
              v17 = 0x90482413000LL;
            }
            else
            {
              _InterlockedDecrement64((volatile signed __int64 *)(v91 + 40));
              ++*v6;
              v34 = *(_QWORD *)(v33 + 8) - 1LL;
              if ( Wsle != v34 )
                MiSwapWslEntries(v34, Wsle, (ULONG_PTR)v9);
              --*(_QWORD *)(v33 + 8);
              v8 = v83;
              v19 = 0x8000000000000000uLL;
              v17 = 0x90482413000LL;
            }
          }
          v35 = *(_QWORD *)(v24 + 40);
          v36 = 0LL;
          v37 = 0LL;
          if ( (v35 & 0x200000000000000LL) != 0 )
          {
            v38 = *(_QWORD *)(v24 + 8);
            if ( (v38 & v19) == 0 )
              v37 = v19 | v38;
            if ( (*(_DWORD *)(v24 + 16) & 0x400LL) == 0 || v86 == 1 || (v16 & 0x200) != 0 )
              ++v6[3];
            v39 = (((unsigned __int64)v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            PteShadow = *(_QWORD *)v39;
            v41 = v39 + v17;
            if ( (*(_QWORD *)v39 & 1) == 0 )
            {
              if ( v41 <= 0x7F8 )
                PteShadow = MiReadPteShadow(v39, *(_QWORD *)v39);
              KeBugCheckEx(0x1Au, 0x61940uLL, v39 << 25 >> 16, PteShadow, 0LL);
            }
            if ( v41 <= 0x7F8 )
              PteShadow = MiReadPteShadow(v39, *(_QWORD *)v39);
            v96 = PteShadow;
            if ( (unsigned __int64)&v96 + v17 <= 0x7F8 )
              PteShadow = MiReadPteShadow(&v96, PteShadow);
            v42 = 0;
            v43 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v42);
              }
              while ( (*(_QWORD *)(v24 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
            }
            if ( (v16 & 0x42) != 0 )
              v36 = MiCaptureDirtyBitToPfn(v24);
          }
          else
          {
            ++v6[3];
            v44 = 0;
            v43 = 48 * (v35 & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v44 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                {
                  _mm_pause();
                }
                else
                {
                  HvlNotifyLongSpinWait(v44);
                  v19 = 0x8000000000000000uLL;
                }
              }
              while ( (*(_QWORD *)(v24 + 24) & v19) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
            }
            *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
            if ( (a5 & 4) != 0 )
            {
              v45 = v19 | *(_QWORD *)(v24 + 8);
              if ( (v45 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                 || v45 < 0xFFFFF68000000000uLL)
                && ((*(unsigned __int8 *)(v24 + 35) >> 5) & 1) != 0 )
              {
                MiDriverPageIsDangling(v24);
                *(_BYTE *)(v24 + 35) &= ~0x20u;
              }
            }
          }
          v46 = v83;
          *(_BYTE *)(v24 + 35) &= ~8u;
          *v46 = 0LL;
          if ( (unsigned __int64)(v46 + 0x12090482600LL) <= 0x7F8 )
            MiWritePteShadow(v46, 0LL);
          if ( (*(_BYTE *)(v24 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v24 + 0x58000000000LL) / 48,
              *(_BYTE *)(v24 + 34) & 7,
              *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v47 = *(_QWORD *)(v24 + 24);
          v48 = (v47 & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)(v24 + 24) = v47 ^ (v48 ^ v47) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v47 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            IsZero = MiPfnShareCountIsZero(v24, v48);
          else
            IsZero = 2;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v50 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v50);
            }
            while ( (*(_QWORD *)(v43 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) );
          }
          if ( (*(_BYTE *)(v43 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v43 + 0x58000000000LL) / 48,
              *(_BYTE *)(v43 + 34) & 7,
              *(_QWORD *)(v43 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v51 = *(_QWORD *)(v43 + 24);
          v52 = 0x3FFFFFFFFFFFFFFFLL;
          v53 = (v51 & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)(v43 + 24) = v51 ^ (v53 ^ v51) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v51 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v43, v53);
          _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v36 )
            MiReleasePageFileInfo(MiSystemPartition, v36, 1LL);
          if ( v37 )
            IsZero = MiDecrementCombinedPte(v37, v53, v52, v15);
          if ( IsZero == 3 )
            ++v87[1];
          if ( (a5 & 1) != 0 )
          {
            MiInsertTbFlushEntry((__int64)&v101, v89, 1LL, 0);
            v8 = v83;
          }
          else
          {
            v54 = 0LL;
            v85 = 0LL;
            if ( (unsigned __int64)v98 <= 0x7F8 )
              v54 = MiReadPteShadow(&v85, 0LL);
            _InterlockedOr(v82, 0);
            updated = MiUpdatePageFileHighInPte(v54, (unsigned int)KiTbFlushTimeStamp);
            v85 = updated;
            if ( v56 <= 0x7F8 )
              MiWritePteShadow(&v85, updated);
            v8 = v83;
            v57 = v85;
            v58 = (unsigned __int64)(v83 + 0x12090482600LL);
            *v83 = v85;
            if ( v58 <= 0x7F8 )
              MiWritePteShadow(v8, v57);
            if ( (v57 & 0xFFFFFFFF00000000uLL) == 0 )
              MiInsertTbFlushEntry((__int64)&v101, v89, 1LL, 0);
          }
        }
        goto LABEL_192;
      }
      if ( (v16 & 0x400) != 0 )
      {
        if ( !v84 )
        {
          if ( (v16 & 2) != 0 )
          {
            ++v6[3];
          }
          else if ( (unsigned int)MiIsPrototypePteVadLookup(v16) || (v16 & 0x800) == 0 )
          {
            if ( v86 == 1 )
            {
              ++v6[3];
            }
            else
            {
              PrototypePteDirect = MiGetPrototypePteDirect(v16, i, v59, v60);
              SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
              v67 = v92;
              v68 = SessionId;
              v69 = v92 + 120;
              if ( v92 != -120 )
              {
                while ( 1 )
                {
                  v70 = *(_QWORD *)(v69 + 8);
                  v71 = (*(unsigned __int16 *)(v69 + 32) >> 1) & 0x1F;
                  if ( PrototypePteDirect >= v70 && PrototypePteDirect < v70 + 8LL * *(unsigned int *)(v69 + 44) )
                    break;
                  if ( (*(_BYTE *)(v69 + 34) & 2) != 0 && (*(_DWORD *)(v67 + 56) & 0x4000020) == 0x4000020 )
                  {
                    SharedProtos = MiGetSharedProtos(v67, v68, v69);
                    if ( SharedProtos )
                    {
                      v73 = *(_QWORD *)(SharedProtos + 32);
                      if ( PrototypePteDirect >= v73 && PrototypePteDirect < v73 + 8LL * *(unsigned int *)(v69 + 44) )
                        break;
                    }
                    v67 = v92;
                  }
                  else if ( (*(_DWORD *)(v67 + 56) & 0x20) != 0 )
                  {
                    v74 = *(_QWORD *)(v69 + 24);
                    if ( v74 )
                    {
                      v75 = *(_QWORD *)(v74 + 32);
                      if ( PrototypePteDirect >= v75 && PrototypePteDirect < v75 + 8LL * *(unsigned int *)(v69 + 44) )
                        goto LABEL_171;
                    }
                  }
                  v69 = *(_QWORD *)(v69 + 16);
                  if ( !v69 )
                    goto LABEL_172;
                }
                if ( v71 < 4 )
                  goto LABEL_172;
LABEL_171:
                ++v87[3];
              }
LABEL_172:
              v8 = v83;
            }
          }
          else
          {
            ++v6[3];
            v61 = MiGetPrototypePteDirect(v16, i, v59, v60);
            if ( (unsigned int)MiDecrementCombinedPte(v61, v62, v63, v64) == 3 )
              ++v6[1];
          }
          *v8 = 0LL;
          if ( v20 <= 0x7F8 )
            MiWritePteShadow(v8, 0LL);
        }
        goto LABEL_192;
      }
      if ( (v16 & 0x800) != 0 )
        break;
      if ( !v84 )
      {
        MiReleasePageFileSpace(MiSystemPartition, v16, 1LL);
        *v8 = 0LL;
        if ( v20 <= 0x7F8 )
          MiWritePteShadow(v8, 0LL);
LABEL_191:
        ++v6[3];
      }
LABEL_192:
      ++v8;
      v9 = v94;
      v79 = --v93;
      v83 = v8;
      if ( ((unsigned __int16)v8 & 0xFFF) != 0 )
      {
        LOBYTE(CurrentIrql) = v90;
      }
      else
      {
        MiUnlockWorkingSetExclusive((__int64)v94, v90);
        if ( !v79 )
          goto LABEL_214;
        v80 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
          LOBYTE(CurrentIrql) = v80;
          v90 = v80;
        }
        else
        {
          v81 = 0;
          if ( _interlockedbittestandset(v9, 0x1Fu) )
            v81 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
          for ( i = (unsigned int)*v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = (unsigned int)*v9 )
          {
            if ( (i & 0x40000000) == 0 )
              _InterlockedCompareExchange(v9, i | 0x40000000, i);
            if ( (++v81 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v81);
          }
          LOBYTE(CurrentIrql) = v80;
          v90 = v80;
        }
      }
      v6 = v87;
LABEL_209:
      if ( !v93 )
        goto LABEL_213;
    }
    if ( v84 )
    {
      if ( (unsigned __int64)&v85 + v17 <= 0x7F8 )
      {
        v16 = MiReadPteShadow(&v85, v16);
        v18 = 0x98000000000LL;
      }
      i = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v76 = v19 | *(_QWORD *)(i + 8);
      if ( (v76 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - v18 || v76 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(i + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(i + 35) &= ~0x20u;
        ++v6[1];
      }
      goto LABEL_192;
    }
    v77 = 1;
    if ( (a5 & 4) != 0 )
      v77 = 3;
    v78 = MiDeleteTransitionPte(v8, v77);
    if ( v78 == 1 )
      goto LABEL_209;
    if ( v78 == 3 )
      ++v6[1];
    goto LABEL_191;
  }
LABEL_213:
  MiUnlockWorkingSetExclusive((__int64)v9, CurrentIrql);
LABEL_214:
  MiFlushTbList((__int64)&v101);
}
