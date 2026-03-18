/*
 * XREFs of MiDeletePteList @ 0x140093740
 * Callers:
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiMakeProtoTransition @ 0x140132098 (MiMakeProtoTransition.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiDeletePteList(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned int *v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _KPROCESS *Process; // rcx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int64 v18; // r15
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r13
  unsigned __int16 v28; // ax
  __int16 *v29; // r12
  __int64 v30; // rcx
  ULONG_PTR v31; // rbp
  bool v32; // r15
  unsigned __int64 v33; // rbx
  unsigned int v34; // esi
  __int64 v35; // r9
  __int64 ContainingPageTable; // r13
  __int64 v37; // r8
  __int64 v38; // rdx
  int v39; // eax
  _QWORD *CloneAddress; // rax
  unsigned __int64 v41; // rdx
  unsigned int v42; // ebx
  __int64 *v43; // rbx
  __int64 v44; // r9
  __int16 v45; // dx
  __int64 v46; // rdx
  bool v47; // zf
  __int64 v48; // rax
  char v49; // al
  char v50; // al
  __int64 v51; // rax
  char v52; // al
  unsigned __int16 v53; // ax
  __int16 *v54; // r9
  __int64 v55; // rax
  char v56; // al
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // ebx
  __int64 v61; // rsi
  __int64 v62; // rdx
  unsigned __int64 v63; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v64; // [rsp+38h] [rbp-90h]
  __int64 v65; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v66; // [rsp+48h] [rbp-80h]
  unsigned __int64 v67; // [rsp+50h] [rbp-78h]
  __int64 v68; // [rsp+58h] [rbp-70h]
  unsigned __int64 *v69; // [rsp+60h] [rbp-68h]
  __int64 v70; // [rsp+68h] [rbp-60h]
  unsigned __int64 v71; // [rsp+70h] [rbp-58h]
  __int64 v74; // [rsp+E0h] [rbp+18h]

  v74 = a3;
  v4 = a1[3];
  v5 = a4;
  v66 = v4;
  v6 = a1;
  if ( !v4 )
    goto LABEL_20;
  v7 = *((unsigned __int8 *)a1 + 4);
  v8 = qword_14034EBD8;
  if ( (v7 & 2) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[11] )
    {
      if ( !Process->SecurePid )
        goto LABEL_7;
      v10 = *v6;
      if ( (_DWORD)v10 != 1 )
        goto LABEL_9;
    }
    v8 = -1LL;
  }
LABEL_7:
  v10 = *v6;
  if ( (_DWORD)v10 == 1 )
  {
    v11 = 0;
    goto LABEL_10;
  }
LABEL_9:
  v11 = 1;
LABEL_10:
  if ( *((_BYTE *)v6 + 5) || *((_QWORD *)v6 + 2) > v8 )
  {
    if ( (v7 & 1) != 0 )
      KeFlushCurrentTbOnly(v10, a2, v7);
    else
      KeFlushTb(v10, v11);
    *((_BYTE *)v6 + 5) = 0;
  }
  else
  {
    v12 = v6 + 6;
    if ( (v7 & 1) != 0 )
      KeFlushMultipleRangeCurrentTb(v4, v12, (unsigned int)v10);
    else
      KeFlushMultipleRangeTb(v4, v12, (unsigned int)v10, v11);
  }
  v6[3] = 0;
  *((_QWORD *)v6 + 2) = 0LL;
LABEL_20:
  v13 = 0LL;
  v64 = 0;
  if ( v4 )
  {
    v14 = 0LL;
    v15 = &STACK[0x90482413030];
    v69 = &STACK[0x90482413030];
    v68 = 0LL;
    v16 = 0x8000000000000000uLL;
    v17 = 0x3FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v18 = *(_QWORD *)&v6[2 * v14 + 6] & 0xFFFFFFFFFFFFF000uLL;
      v70 = (*(_QWORD *)&v6[2 * v14 + 6] & 0x7FFLL) + 1;
      v67 = v18;
      do
      {
        v19 = 0x98000000000LL;
        v20 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v71 = v20;
        v21 = *(_QWORD *)v20;
        if ( v20 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x98000000000LL, v21)
          && (v21 & 1) != 0
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          v19 = (__int64)KeGetCurrentThread()->ApcState.Process;
          a3 = *(_QWORD *)(v19 + 1520);
          if ( a3 )
          {
            v22 = *(_QWORD *)(a3 + 8 * ((v20 >> 3) & 0x1FF));
            if ( (v22 & 0x20) != 0 )
              v21 |= 0x20uLL;
            if ( (v22 & 0x42) != 0 )
              v21 |= 0x42uLL;
          }
        }
        v23 = v21 & 0xFFFFFFFFFFFFFBFEuLL | 1;
        v63 = v23;
        if ( (unsigned __int64)v15 <= 0x7F8
          && (unsigned int)MiPteHasShadow(v19, v23)
          && (v23 & 1) != 0
          && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          a3 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( a3 )
          {
            v24 = *(_QWORD *)(a3 + 8 * (((unsigned __int64)&v63 >> 3) & 0x1FF));
            if ( (v24 & 0x20) != 0 )
              v23 = v63 | 0x20;
            if ( (v24 & 0x42) != 0 )
              v23 |= 0x42uLL;
          }
          else
          {
            v23 = v63;
          }
        }
        v25 = (v23 >> 12) & 0xFFFFFFFFFLL;
        v26 = 48 * v25 - 0x58000000000LL;
        v27 = *(_QWORD *)(v26 + 40);
        v28 = (HIDWORD(v27) >> 8) & 0x3FF;
        if ( v28 == 1023 )
          v29 = MiSystemPartition;
        else
          v29 = *(__int16 **)(qword_14034F0E8 + 8LL * v28);
        if ( (v27 & 0x200000000000000LL) != 0 )
        {
          v30 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v31 = v16 | *(_QWORD *)(v26 + 8);
          v32 = (v16 & *(_QWORD *)(v26 + 8)) == 0;
          v33 = 0LL;
          v34 = 0;
          ContainingPageTable = MiGetContainingPageTable(v30, v25, a3);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v34);
            }
            while ( (*(_QWORD *)(v26 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
          }
          if ( (v63 & 0x42) != 0 )
            v33 = MiCaptureDirtyBitToPfn(v26);
          if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v26 + 0x58000000000LL) / 48,
              *(_BYTE *)(v26 + 34) & 7,
              *(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v37 = 0x3FFFFFFFFFFFFFFFLL;
          v38 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ v38) & 0x3FFFFFFFFFFFFFFFLL;
          if ( !v38 )
            MiPfnShareCountIsZero(v26, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v33 )
            MiReleasePageFileInfo(v29, v33, 1LL);
          if ( v32 )
          {
            v39 = MiDecrementCombinedPte(v31, v38, v37, v35);
          }
          else
          {
            CloneAddress = MiLocateCloneAddress(a2, v31);
            v39 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v31, a2);
          }
          v5 = a4;
          if ( v39 == 3 )
          {
            ++*(_QWORD *)(a4 + 8);
          }
          else if ( v39 == 5 )
          {
            ++*(_QWORD *)(a4 + 16);
          }
          v41 = v74;
          v20 = v71;
          v18 = v67;
          v63 = v74;
        }
        else
        {
          v42 = 0;
          ContainingPageTable = v27 & 0xFFFFFFFFFLL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v42);
                v16 = 0x8000000000000000uLL;
              }
            }
            while ( (*(_QWORD *)(v26 + 24) & v16) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
            v17 = 0x3FFFFFFFFFFFFFFFLL;
          }
          a3 = *(_QWORD *)(v26 + 16);
          v43 = (__int64 *)(v26 + 16);
          v44 = 0x4000000000000000LL;
          *(_QWORD *)(v26 + 24) |= 0x4000000000000000uLL;
          if ( (a3 & 2) != 0 )
          {
            v45 = *(_WORD *)(*(_QWORD *)&MiSystemPartition[4 * ((unsigned __int16)a3 >> 12) + 2672] + 164LL);
            if ( (v45 & 0x10) == 0 && ((v45 & 0x20) == 0 || (a3 & 2) == 0) && *(_WORD *)(v26 + 32) == 1 && v74 )
            {
              *v43 &= ~2uLL;
              v13 = a3;
            }
          }
          if ( (*(_BYTE *)(v26 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v26 + 0x58000000000LL) / 48,
              *(_BYTE *)(v26 + 34) & 7,
              v17 & *(_QWORD *)(v26 + 24));
          v46 = (v17 & *(_QWORD *)(v26 + 24)) - 1;
          *(_QWORD *)(v26 + 24) ^= v17 & (*(_QWORD *)(v26 + 24) ^ v46);
          if ( !v46 )
          {
            if ( (*(_QWORD *)(v26 + 40) & 0x200000000000000LL) != 0 )
            {
              MiMakeProtoTransition(v26);
              v44 = 0x4000000000000000LL;
            }
            v47 = (*(_WORD *)(v26 + 32))-- == 1;
            v48 = *(_QWORD *)(v26 + 24);
            if ( v47 )
            {
              if ( (v48 & 0x4000000000000000LL) != 0 )
              {
                v52 = *(_BYTE *)(v26 + 35);
                if ( (v52 & 0x10) != 0 )
                  *(_BYTE *)(v26 + 35) = v52 & 0xEF;
                v53 = ((unsigned int)HIDWORD(*(_QWORD *)(v26 + 40)) >> 8) & 0x3FF;
                if ( v53 == 1023 )
                  v54 = MiSystemPartition;
                else
                  v54 = *(__int16 **)(qword_14034F0E8 + 8LL * v53);
                v65 = *v43;
                v55 = v65;
                if ( (v65 & 0x400) == 0 )
                {
                  if ( (v65 & 4) != 0 || (v65 & 2) != 0 )
                  {
                    if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
                      v55 = MiReadPteShadow(&v65, v65);
                  }
                  else
                  {
                    v55 = 0LL;
                  }
                  v65 = v55;
                  if ( v55 )
                    MiReleasePageFileInfo(v54, v55, 0LL);
                }
                MiInsertPageInFreeOrZeroedList((v26 + 0x58000000000LL) / 48);
              }
              else
              {
                v56 = *(_BYTE *)(v26 + 34);
                if ( (v56 & 0x10) != 0 )
                {
                  v57 = 8LL;
                }
                else
                {
                  v57 = 4LL;
                  *(_BYTE *)(v26 + 34) = v56 & 0xF8 | 2;
                }
                MiInsertPageInList(v26, v57);
              }
            }
            else
            {
              if ( (v48 & 0x4000000000000000LL) != 0 )
              {
                *(_BYTE *)(v26 + 34) |= 7u;
              }
              else
              {
                v49 = *(_BYTE *)(v26 + 34);
                if ( (v49 & 0x10) != 0 )
                  v50 = v49 & 0xF8 | 3;
                else
                  v50 = v49 & 0xF8 | 2;
                *(_BYTE *)(v26 + 34) = v50;
              }
              if ( (*(_DWORD *)v43 & 0x400LL) == 0 )
              {
                v51 = *v43;
                v46 = v26 + 0x90482413010LL;
                if ( (unsigned __int64)(v26 + 0x90482413010LL) <= 0x7F8 )
                  LOBYTE(v51) = MiReadPteShadow(v26 + 16, *v43);
                if ( (v51 & 4) != 0 )
                  *((_BYTE *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v26 + 40)) >> 8) & 0x3FF) + 610) = 1;
              }
              ++*(_QWORD *)(v5 + 8);
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v13 )
          {
            v58 = MiReverseSwizzleInvalidPte(v13, v46, a3, v44);
            v59 = MiTransferSoftwarePte(v74, *(_QWORD *)&v29[4 * ((unsigned __int16)v13 >> 12) + 2672], HIDWORD(v58));
            v13 = 0LL;
          }
          else
          {
            v59 = v74;
          }
          v63 = v59;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          v41 = v63;
        }
        *(_QWORD *)v20 = v41;
        if ( v20 + 0x90482413000LL <= 0x7F8 )
          MiWritePteShadow(v20, v41);
        v60 = 0;
        v61 = 48 * ContainingPageTable - 0x58000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v60 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v60);
          }
          while ( (*(_QWORD *)(v61 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v61 + 24), 0x3FuLL) );
        }
        if ( (*(_BYTE *)(v61 + 34) & 7) != 6 )
          KeBugCheckEx(
            0x4Eu,
            0x99uLL,
            48 * ContainingPageTable / 48,
            *(_BYTE *)(48 * ContainingPageTable - 0x58000000000LL + 34) & 7,
            *(_QWORD *)(48 * ContainingPageTable - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
        v17 = 0x3FFFFFFFFFFFFFFFLL;
        v62 = (*(_QWORD *)(v61 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)(v61 + 24) ^= (*(_QWORD *)(v61 + 24) ^ v62) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v62 )
        {
          MiPfnShareCountIsZero(v61, 0LL);
          v17 = 0x3FFFFFFFFFFFFFFFLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = v69;
        v18 += 4096LL;
        v47 = v70-- == 1;
        v67 = v18;
        v16 = 0x8000000000000000uLL;
      }
      while ( !v47 );
      v14 = v68 + 1;
      ++v64;
      ++v68;
      if ( v64 >= v66 )
        break;
      v6 = a1;
    }
  }
}
