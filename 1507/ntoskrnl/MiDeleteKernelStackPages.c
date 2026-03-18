/*
 * XREFs of MiDeleteKernelStackPages @ 0x140038168
 * Callers:
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiDeleteKernelStackPages(__int64 *a1, int a2, _QWORD *a3)
{
  __int64 *v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 i; // rdx
  unsigned int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // rbx
  unsigned __int64 Process; // rcx
  _QWORD *v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r8
  int IsZero; // eax
  unsigned int v26; // edi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v30; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v5 = (unsigned __int64)&a1[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(dword_14034FF40, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
    for ( i = (unsigned int)dword_14034FF40[0];
          (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000;
          i = (unsigned int)dword_14034FF40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FF40, i | 0x40000000, i);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  if ( (unsigned __int64)v4 < v5 )
  {
    v9 = 2040LL;
    v10 = 0x58000000000LL;
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v12 = *v4;
      Process = 0x90482413000LL;
      v14 = v4 + 0x12090482600LL;
      if ( (unsigned __int64)(v4 + 0x12090482600LL) <= v9 )
      {
        if ( (unsigned int)MiPteHasShadow(0x90482413000LL, i)
          && (v12 & 1) != 0
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( i )
          {
            v15 = *(_QWORD *)(i + 8 * (((unsigned __int64)v4 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v12 |= 0x20uLL;
            if ( (v15 & 0x42) != 0 )
              v12 |= 0x42uLL;
          }
        }
        Process = 0x90482413000LL;
      }
      v30 = v12;
      if ( (v12 & 1) == 0 )
        goto LABEL_76;
      v16 = v12;
      if ( (unsigned __int64)&STACK[0x90482413060] <= v9
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v12)
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v17 = *(_QWORD *)(Process + 1520);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)&v30 >> 3) & 0x1FF));
          if ( (v18 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v18 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
      }
      v19 = 0;
      v20 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        Process = 0x8000000000000000uLL;
        do
        {
          if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v19);
            Process = 0x8000000000000000uLL;
          }
        }
        while ( (*(_QWORD *)(v20 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
        v9 = 2040LL;
        v10 = 0x58000000000LL;
        v11 = 0x7FFFFFFFFFFFFFFFLL;
      }
      i = *v4;
      if ( (unsigned __int64)v14 <= v9
        && (unsigned int)MiPteHasShadow(Process, i)
        && (i & 1) != 0
        && ((i & 0x20) == 0 || (i & 0x42) == 0) )
      {
        v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)v4 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            i |= 0x20uLL;
          if ( (v22 & 0x42) != 0 )
            i |= 0x42uLL;
        }
      }
      if ( v12 == i )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), v11);
LABEL_77:
      if ( (unsigned __int64)v4 >= v5 )
        goto LABEL_78;
    }
    *v4 = 0LL;
    if ( (unsigned __int64)v14 <= v9 )
      MiWritePteShadow(v4, 0LL);
    *(_QWORD *)(v20 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v23 = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v20 + 24) |= 0x4000000000000000uLL;
    v24 = *(_QWORD *)(v20 + 24);
    if ( (*(_BYTE *)(v20 + 34) & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v20 + 0x58000000000LL) / 48, *(_BYTE *)(v20 + 34) & 7, v24 & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(v20 + 24) = v24 ^ (((v24 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v24 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      IsZero = MiPfnShareCountIsZero(v20, 0LL);
    else
      IsZero = 2;
    if ( IsZero == 3 )
      ++a3[1];
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++a3[3];
    ++*a3;
    v26 = 0;
    v27 = 48 * v23 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v26);
      }
      while ( (*(_QWORD *)(v27 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
    }
    if ( (*(_BYTE *)(v27 + 34) & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v27 + 0x58000000000LL) / 48,
        *(_BYTE *)(v27 + 34) & 7,
        *(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v28 = *(_QWORD *)(v27 + 24);
    i = (v28 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v27 + 24) = v28 ^ (i ^ v28) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v28 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v27, i);
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = 2040LL;
    v10 = 0x58000000000LL;
LABEL_76:
    ++v4;
    goto LABEL_77;
  }
LABEL_78:
  LOBYTE(i) = CurrentIrql;
  return MiUnlockWorkingSetExclusive(dword_14034FF40, i);
}
