/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x1401076E8
 * Callers:
 *     MiCfgEliminateZeroPages @ 0x140520CD0 (MiCfgEliminateZeroPages.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiTryLocateWsle @ 0x140095390 (MiTryLocateWsle.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiConvertAndFlushWsleVas(volatile signed __int32 *a1, unsigned int *a2)
{
  __int64 v4; // rbp
  __int64 CurrentIrql; // r15
  unsigned int v6; // edi
  signed __int32 i; // edx
  __int64 v8; // r14
  _KPROCESS *Process; // rcx
  ULONG_PTR v10; // r9
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  ULONG_PTR Wsle; // rax
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]

  v4 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(a1, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
    for ( i = *a1; (*a1 & 0xBFFFFFFF) != 0x80000000; i = *a1 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(a1, i | 0x40000000, i);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  v8 = 0LL;
  if ( *a2 )
  {
    do
    {
      if ( MiIsAddressValid(*(_QWORD *)&a2[2 * v8 + 2]) )
      {
        v11 = (unsigned __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v12 = *v11;
        if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v12)
          && (v12 & 1) != 0
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v14 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8 * ((v13 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v12 |= 0x20uLL;
            if ( (v15 & 0x42) != 0 )
              v12 |= 0x42uLL;
          }
        }
        v21 = v12;
        if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v12)
          && (v12 & 1) != 0
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          v16 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 8 * (((unsigned __int64)&v21 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
              v12 |= 0x20uLL;
            if ( (v17 & 0x42) != 0 )
              v12 |= 0x42uLL;
          }
        }
        v18 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        Wsle = MiTryLocateWsle(v10, (__int64)a1, *(_QWORD *)v18);
        if ( Wsle != 0xFFFFFFFFFLL && *(__int64 *)(v18 + 8) < 0 )
        {
          *(_QWORD *)&a2[2 * v4 + 2] = Wsle;
          v4 = (unsigned int)(v4 + 1);
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *a2 );
    LOBYTE(CurrentIrql) = v22;
    if ( (_DWORD)v4 )
    {
      *a2 = v4;
      MiFreeWsleList((__int64)a1, a2, 0);
    }
  }
  return MiUnlockWorkingSetExclusive((__int64)a1, CurrentIrql);
}
