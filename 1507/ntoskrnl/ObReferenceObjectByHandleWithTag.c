/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140496E00
 * Callers:
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401E16B0 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402331B0 (NtSignalAndWaitForSingleObject.c)
 *     NtSuspendProcess @ 0x140409864 (NtSuspendProcess.c)
 *     NtResumeProcess @ 0x14040A48C (NtResumeProcess.c)
 *     NtAssignProcessToJobObject @ 0x14041A3EC (NtAssignProcessToJobObject.c)
 *     NtTerminateProcess @ 0x14041C6B4 (NtTerminateProcess.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtResumeThread @ 0x14042094C (NtResumeThread.c)
 *     NtDuplicateObject @ 0x1404241F0 (NtDuplicateObject.c)
 *     PsOpenTokenOfProcess @ 0x140434A10 (PsOpenTokenOfProcess.c)
 *     PspCreateThread @ 0x140450CE0 (PspCreateThread.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     NtWaitForSingleObject @ 0x140494560 (NtWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 *     MiLockUnlockCommon @ 0x1404B1E84 (MiLockUnlockCommon.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     NtUnmapViewOfSectionEx @ 0x1404B5B90 (NtUnmapViewOfSectionEx.c)
 *     NtMapViewOfSection @ 0x1404B5D50 (NtMapViewOfSection.c)
 *     NtProtectVirtualMemory @ 0x1404B9510 (NtProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiReadWriteVirtualMemory @ 0x1404BD6B0 (MiReadWriteVirtualMemory.c)
 *     NtSuspendThread @ 0x1404F38E8 (NtSuspendThread.c)
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1404FB5E8 (NtSetInformationVirtualMemory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502CE8 (ExpWnfCaptureScopeInstanceId.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x140511084 (PspQueryQuotaLimits.c)
 *     NtFlushVirtualMemory @ 0x140531C0C (NtFlushVirtualMemory.c)
 *     NtIsProcessInJob @ 0x14053CB08 (NtIsProcessInJob.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 *     NtGetNextThread @ 0x140554914 (NtGetNextThread.c)
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
 *     PfpSourceGetPrefetchSupport @ 0x14055C83C (PfpSourceGetPrefetchSupport.c)
 *     NtGetNextProcess @ 0x14056803C (NtGetNextProcess.c)
 *     ObWaitForSingleObject @ 0x140569658 (ObWaitForSingleObject.c)
 *     NtDebugActiveProcess @ 0x1406685CC (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140668A2C (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14066AD98 (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     MmProcessWorkingSetControl @ 0x1406A9564 (MmProcessWorkingSetControl.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1406AEF38 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1406AFD38 (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x1406C0224 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1406C039C (PspQueryWorkingSetWatch.c)
 *     PspAssignPrimaryToken @ 0x1406C3208 (PspAssignPrimaryToken.c)
 *     PspCreatePicoProcess @ 0x1406C5ADC (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x1406C5D94 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x1406C63A4 (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x1406C64B0 (NtAlertThread.c)
 *     ExpProfileCreate @ 0x1406F9A1C (ExpProfileCreate.c)
 *     VerifierObReferenceObjectByHandleWithTag @ 0x140754708 (VerifierObReferenceObjectByHandleWithTag.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400F3880 (ExSlowReplenishHandleTableEntry.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ExFastReplenishHandleTableEntry @ 0x14012B00C (ExFastReplenishHandleTableEntry.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x1406AB7EC (ObpAuditObjectAccess.c)
 *     VfCheckUserHandle @ 0x1407473CC (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *v9; // rax
  NTSTATUS v10; // ecx
  _KPROCESS *Process; // r13
  ULONG_PTR v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rcx
  signed __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rax
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  ACCESS_MASK v23; // ecx
  __int64 v24; // rsi
  __int16 v25; // ax
  __int64 v27; // rax
  PVOID v28; // r8
  NTSTATUS v29; // esi
  ULONG v30; // esi
  signed __int64 v31; // rsi
  signed __int64 v32; // r8
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  ULONG_PTR v35; // rbx
  signed __int64 BugCheckParameter4; // rsi
  __int16 v37; // ax
  volatile signed __int64 *v38; // rsi
  __int64 v39; // rax
  int v40; // ecx
  unsigned __int64 v41; // rtt
  unsigned __int64 v42; // rtt
  signed __int32 v43[8]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v44; // [rsp+30h] [rbp-68h] BYREF
  __int64 v45; // [rsp+40h] [rbp-58h]
  char v46; // [rsp+A0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v9 = Object;
  v10 = 0;
  v46 = 0;
  Process = CurrentThread->ApcState.Process;
  *Object = 0LL;
  if ( (int)Handle < 0 )
  {
    if ( Handle == (HANDLE)-1LL )
    {
      if ( ObjectType != (POBJECT_TYPE)PsProcessType && ObjectType )
        return -1073741788;
      v35 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (DesiredAccess & 0xFFE00000) != 0 && AccessMode )
        return -1073741790;
      if ( HandleInformation )
      {
        HandleInformation->GrantedAccess = 0x1FFFFF;
        HandleInformation->HandleAttributes = 0;
      }
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo(v35 - 48, 1, 1u, Tag);
        v9 = Object;
        v10 = 0;
      }
      BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v35 - 48));
      if ( BugCheckParameter4 <= 1 )
        KeBugCheckEx(0x18u, 0LL, v35, 0x10uLL, BugCheckParameter4);
      *v9 = (PVOID)v35;
      return v10;
    }
    if ( Handle == (HANDLE)-2LL )
    {
      if ( ObjectType != (POBJECT_TYPE)PsThreadType && ObjectType )
        return -1073741788;
      if ( (DesiredAccess & 0xFFE00000) != 0 && AccessMode )
        return -1073741790;
      if ( HandleInformation )
      {
        HandleInformation->GrantedAccess = 0x1FFFFF;
        HandleInformation->HandleAttributes = 0;
      }
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo((__int64)&CurrentThread[-1].WriteOperationCount, 1, 1u, Tag);
        v9 = Object;
        v10 = 0;
      }
      v31 = _InterlockedIncrement64(&CurrentThread[-1].WriteOperationCount);
      if ( v31 <= 1 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v31);
      *v9 = CurrentThread;
      return v10;
    }
    if ( AccessMode )
      return -1073741816;
    v12 = ObpKernelHandleTable;
    Handle = (HANDLE)((unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL);
    --CurrentThread->KernelApcDisable;
    goto LABEL_8;
  }
  if ( (MmVerifierData & 0x100) != 0 && !AccessMode )
    VfCheckUserHandle((int)Handle);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_115:
      v29 = -1073741816;
      goto LABEL_75;
    }
    v12 = Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v12 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    v46 = 1;
  }
  if ( !v12 )
    goto LABEL_115;
  if ( v12 == ObpKernelHandleTable )
  {
LABEL_80:
    v29 = -1073741816;
    goto LABEL_74;
  }
LABEL_8:
  if ( ((unsigned __int16)Handle & 0x3FC) == 0 || (v13 = (_QWORD *)ExpLookupHandleTableEntry(v12), (v14 = v13) == 0LL) )
  {
LABEL_78:
    if ( Handle )
      ExHandleLogBadReference(v12, (ULONG_PTR)Handle, KeGetCurrentThread()->PreviousMode);
    goto LABEL_80;
  }
  _m_prefetchw(v13);
  v15 = *v13;
  v16 = v13[1];
  *((_QWORD *)&v44 + 1) = v16;
  *(_QWORD *)&v44 = v15;
  v17 = v15;
  if ( (v15 & 0x1FFFE) == 0 )
    goto LABEL_52;
  while ( 1 )
  {
    if ( (v17 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v12, v14);
      _m_prefetchw(v14);
      v16 = v14[1];
      *(_QWORD *)&v44 = *v14;
      v17 = v44;
      *((_QWORD *)&v44 + 1) = v16;
      goto LABEL_70;
    }
    v45 = v17 - 2;
    *(_QWORD *)&v19 = v17;
    *((_QWORD *)&v19 + 1) = v16;
    v20 = _InterlockedCompareExchange128(v14, v16, v17 - 2, (signed __int64 *)&v19);
    v18 = v19;
    v17 = v19;
    v44 = v19;
    v16 = *((_QWORD *)&v19 + 1);
    if ( v20 )
      break;
LABEL_70:
    if ( (v17 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_52:
        while ( 1 )
        {
          _m_prefetchw(v14);
          v32 = *v14;
          if ( (*v14 & 1) != 0 )
            break;
          if ( !v32 )
            goto LABEL_78;
          ExpBlockOnLockedHandleEntry(v12, v14);
        }
      }
      while ( v32 != _InterlockedCompareExchange64(v14, v32 - 1, v32) );
      v21 = ((__int64)*v14 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v44 = *(_OWORD *)v14;
      v33 = (int)(ExSlowReplenishHandleTableEntry(v14) + 1);
      v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v21, v33);
      if ( v34 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v21 + 48, 0x10uLL, v33 + v34);
      _InterlockedExchangeAdd64(v14, 1uLL);
      _InterlockedOr(v43, 0);
      if ( *(_QWORD *)(v12 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v12 + 48), 0LL);
      goto LABEL_57;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v18 >> 1) != 16 )
  {
    v21 = (v18 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_15;
  }
  *(_QWORD *)&v44 = ((unsigned int)v17 ^ (2 * (unsigned int)((unsigned __int64)v18 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v17;
  v38 = (volatile signed __int64 *)(((__int64)v44 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  v21 = (unsigned __int64)v38;
  v39 = _InterlockedExchangeAdd64(v38, 0x7FF0uLL);
  if ( v39 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v38 + 6), 0x10uLL, v39 + 32752);
  v40 = ExFastReplenishHandleTableEntry(v14, (unsigned __int64 *)&v44, 32752);
  if ( v40 )
    _InterlockedExchangeAdd64(v38, -v40);
LABEL_57:
  LODWORD(v16) = DWORD2(v44);
  v17 = v44;
LABEL_15:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v21, 1, 1u, Tag);
  v22 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v21 + 24) ^ (unsigned int)BYTE1(v21);
  if ( !ObjectType || ObjectType->Index != (_DWORD)v22 )
  {
    v28 = (PVOID)ObTypeIndexTable[v22];
    if ( !v28 || v28 == MmBadPointer )
      KeBugCheckEx(0x189u, v21, (ULONG_PTR)v28, 0LL, 0LL);
    if ( ObjectType )
    {
      v29 = -1073741788;
      goto LABEL_73;
    }
  }
  v23 = v16 & 0x1FFFFFF;
  if ( !AccessMode )
    goto LABEL_22;
  if ( (~v23 & DesiredAccess) != 0 )
  {
    v29 = -1073741790;
    goto LABEL_73;
  }
  if ( (*(_BYTE *)(v21 + 26) & 0x40) == 0 || (v27 = ObpInfoMaskToOffset[*(_BYTE *)(v21 + 26) & 0x7F], v21 == v27) )
  {
LABEL_22:
    v24 = (v17 >> 17) & 7;
    if ( HandleInformation )
    {
      HandleInformation->GrantedAccess = v23;
      if ( (v16 & 0x2000000) != 0 )
        LOBYTE(v24) = v24 | 8;
      v30 = v24 & 7;
      HandleInformation->HandleAttributes = v30;
      if ( (v30 & 4) == 0 )
        goto LABEL_26;
    }
    else
    {
      if ( (v16 & 0x2000000) != 0 )
        LOBYTE(v24) = v24 | 8;
      if ( (v24 & 4) == 0 )
      {
LABEL_26:
        *Object = (PVOID)(v21 + 48);
        if ( v46 )
        {
          _m_prefetchw(&Process[1].Header.WaitListHead);
          v41 = (unsigned __int64)Process[1].Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v41 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&Process[1].Header.WaitListHead,
                        v41 - 2,
                        v41) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
        }
        v25 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v25;
        if ( !v25
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return 0;
      }
    }
    if ( DesiredAccess && !(unsigned __int8)ObpAuditObjectAccess(v12, (_DWORD)Handle, (_DWORD)v14, v21, DesiredAccess) )
    {
      v29 = -1073741816;
      goto LABEL_73;
    }
    goto LABEL_26;
  }
  if ( *(_QWORD *)(v21 - v27 + 16) != 1LL )
  {
    LODWORD(v16) = DWORD2(v44);
    v17 = v44;
    goto LABEL_22;
  }
  v29 = -1073700858;
LABEL_73:
  PspDereferenceSiloObject((void *)(v21 + 48));
LABEL_74:
  if ( v46 )
  {
    _m_prefetchw(&Process[1].Header.WaitListHead);
    v42 = (unsigned __int64)Process[1].Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v42 != _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.WaitListHead, v42 - 2, v42) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
  }
LABEL_75:
  v37 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v37;
  if ( !v37
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v29;
}
