/*
 * XREFs of MiDeletePteRun @ 0x1400C3A20
 * Callers:
 *     MiDeletePagablePteRange @ 0x140008890 (MiDeletePagablePteRange.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiDeleteBatch @ 0x1400B2010 (MiDeleteBatch.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiDeletePteRun(
        _QWORD *BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // r15
  ULONG_PTR v7; // r13
  unsigned int v8; // r12d
  __int64 v9; // r11
  __int16 *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  ULONG_PTR v15; // rbx
  ULONG_PTR v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r15d
  unsigned __int64 v25; // r9
  __int64 v26; // r13
  unsigned __int64 v27; // rdx
  __int64 v28; // r14
  unsigned __int64 v29; // r15
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r11
  unsigned __int16 v34; // ax
  __int16 *v35; // rax
  unsigned int v36; // ebx
  char v37; // cl
  __int64 v38; // r10
  __int64 PteShadow; // rsi
  char v40; // cl
  unsigned __int16 v41; // ax
  unsigned __int16 v42; // ax
  __int16 *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ebx
  int v46; // r10d
  __int64 v47; // r11
  unsigned int v48; // r12d
  unsigned __int64 v49; // rbx
  __int64 v50; // r11
  __int64 v51; // r9
  __int64 v52; // r9
  int v53; // r10d
  int v54; // edx
  int v55; // ecx
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // r10
  unsigned __int64 v59; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // r15
  __int64 *v63; // rcx
  __int64 v64; // rbx
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rbx
  __int64 TransitionPte; // rax
  __int64 v68; // r10
  struct _KPRCB *v69; // rax
  _QWORD *v70; // rbx
  unsigned __int64 v71; // r12
  unsigned int v72; // r15d
  bool v73; // zf
  __int64 v74; // rax
  char v75; // al
  char v76; // al
  _QWORD *v77; // r8
  __int64 v78; // rax
  char v79; // al
  unsigned __int16 v80; // ax
  __int16 *v81; // r9
  __int64 v82; // rax
  char v83; // al
  __int64 v84; // rcx
  __int64 v85; // rdx
  unsigned __int64 v86; // rcx
  char v87; // al
  unsigned int v88; // ebx
  __int64 v89; // rcx
  __int64 v90; // r8
  unsigned __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned int v97; // [rsp+30h] [rbp-D0h]
  __int64 v98; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v100; // [rsp+50h] [rbp-B0h]
  __int16 *v101; // [rsp+58h] [rbp-A8h]
  __int64 v102; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v103; // [rsp+68h] [rbp-98h]
  ULONG_PTR v104; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *CloneAddress; // [rsp+78h] [rbp-88h]
  unsigned __int64 v106; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v107; // [rsp+88h] [rbp-78h]
  unsigned __int64 v108; // [rsp+90h] [rbp-70h]
  __int16 *v109; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-60h]
  int v111; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v112; // [rsp+B4h] [rbp-4Ch]
  __int64 v113; // [rsp+B8h] [rbp-48h]
  __int64 v114; // [rsp+C0h] [rbp-40h]
  __int64 v115; // [rsp+C8h] [rbp-38h]
  _QWORD v116[16]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v117[16]; // [rsp+1F0h] [rbp+F0h] BYREF

  result = *(unsigned __int16 *)(a3 + 1452);
  v6 = a5;
  v7 = (ULONG_PTR)BugCheckParameter2;
  v107 = BugCheckParameter2;
  v108 = a4;
  v8 = 0;
  v100 = a2;
  v9 = 0LL;
  v97 = 0;
  v98 = 0LL;
  v101 = 0LL;
  if ( (_WORD)result == 1023 )
  {
    v10 = MiSystemPartition;
  }
  else
  {
    v11 = (unsigned __int16)result;
    result = qword_14034F0E8;
    v10 = *(__int16 **)(qword_14034F0E8 + 8 * v11);
  }
  v109 = v10;
  if ( v7 <= a2 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)v7;
      v13 = v7 + 0x90482413000LL;
      if ( v7 + 0x90482413000LL <= 0x7F8 )
      {
        result = MiPteHasShadow(0x90482413000LL, a2);
        if ( (_DWORD)result && (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          result = (unsigned __int64)KeGetCurrentThread();
          v14 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1520LL);
          if ( v14 )
          {
            result = *(_QWORD *)(v14 + 8 * ((v7 >> 3) & 0x1FF));
            if ( (result & 0x20) != 0 )
              v12 |= 0x20uLL;
            if ( (result & 0x42) != 0 )
              v12 |= 0x42uLL;
          }
        }
        a2 = v100;
      }
      if ( (v12 & 1) == 0 )
      {
        if ( !v12 )
        {
          if ( !v8 )
            goto LABEL_22;
          result = MiDeleteBatch(v117, v116, v8, v9, 0);
LABEL_20:
          *(_QWORD *)(v6 + 8) += result;
          v8 = 0;
          v97 = 0;
          goto LABEL_21;
        }
        if ( (v12 & 0x400) != 0 )
        {
          v103 = 0LL;
          v15 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          CloneAddress = 0LL;
          BugCheckParameter3 = 0LL;
          v104 = v15;
          v16 = 0LL;
          v17 = 0LL;
          v18 = v15;
          if ( (unsigned __int64)&STACK[0x90482413070] <= 0x7F8 )
            v18 = MiReadPteShadow(&v104, v15);
          if ( !(unsigned int)MI_IS_PFN((v18 >> 12) & 0xFFFFFFFFFLL) )
          {
            MiDereferenceIoPages(1LL, v19, 1LL, v19);
            v24 = 4;
            v26 = 48 * MiGetContainingPageTable(v7, v22, v23) - 0x58000000000LL;
            goto LABEL_164;
          }
          v27 = 0x8000000000000000uLL;
          v28 = 48 * v19 - 0x58000000000LL;
          v25 = 0x200000000000000LL;
          v29 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
          if ( (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0 )
          {
            v30 = 0x98000000000LL;
            if ( v7 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
              || v7 < 0xFFFFF68000000000uLL )
            {
              goto LABEL_39;
            }
            if ( (*(_QWORD *)(v28 + 8) & 0x8000000000000000uLL) != 0 )
            {
              if ( !*(_QWORD *)(v20 + 912) )
                goto LABEL_39;
              BugCheckParameter3 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
              CloneAddress = MiLocateCloneAddress(v20, BugCheckParameter3);
              if ( CloneAddress && v8 )
              {
                v32 = MiDeleteBatch(v117, v116, v8, v98, 0);
                v6 = a5;
                v8 = 0;
                v97 = 0;
                *(_QWORD *)(a5 + 8) += v32;
              }
              else
              {
                v6 = a5;
              }
            }
            else
            {
              v103 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
              if ( v8 )
              {
                v31 = MiDeleteBatch(v117, v116, v8, v21, 0);
                v6 = a5;
                v8 = 0;
                v97 = 0;
                *(_QWORD *)(a5 + 8) += v31;
                goto LABEL_41;
              }
LABEL_39:
              v6 = a5;
            }
LABEL_41:
            v26 = 48 * MiGetContainingPageTable(v7, v27, v30) - 0x58000000000LL;
            if ( v8 )
            {
              if ( v26 != v33
                || ((v34 = (HIDWORD(*(_QWORD *)(v28 + 40)) >> 8) & 0x3FF, v34 != 1023)
                  ? (v35 = *(__int16 **)(qword_14034F0E8 + 8LL * v34))
                  : (v35 = MiSystemPartition),
                    v35 != v101 || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL)) )
              {
                *(_QWORD *)(v6 + 8) += MiDeleteBatch(v117, v116, v8, v33, 0);
                v8 = 0;
                v97 = 0;
                goto LABEL_49;
              }
            }
            else
            {
LABEL_49:
              v33 = v26;
              v98 = v26;
              v36 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v36);
                }
                while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0
                     || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
                v33 = v26;
              }
            }
            if ( (v104 & 0x42) != 0 )
            {
              v37 = *(_BYTE *)(v28 + 34);
              if ( (v37 & 0x10) == 0 )
              {
                v25 = v28 + 16;
                if ( (*(_DWORD *)(v28 + 16) & 0x400LL) != 0
                  || (v37 & 8) != 0
                  || (v38 = *(_QWORD *)v25, (*(_QWORD *)v25 & 4) == 0) )
                {
                  *(_BYTE *)(v28 + 34) |= 0x10u;
                }
                else
                {
                  PteShadow = *(_QWORD *)v25;
                  if ( (unsigned __int64)(v28 + 0x90482413010LL) <= 0x7F8 )
                    PteShadow = MiReadPteShadow(v28 + 16, *(_QWORD *)v25);
                  v17 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
                  *(_QWORD *)v25 = v38 & 0xFFFFFFFFFFFFFFFBuLL;
                  *(_BYTE *)(v28 + 34) |= 0x10u;
                }
              }
            }
            v40 = *(_BYTE *)(v28 + 34);
            if ( (v40 & 7) == 6 && (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 && (v40 & 0x10) != 0 && !v103 && !CloneAddress )
            {
              v117[v8] = v28;
              v116[v8] = v17;
              if ( !v8 )
              {
                v41 = ((unsigned int)HIDWORD(*(_QWORD *)(v28 + 40)) >> 8) & 0x3FF;
                if ( v41 == 1023 )
                  v101 = MiSystemPartition;
                else
                  v101 = *(__int16 **)(qword_14034F0E8 + 8LL * v41);
              }
              v7 = (ULONG_PTR)v107;
              result = (unsigned __int64)(v107 + 0x12090482600LL);
              *v107 = 0LL;
              if ( result <= 0x7F8 )
                result = MiWritePteShadow(v7, 0LL);
              v97 = ++v8;
              if ( v8 != 16 )
                goto LABEL_21;
              result = MiDeleteBatch(v117, v116, 0x10u, v98, 0);
              goto LABEL_20;
            }
            v42 = ((unsigned int)HIDWORD(*(_QWORD *)(v28 + 40)) >> 8) & 0x3FF;
            if ( v42 == 1023 )
              v43 = MiSystemPartition;
            else
              v43 = *(__int16 **)(qword_14034F0E8 + 8LL * v42);
            v101 = v43;
            if ( v8 )
            {
              *(_QWORD *)(v6 + 8) += MiDeleteBatch(v117, v116, v8, v33, 1);
              v8 = 0;
              v97 = 0;
            }
          }
          else
          {
            if ( v8 )
            {
              v44 = MiDeleteBatch(v117, v116, v8, v21, 0);
              v8 = 0;
              v20 = a3;
              v97 = 0;
              *(_QWORD *)(a5 + 8) += v44;
            }
            if ( v29 != v7 )
              KeBugCheckEx(0x1Au, 0x403uLL, v7, v15, *(_QWORD *)(v28 + 8));
            v26 = 48 * (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 920), 0xFFFFFFFFFFFFFFFFuLL);
            v45 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v45);
              }
              while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
            }
            *(_QWORD *)(v28 + 24) |= 0x4000000000000000uLL;
          }
          if ( (*(_BYTE *)(v28 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v28 + 0x58000000000LL) / 48,
              *(_BYTE *)(v28 + 34) & 7,
              *(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v46 = 4;
          v24 = 4;
          *(_QWORD *)(v28 + 24) ^= (*(_QWORD *)(v28 + 24) ^ ((*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
          {
            v25 = *(_QWORD *)(v28 + 40);
            v47 = 0x200000000000000LL;
            if ( (v25 & 0x200000000000000LL) != 0 )
            {
              v48 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v28 + 16);
              v49 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
              v50 = 0xFFFFFFFFFLL;
              v52 = v51 & 0xFFFFFFFFFLL;
              v54 = v53;
              v55 = *(unsigned __int8 *)(48 * v52 - 0x58000000000LL + 34) >> 6;
              if ( !v55 || v55 == 3 )
              {
                v54 = 12;
              }
              else if ( v55 == 2 )
              {
                v54 = 28;
              }
              v56 = v52 << 12;
              v57 = MmProtectToPteMask[v54] ^ (v56 ^ MmProtectToPteMask[v54]) & 0xFFFFFFFFF000LL | 0x21;
              if ( HIBYTE(word_14034EC18) )
                v57 = MmProtectToPteMask[v54] ^ (v56 ^ MmProtectToPteMask[v54]) & 0xFFFFFFFFF000LL | 0x121;
              v58 = 0x90482413000LL;
              v59 = v57 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
              CurrentPrcb = KeGetCurrentPrcb();
              v61 = v59 | 0x42;
              v62 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                  + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
              v63 = (__int64 *)(((v62 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              *v63 = v61;
              if ( (unsigned __int64)(v63 + 0x12090482600LL) <= 0x7F8 )
              {
                MiWritePteShadow(v63, v61);
                v58 = 0x90482413000LL;
                v50 = 0xFFFFFFFFFLL;
              }
              v64 = (v49 >> 3) & 0x1FF;
              v65 = *(_QWORD *)(v62 + 8 * v64);
              v66 = v62 + 8 * v64;
              if ( v66 + 0x90482413000LL <= 0x7F8 )
                v65 = MiReadPteShadow(v66, v65);
              v106 = v65;
              if ( (unsigned __int64)&v106 + v58 <= 0x7F8 )
                v65 = MiReadPteShadow(&v106, v65);
              TransitionPte = MiMakeTransitionPte(v50 & (v65 >> 12), v48);
              v106 = TransitionPte;
              *(_QWORD *)v66 = TransitionPte;
              if ( v25 <= 0x7F8 )
              {
                MiWritePteShadow(v66, TransitionPte);
                v68 = 0x12090482600LL;
              }
              v69 = KeGetCurrentPrcb();
              v70 = (_QWORD *)((((v66 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              v71 = (unsigned __int64)v69->HyperPte & 0xFFFFFFFFFFFFF000uLL;
              v72 = ((__int64)v69->HyperPte & 0xFFF) + 1;
              *v70 = 0LL;
              if ( (unsigned __int64)&v70[v68] <= 0x7F8 )
                MiWritePteShadow(v70, 0LL);
              if ( v72 == 64 )
              {
                v113 = 20LL;
                v111 = 0;
                v112 = 1;
                v114 = 0LL;
                v115 = 0LL;
                MiInsertTbFlushEntry((__int64)&v111, v71, 64LL, 0);
                MiFlushTbList((__int64)&v111);
                KeGetCurrentPrcb()->HyperPte = (void *)v71;
              }
              else
              {
                KeGetCurrentPrcb()->HyperPte = (void *)(v71 | v72);
              }
              v8 = v97;
              v47 = 0x200000000000000LL;
              v46 = 4;
            }
            v73 = (*(_WORD *)(v28 + 32))-- == 1;
            v74 = *(_QWORD *)(v28 + 24);
            if ( !v73 )
            {
              if ( (v74 & 0x4000000000000000LL) != 0 )
              {
                *(_BYTE *)(v28 + 34) |= 7u;
              }
              else
              {
                v75 = *(_BYTE *)(v28 + 34);
                if ( (v75 & 0x10) != 0 )
                  v76 = v75 & 0xF8 | 3;
                else
                  v76 = v75 & 0xF8 | 2;
                *(_BYTE *)(v28 + 34) = v76;
              }
              v77 = (_QWORD *)(v28 + 16);
              if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 )
              {
                v78 = *v77;
                if ( (unsigned __int64)(v28 + 0x90482413010LL) <= 0x7F8 )
                  LOBYTE(v78) = MiReadPteShadow(v28 + 16, *v77);
                if ( (v78 & 4) != 0 )
                  *((_BYTE *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v28 + 40)) >> 8) & 0x3FF) + 610) = 1;
              }
              v24 = 3;
              if ( (v47 & *(_QWORD *)(v28 + 40)) != 0 && !v103 && !CloneAddress )
                v24 = v46;
              goto LABEL_163;
            }
            if ( (v74 & 0x4000000000000000LL) != 0 )
            {
              v79 = *(_BYTE *)(v28 + 35);
              if ( (v79 & 0x10) != 0 )
                *(_BYTE *)(v28 + 35) = v79 & 0xEF;
              v80 = ((unsigned int)HIDWORD(*(_QWORD *)(v28 + 40)) >> 8) & 0x3FF;
              if ( v80 == 1023 )
                v81 = MiSystemPartition;
              else
                v81 = *(__int16 **)(qword_14034F0E8 + 8LL * v80);
              v102 = *(_QWORD *)(v28 + 16);
              v82 = v102;
              if ( (v102 & 0x400) == 0 )
              {
                if ( (v102 & 4) != 0 )
                {
                  if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8 )
                    goto LABEL_145;
                }
                else if ( (v102 & 2) != 0 )
                {
                  if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8 )
LABEL_145:
                    v82 = MiReadPteShadow(&v102, v102);
                }
                else
                {
                  v82 = 0LL;
                }
                v102 = v82;
                if ( v82 )
                  MiReleasePageFileInfo(v81, v82, 0LL);
              }
              MiInsertPageInFreeOrZeroedList((v28 + 0x58000000000LL) / 48);
            }
            else
            {
              v83 = *(_BYTE *)(v28 + 34);
              if ( (v83 & 0x10) != 0 )
              {
                v84 = v28;
                v85 = 136LL;
                if ( v108 != 1 )
                  v85 = 8LL;
              }
              else
              {
                v86 = v108;
                *(_BYTE *)(v28 + 34) = v83 & 0xF8 | 2;
                if ( v86 > 1 )
                {
                  v87 = *(_BYTE *)(v28 + 35);
                  if ( (v87 & 8) == 0 && (v87 & 7u) < 5 )
                  {
                    MiInsertProtectedStandbyPage(v86, v28);
                    goto LABEL_162;
                  }
                }
                v85 = 4LL;
                v84 = v28;
              }
              MiInsertPageInList(v84, v85);
            }
LABEL_162:
            v24 = 4;
          }
LABEL_163:
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = (ULONG_PTR)CloneAddress;
LABEL_164:
          v88 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v88 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v88);
            }
            while ( (*(_QWORD *)(v26 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
          }
          if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v26 + 0x58000000000LL) / 48,
              *(_BYTE *)(v26 + 34) & 7,
              *(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v89 = *(_QWORD *)(v26 + 24);
          v90 = 0x3FFFFFFFFFFFFFFFLL;
          v91 = (v89 & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)(v26 + 24) = v89 ^ (v91 ^ v89) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v89 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v26, v91);
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
            MiReleasePageFileInfo(v101, v17, 1LL);
          if ( v103 )
          {
            v92 = MiDecrementCombinedPte(v103, v91, v90, v25);
            goto LABEL_180;
          }
          if ( v16 )
          {
            v92 = MiDecrementCloneBlockReference(v16, BugCheckParameter3, a3);
LABEL_180:
            v24 = v92;
          }
          if ( v24 == 3 )
          {
            v6 = a5;
            ++*(_QWORD *)(a5 + 8);
          }
          else
          {
            v73 = v24 == 5;
            v6 = a5;
            if ( v73 )
              ++*(_QWORD *)(a5 + 16);
          }
          v7 = (ULONG_PTR)v107;
          result = (unsigned __int64)(v107 + 0x12090482600LL);
          *v107 = 0LL;
          if ( result <= 0x7F8 )
            goto LABEL_186;
          goto LABEL_21;
        }
        if ( v8 )
        {
          *(_QWORD *)(v6 + 8) += MiDeleteBatch(v117, v116, v8, v9, 0);
          v8 = 0;
          v97 = 0;
        }
        result = MiDeleteTransitionPte((_QWORD *)v7, 1);
        if ( (_DWORD)result == 1 )
        {
          v93 = *(_QWORD *)v7;
          if ( v13 <= 0x7F8 )
            v93 = MiReadPteShadow(v7, *(_QWORD *)v7);
          v104 = v93;
          MiReleasePageFileSpace(v10, v93, 1LL);
          if ( (v93 & 1) != 0
            || (result = MiReverseSwizzleInvalidPte(v93, v94, v95, v96), (result & 0x400) != 0)
            || (result & 0x800) != 0
            || (result & 4) != 0 )
          {
            result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          }
          *(_QWORD *)v7 = 0LL;
          if ( v13 <= 0x7F8 )
LABEL_186:
            result = MiWritePteShadow(v7, 0LL);
LABEL_21:
          v9 = v98;
          a2 = v100;
          goto LABEL_22;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        v9 = v98;
        a2 = v100;
        if ( (_DWORD)result == 3 )
          ++*(_QWORD *)(v6 + 8);
      }
LABEL_22:
      v7 += 8LL;
      v107 = (_QWORD *)v7;
      if ( v7 > a2 )
      {
        if ( v8 )
        {
          result = MiDeleteBatch(v117, v116, v8, v9, 0);
          *(_QWORD *)(v6 + 8) += result;
        }
        return result;
      }
      v10 = v109;
    }
  }
  return result;
}
