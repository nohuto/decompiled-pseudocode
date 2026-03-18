/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x1400543B0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     PfSnLogPageFaultCommon @ 0x14001A220 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x14001A540 (PfSnReferenceProcessTrace.c)
 *     PfSnCheckLoggingForThread @ 0x14001A72C (PfSnCheckLoggingForThread.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiMakeSystemCacheRangeValid(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  _QWORD *CurrentIrql; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 Process; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  char *v17; // r10
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  char v20; // al
  __int16 *VmPartition; // rax
  unsigned __int64 v22; // rsi
  int v23; // ebx
  __int64 i; // r10
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  bool v27; // cc
  __int64 v28; // r15
  __int64 result; // rax
  unsigned __int64 v30; // r13
  __int64 *v31; // rbp
  __int64 v32; // r10
  __int64 v33; // r9
  unsigned __int64 v34; // r14
  __int64 v35; // rbp
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int8 v40; // si
  unsigned int v41; // ebx
  __int64 v42; // rdx
  unsigned int v43; // ebx
  _QWORD *PrototypePteDirect; // r14
  __int64 v45; // rbx
  signed __int64 *v46; // rsi
  ULONG_PTR v47; // rdi
  _DWORD *v48; // rbx
  unsigned __int8 v49; // r15
  signed __int32 v50; // ett
  unsigned __int64 v51; // r14
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v53; // rax
  struct _EX_RUNDOWN_REF *v54; // rbx
  unsigned __int64 v55; // rax
  signed __int64 v56; // rax
  signed __int64 v57; // rtt
  __int64 v58; // [rsp+30h] [rbp-188h]
  _QWORD *v60; // [rsp+38h] [rbp-180h]
  unsigned __int64 v61; // [rsp+40h] [rbp-178h] BYREF
  _QWORD *v62; // [rsp+48h] [rbp-170h]
  int v63; // [rsp+50h] [rbp-168h]
  _QWORD v64[32]; // [rsp+60h] [rbp-158h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  v4 = (unsigned int)a3;
  v5 = a4;
  LODWORD(v58) = a3;
  CurrentIrql = (_QWORD *)KeGetCurrentIrql();
  v62 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FD40);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(dword_14034FD40, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FD40);
    v9 = (unsigned int)dword_14034FD40[0];
    Process = (unsigned int)dword_14034FD40[0];
    for ( LODWORD(Process) = dword_14034FD40[0] & 0xBFFFFFFF;
          (dword_14034FD40[0] & 0xBFFFFFFF) != 0x80000000;
          v9 = (unsigned int)dword_14034FD40[0] )
    {
      if ( (v9 & 0x40000000) == 0 )
      {
        Process = (unsigned int)v9;
        LODWORD(Process) = v9 | 0x40000000;
        _InterlockedCompareExchange(dword_14034FD40, v9 | 0x40000000, v9);
      }
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  v12 = 0xFFFFFFFFFLL;
  if ( (_DWORD)v4 )
  {
    v13 = 0LL;
    v14 = a1 - (_QWORD)a2;
    while ( 1 )
    {
      v9 = *a2;
      v64[v13] = 0LL;
      v15 = v9;
      if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v9)
        && (v9 & 1) != 0
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        a3 = *(_QWORD *)(Process + 1520);
        if ( a3 )
        {
          v16 = *(_QWORD *)(a3 + 8 * (((unsigned __int64)a2 >> 3) & 0x1FF));
          if ( (v16 & 0x20) != 0 )
            v15 |= 0x20uLL;
          if ( (v16 & 0x42) != 0 )
            v15 |= 0x42uLL;
        }
      }
      v61 = v15;
      if ( !v15 )
        goto LABEL_35;
      if ( (v15 & 1) != 0 )
      {
        v17 = (char *)a2 + v14;
        if ( (*((_BYTE *)a2 + v14) & 1) != 0 )
        {
          v64[v13] = 1LL;
        }
        else
        {
          v18 = v15;
          if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
            v18 = MiReadPteShadow(&v61, v15);
          v19 = 48 * (v12 & (v18 >> 12)) - 0x58000000000LL;
          v64[v13 + 16] = *(_QWORD *)(v19 + 16);
          if ( MiAllocateWsle(dword_14034FD40, v17, v19, 0LL, v15, 0LL, v58) )
          {
            if ( (v64[v13 + 16] & 0x400LL) != 0 )
            {
              v12 = 0xFFFFFFFFFLL;
              if ( PfSnNumActiveTraces )
                v64[v13] = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
              goto LABEL_35;
            }
          }
          else
          {
            v64[v13] = 1LL;
          }
          v12 = 0xFFFFFFFFFLL;
        }
      }
      else
      {
        v9 |= 1uLL;
        v64[v13] = 1LL;
        *a2 = v9;
      }
LABEL_35:
      ++v13;
      ++a2;
      if ( !--v4 )
      {
        LOBYTE(CurrentIrql) = (_BYTE)v62;
        v5 = a4;
        LODWORD(v4) = v58;
        break;
      }
    }
  }
  v20 = byte_14034FE1B;
  if ( (byte_14034FE1B & 0x10) != 0 )
  {
    byte_14034FE1B &= ~0x10u;
    VmPartition = MiGetVmPartition((__int64)dword_14034FD40);
    MiAgeWorkingSet(
      dword_14034FD40,
      (unsigned __int8)CurrentIrql,
      1LL,
      *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
    v20 = byte_14034FE1B;
  }
  if ( (v20 & 0x20) != 0 )
  {
    a3 = qword_14034FDB8;
    v22 = qword_14034FDC8;
    v23 = 7;
    byte_14034FE1B = v20 & 0xDF;
    for ( i = qword_14034FDB8; a3 > v22; i = a3 )
    {
      v25 = i - v22;
      if ( v23 )
      {
        v9 = MiState[(unsigned int)(v23 - 1) + 741];
        v26 = v25;
        v27 = v9 <= v25;
        v25 = v9;
        if ( !v27 )
          v25 = v26;
      }
      if ( v25 )
      {
        MiTrimWorkingSet(v25, (unsigned int)dword_14034FD40, (unsigned __int8)CurrentIrql, v23, 0);
        if ( !v23 )
          break;
        a3 = qword_14034FDB8;
      }
      --v23;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_14034FD40, retaddr);
  else
    dword_14034FD40[0] = 0;
  __writecr8((unsigned __int8)CurrentIrql);
  v28 = 0LL;
  result = -(__int64)(unsigned int)v4;
  v63 = 0;
  v30 = (unsigned __int64)&a2[-(unsigned int)v4];
  if ( (_DWORD)v4 )
  {
    result = (unsigned int)v58;
    v31 = v64;
    v32 = 0x90482413000LL;
    v62 = v64;
    v33 = 0x3FFFFFFFFFFFFFFFLL;
    v34 = v30 + 0x90482413000LL;
    v60 = (_QWORD *)(v30 + 0x90482413000LL);
    while ( 1 )
    {
      v35 = *v31;
      if ( v35 == 1 )
        break;
      if ( v35 )
      {
        PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v64[v28 + 16], v9, a3, 0x3FFFFFFFFFFFFFFFLL);
        v45 = *PrototypePteDirect;
        v46 = (signed __int64 *)(*PrototypePteDirect + 64LL);
        v47 = ObFastReferenceObject(v46);
        if ( !v47 )
        {
          v48 = (_DWORD *)(v45 + 72);
          v49 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v48);
          }
          else
          {
            _m_prefetchw(v48);
            v50 = *v48 & 0x7FFFFFFF;
            if ( v50 != _InterlockedCompareExchange(v48, v50 + 1, v50) )
              ExpWaitForSpinLockSharedAndAcquire(v48);
          }
          v47 = ObFastReferenceObjectLocked(v46);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v48, retaddr);
          }
          else
          {
            _InterlockedAnd(v48, 0xBFFFFFFF);
            _InterlockedDecrement(v48);
          }
          __writecr8(v49);
          LODWORD(v28) = v63;
        }
        v51 = MiStartingOffset(PrototypePteDirect, v35, 0xFFFFFFFFLL);
        if ( !*(_QWORD *)(v47 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v53 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
          v54 = v53;
          if ( v53 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v53, 4) )
              PfSnLogPageFaultCommon((__int64)v54, v47, *(_QWORD *)(v47 + 24), v51, 4);
            _m_prefetchw(&v54[45]);
            v55 = v54[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
            v9 = v55 - 2;
            if ( v55 != _InterlockedCompareExchange64((volatile signed __int64 *)&v54[45], v55 - 2, v55) )
              ExfReleaseRundownProtection(v54 + 45);
          }
        }
        _m_prefetchw(v46);
        v56 = *v46;
        if ( (v47 ^ *v46) >= 0xF )
        {
LABEL_118:
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v47, 0x746C6644u);
        }
        else
        {
          while ( 1 )
          {
            Process = v56 + 1;
            v57 = v56;
            v56 = _InterlockedCompareExchange64(v46, v56 + 1, v56);
            if ( v57 == v56 )
              break;
            if ( (v47 ^ v56) >= 0xF )
              goto LABEL_118;
          }
        }
        v34 = (unsigned __int64)v60;
        v33 = 0x3FFFFFFFFFFFFFFFLL;
        goto LABEL_120;
      }
