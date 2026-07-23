/*
 * XREFs of PspAssignProcessToJob @ 0x1404D5BEC
 * Callers:
 *     PsAssignProcessToJobObject @ 0x1404D597C (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MmAssignProcessToJob @ 0x1400B71DC (MmAssignProcessToJob.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PspChargeJobWakeCounter @ 0x140467B60 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     PspAddProcessToJobChain @ 0x140469188 (PspAddProcessToJobChain.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140469428 (PspApplyWorkingSetLimitsToProcess.c)
 *     PsQueryProcessAttributes @ 0x140470C90 (PsQueryProcessAttributes.c)
 *     PspLockJobAssignment @ 0x1404D59DC (PspLockJobAssignment.c)
 *     PspLockJobsAndProcessExclusive @ 0x1404D5A20 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobAssignmentDisposition @ 0x1404D5AB0 (PspGetJobAssignmentDisposition.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1404D5B7C (PspUnlockJobsAndProcessExclusive.c)
 *     PspUnlockJobAssignment @ 0x1404D5F4C (PspUnlockJobAssignment.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 */

__int64 __fastcall PspAssignProcessToJob(char *Object, ULONG_PTR BugCheckParameter1, int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char v7; // bl
  unsigned int v8; // r13d
  int JobAssignmentDisposition; // edi
  __int64 v10; // r13
  unsigned int v11; // eax
  _BYTE v13[4]; // [rsp+40h] [rbp-39h] BYREF
  int v14; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-31h] BYREF
  char *v16; // [rsp+50h] [rbp-29h] BYREF
  int v17; // [rsp+58h] [rbp-21h]
  __int64 v18; // [rsp+60h] [rbp-19h]
  _QWORD v19[5]; // [rsp+68h] [rbp-11h] BYREF

  LODWORD(v19[0]) = 0;
  memset(&v19[1], 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = -1073741756;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
  {
    JobAssignmentDisposition = -1073741558;
    goto LABEL_39;
  }
  switch ( a3 )
  {
    case 1:
      goto LABEL_9;
    case 2:
      LODWORD(v19[0]) = 0;
      goto LABEL_11;
    case 3:
LABEL_9:
      v19[1] = Object;
      LODWORD(v19[0]) = 1;
      break;
    case 4:
      v19[1] = *(_QWORD *)(BugCheckParameter1 + 944);
      LODWORD(v19[0]) = 2;
      v19[3] = Object;
      LOBYTE(v19[4]) = 0;
      break;
    default:
      goto LABEL_11;
  }
  LOBYTE(v19[2]) = 1;
LABEL_11:
  v7 = 11;
  PspLockJobAssignment((__int64)CurrentThread);
  PspLockJobsAndProcessExclusive((unsigned int *)v19, BugCheckParameter1, (__int64)CurrentThread);
  JobAssignmentDisposition = PspGetJobAssignmentDisposition(
                               (__int64)Object,
                               (struct _EX_RUNDOWN_REF *)BugCheckParameter1,
                               &v14);
  if ( JobAssignmentDisposition < 0 )
  {
    JobAssignmentDisposition = -1073741790;
    goto LABEL_39;
  }
  if ( v14 != a3 )
  {
    JobAssignmentDisposition = -1073741267;
    goto LABEL_39;
  }
  if ( v14 != 2 )
  {
    v10 = *(_QWORD *)(BugCheckParameter1 + 944);
    if ( v14 == 4 && (*(_DWORD *)(v10 + 1304) & 0x10) != 0 )
    {
      JobAssignmentDisposition = -1073741637;
    }
    else
    {
      JobAssignmentDisposition = PspEstablishJobHierarchy(Object);
      if ( JobAssignmentDisposition >= 0 )
      {
        if ( (*((_DWORD *)Object + 326) & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 1824) & 0x7FFFFFFF) != 0 )
            PspChargeJobWakeCounter(
              Object,
              (char *)v10,
              1,
              *(_DWORD *)(BugCheckParameter1 + 1824) & 0x7FFFFFFF,
              0,
              0LL,
              6451018LL);
          _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1824), 0x1Fu);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
        KeAbPostRelease(BugCheckParameter1 + 728);
        JobAssignmentDisposition = PspAddProcessToJobChain((__int64)Object, v10, BugCheckParameter1, 0);
        PspUnlockJobsAndProcessExclusive((int *)v19, 0LL, (__int64)CurrentThread);
        v7 = 13;
        if ( JobAssignmentDisposition >= 0 )
        {
          if ( (*((_DWORD *)Object + 326) & 0x1000000) == 0 )
          {
            PsQueryProcessAttributes((struct _KPROCESS *)BugCheckParameter1, v13, 0LL);
            if ( !v13[0] )
              _InterlockedOr((volatile signed __int32 *)Object + 326, 0x800000u);
            _InterlockedOr((volatile signed __int32 *)Object + 326, 0x1000000u);
          }
          JobAssignmentDisposition = PspApplyWorkingSetLimitsToProcess(BugCheckParameter1);
          if ( JobAssignmentDisposition >= 0 )
          {
            if ( !(unsigned int)MmAssignProcessToJob(BugCheckParameter1, v10) )
            {
              v8 = -1073741756;
              JobAssignmentDisposition = -1073741756;
              goto LABEL_39;
            }
            PspUnlockJobAssignment(CurrentThread);
            --CurrentThread->KernelApcDisable;
            v7 = 12;
            PspChangeProcessExecutionState((_KPROCESS *)BugCheckParameter1);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            if ( *(_QWORD *)(BugCheckParameter1 + 936) )
            {
              if ( *((_DWORD *)Object + 112) )
              {
                v18 = *(_QWORD *)(BugCheckParameter1 + 936);
                v11 = *((_DWORD *)Object + 120);
                v16 = Object;
                v17 = 1;
                v15 = v11;
                if ( v11 <= 0xFFFFFFFD )
                {
                  --CurrentThread->SpecialApcDisable;
                  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
                  JobAssignmentDisposition = PsInvokeWin32Callout(6, (__int64)&v16, 1, (__int64)&v15);
                  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
                }
              }
            }
          }
        }
      }
    }
    v8 = -1073741756;
  }
LABEL_39:
  if ( (v7 & 8) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  if ( JobAssignmentDisposition < 0 && (v7 & 4) != 0 )
  {
    if ( JobAssignmentDisposition == -1073741558 )
      v8 = -1073741558;
    PspRemoveProcessFromJobChain(BugCheckParameter1, 0LL, 0xAu, v8);
  }
  if ( (v7 & 2) != 0 )
    PspUnlockJobsAndProcessExclusive((int *)v19, BugCheckParameter1, (__int64)CurrentThread);
  if ( (v7 & 1) != 0 )
    PspUnlockJobAssignment(CurrentThread);
  return (unsigned int)JobAssignmentDisposition;
}
