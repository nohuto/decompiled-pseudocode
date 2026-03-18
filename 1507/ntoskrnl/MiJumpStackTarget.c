/*
 * XREFs of MiJumpStackTarget @ 0x1401347E4
 * Callers:
 *     MiDoStackCopy @ 0x1401346F8 (MiDoStackCopy.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCanStealKernelStack @ 0x140120138 (MiCanStealKernelStack.c)
 *     MiSwitchKstackPages @ 0x140134ADC (MiSwitchKstackPages.c)
 *     MiCopyKstack @ 0x140134B58 (MiCopyKstack.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // rdi
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // r13
  unsigned int v10; // esi
  signed __int32 i; // edx
  unsigned int v12; // esi
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // rsi
  signed __int32 v17; // eax
  unsigned int v18; // edi
  volatile signed __int32 *result; // rax

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = 0;
  v6 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v15 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v6 )
    {
      if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v15);
    }
  }
  else
  {
    *(_DWORD *)v3 = v6 | *(_DWORD *)(v3 + 4);
    if ( !*(_DWORD *)(v1 + 32) )
    {
      v7 = 48LL * *(_QWORD *)v1 - 0x58000000000LL;
      v8 = 48LL * *(_QWORD *)(v1 + 8) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
      }
      else
      {
        v10 = 0;
        if ( _interlockedbittestandset(dword_14034FF40, 0x1Fu) )
          v10 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
        for ( i = dword_14034FF40[0]; (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FF40[0] )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange(dword_14034FF40, i | 0x40000000, i);
          if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v10);
        }
      }
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v13 = *(_QWORD *)(v1 + 40);
      if ( (unsigned int)MiCanStealKernelStack(v7) == 1
        && *(_QWORD *)v7 != -5LL
        && (*(_QWORD *)v7 & 1) != 0
        && v13 == (__int64)(*(_QWORD *)(v7 + 8) << 25) >> 16 )
      {
        if ( *(_QWORD *)(v1 + 48) )
          MiRemoveLockedPageChargeAndDecRef(v7);
        MiCopyKstack(v8, v7, *(_QWORD *)(v1 + 16));
        KeFlushSingleTb(v13, 0, 2);
        MiSwitchKstackPages(v8, v7);
        *(_BYTE *)(v7 + 34) &= 0xC7u;
        *(_QWORD *)(v7 + 40) &= ~0x200000000000000uLL;
        *(_BYTE *)(v7 + 35) &= ~0x20u;
        *(_DWORD *)(v1 + 32) = 0;
      }
      else
      {
        *(_DWORD *)(v1 + 32) = -1073740748;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v14 = *(_QWORD **)(v1 + 16);
      *v14 = 0LL;
      if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v14, 0LL);
      MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, CurrentIrql);
    }
  }
  v16 = a1[2];
  v17 = _InterlockedDecrement((volatile signed __int32 *)v16);
  v18 = ~v17 & 0x80000000;
  if ( (v17 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)v16 & 0x80000000) != v18 )
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  else
  {
    *(_DWORD *)v16 = v18 | *(_DWORD *)(v16 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
