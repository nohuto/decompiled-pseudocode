/*
 * XREFs of MiRemoveMappedPtes @ 0x140039410
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140054170 (MiRemoveViewsFromSectionWithPfn.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiTerminateWsle @ 0x1400AE090 (MiTerminateWsle.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiRemoveViewsFromSection @ 0x14010E0A4 (MiRemoveViewsFromSection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveMappedPtes(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // r12
  __int64 CurrentIrql; // r15
  __int64 v13; // rdx
  unsigned __int64 Process; // rcx
  unsigned int v15; // ebx
  __int64 i; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  ULONG_PTR v26; // r15
  __int64 v27; // r14
  __int64 Wsle; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rcx
  __int64 PrototypePteDirect; // rdi
  __int64 v34; // rcx
  unsigned __int64 *v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rdi
  unsigned int v42; // esi
  int v43; // ebx
  __int64 v44; // rdx
  unsigned int v45; // ebx
  unsigned __int64 *v46; // rdi
  unsigned __int64 v47; // rax
  __int64 j; // rsi
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 PteShadow; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rbx
  unsigned __int8 v56; // di
  unsigned int v57; // ebx
  int v58; // eax
  unsigned __int64 v59; // rbp
  unsigned __int8 v60; // si
  unsigned int v61; // ebx
  signed __int32 k; // edx
  __int64 result; // rax
  __int64 v64; // rdx
  char v65[8]; // [rsp+30h] [rbp-158h] BYREF
  __int64 v66; // [rsp+38h] [rbp-150h]
  __int64 v67; // [rsp+40h] [rbp-148h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-140h]
  __int64 v69; // [rsp+50h] [rbp-138h]
  __int64 v70; // [rsp+58h] [rbp-130h]
  unsigned __int64 v71; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int64 v72; // [rsp+68h] [rbp-120h]
  __int64 v73; // [rsp+70h] [rbp-118h]
  int v74; // [rsp+80h] [rbp-108h] BYREF
  __int16 v75; // [rsp+84h] [rbp-104h]
  __int64 v76; // [rsp+88h] [rbp-100h]
  __int64 v77; // [rsp+90h] [rbp-F8h]
  __int64 v78; // [rsp+98h] [rbp-F0h]

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32) >> 12;
  v5 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF8uLL;
  v73 = a1;
  v72 = v5;
  v66 = v4;
  v6 = 0LL;
  v67 = 0LL;
  v7 = 0LL;
  v76 = 20LL;
  v74 = MiTbFlushType(a2);
  v10 = *(_QWORD *)(v9 + 80) & 0xFFFFFFFFFFFFF000uLL;
  v75 = 0;
  BugCheckParameter2 = v10;
  v77 = 0LL;
  v78 = 0LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !*(_QWORD *)(v8 + 64) || (*(_DWORD *)(v8 + 56) & 0x420) != 0 )
    v7 = -1LL;
  if ( dword_14034F248 )
    v69 = *((_QWORD *)a2 + 23);
  else
    v69 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v70 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2);
  }
  else
  {
    v15 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a2, 0x1Fu) )
      v15 = ExpWaitForSpinLockExclusiveAndAcquire(a2);
    v13 = *a2;
    Process = v13 & 0xFFFFFFFFBFFFFFFFuLL;
    if ( (v13 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v13 & 0x40000000) == 0 )
        {
          Process = (unsigned int)v13;
          LODWORD(Process) = v13 | 0x40000000;
          _InterlockedCompareExchange((volatile signed __int32 *)a2, v13 | 0x40000000, v13);
        }
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
        v13 = *a2;
      }
      while ( (*a2 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
LABEL_19:
  for ( i = v66; i; v66 = i )
  {
    v17 = *(_QWORD *)v11;
    v18 = 0x90482413000LL;
    v19 = 0x58000000000LL;
    v20 = 0xFFFFFFFFFLL;
    v21 = v11 + 0x90482413000LL;
    if ( v11 + 0x90482413000LL <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow(Process, v13) && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v13 = *(_QWORD *)(Process + 1520);
        if ( v13 )
        {
          v22 = *(_QWORD *)(v13 + 8 * ((v11 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v17 |= 0x20uLL;
          if ( (v22 & 0x42) != 0 )
            v17 |= 0x42uLL;
        }
      }
      i = v66;
    }
    v71 = v17;
    if ( (v17 & 1) != 0 )
    {
      v23 = v17;
      if ( (unsigned __int64)&v71 + v18 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v17)
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v24 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v71 >> 3) & 0x1FF));
          if ( (v25 & 0x20) != 0 )
            v23 |= 0x20uLL;
          if ( (v25 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
      }
      v26 = BugCheckParameter2;
      v27 = 48 * (v20 & (v23 >> 12)) - v19;
      Wsle = *(_QWORD *)v27;
      if ( v69 )
      {
        Wsle = MiLocateWsle(BugCheckParameter2);
        if ( (*(_BYTE *)v11 & 0x20) != 0
          && (*(_DWORD *)(Wsle * *(unsigned int *)(v69 + 64) + *(_QWORD *)(v69 + 496)) & 0xE00) != 0xE00LL )
        {
          MiLogPageAccess(a2, v11);
        }
      }
      MiTerminateWsle(v26, a2, Wsle);
      if ( v7 != -1 && (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v27 + 16) & 0x400LL) != 0 )
      {
        if ( !v7
          || (v32 = *(_QWORD *)(v7 + 8), v30 = *(_QWORD *)(v27 + 8) | 0x8000000000000000uLL, v30 < v32)
          || (v29 = v32 + 8LL * *(unsigned int *)(v7 + 44), v30 >= v29) )
        {
          PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v27 + 16), v29, v30, v31);
          if ( v7 != PrototypePteDirect )
          {
            if ( v7 )
              MiRemoveViewsFromSectionWithPfn(v7, *(unsigned int *)(v7 + 44));
            v7 = PrototypePteDirect;
          }
        }
      }
      MiInsertTbFlushEntry(&v74, v26, 1LL, 0LL);
      v35 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v36 = *v35;
      if ( (unsigned __int64)(v35 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow(v34, v36)
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v38 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 8 * ((v37 >> 3) & 0x1FF));
          if ( (v39 & 0x20) != 0 )
            v36 |= 0x20uLL;
          if ( (v39 & 0x42) != 0 )
            v36 |= 0x42uLL;
        }
      }
      v40 = 48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      *(_QWORD *)v11 = 0LL;
      if ( v21 <= 0x7F8 )
        MiWritePteShadow(v11, 0LL);
      v41 = 0LL;
      v42 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v42);
        }
        while ( (*(_QWORD *)(v27 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
      }
      if ( (v17 & 0x42) != 0 )
        v41 = MiCaptureDirtyBitToPfn(v27);
      if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 )
      {
        v43 = 1;
      }
      else
      {
        v43 = 0;
        *(_QWORD *)(v27 + 24) |= 0x4000000000000000uLL;
      }
      if ( (*(_BYTE *)(v27 + 34) & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (v27 + 0x58000000000LL) / 48,
          *(_BYTE *)(v27 + 34) & 7,
          *(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v44 = (*(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v27 + 24) ^= (*(_QWORD *)(v27 + 24) ^ v44) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v44 && (unsigned int)MiPfnShareCountIsZero(v27, 0LL) == 3 && !v43 )
        ++v67;
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v3 = 0LL;
      v45 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v45);
        }
        while ( (*(_QWORD *)(v40 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
      }
      if ( (*(_BYTE *)(v40 + 34) & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (v40 + 0x58000000000LL) / 48,
          *(_BYTE *)(v40 + 34) & 7,
          *(_QWORD *)(v40 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      Process = *(_QWORD *)(v40 + 24);
      v13 = (Process & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v40 + 24) = Process ^ (Process ^ v13) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (Process & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v40, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v41 )
        MiReleasePageFileInfo(MiSystemPartition, v41, 1LL);
      LOBYTE(CurrentIrql) = v70;
      goto LABEL_98;
    }
    if ( (v17 & 0x400) != 0 )
    {
      *(_QWORD *)v11 = 0LL;
      if ( v21 <= 0x7F8 )
        MiWritePteShadow(v11, 0LL);
      v46 = (unsigned __int64 *)MiGetPrototypePteDirect(v17, v13, v18, v19);
      if ( v7 != -1 )
      {
        if ( !v7
          || (v47 = *(_QWORD *)(v7 + 8), (unsigned __int64)v46 < v47)
          || (Process = *(unsigned int *)(v7 + 44), (unsigned __int64)v46 >= v47 + 8 * Process) )
        {
          MiUnlockWorkingSetExclusive(a2, (unsigned __int8)CurrentIrql);
          for ( j = MiLockProtoPoolPage(v46, v65); !j; j = MiLockProtoPoolPage(v46, v65) )
            MmAccessFault(2uLL, (ULONG_PTR)v46);
          v49 = MiLockLeafPage(v46, 0LL);
          v50 = v49;
          if ( v49 )
          {
            PteShadow = *(_QWORD *)(v49 + 16);
            if ( (unsigned __int64)(v49 + 0x90482413010LL) <= 0x7F8 )
              PteShadow = MiReadPteShadow(v49 + 16, *(_QWORD *)(v49 + 16));
            _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            PteShadow = *v46;
            if ( (unsigned __int64)(v46 + 0x12090482600LL) <= 0x7F8 )
              PteShadow = MiReadPteShadow(v46, *v46);
          }
          MiUnlockProtoPoolPage(j, (unsigned __int8)v65[0]);
          if ( (PteShadow & 0x400) != 0 )
          {
            v55 = MiGetPrototypePteDirect(PteShadow, v52, v53, v54);
            if ( v7 != v55 )
            {
              if ( v7 )
                MiRemoveViewsFromSectionWithPfn(v7, *(unsigned int *)(v7 + 44));
              v7 = v55;
            }
          }
          v56 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2);
            LOBYTE(CurrentIrql) = v56;
            v70 = v56;
          }
          else
          {
            v57 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)a2, 0x1Fu) )
              v57 = ExpWaitForSpinLockExclusiveAndAcquire(a2);
            v13 = *a2;
            Process = v13 & 0xFFFFFFFFBFFFFFFFuLL;
            if ( (v13 & 0xBFFFFFFF) != 0x80000000 )
            {
              do
              {
                if ( (v13 & 0x40000000) == 0 )
                {
                  Process = (unsigned int)v13;
                  LODWORD(Process) = v13 | 0x40000000;
                  _InterlockedCompareExchange((volatile signed __int32 *)a2, v13 | 0x40000000, v13);
                }
                if ( (++v57 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v57);
                v13 = *a2;
              }
              while ( (*a2 & 0xBFFFFFFF) != 0x80000000 );
            }
            LOBYTE(CurrentIrql) = v56;
            v70 = v56;
          }
        }
      }
LABEL_98:
      v6 = v67;
LABEL_99:
      i = v66;
      goto LABEL_100;
    }
    if ( (v17 & 0x800) != 0 )
    {
      v58 = MiDeleteTransitionPte(v11);
      if ( v58 == 1 )
        goto LABEL_19;
      if ( v58 == 3 )
        v67 = ++v6;
      *(_QWORD *)v11 = 0LL;
      if ( v21 > 0x7F8 )
        goto LABEL_99;
LABEL_139:
      MiWritePteShadow(v11, 0LL);
      goto LABEL_99;
    }
    if ( v17 )
    {
      MiReleasePageFileSpace(MiSystemPartition, v17, 1LL);
      *(_QWORD *)v11 = 0LL;
      if ( v21 > 0x7F8 )
        goto LABEL_99;
      goto LABEL_139;
    }
LABEL_100:
    BugCheckParameter2 += 4096LL;
    v11 += 8LL;
    --i;
  }
  MiUnlockWorkingSetExclusive(a2, (unsigned __int8)CurrentIrql);
  MiFlushTbList(&v74);
  v59 = v72;
  v60 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v72 + 72);
  }
  else
  {
    v61 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v72 + 72), 0x1Fu) )
      v61 = ExpWaitForSpinLockExclusiveAndAcquire(v59 + 72);
    for ( k = *(_DWORD *)(v59 + 72); (k & 0xBFFFFFFF) != 0x80000000; k = *(_DWORD *)(v59 + 72) )
    {
      if ( (k & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)(v59 + 72), k | 0x40000000, k);
      if ( (++v61 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v61);
    }
  }
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = MiRemoveViewsFromSection(v7, *(unsigned int *)(v7 + 44), 0LL);
  --*(_QWORD *)(v59 + 48);
  --*(_QWORD *)(v59 + 40);
  result = MiCheckControlArea(v59, v60);
  if ( v3 )
    result = MiReturnSubsectionCharges(v3);
  v64 = *(_QWORD *)(v73 + 40) - v67;
  if ( v64 )
    return MiReturnCommit(MiSystemPartition, v64);
  return result;
}
