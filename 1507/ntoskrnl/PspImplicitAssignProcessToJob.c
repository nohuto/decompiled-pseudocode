/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x14041AAC8
 * Callers:
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspUnlockJobChain @ 0x14041AC44 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x14041ACD8 (PspLockJobChain.c)
 *     MmAssignProcessToJob @ 0x14041AD30 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14041B1FC (PspApplyWorkingSetLimitsToProcess.c)
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(_QWORD *Object, volatile signed __int32 *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *i; // rdi
  int v8; // esi
  int v9; // edi
  __int16 v10; // ax

  if ( (a3 & 0x400) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(Object, CurrentThread);
  for ( i = Object; i; i = (_QWORD *)i[133] )
  {
    if ( (i[32] & 0x1000) == 0 && ((i[32] & 0x800) == 0 || (a3 & 1) == 0) )
      break;
  }
  if ( (a3 & 1) != 0 && i == Object )
  {
    v8 = -1073741790;
    goto LABEL_19;
  }
  if ( !i )
  {
    v8 = 0;
LABEL_19:
    PspUnlockJobChain(Object, CurrentThread);
    return (unsigned int)v8;
  }
  v8 = PspEstablishJobHierarchy(i);
  if ( v8 < 0 )
    goto LABEL_19;
  v8 = PspAddProcessToJobChain(i, 0LL, a2, a3);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( (i[162] & 0x1000) != 0 )
    _interlockedbittestandset(a2 + 450, 0x1Fu);
  PspUnlockJobChain(Object, CurrentThread);
  v9 = PspApplyWorkingSetLimitsToProcess(a2);
  if ( v9 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL) )
    v9 = -1073741756;
  --CurrentThread->KernelApcDisable;
  PspChangeProcessExecutionState((PVOID)a2);
  v10 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v9;
}
