/*
 * XREFs of MiProtoFault @ 0x1400FE484
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIncrementSubsectionViewCount @ 0x1400859A4 (MiIncrementSubsectionViewCount.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiFaultPteIntact @ 0x1400FD2C4 (MiFaultPteIntact.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiProtoFault(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        char a6,
        unsigned int **a7)
{
  unsigned int v7; // edi
  _QWORD *BugCheckParameter4; // rcx
  unsigned int *v14; // rsi
  __int64 v15; // rbp
  volatile signed __int32 *v16; // rbx
  unsigned int v17; // esi
  signed __int32 i; // edx
  int v19; // eax
  unsigned __int8 v20; // r12
  unsigned int v21; // r13d
  signed __int8 v22; // cf
  unsigned int v23; // ebx
  signed __int32 j; // edx
  char *v25; // rcx
  __int64 *v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  _KPROCESS *Process; // rcx
  int v30; // ett
  __int64 v31; // r10
  unsigned __int64 v32; // r9
  __int64 *v33; // r8
  __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  volatile __int64 *v38; // rsi
  unsigned __int64 PteShadow; // rbx
  unsigned __int8 v40; // r9
  int v41; // eax
  unsigned int *v42; // [rsp+40h] [rbp-88h] BYREF
  __int64 CurrentIrql; // [rsp+48h] [rbp-80h]
  unsigned int **v44; // [rsp+50h] [rbp-78h]
  __int64 v45; // [rsp+58h] [rbp-70h] BYREF
  char v46; // [rsp+60h] [rbp-68h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v7 = 0;
  v44 = a7;
  BugCheckParameter4 = (_QWORD *)a5;
  *a7 = 0LL;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 && a4 != qword_14034EB58 )
  {
    if ( !a5 )
    {
      BugCheckParameter4 = MiLocateAddress(a3);
      if ( !BugCheckParameter4 )
      {
        MiUnlockWorkingSetExclusive(a1, *a2);
        return 3221225495LL;
      }
    }
    if ( (BugCheckParameter4[6] & 0x8000) != 0 )
      KeBugCheckEx(0x1Au, 0x61944uLL, a3, a4, (ULONG_PTR)BugCheckParameter4);
    MiGetProtoPteAddress((__int64)BugCheckParameter4, a3 >> 12, 0, &v42);
    v14 = v42;
    v15 = *(_QWORD *)v42;
    v16 = (volatile signed __int32 *)(*(_QWORD *)v42 + 72LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16);
    }
    else
    {
      v17 = 0;
      if ( _interlockedbittestandset(v16, 0x1Fu) )
        v17 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
      for ( i = *v16; (*v16 & 0xBFFFFFFF) != 0x80000000; i = *v16 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v16, i | 0x40000000, i);
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17);
      }
      v14 = v42;
    }
    ++*(_QWORD *)(v15 + 40);
    v19 = *(_DWORD *)(v15 + 56);
    if ( (v19 & 0x20) == 0 && *(_QWORD *)(v15 + 64) && (v19 & 0x400) == 0 )
      MiIncrementSubsectionViewCount(v14, 17);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
    else
      *v16 = 0;
    __writecr8((unsigned __int8)CurrentIrql);
    *v44 = v14;
  }
  MiUnlockWorkingSetExclusive(a1, *a2);
  v20 = KeGetCurrentIrql();
  v21 = 2;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FE40);
  }
  else
  {
    v22 = _interlockedbittestandset(dword_14034FE40, 0x1Fu);
    v23 = 0;
    if ( v22 )
      v23 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FE40);
    for ( j = dword_14034FE40[0]; (dword_14034FE40[0] & 0xBFFFFFFF) != 0x80000000; j = dword_14034FE40[0] )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FE40, j | 0x40000000, j);
      if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v23);
    }
  }
  *a2 = v20;
  if ( a6 == 1 )
  {
    v25 = &v46;
    v26 = &v45;
    v27 = 2LL;
    v45 = ((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    do
    {
      v28 = (unsigned __int64)*v26++ >> 9;
      *(_QWORD *)v25 = (v28 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v25 += 8;
      --v27;
    }
    while ( v27 );
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
    }
    else
    {
      _m_prefetchw(&dword_14034EE88);
      Process = (_KPROCESS *)((dword_14034EE88 & 0x7FFFFFFFu) + 1);
      v30 = dword_14034EE88 & 0x7FFFFFFF;
      if ( v30 != _InterlockedCompareExchange(&dword_14034EE88, (signed __int32)Process, dword_14034EE88 & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
    }
    v31 = 0x12090482600LL;
    v32 = 2040LL;
    while ( 1 )
    {
      v33 = (__int64 *)*(&v45 + v21);
      v34 = *v33;
      if ( (unsigned __int64)&v33[v31] <= v32 && (unsigned int)MiPteHasShadow(Process, v34) )
      {
        if ( (v34 & 1) == 0 )
          goto LABEL_77;
        if ( (v34 & 0x20) == 0 || (v34 & 0x42) == 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v36 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v36 )
          {
            v37 = *(_QWORD *)(v36 + 8 * ((v35 >> 3) & 0x1FF));
            if ( (v37 & 0x20) != 0 )
              LOBYTE(v34) = v34 | 0x20;
            if ( (v37 & 0x42) != 0 )
              LOBYTE(v34) = v34 | 0x42;
          }
        }
      }
      if ( (v34 & 1) == 0 )
        goto LABEL_77;
      if ( !v21 )
        break;
      --v21;
    }
    if ( (v34 & 0x80u) != 0LL
      || a4 + 0x400000000000LL > 0xF7FFFFFFFFFLL
      && (!qword_14034EDB0
       || a4 < qword_14034EDB0
       || a4 >= qword_14034EDB0 + (qword_14034ED90 << 21)
       || (*(_BYTE *)(48 * ((*(_QWORD *)(((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
    {
LABEL_77:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
      }
      else
      {
        _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14034EE88);
      }
      MiUnlockWorkingSetExclusive((__int64)dword_14034FE40, *a2);
      return 0LL;
    }
    v38 = (volatile __int64 *)(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v38;
    if ( (unsigned __int64)&v38[v31] <= v32 )
      PteShadow = MiReadPteShadow(v38, *v38);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034EE88);
    }
    if ( (PteShadow & 1) == 0 )
    {
      if ( MiFaultPteIntact(PteShadow) )
        goto LABEL_87;
      v7 = -1073741819;
      goto LABEL_90;
    }
    if ( (PteShadow & 0x200) == 0 )
      goto LABEL_90;
    v40 = *a2;
    goto LABEL_86;
  }
  v38 = (volatile __int64 *)(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v38;
  if ( (unsigned __int64)(v38 + 0x12090482600LL) <= 0x7F8 )
    LOWORD(PteShadow) = MiReadPteShadow(v38, *v38);
  if ( (PteShadow & 1) != 0 )
  {
    if ( (PteShadow & 0x200) == 0 )
    {
LABEL_90:
      MiUnlockWorkingSetExclusive((__int64)dword_14034FE40, *a2);
      return v7;
    }
    v40 = v20;
LABEL_86:
    MiCopyOnWriteEx(a4, v38, -1LL, v40, 0);
    goto LABEL_90;
  }
LABEL_87:
  if ( (PteShadow & 0x402) == 0x402 )
  {
    v41 = MiResolveDemandZeroFault(0LL, a4, 0LL, (unsigned __int64 *)v38, (__int64)dword_14034FE40, *a2, 0);
    if ( v41 < 0 )
    {
      v7 = v41;
      goto LABEL_90;
    }
  }
  return 3221225494LL;
}