LABEL_121:
      v28 = (unsigned int)(v28 + 1);
      v31 = v62 + 1;
      v63 = v28;
      v34 += 8LL;
      ++v62;
      v30 += 8LL;
      v60 = (_QWORD *)v34;
      if ( (unsigned int)v28 >= (unsigned int)result )
        return result;
    }
    v36 = *(_QWORD *)v30;
    if ( v34 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v36)
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      a3 = *(_QWORD *)(Process + 1520);
      if ( a3 )
      {
        v37 = *(_QWORD *)(a3 + 8 * ((v30 >> 3) & 0x1FF));
        if ( (v37 & 0x20) != 0 )
          v36 |= 0x20uLL;
        if ( (v37 & 0x42) != 0 )
          v36 |= 0x42uLL;
      }
    }
    v61 = v36;
    if ( (unsigned __int64)&v61 + v32 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v36)
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      a3 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( a3 )
      {
        v38 = *(_QWORD *)(a3 + 8 * (((unsigned __int64)&v61 >> 3) & 0x1FF));
        if ( (v38 & 0x20) != 0 )
          v36 |= 0x20uLL;
        if ( (v38 & 0x42) != 0 )
          v36 |= 0x42uLL;
      }
    }
    v39 = 48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v40 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v41 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v41 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v41);
      }
      while ( (*(_QWORD *)(v39 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
      v33 = 0x3FFFFFFFFFFFFFFFLL;
    }
    if ( (*(_BYTE *)(v39 + 34) & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v39 + 0x58000000000LL) / 48, *(_BYTE *)(v39 + 34) & 7, v33 & *(_QWORD *)(v39 + 24));
    v42 = (v33 & *(_QWORD *)(v39 + 24)) - 1;
    *(_QWORD *)(v39 + 24) ^= v33 & (*(_QWORD *)(v39 + 24) ^ v42);
    if ( !v42 )
      MiPfnShareCountIsZero(v39, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v43 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v43);
      }
      while ( (*(_QWORD *)(v5 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) );
    }
    if ( (*(_BYTE *)(v5 + 34) & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v5 + 0x58000000000LL) / 48,
        *(_BYTE *)(v5 + 34) & 7,
        *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    Process = *(_QWORD *)(v5 + 24);
    v33 = 0x3FFFFFFFFFFFFFFFLL;
    v9 = (Process & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v5 + 24) = Process ^ (Process ^ v9) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (Process & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      MiPfnShareCountIsZero(v5, 0LL);
      v33 = 0x3FFFFFFFFFFFFFFFLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v40);
LABEL_120:
    result = (unsigned int)v58;
    v32 = 0x90482413000LL;
    goto LABEL_121;
  }
  return result;
}
