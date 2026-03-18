/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x1404F3670
 * Callers:
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspIsServerSilo @ 0x1400B2DF8 (PspIsServerSilo.c)
 *     MmAssignProcessToJob @ 0x1400B934C (MmAssignProcessToJob.c)
 *     PspChangeProcessExecutionState @ 0x140469960 (PspChangeProcessExecutionState.c)
 *     PspUnlockJobChain @ 0x140469E6C (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x140469EEC (PspLockJobChain.c)
 *     PspAddProcessToJobChain @ 0x14046A2B8 (PspAddProcessToJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14046A558 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspEstablishJobHierarchy @ 0x1404F2FFC (PspEstablishJobHierarchy.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(_DWORD *Object, ULONG_PTR BugCheckParameter1, __int16 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v7; // r8d
  _DWORD *v8; // rbx
  int v9; // edi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain((__int64)Object, (__int64)CurrentThread);
  v7 = 1;
  v8 = Object;
  if ( (a3 & 0x400) != 0 )
  {
    if ( !Object )
      goto LABEL_15;
    do
    {
      if ( (v8[326] & 0x40000000) != 0 && PspIsServerSilo((__int64)v8) )
        break;
      v8 = (_DWORD *)*((_QWORD *)v8 + 132);
    }
    while ( v8 );
  }
  else
  {
    if ( Object )
    {
      do
      {
        if ( (v8[64] & 0x1000) == 0 && ((v8[64] & 0x800) == 0 || (a3 & 1) == 0) )
          break;
        v8 = (_DWORD *)*((_QWORD *)v8 + 132);
      }
      while ( v8 );
    }
    if ( (a3 & 1) != 0 && v8 == Object && (v8[326] & 0x40000000) == 0 )
    {
      v9 = -1073741790;
      goto LABEL_16;
    }
  }
  if ( !v8 )
  {
LABEL_15:
    v9 = 0;
LABEL_16:
    PspUnlockJobChain((__int64)Object, (__int64)CurrentThread);
    return (unsigned int)v9;
  }
  v9 = PspEstablishJobHierarchy(v8, BugCheckParameter1, v7);
  if ( v9 < 0 )
    goto LABEL_16;
  v9 = PspAddProcessToJobChain((__int64)v8, 0LL, BugCheckParameter1, a3);
  if ( v9 < 0 )
    goto LABEL_16;
  if ( (v8[326] & 0x1000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1824), 0x1Fu);
  PspUnlockJobChain((__int64)Object, (__int64)CurrentThread);
  v10 = PspApplyWorkingSetLimitsToProcess(BugCheckParameter1);
  if ( v10 >= 0 && !(unsigned int)MmAssignProcessToJob(BugCheckParameter1, 0LL) )
    v10 = -1073741756;
  --CurrentThread->KernelApcDisable;
  PspChangeProcessExecutionState((_KPROCESS *)BugCheckParameter1);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
  return (unsigned int)v10;
}
