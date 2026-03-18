/*
 * XREFs of PspAssignProcessToJob @ 0x14041A524
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14041A4C4 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     PspLockJobsAndProcessExclusive @ 0x14041A978 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14041AA08 (PspUnlockJobsAndProcessExclusive.c)
 *     MmAssignProcessToJob @ 0x14041AD30 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14041B1FC (PspApplyWorkingSetLimitsToProcess.c)
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspGetJobAssignmentDisposition @ 0x14041BE48 (PspGetJobAssignmentDisposition.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 */

__int64 __fastcall PspAssignProcessToJob(char *Object, char *a2, int a3)
{
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // r15
  char v8; // di
  unsigned __int64 v9; // rtt
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  int JobAssignmentDisposition; // r14d
  __int64 v14; // rsi
  __int16 v15; // ax
  __int16 v16; // ax
  unsigned __int64 v17; // rtt
  PACCESS_TOKEN v19; // r14
  char v20; // si
  __int16 v21; // ax
  unsigned int v22; // eax
  __int16 v23; // ax
  _DWORD v24[3]; // [rsp+44h] [rbp-45h] BYREF
  __int64 v25; // [rsp+50h] [rbp-39h]
  char *v26; // [rsp+60h] [rbp-29h] BYREF
  int v27; // [rsp+68h] [rbp-21h]
  __int64 v28; // [rsp+70h] [rbp-19h]
  _QWORD v29[5]; // [rsp+78h] [rbp-11h] BYREF

  LODWORD(v25) = a3;
  LODWORD(v29[0]) = 0;
  memset(&v29[1], 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  _m_prefetchw(a2 + 736);
  v9 = *((_QWORD *)a2 + 92) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 92, v9 + 2, v9)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)a2 + 92) )
  {
    JobAssignmentDisposition = -1073741558;
    goto LABEL_51;
  }
  switch ( a3 )
  {
    case 1:
      goto LABEL_3;
    case 2:
      LODWORD(v29[0]) = 0;
      break;
    case 3:
LABEL_3:
      v29[1] = Object;
      LODWORD(v29[0]) = 1;
LABEL_4:
      LOBYTE(v29[2]) = 1;
      break;
    case 4:
      v29[1] = *((_QWORD *)a2 + 118);
      LODWORD(v29[0]) = 2;
      v29[3] = Object;
      LOBYTE(v29[4]) = 0;
      goto LABEL_4;
  }
  v8 = 11;
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&PspJobAssignmentLock, 0LL, 0LL, v6);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobAssignmentLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PspJobAssignmentLock, v10, (ULONG_PTR)&PspJobAssignmentLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  PspLockJobsAndProcessExclusive(v29, a2, CurrentThread);
  JobAssignmentDisposition = PspGetJobAssignmentDisposition(Object, a2, v24);
  if ( JobAssignmentDisposition < 0 )
  {
    JobAssignmentDisposition = -1073741790;
  }
  else if ( v24[0] == (_DWORD)v25 )
  {
    if ( v24[0] == 2 )
      goto LABEL_32;
    v14 = *((_QWORD *)a2 + 118);
    v25 = v14;
    if ( v24[0] == 4 && (*(_DWORD *)(v14 + 1296) & 0x10) != 0 )
    {
      JobAssignmentDisposition = -1073741637;
      goto LABEL_51;
    }
    JobAssignmentDisposition = PspEstablishJobHierarchy(Object);
    if ( JobAssignmentDisposition < 0 )
      goto LABEL_51;
    if ( (*((_DWORD *)Object + 324) & 0x1000) != 0 )
    {
      if ( (*((_DWORD *)a2 + 450) & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter(Object, (char *)v14, 1, *((_DWORD *)a2 + 450) & 0x7FFFFFFF, 0, 0LL, 6451018LL);
      _interlockedbittestandset((volatile signed __int32 *)a2 + 450, 0x1Fu);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2 + 91);
    KeAbPostRelease((ULONG_PTR)(a2 + 728));
    JobAssignmentDisposition = PspAddProcessToJobChain(Object, v14, a2, 0LL);
    PspUnlockJobsAndProcessExclusive(v29, 0LL, CurrentThread);
    v8 = 13;
    if ( JobAssignmentDisposition < 0 )
      goto LABEL_51;
    if ( (*((_DWORD *)Object + 324) & 0x1000000) == 0 )
    {
      v19 = PsReferencePrimaryToken((PEPROCESS)a2);
      v20 = SeSecurityAttributePresent(v19, &PspSysAppIdClaim);
      ObFastDereferenceObject((signed __int64 *)a2 + 107, (unsigned __int64)v19);
      if ( !v20 )
        _InterlockedOr((volatile signed __int32 *)Object + 324, 0x800000u);
      _InterlockedOr((volatile signed __int32 *)Object + 324, 0x1000000u);
      v14 = v25;
    }
    JobAssignmentDisposition = PspApplyWorkingSetLimitsToProcess(a2);
    if ( JobAssignmentDisposition < 0 )
      goto LABEL_51;
    if ( (unsigned int)MmAssignProcessToJob(a2, v14) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
      KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
      v15 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v15;
      if ( !v15
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v8 = 12;
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(a2);
      v16 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v16;
      if ( !v16
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( *((_QWORD *)a2 + 117) )
      {
        if ( *((_DWORD *)Object + 112) )
        {
          v28 = *((_QWORD *)a2 + 117);
          v22 = *((_DWORD *)Object + 120);
          v26 = Object;
          v27 = 1;
          v24[1] = v22;
          if ( v22 <= 0xFFFFFFFD )
          {
            --CurrentThread->SpecialApcDisable;
            ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
            JobAssignmentDisposition = PsInvokeWin32Callout(6LL, &v26, 1LL);
            ExReleaseResourceLite((PERESOURCE)(Object + 56));
            v23 = CurrentThread->SpecialApcDisable + 1;
            CurrentThread->SpecialApcDisable = v23;
            if ( !v23
              && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
          }
        }
      }
LABEL_32:
      if ( JobAssignmentDisposition >= 0 )
        goto LABEL_33;
      goto LABEL_51;
    }
    JobAssignmentDisposition = -1073741756;
  }
  else
  {
    JobAssignmentDisposition = -1073741267;
  }
LABEL_51:
  if ( (v8 & 4) != 0 )
    PspRemoveProcessFromJobChain(a2);
LABEL_33:
  if ( (v8 & 2) != 0 )
    PspUnlockJobsAndProcessExclusive(v29, a2, CurrentThread);
  if ( (v8 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
    KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
    v21 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( (v8 & 8) != 0 )
  {
    _m_prefetchw(a2 + 736);
    v17 = *((_QWORD *)a2 + 92) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 92, v17 - 2, v17) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)a2 + 92);
  }
  return (unsigned int)JobAssignmentDisposition;
}
