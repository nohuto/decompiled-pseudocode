/*
 * XREFs of MiCreateForkWsle @ 0x140001B8C
 * Callers:
 *     MiCreateForkWsles @ 0x140001A9C (MiCreateForkWsles.c)
 *     MiCreateForkWsle @ 0x140001B8C (MiCreateForkWsle.c)
 * Callees:
 *     MiCreateForkWsle @ 0x140001B8C (MiCreateForkWsle.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiCreateForkWsle(
        _KPROCESS *Process,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // rdi
  _KPROCESS *v7; // r10
  unsigned __int64 PteShadow; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // esi
  signed __int32 i; // edx
  unsigned __int64 v17[5]; // [rsp+30h] [rbp-28h] BYREF
  _KPROCESS *v18; // [rsp+60h] [rbp+8h]
  __int64 CurrentIrql; // [rsp+70h] [rbp+18h]

  if ( (unsigned __int64)a3 <= a4 )
  {
    v18 = Process;
    v5 = a4;
    CurrentIrql = a2;
    v6 = a3;
    v7 = Process;
    while ( 1 )
    {
      PteShadow = *v6;
      if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow(Process, a2)
          && (PteShadow & 1) != 0
          && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v9 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 8 * (((unsigned __int64)v6 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              PteShadow |= 0x20uLL;
            if ( (v10 & 0x42) != 0 )
              PteShadow |= 0x42uLL;
          }
        }
        LODWORD(a2) = CurrentIrql;
      }
      v17[0] = PteShadow;
      if ( (PteShadow & 1) == 0 )
        goto LABEL_36;
      if ( a5 > 1 )
        break;
      if ( (PteShadow & 0x80u) == 0LL )
        goto LABEL_18;
LABEL_36:
      v7 = v18;
      ++v6;
      a2 = CurrentIrql;
      if ( (unsigned __int64)v6 > v5 )
        return;
    }
    MiCreateForkWsle(
      (_DWORD)v7,
      a2,
      (__int64)((_QWORD)v6 << 25) >> 16,
      ((__int64)((_QWORD)v6 << 25) >> 16) + 4088,
      a5 - 1);
    v7 = v18;
LABEL_18:
    if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
      PteShadow = MiReadPteShadow(v17, PteShadow);
    v11 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
    v12 = (_QWORD *)(48 * v11 - 0x58000000000LL);
    if ( !*v12 && !MiAllocateWsle(v7, v6, 48 * v11 - 0x58000000000LL, 0LL, ZeroPte, 0LL, v17[0]) )
    {
      do
      {
        LOBYTE(v13) = CurrentIrql;
        v14 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
        MiUnlockWorkingSetExclusive(v14, v13);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v14);
        }
        else
        {
          v15 = 0;
          if ( _interlockedbittestandset(v14, 0x1Fu) )
            v15 = ExpWaitForSpinLockExclusiveAndAcquire(v14);
          for ( i = *v14; (*v14 & 0xBFFFFFFF) != 0x80000000; i = *v14 )
          {
            if ( (i & 0x40000000) == 0 )
              _InterlockedCompareExchange(v14, i | 0x40000000, i);
            if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v15);
          }
        }
      }
      while ( !MiAllocateWsle(v18, v6, v12, 0LL, ZeroPte, 0LL, v17[0]) );
      v5 = a4;
    }
    goto LABEL_36;
  }
}
