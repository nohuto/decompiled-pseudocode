/*
 * XREFs of MiCloneReserveVadCommit @ 0x14000158C
 * Callers:
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14008B5D0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiCloneReserveVadCommit(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // r9d
  int v5; // r15d
  _KPROCESS *Process; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned __int64 NextPageTable; // rdi
  __int64 v14; // rsi
  unsigned int v15; // edi
  signed __int32 v16; // eax
  _KPROCESS *v19; // [rsp+38h] [rbp-80h]
  char v20[8]; // [rsp+40h] [rbp-78h] BYREF
  char v21[48]; // [rsp+48h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = 0;
  Process = CurrentThread->ApcState.Process;
  v19 = Process;
  v7 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v8 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v9 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(&Process[1].IdealNode[8]);
    while ( 1 )
    {
      v12 = *(unsigned int *)v9;
      if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v12 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, v12 | 0x40000000, v12);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  while ( v7 <= v8 )
  {
    LOBYTE(v4) = CurrentIrql;
    NextPageTable = MiGetNextPageTable(v7, v8, 0, v4, 1, (__int64)v20);
    if ( !NextPageTable )
      break;
    LOBYTE(v12) = CurrentIrql;
    MiUnlockWorkingSetExclusive(v9, v12);
    v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    KiStackAttachProcess(a2);
    LOCK_PAGE_TABLE_COMMITMENT(CurrentThread, v19);
    v5 = MiCommitPageTablesForVad(a1, (__int64)(NextPageTable << 25) >> 16, (__int64)(NextPageTable << 25) >> 16);
    UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, v19);
    KiUnstackDetachProcess(v21, 0LL);
    if ( v5 < 0 )
      return (unsigned int)v5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
    }
    else
    {
      v15 = 0;
      if ( _interlockedbittestandset(v9, 0x1Fu) )
        v15 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
      while ( 1 )
      {
        v16 = *v9;
        if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v16 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v9, v16 | 0x40000000, v16);
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
    }
    v7 = (v14 + 8) << 25 >> 16;
  }
  LOBYTE(v12) = CurrentIrql;
  MiUnlockWorkingSetExclusive(v9, v12);
  return (unsigned int)v5;
}
