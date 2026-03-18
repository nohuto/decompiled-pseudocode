/*
 * XREFs of MiWaitForRotateToComplete @ 0x140139DBC
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // r9
  unsigned int v4; // edi
  _KPROCESS *Process; // rbx
  _QWORD *i; // r8
  __int64 v7; // rsi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int32 v12; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = a1 >> 12;
  v4 = 0;
  Process = CurrentThread->ApcState.Process;
  for ( i = (_QWORD *)Process[1].Affinity.Bitmap[9]; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    v7 = i[1];
    if ( v3 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
      && v3 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
    {
      break;
    }
  }
  if ( (struct _KTHREAD *)i[2] == CurrentThread )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 36));
  v9 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  MiUnlockWorkingSetExclusive((__int64)v9, a2);
  MiLockVad((__int64)CurrentThread, v7, v10, v11);
  MiUnlockAndDereferenceVad((char *)v7);
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
  }
  else
  {
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
    while ( 1 )
    {
      v12 = *v9;
      if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v12 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, v12 | 0x40000000, v12);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  return 1LL;
}
