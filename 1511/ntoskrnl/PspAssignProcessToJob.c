/*
 * XREFs of PspAssignProcessToJob @ 0x140486CD0
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140486C70 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     MmAssignProcessToJob @ 0x1403E8528 (MmAssignProcessToJob.c)
 *     PspAddProcessToJobChain @ 0x1403E8E64 (PspAddProcessToJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1403E9200 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PspChargeJobWakeCounter @ 0x1403EB4DC (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     PsQueryProcessAttributes @ 0x14046DFC4 (PsQueryProcessAttributes.c)
 *     PspUnlockJobAssignment @ 0x140486FB8 (PspUnlockJobAssignment.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140486FF4 (PspUnlockJobsAndProcessExclusive.c)
 *     PspGetJobAssignmentDisposition @ 0x140487084 (PspGetJobAssignmentDisposition.c)
 *     PspLockJobsAndProcessExclusive @ 0x140487158 (PspLockJobsAndProcessExclusive.c)
 *     PspLockJobAssignment @ 0x1404871F4 (PspLockJobAssignment.c)
 */

__int64 __fastcall PspAssignProcessToJob(char *Object, PEPROCESS Process, int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char v7; // bl
  int JobAssignmentDisposition; // edi
  __int64 v9; // r13
  unsigned int v11; // eax
  _BYTE v12[4]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-31h] BYREF
  char *v15; // [rsp+50h] [rbp-29h] BYREF
  int v16; // [rsp+58h] [rbp-21h]
  unsigned __int64 v17; // [rsp+60h] [rbp-19h]
  _QWORD v18[5]; // [rsp+68h] [rbp-11h] BYREF

  LODWORD(v18[0]) = 0;
  memset(&v18[1], 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead) )
  {
    JobAssignmentDisposition = -1073741558;
    goto LABEL_42;
  }
  switch ( a3 )
  {
    case 1:
      goto LABEL_3;
    case 2:
      LODWORD(v18[0]) = 0;
      break;
    case 3:
LABEL_3:
      v18[1] = Object;
      LODWORD(v18[0]) = 1;
LABEL_4:
      LOBYTE(v18[2]) = 1;
      break;
    case 4:
      v18[1] = Process[1].Affinity.Bitmap[16];
      LODWORD(v18[0]) = 2;
      v18[3] = Object;
      LOBYTE(v18[4]) = 0;
      goto LABEL_4;
  }
  v7 = 11;
  PspLockJobAssignment(CurrentThread);
  PspLockJobsAndProcessExclusive(v18, Process, CurrentThread);
  JobAssignmentDisposition = PspGetJobAssignmentDisposition(Object, Process, &v13);
  if ( JobAssignmentDisposition < 0 )
  {
    JobAssignmentDisposition = -1073741790;
  }
  else if ( v13 == a3 )
  {
    if ( v13 == 2 )
      goto LABEL_21;
    v9 = Process[1].Affinity.Bitmap[16];
    if ( v13 == 4 && (*(_DWORD *)(v9 + 1296) & 0x10) != 0 )
    {
      JobAssignmentDisposition = -1073741637;
      goto LABEL_42;
    }
    JobAssignmentDisposition = PspEstablishJobHierarchy((volatile signed __int32 *)Object, (__int64)Process, v13);
    if ( JobAssignmentDisposition < 0 )
      goto LABEL_42;
    if ( (*((_DWORD *)Object + 324) & 0x1000) != 0 )
    {
      if ( (Process[2].ActiveProcessors.Bitmap[9] & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter(
          Object,
          (char *)v9,
          1,
          Process[2].ActiveProcessors.Bitmap[9] & 0x7FFFFFFF,
          0,
          0LL,
          6451018LL);
      _interlockedbittestandset((volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[9], 0x1Fu);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    JobAssignmentDisposition = PspAddProcessToJobChain((__int64)Object, v9, (__int64)Process, 0);
    PspUnlockJobsAndProcessExclusive(v18, 0LL, CurrentThread);
    v7 = 13;
    if ( JobAssignmentDisposition < 0 )
      goto LABEL_42;
    if ( (*((_DWORD *)Object + 324) & 0x1000000) == 0 )
    {
      PsQueryProcessAttributes(Process, (__int64)v12);
      if ( !v12[0] )
        _InterlockedOr((volatile signed __int32 *)Object + 324, 0x800000u);
      _InterlockedOr((volatile signed __int32 *)Object + 324, 0x1000000u);
    }
    JobAssignmentDisposition = PspApplyWorkingSetLimitsToProcess((__int64)Process);
    if ( JobAssignmentDisposition < 0 )
      goto LABEL_42;
    if ( (unsigned int)MmAssignProcessToJob((__int64)Process, v9) )
    {
      PspUnlockJobAssignment(CurrentThread);
      --CurrentThread->KernelApcDisable;
      v7 = 12;
      PspChangeProcessExecutionState(Process);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( Process[1].Affinity.Bitmap[15] )
      {
        if ( *((_DWORD *)Object + 112) )
        {
          v17 = Process[1].Affinity.Bitmap[15];
          v11 = *((_DWORD *)Object + 120);
          v15 = Object;
          v16 = 1;
          v14 = v11;
          if ( v11 <= 0xFFFFFFFD )
          {
            --CurrentThread->SpecialApcDisable;
            ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
            JobAssignmentDisposition = PsInvokeWin32Callout((_KPROCESS *)6, (__int64)&v15, 1, (int)&v14);
            PspUnlockJob((__int64)Object, (__int64)CurrentThread);
          }
        }
      }
LABEL_21:
      if ( JobAssignmentDisposition >= 0 )
        goto LABEL_22;
      goto LABEL_42;
    }
    JobAssignmentDisposition = -1073741756;
  }
  else
  {
    JobAssignmentDisposition = -1073741267;
  }
LABEL_42:
  if ( (v7 & 4) != 0 )
    PspRemoveProcessFromJobChain(Process, 0LL, 0xAu, 0x718u);
LABEL_22:
  if ( (v7 & 2) != 0 )
    PspUnlockJobsAndProcessExclusive(v18, Process, CurrentThread);
  if ( (v7 & 1) != 0 )
    PspUnlockJobAssignment(CurrentThread);
  if ( (v7 & 8) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
  return (unsigned int)JobAssignmentDisposition;
}
