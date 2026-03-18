/*
 * XREFs of MiEmptyWsPrivatePagesCallback @ 0x1402138D0
 * Callers:
 *     <none>
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x14007BAE0 (MiEmptyWorkingSetHelper.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall MiEmptyWsPrivatePagesCallback(unsigned __int64 Process, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 *v6; // rsi
  unsigned __int64 i; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  ULONG_PTR *v13; // r8
  unsigned __int64 Wsle; // rax
  unsigned int *v15; // rdx
  int result; // eax
  signed __int32 v17; // edx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)Process;
  v4 = 0;
  v6 = a2;
  for ( i = Process; (unsigned __int64)v6 <= a3; ++v6 )
  {
    v8 = *v6;
    if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      a2 = *(unsigned __int64 **)(Process + 1520);
      if ( a2 )
      {
        v9 = a2[((unsigned __int64)v6 >> 3) & 0x1FF];
        if ( (v9 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v9 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
    }
    v18 = v8;
    if ( (v8 & 1) != 0 )
    {
      if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, a2)
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)&v18 >> 3) & 0x1FF));
          if ( (v11 & 0x20) != 0 )
            v8 |= 0x20uLL;
          if ( (v11 & 0x42) != 0 )
            v8 |= 0x42uLL;
        }
      }
      if ( MI_IS_PFN((v8 >> 12) & 0xFFFFFFFFFLL) )
      {
        Process = 0x200000000000000LL;
        v13 = (ULONG_PTR *)(48 * v12 - 0x58000000000LL);
        if ( (v13[5] & 0x200000000000000LL) == 0 )
        {
          Process = 0x8000000000000000uLL;
          if ( (unsigned __int64 *)(v13[1] | 0x8000000000000000uLL) == v6 )
          {
            Wsle = MiLocateWsle((__int64)((_QWORD)v6 << 25) >> 16, v3, *v13);
            Process = *(_QWORD *)(v3 + 184);
            if ( Wsle >= *(_QWORD *)(Process + 8) )
              MiEmptyWorkingSetHelper(v3, v6, Wsle, *(_DWORD **)(i + 16));
          }
        }
      }
    }
  }
  v15 = *(unsigned int **)(i + 16);
  if ( *v15 )
  {
    MiFreeWsleList(v3, v15, 0);
    **(_DWORD **)(i + 16) = 0;
  }
  if ( (*(_DWORD *)v3 & 0x40000000) != 0 || (result = KeShouldYieldProcessor()) != 0 )
  {
    MiUnlockWorkingSetExclusive(v3, *(_BYTE *)(i + 8));
    result = 2;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      return ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
    }
    else
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)v3, 0x1Fu) )
      {
        result = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v3);
        v4 = result;
      }
      v17 = *(_DWORD *)v3;
      if ( (*(_DWORD *)v3 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v17 & 0x40000000) == 0 )
            _InterlockedCompareExchange((volatile signed __int32 *)v3, v17 | 0x40000000, v17);
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
          v17 = *(_DWORD *)v3;
          result = *(_DWORD *)v3 & 0xBFFFFFFF;
        }
        while ( result != 0x80000000 );
      }
    }
  }
  return result;
}
