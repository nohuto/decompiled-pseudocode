/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x14040B9E0
 * Callers:
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401ABBD4 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401E61A0 (NtSignalAndWaitForSingleObject.c)
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1403E5B1C (ExpWnfCaptureScopeInstanceId.c)
 *     MiLockUnlockCommon @ 0x1403E899C (MiLockUnlockCommon.c)
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     NtFreeVirtualMemory @ 0x140417AA0 (NtFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140418D90 (NtProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     NtUnmapViewOfSectionEx @ 0x14041BF20 (NtUnmapViewOfSectionEx.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     NtDuplicateObject @ 0x1404240F0 (NtDuplicateObject.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     NtWaitForSingleObject @ 0x14042F250 (NtWaitForSingleObject.c)
 *     PspCreateThread @ 0x14044564C (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 *     NtTerminateProcess @ 0x140450420 (NtTerminateProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     NtFlushVirtualMemory @ 0x1404552D8 (NtFlushVirtualMemory.c)
 *     NtOpenProcessTokenEx @ 0x140476F10 (NtOpenProcessTokenEx.c)
 *     MiReadWriteVirtualMemory @ 0x14047AA60 (MiReadWriteVirtualMemory.c)
 *     NtAssignProcessToJobObject @ 0x140486B98 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x14048724C (NtIsProcessInJob.c)
 *     NtMapViewOfSection @ 0x140493120 (NtMapViewOfSection.c)
 *     PspQueryQuotaLimits @ 0x1404A6FA8 (PspQueryQuotaLimits.c)
 *     NtResumeThread @ 0x1404A766C (NtResumeThread.c)
 *     NtSuspendThread @ 0x1404B08EC (NtSuspendThread.c)
 *     MmPrefetchVirtualMemory @ 0x1404B70E8 (MmPrefetchVirtualMemory.c)
 *     NtGetNextThread @ 0x1404BE9DC (NtGetNextThread.c)
 *     PspCreateProcess @ 0x1404C3BAC (PspCreateProcess.c)
 *     PfpSourceGetPrefetchSupport @ 0x1404EB13C (PfpSourceGetPrefetchSupport.c)
 *     NtGetNextProcess @ 0x1404F3D3C (NtGetNextProcess.c)
 *     ObWaitForSingleObject @ 0x1404F546C (ObWaitForSingleObject.c)
 *     MmProcessWorkingSetControl @ 0x140517540 (MmProcessWorkingSetControl.c)
 *     NtSuspendProcess @ 0x140518C58 (NtSuspendProcess.c)
 *     NtResumeProcess @ 0x14051A788 (NtResumeProcess.c)
 *     NtDebugActiveProcess @ 0x1405EFBC8 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x1405EFF80 (NtRemoveProcessDebug.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1405F206C (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     NtCreateEnclave @ 0x14062A184 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14062A548 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14062A804 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140630CC8 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x140631A54 (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x14063F118 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14063F290 (PspQueryWorkingSetWatch.c)
 *     PspAssignPrimaryToken @ 0x140640D98 (PspAssignPrimaryToken.c)
 *     NtAlertResumeThread @ 0x140643608 (NtAlertResumeThread.c)
 *     NtAlertThread @ 0x140643714 (NtAlertThread.c)
 *     ExpProfileCreate @ 0x1406752BC (ExpProfileCreate.c)
 *     VerifierObReferenceObjectByHandleWithTag @ 0x1406D0C18 (VerifierObReferenceObjectByHandleWithTag.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400D0410 (ExSlowReplenishHandleTableEntry.c)
 *     ObDereferenceObject @ 0x1400D2B58 (ObDereferenceObject.c)
 *     ObpIncrPointerCountEx @ 0x1400E39BC (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x1400ED618 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140213858 (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x14062DC14 (ObpAuditObjectAccess.c)
 *     VfCheckUserHandle @ 0x1406C5774 (VfCheckUserHandle.c)
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
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *v9; // rax
  NTSTATUS v10; // ecx
  _KPROCESS *Process; // r13
  ULONG_PTR v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rcx
  signed __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rax
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  ACCESS_MASK v23; // ecx
  __int64 v24; // rdi
  __int64 v26; // rax
  PVOID v27; // r8
  NTSTATUS v28; // edi
  ULONG v29; // edi
  signed __int64 v30; // rbx
  signed __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  ULONG_PTR v34; // rdi
  signed __int64 BugCheckParameter4; // rbx
  volatile signed __int64 *v36; // rdi
  int v37; // ecx
  signed __int32 v38[8]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v39; // [rsp+30h] [rbp-68h] BYREF
  __int64 v40; // [rsp+40h] [rbp-58h]
  char v41; // [rsp+A0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v9 = Object;
  v10 = 0;
  v41 = 0;
  Process = CurrentThread->ApcState.Process;
  *Object = 0LL;
  if ( (int)Handle < 0 )
  {
    if ( Handle == (HANDLE)-1LL )
    {
      if ( ObjectType != (POBJECT_TYPE)PsProcessType && ObjectType )
        return -1073741788;
      v34 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (DesiredAccess & 0xFFE00000) != 0 && AccessMode )
        return -1073741790;
      if ( HandleInformation )
      {
        HandleInformation->GrantedAccess = 0x1FFFFF;
        HandleInformation->HandleAttributes = 0;
      }
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo(v34 - 48, 1, 1u, Tag);
        v9 = Object;
        v10 = 0;
      }
      BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v34 - 48));
      if ( BugCheckParameter4 <= 1 )
        KeBugCheckEx(0x18u, 0LL, v34, 0x10uLL, BugCheckParameter4);
      *v9 = (PVOID)v34;
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
      v30 = _InterlockedIncrement64(&CurrentThread[-1].WriteOperationCount);
      if ( v30 <= 1 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v30);
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
LABEL_103:
      v28 = -1073741816;
      goto LABEL_77;
    }
    v12 = Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v12 = ObReferenceProcessHandleTable(Process);
    v41 = 1;
  }
  if ( !v12 )
    goto LABEL_103;
  if ( v12 == ObpKernelHandleTable )
  {
LABEL_84:
    v28 = -1073741816;
    goto LABEL_75;
  }
LABEL_8:
  if ( ((unsigned __int16)Handle & 0x3FC) == 0
    || (v13 = (_QWORD *)ExpLookupHandleTableEntry(v12, Handle), (v14 = v13) == 0LL) )
  {
LABEL_82:
    if ( Handle )
      ExHandleLogBadReference(v12, (ULONG_PTR)Handle, KeGetCurrentThread()->PreviousMode);
    goto LABEL_84;
  }
  _m_prefetchw(v13);
  v15 = *v13;
  v16 = v13[1];
  *((_QWORD *)&v39 + 1) = v16;
  *(_QWORD *)&v39 = v15;
  v17 = v15;
  if ( (v15 & 0x1FFFE) == 0 )
    goto LABEL_51;
  while ( 1 )
  {
    if ( (v17 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v12, v14, v17);
      _m_prefetchw(v14);
      v16 = v14[1];
      *(_QWORD *)&v39 = *v14;
      v17 = v39;
      *((_QWORD *)&v39 + 1) = v16;
      goto LABEL_69;
    }
    v40 = v17 - 2;
    *(_QWORD *)&v19 = v17;
    *((_QWORD *)&v19 + 1) = v16;
    v20 = _InterlockedCompareExchange128(v14, v16, v17 - 2, (signed __int64 *)&v19);
    v18 = v19;
    v17 = v19;
    v39 = v19;
    v16 = *((_QWORD *)&v19 + 1);
    if ( v20 )
      break;
LABEL_69:
    if ( (v17 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_51:
        while ( 1 )
        {
          _m_prefetchw(v14);
          v31 = *v14;
          if ( (*v14 & 1) != 0 )
            break;
          if ( !v31 )
            goto LABEL_82;
          ExpBlockOnLockedHandleEntry(v12, v14, v31);
        }
      }
      while ( v31 != _InterlockedCompareExchange64(v14, v31 - 1, v31) );
      v21 = ((__int64)*v14 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v39 = *(_OWORD *)v14;
      v32 = (int)(ExSlowReplenishHandleTableEntry(v14) + 1);
      v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v21, v32);
      if ( v33 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v21 + 48, 0x10uLL, v32 + v33);
      _InterlockedExchangeAdd64(v14, 1uLL);
      _InterlockedOr(v38, 0);
      if ( *(_QWORD *)(v12 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v12 + 48), 0LL);
      goto LABEL_56;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v18 >> 1) != 16 )
  {
    v21 = (v18 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_15;
  }
  *(_QWORD *)&v39 = ((unsigned int)v17 ^ (2 * (unsigned int)((unsigned __int64)v18 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v17;
  v36 = (volatile signed __int64 *)(((__int64)v39 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  v21 = (unsigned __int64)v36;
  ObpIncrPointerCountEx(v36, 32752);
  v37 = ExFastReplenishHandleTableEntry(v14, (unsigned __int64 *)&v39, 32752);
  if ( v37 )
    _InterlockedExchangeAdd64(v36, -v37);
LABEL_56:
  LODWORD(v16) = DWORD2(v39);
  v17 = v39;
LABEL_15:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v21, 1, 1u, Tag);
  v22 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v21 + 24) ^ (unsigned int)BYTE1(v21);
  if ( !ObjectType || ObjectType->Index != (_DWORD)v22 )
  {
    v27 = (PVOID)ObTypeIndexTable[v22];
    if ( !v27 || v27 == MmBadPointer )
      KeBugCheckEx(0x189u, v21, (ULONG_PTR)v27, 0LL, 0LL);
    if ( ObjectType )
    {
      v28 = -1073741788;
      goto LABEL_74;
    }
  }
  v23 = v16 & 0x1FFFFFF;
  if ( !AccessMode )
    goto LABEL_22;
  if ( (~v23 & DesiredAccess) != 0 )
  {
    v28 = -1073741790;
    goto LABEL_74;
  }
  if ( (*(_BYTE *)(v21 + 26) & 0x40) == 0 || (v26 = ObpInfoMaskToOffset[*(_BYTE *)(v21 + 26) & 0x7F], v21 == v26) )
  {
LABEL_22:
    v24 = (v17 >> 17) & 7;
    if ( HandleInformation )
    {
      HandleInformation->GrantedAccess = v23;
      if ( (v16 & 0x2000000) != 0 )
        LOBYTE(v24) = v24 | 8;
      v29 = v24 & 7;
      HandleInformation->HandleAttributes = v29;
      if ( (v29 & 4) == 0 )
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
        if ( v41 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        return 0;
      }
    }
    if ( DesiredAccess && !(unsigned __int8)ObpAuditObjectAccess(v12, (_DWORD)Handle, (_DWORD)v14, v21, DesiredAccess) )
    {
      v28 = -1073741816;
      goto LABEL_74;
    }
    goto LABEL_26;
  }
  if ( *(_QWORD *)(v21 - v26 + 16) != 1LL )
  {
    LODWORD(v16) = DWORD2(v39);
    v17 = v39;
    goto LABEL_22;
  }
  v28 = -1073700858;
LABEL_74:
  ObDereferenceObject((void *)(v21 + 48));
LABEL_75:
  if ( v41 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
LABEL_77:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v28;
}
