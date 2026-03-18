/*
 * XREFs of MiDeleteSegmentPages @ 0x1400839A0
 * Callers:
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiDeleteSegmentPages(__int64 *a1)
{
  char *v1; // rbp
  unsigned __int16 v2; // cx
  __int16 *v3; // rax
  __int64 v4; // rdx
  _KPROCESS *Process; // rcx
  __int64 *v6; // r8
  __int64 i; // rdi
  __int64 *v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // r13
  unsigned __int8 v12; // bl
  int v13; // esi
  __int64 v14; // r10
  ULONG_PTR v15; // r15
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  volatile signed __int32 *v20; // r8
  int v21; // eax
  int v22; // r9d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r11
  unsigned int v34; // ebp
  __int64 v35; // r14
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  char v41; // dl
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // eax
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // r9
  __int64 v47; // r10
  unsigned __int64 v48; // rdx
  volatile signed __int32 *v49; // r8
  int v50; // eax
  int v51; // r9d
  unsigned __int64 v52; // rcx
  void *v53; // rbp
  __int64 v54; // rax
  volatile signed __int32 *v55; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v57; // edi
  signed __int32 j; // edx
  unsigned int v59; // edi
  signed __int32 k; // edx
  __int64 v61; // rbx
  unsigned __int64 v62; // rdi
  __int64 v64; // [rsp+20h] [rbp-98h] BYREF
  __int64 v65; // [rsp+28h] [rbp-90h]
  __int64 v66; // [rsp+30h] [rbp-88h]
  __int64 v67; // [rsp+38h] [rbp-80h]
  unsigned __int64 v68; // [rsp+40h] [rbp-78h] BYREF
  __int64 v69; // [rsp+48h] [rbp-70h] BYREF
  __int64 *v70; // [rsp+50h] [rbp-68h]
  __int16 *v71; // [rsp+58h] [rbp-60h]
  ULONG_PTR v72; // [rsp+60h] [rbp-58h]
  __int64 v73; // [rsp+68h] [rbp-50h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v76; // [rsp+C8h] [rbp+10h] BYREF
  int v77; // [rsp+D0h] [rbp+18h]
  char *v78; // [rsp+D8h] [rbp+20h]

  v67 = 0LL;
  v1 = 0LL;
  v2 = *((_WORD *)a1 + 30) & 0x3FF;
  v78 = 0LL;
  v3 = MiPartitionIdToPointer(v2);
  LODWORD(i) = *((_DWORD *)v6 + 14);
  v8 = v6 + 15;
  v9 = 0LL;
  v71 = v3;
  v10 = 0LL;
  v11 = -1LL;
  v73 = *v6;
  v66 = 0LL;
  v12 = 17;
  v65 = 0LL;
  v13 = *(_DWORD *)(v73 + 12);
  v76 = 17;
  v77 = i;
  v70 = v6 + 15;
  if ( v6 != (__int64 *)-120LL )
  {
    v14 = 0xFFFFFFFFFLL;
    while ( 1 )
    {
      v15 = v8[1];
      if ( !v15 )
        goto LABEL_134;
      v72 = v15 + 8LL * *((unsigned int *)v8 + 11);
      if ( v15 >= v72 )
        goto LABEL_115;
      i = v65;
LABEL_6:
      if ( (v15 & 0xFFF) == 0 )
        break;
      if ( v12 == 17 )
        goto LABEL_22;
LABEL_25:
      v24 = v15 + 0x90482413000LL;
      while ( 1 )
      {
        v25 = *(_QWORD *)v15;
        if ( v24 <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v4)
          && (v25 & 1) != 0
          && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v4 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v4 )
          {
            v26 = *(_QWORD *)(v4 + 8 * ((v15 >> 3) & 0x1FF));
            if ( (v26 & 0x20) != 0 )
              v25 |= 0x20uLL;
            if ( (v26 & 0x42) != 0 )
              v25 |= 0x42uLL;
          }
        }
        v68 = v25;
        if ( (v25 & 1) != 0 )
        {
          v27 = v25;
          if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v4)
            && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
          {
            v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v28 )
            {
              v29 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v68 >> 3) & 0x1FF));
              if ( (v29 & 0x20) != 0 )
                v27 |= 0x20uLL;
              if ( (v29 & 0x42) != 0 )
                v27 |= 0x42uLL;
            }
          }
          goto LABEL_50;
        }
        if ( (v25 & 0x400) != 0 || (v25 & 0x800) == 0 )
          break;
        if ( (unsigned int)MiInvalidPteConforms(v25, v4) )
        {
          v27 = MiReverseSwizzleInvalidPte(Process, v4, v30, v31);
LABEL_50:
          if ( (unsigned int)MI_IS_PFN(v14 & (v27 >> 12)) )
          {
            v34 = 0;
            v35 = 48 * v32 - v33;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
            {
              Process = (_KPROCESS *)0x8000000000000000LL;
              do
              {
                if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                {
                  _mm_pause();
                }
                else
                {
                  HvlNotifyLongSpinWait(v34);
                  Process = (_KPROCESS *)0x8000000000000000LL;
                }
              }
              while ( (*(_QWORD *)(v35 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
              v14 = 0xFFFFFFFFFLL;
            }
            v4 = *(_QWORD *)v15;
            if ( v24 <= 0x7F8
              && (unsigned int)MiPteHasShadow(Process, v4)
              && (v4 & 1) != 0
              && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              v36 = *(_QWORD *)&Process[2].ProcessLock;
              if ( v36 )
              {
                v37 = *(_QWORD *)(v36 + 8 * ((v15 >> 3) & 0x1FF));
                if ( (v37 & 0x20) != 0 )
                  v4 |= 0x20uLL;
                if ( (v37 & 0x42) != 0 )
                  v4 |= 0x42uLL;
              }
            }
            if ( v4 == v25 )
              goto LABEL_73;
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
      v35 = 0LL;
LABEL_73:
      v4 = *(_QWORD *)v15;
      if ( v24 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v4)
        && (v4 & 1) != 0
        && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v38 = *(_QWORD *)&Process[2].ProcessLock;
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 8 * ((v15 >> 3) & 0x1FF));
          if ( (v39 & 0x20) != 0 )
            v4 |= 0x20uLL;
          if ( (v39 & 0x42) != 0 )
            v4 |= 0x42uLL;
        }
      }
      v69 = v4;
      if ( (v4 & 1) != 0 )
      {
        v40 = v4;
        if ( (unsigned __int64)&STACK[0x90482413048] <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v4)
          && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v42 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)&v69 >> 3) & 0x1FF));
            if ( (v43 & 0x20) != 0 )
              v40 |= 0x20uLL;
            if ( (v43 & 0x42) != 0 )
              v40 |= 0x42uLL;
          }
        }
        v4 = *(_QWORD *)(v35 + 16);
        v11 = v14 & (v40 >> 12);
        *(_QWORD *)v15 = v4;
        if ( v24 <= 0x7F8 )
          MiWritePteShadow(v15, v4);
        *(_QWORD *)(v35 + 24) |= 0x4000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_111;
      }
      if ( (v4 & 0x400) != 0 )
        goto LABEL_111;
      if ( (v4 & 0x800) != 0 )
      {
        if ( (*(_DWORD *)(v35 + 16) & 0x400LL) != 0 && (a1[7] & 0x20) == 0 && (*(_BYTE *)(v35 + 34) & 0x18) != 0 )
          ++v66;
        v44 = MiDeleteLockedTransitionPte(v15);
        v1 = v78;
        if ( v44 == 3 )
          v1 = ++v78;
      }
      else
      {
        v64 = v4;
        if ( (v4 & 4) != 0 || (v4 & 2) != 0 )
        {
          if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8 )
            v4 = MiReadPteShadow(&v64, v4);
        }
        else
        {
          v4 = 0LL;
        }
        v64 = v4;
        if ( v4 )
          MiReleasePageFileInfo(v71, v4, 0LL);
LABEL_111:
        v1 = v78;
      }
      v12 = v76;
      v15 += 8LL;
      if ( v15 < v72 )
      {
        v14 = 0xFFFFFFFFFLL;
        goto LABEL_6;
      }
      v8 = v70;
      v65 = i;
      v10 = i;
      LOBYTE(i) = v77;
LABEL_115:
      if ( v12 != 17 )
      {
        MiUnlockProtoPoolPage(v10, v12);
        v12 = 17;
        v76 = 17;
        if ( (v13 & 0x1000) != 0 )
        {
          v45 = v11 & 0xFFFFFFFFFFFFFE00uLL;
          v46 = v45 >> 9;
          if ( _bittest64((const signed __int64 *)qword_14034FBA8[0], v45 >> 9) )
          {
            v47 = (v45 >> 9) & 0x1F;
            LOBYTE(v48) = 1;
            v49 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v45 >> 14));
            if ( (unsigned __int64)(v47 + 1) <= 0x20 )
            {
              v50 = 1 << v47;
              goto LABEL_126;
            }
            if ( (v46 & 0x1F) == 0 )
              goto LABEL_125;
            v51 = v46 & 0x1F;
            _InterlockedAnd(v49++, ~(((1 << (32 - v51)) - 1) << v47));
            v48 = 1LL - (unsigned int)(32 - v51);
            if ( v48 >= 0x20 )
            {
              v52 = v48 >> 5;
              v48 += -32LL * (v48 >> 5);
              do
              {
                *v49++ = 0;
                --v52;
              }
              while ( v52 );
            }
            if ( v48 )
            {
LABEL_125:
              v50 = (1 << v48) - 1;
LABEL_126:
              _InterlockedAnd(v49, ~v50);
            }
            v12 = v76;
          }
          Process = (_KPROCESS *)(512 - MiFreeLargePageMemory(v45));
          v78 = &v1[(_QWORD)Process];
          v11 = -1LL;
        }
      }
      if ( (i & 0x80u) != 0LL && (i & 0x20) == 0 )
      {
        v53 = (void *)v8[1];
        v54 = MiDecrementSubsectionViewCount((unsigned int *)v8, 0);
        v67 += v54;
        if ( v53 )
          ExFreePoolWithTag(v53, 0);
      }
      v14 = 0xFFFFFFFFFLL;
LABEL_134:
      v8 = (__int64 *)v8[2];
      v1 = v78;
      v70 = v8;
      if ( !v8 )
      {
        v9 = v66;
        v6 = a1;
        goto LABEL_136;
      }
    }
    if ( v12 == 17 || (MiUnlockProtoPoolPage(i, v12), (v13 & 0x1000) == 0) )
    {
LABEL_22:
      for ( i = MiLockProtoPoolPage(v15, &v76); !i; i = MiLockProtoPoolPage(v15, &v76) )
        MmAccessFault(2uLL, v15);
      v14 = 0xFFFFFFFFFLL;
      goto LABEL_25;
    }
    v16 = v11 & 0xFFFFFFFFFFFFFE00uLL;
    v17 = v16 >> 9;
    if ( _bittest64((const signed __int64 *)qword_14034FBA8[0], v16 >> 9) )
    {
      v18 = (v16 >> 9) & 0x1F;
      LOBYTE(v19) = 1;
      v20 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v16 >> 14));
      if ( (unsigned __int64)(v18 + 1) > 0x20 )
      {
        if ( (v17 & 0x1F) != 0 )
        {
          v22 = v17 & 0x1F;
          _InterlockedAnd(v20++, ~(((1 << (32 - v22)) - 1) << v18));
          v19 = 1LL - (unsigned int)(32 - v22);
          if ( v19 >= 0x20 )
          {
            v23 = v19 >> 5;
            v19 += -32LL * (v19 >> 5);
            do
            {
              *v20++ = 0;
              --v23;
            }
            while ( v23 );
          }
          if ( !v19 )
            goto LABEL_21;
        }
        v21 = (1 << v19) - 1;
      }
      else
      {
        v21 = 1 << v18;
      }
      _InterlockedAnd(v20, ~v21);
    }
LABEL_21:
    v78 = &v1[512 - MiFreeLargePageMemory(v16)];
    v11 = -1LL;
    goto LABEL_22;
  }
LABEL_136:
  v55 = (volatile signed __int32 *)(v6 + 9);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6 + 9);
  }
  else
  {
    v57 = 0;
    if ( _interlockedbittestandset(v55, 0x1Fu) )
      v57 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v6 + 18);
    for ( j = *v55; (*v55 & 0xBFFFFFFF) != 0x80000000; j = *v55 )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedCompareExchange(v55, j | 0x40000000, j);
      if ( (++v57 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v57);
    }
  }
  while ( a1[4] )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v55, retaddr);
    else
      *v55 = 0;
    __writecr8(CurrentIrql);
    _mm_pause();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v55);
    }
    else
    {
      v59 = 0;
      if ( _interlockedbittestandset(v55, 0x1Fu) )
        v59 = ExpWaitForSpinLockExclusiveAndAcquire(v55);
      for ( k = *v55; (*v55 & 0xBFFFFFFF) != 0x80000000; k = *v55 )
      {
        if ( (k & 0x40000000) == 0 )
          _InterlockedCompareExchange(v55, k | 0x40000000, k);
        if ( (++v59 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v59);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v55, retaddr);
  else
    *v55 = 0;
  __writecr8(CurrentIrql);
  if ( v67 )
    MiReturnSubsectionCharges(v67);
  v61 = *(_QWORD *)(v73 + 16);
  if ( v61 )
  {
    v62 = v61 - (_QWORD)v78;
    MiReturnCommit(MiSystemPartition, v61 - (_QWORD)v78);
    if ( (v13 & 0x1000) != 0 )
    {
      MiReturnResidentAvailable(v62);
      _InterlockedExchangeAdd64(&qword_14034F958, v62);
    }
    _InterlockedExchangeAdd64(&qword_14034FD10, -v61);
  }
  return v9;
}
