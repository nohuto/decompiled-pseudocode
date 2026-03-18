/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x1403E8B34
 * Callers:
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     MmAssignProcessToJob @ 0x1403E8528 (MmAssignProcessToJob.c)
 *     PspAddProcessToJobChain @ 0x1403E8E64 (PspAddProcessToJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1403E9200 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspLockJobChain @ 0x1403E951C (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1403E9574 (PspUnlockJobChain.c)
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(volatile signed __int32 *Object, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int32 *v7; // rbx
  int v8; // esi
  int v9; // ebx
  __int64 v11; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(Object, CurrentThread);
  v7 = Object;
  if ( (a3 & 0x400) != 0 )
  {
    if ( !Object )
      goto LABEL_15;
    while ( 1 )
    {
      v11 = *((_QWORD *)v7 + 156);
      if ( v11 )
      {
        if ( *(_QWORD *)(v11 + 136) )
          break;
      }
      v7 = (volatile signed __int32 *)*((_QWORD *)v7 + 133);
      if ( !v7 )
        goto LABEL_15;
    }
  }
  else
  {
    if ( Object )
    {
      do
      {
        if ( (v7[64] & 0x1000) == 0 && ((v7[64] & 0x800) == 0 || (a3 & 1) == 0) )
          break;
        v7 = (volatile signed __int32 *)*((_QWORD *)v7 + 133);
      }
      while ( v7 );
    }
    if ( (a3 & 1) != 0 && v7 == Object && !*((_QWORD *)v7 + 156) )
    {
      v8 = -1073741790;
      goto LABEL_16;
    }
  }
  if ( !v7 )
  {
LABEL_15:
    v8 = 0;
LABEL_16:
    PspUnlockJobChain(Object, CurrentThread);
    return (unsigned int)v8;
  }
  v8 = PspEstablishJobHierarchy(v7, a2, 1u);
  if ( v8 < 0 )
    goto LABEL_16;
  v8 = PspAddProcessToJobChain(v7, 0LL, a2, a3);
  if ( v8 < 0 )
    goto LABEL_16;
  if ( (v7[324] & 0x1000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1808), 0x1Fu);
  PspUnlockJobChain(Object, CurrentThread);
  v9 = PspApplyWorkingSetLimitsToProcess(a2);
  if ( v9 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL) )
    v9 = -1073741756;
  --CurrentThread->KernelApcDisable;
  PspChangeProcessExecutionState((PEPROCESS)a2);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v9;
}
