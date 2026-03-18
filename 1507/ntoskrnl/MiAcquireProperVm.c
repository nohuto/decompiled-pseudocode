/*
 * XREFs of MiAcquireProperVm @ 0x1400FB9F8
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFaultPteIntact @ 0x1400FD2C4 (MiFaultPteIntact.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAcquireProperVm(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 **v2; // rbp
  unsigned __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int8 CurrentIrql; // r12
  char v11; // r10
  int v12; // ett
  __int64 v13; // rsi
  __int64 *v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // bl
  _KPROCESS *Process; // rcx
  unsigned __int64 v21; // r14
  volatile signed __int32 *v22; // r14
  unsigned __int8 v23; // r13
  unsigned int v24; // r12d
  signed __int32 v25; // edx
  unsigned __int8 *v26; // r12
  int v27; // ett
  unsigned __int8 *v28; // rcx
  unsigned __int64 v29; // r9
  __int64 v30; // r10
  __int64 *v31; // r8
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v37; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v39; // rax
  bool v40; // zf
  __int64 v41; // [rsp+60h] [rbp+0h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+58h]

  v2 = (unsigned __int8 **)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL);
  *v2 = a2;
  *a2 = 17;
  v3 = (unsigned __int64 *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 16);
  v4 = (a1 >> 18) & 0x3FFFFFF8;
  v6 = 3LL;
  v7 = (_QWORD *)(v4 - 0x904C0000000LL);
  LODWORD(v8) = 3;
  v2[1] = (unsigned __int8 *)(v4 - 0x904C0000000LL);
  v9 = v4 - 0x904C0000000LL;
  do
  {
    *v3++ = v9;
    v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  CurrentIrql = KeGetCurrentIrql();
  v11 = 2;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
LABEL_7:
    v7 = *(_QWORD **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v11 = 2;
    goto LABEL_8;
  }
  _m_prefetchw(&dword_14034EE88);
  v12 = dword_14034EE88 & 0x7FFFFFFF;
  if ( v12 != _InterlockedCompareExchange(
                &dword_14034EE88,
                (dword_14034EE88 & 0x7FFFFFFF) + 1,
                dword_14034EE88 & 0x7FFFFFFF) )
  {
    ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
    goto LABEL_7;
  }
LABEL_8:
  v13 = 0LL;
  do
  {
    v8 = (unsigned int)(v8 - 1);
    v14 = *(__int64 **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10 + 8 * v8);
    v15 = *v14;
    if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, v15)
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 8 * ((v16 >> 3) & 0x1FF));
        if ( (v18 & 0x20) != 0 )
          LOBYTE(v15) = v15 | 0x20;
        if ( (v18 & 0x42) != 0 )
          LOBYTE(v15) = v15 | 0x42;
      }
    }
    if ( (v15 & 1) == 0 )
      goto LABEL_106;
  }
  while ( (_DWORD)v8 );
  if ( (v15 & 0x80u) != 0LL )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EE88);
    }
    v13 = 1LL;
    goto LABEL_109;
  }
  if ( a1 + 0x70000000000LL > 0x7FFFFFFFFFLL )
  {
    if ( qword_14034EE00 && a1 >= qword_14034EE00 && a1 < qword_14034EE00 + (qword_14034EDE0 << 21) )
    {
      v19 = 4;
      v22 = dword_14034FD40;
    }
    else if ( a1 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
           || qword_14034EDB0
           && a1 >= qword_14034EDB0
           && a1 < qword_14034EDB0 + (qword_14034ED90 << 21)
           && (*(_BYTE *)(48 * ((*v7 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      v19 = v11;
      v22 = dword_14034FE40;
    }
    else
    {
      v19 = 8;
      v22 = dword_14034FF40;
    }
    goto LABEL_37;
  }
  v19 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v21 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v21 || Process == PsInitialSystemProcess )
  {
LABEL_106:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EE88);
    }
LABEL_109:
    __writecr8(CurrentIrql);
    return v13;
  }
  v22 = (volatile signed __int32 *)(v21 + 2968);
LABEL_37:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_14034EE88);
  }
  __writecr8(CurrentIrql);
  v23 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v22);
  }
  else
  {
    v24 = 0;
    if ( _interlockedbittestandset(v22, 0x1Fu) )
      v24 = ExpWaitForSpinLockExclusiveAndAcquire(v22);
    while ( 1 )
    {
      v25 = *v22;
      if ( (*v22 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v25 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v22, v25 | 0x40000000, v25);
      if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v24);
    }
  }
  v26 = *v2;
  **v2 = v23;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
  }
  else
  {
    _m_prefetchw(&dword_14034EE88);
    v27 = dword_14034EE88 & 0x7FFFFFFF;
    if ( v27 != _InterlockedCompareExchange(
                  &dword_14034EE88,
                  (dword_14034EE88 & 0x7FFFFFFF) + 1,
                  dword_14034EE88 & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
  }
  LODWORD(v28) = 3;
  v29 = 2040LL;
  v30 = 0x12090482600LL;
  do
  {
    v28 = (unsigned __int8 *)(unsigned int)((_DWORD)v28 - 1);
    *v2 = v28;
    v31 = *(__int64 **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10 + 8LL * (_QWORD)v28);
    v32 = *v31;
    if ( (unsigned __int64)&v31[v30] <= v29 )
    {
      if ( (unsigned int)MiPteHasShadow(v28, v32) && (v32 & 1) != 0 && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * ((v33 >> 3) & 0x1FF));
          if ( (v35 & 0x20) != 0 )
            LOBYTE(v32) = v32 | 0x20;
          if ( (v35 & 0x42) != 0 )
            LOBYTE(v32) = v32 | 0x42;
        }
      }
      v28 = *v2;
    }
    if ( (v32 & 1) == 0 )
      goto LABEL_80;
  }
  while ( (_DWORD)v28 );
  if ( (v32 & 0x80u) != 0LL )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EE88);
    }
    MiUnlockWorkingSetExclusive((__int64)v22, *v26);
    return 1LL;
  }
  v37 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v37;
  if ( (unsigned __int64)&v37[v30] <= v29 )
    PteShadow = MiReadPteShadow(v37, *v37);
  if ( (PteShadow & 1) == 0 && !(unsigned int)MiFaultPteIntact(PteShadow) )
  {
LABEL_80:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EE88);
    }
    MiUnlockWorkingSetExclusive((__int64)v22, *v26);
    return 0LL;
  }
  v39 = a1 + 0x70000000000LL;
  if ( (v19 & 1) != 0 )
  {
    if ( v39 > 0x7FFFFFFFFFLL )
      goto LABEL_80;
    goto LABEL_96;
  }
  if ( v39 <= 0x7FFFFFFFFFLL )
    goto LABEL_80;
  if ( qword_14034EE00 && a1 >= qword_14034EE00 && a1 < qword_14034EE00 + (qword_14034EDE0 << 21) )
  {
    v40 = (v19 & 4) == 0;
    goto LABEL_95;
  }
  if ( a1 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
    || qword_14034EDB0
    && a1 >= qword_14034EDB0
    && a1 < qword_14034EDB0 + (qword_14034ED90 << 21)
    && (*(_BYTE *)(48 * ((**(_QWORD **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8) >> 12) & 0xFFFFFFFFFLL)
                 - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
  {
    v40 = (v19 & 2) == 0;
LABEL_95:
    if ( v40 )
      goto LABEL_80;
    goto LABEL_96;
  }
  if ( (v19 & 8) == 0 )
    goto LABEL_80;
LABEL_96:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_14034EE88);
  }
  return (__int64)v22;
}
