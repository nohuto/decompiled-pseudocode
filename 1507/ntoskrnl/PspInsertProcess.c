/*
 * XREFs of PspInsertProcess @ 0x14046A910
 * Callers:
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspImplicitAssignProcessToJob @ 0x14041AAC8 (PspImplicitAssignProcessToJob.c)
 *     ObCheckRefTraceProcess @ 0x14046AC74 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14046ACD0 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessStateEx @ 0x14053E638 (SeCreateAccessStateEx.c)
 *     PspValidateJobAffinityState @ 0x14054D8F8 (PspValidateJobAffinityState.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        __int64 a2,
        int a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r13
  __int64 v13; // r9
  PVOID v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 **v18; // rcx
  __int16 v19; // ax
  int AccessState; // ebp
  char v21; // r12
  int v22; // edx
  __int64 v23; // r14
  __int64 v24; // rcx
  __int16 v26; // ax
  NTSTATUS v27; // eax
  __int16 v28; // ax
  char v29; // [rsp+80h] [rbp+8h]
  PVOID v30; // [rsp+88h] [rbp+10h] BYREF
  int v31; // [rsp+90h] [rbp+18h]

  v31 = a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 131) + 40LL) = *((_DWORD *)Object + 186);
  v14 = 0LL;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL, 0LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 944) )
    {
      AccessState = PspImplicitAssignProcessToJob(*(_QWORD **)(a2 + 944), (volatile signed __int32 *)Object, a4);
      if ( AccessState < 0 )
        goto LABEL_49;
    }
  }
  --CurrentThread->SpecialApcDisable;
  v15 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL, v13);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspActiveProcessLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PspActiveProcessLock, v15, (ULONG_PTR)&PspActiveProcessLock, v16);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  v18 = (__int64 **)qword_14032C5E8;
  *((_QWORD *)Object + 95) = qword_14032C5E8;
  *((_QWORD *)Object + 94) = &PsActiveProcessHead;
  if ( *v18 != &PsActiveProcessHead )
    __fastfail(3u);
  *v18 = (__int64 *)(Object + 752);
  qword_14032C5E8 = (__int64)(Object + 752);
  *((_QWORD *)Object + 232) = ++PspProcessSequenceNumber;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  v19 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v19;
  if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
  {
    AccessState = -1073741558;
LABEL_49:
    if ( (a6 & 1) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)Object + 91);
      KeAbPostRelease((ULONG_PTR)(Object + 728));
      v28 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v28;
      if ( !v28
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return (unsigned int)AccessState;
  }
  if ( Handle )
  {
    v27 = ObReferenceObjectByHandle(Handle, 2u, DbgkDebugObjectType, KeGetCurrentThread()->PreviousMode, &v30, 0LL);
    v14 = v30;
    AccessState = v27;
    if ( v27 < 0 )
      goto LABEL_49;
  }
  AccessState = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( AccessState < 0 )
    goto LABEL_49;
  if ( v29 && (a4 & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
  v21 = 0;
  if ( !a2 || (v22 = (int)PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
  {
    if ( (a6 & 2) != 0 )
    {
      v22 = (int)Object;
      v21 = 1;
    }
    else
    {
      v22 = (int)Process;
    }
  }
  v23 = a8;
  AccessState = SeCreateAccessStateEx(0, v22, a8, (int)a8 + 160, v31, (__int64)PsProcessType + 76);
  if ( AccessState < 0 )
    goto LABEL_49;
  ObfReferenceObjectWithTag(Object, 0x72437350u);
  AccessState = ObInsertObjectEx(Object, v21, 0LL, 0LL);
  if ( AccessState < 0 )
  {
LABEL_48:
    SeDeleteAccessState(v23);
    goto LABEL_49;
  }
  ObfDereferenceObjectWithTag(Object, 0x72437350u);
  v24 = *((_QWORD *)Object + 118);
  if ( v24 )
  {
    AccessState = PspValidateJobAffinityState(v24, Object);
    if ( AccessState >= 0 )
      goto LABEL_29;
    goto LABEL_48;
  }
  _InterlockedOr((volatile signed __int32 *)Object + 193, 0x4000000u);
LABEL_29:
  ObCheckRefTraceProcess(Object);
  if ( (a6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 91);
    KeAbPostRelease((ULONG_PTR)(Object + 728));
    v26 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
