/*
 * XREFs of MiWaitForForkToComplete @ 0x1402314F8
 * Callers:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWaitForForkToComplete(__int64 a1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  signed __int32 v9; // edx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 896) == CurrentThread )
    return 0LL;
  v5 = (volatile signed __int32 *)(a1 + 1272);
  MiUnlockWorkingSetExclusive(a1 + 1272, a2);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v6, v7);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
    while ( 1 )
    {
      v9 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v9 | 0x40000000, v9);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  return 1LL;
}
