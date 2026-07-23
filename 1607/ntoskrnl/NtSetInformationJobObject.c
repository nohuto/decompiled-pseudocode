/*
 * XREFs of NtSetInformationJobObject @ 0x140463AA8
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140005088 (KeQueryActiveGroupCount.c)
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetJobServerSilo @ 0x140076F4C (PsGetJobServerSilo.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     KeAddGroupAffinityEx @ 0x14007DACC (KeAddGroupAffinityEx.c)
 *     KeSetSchedulingGroupWeights @ 0x1400A4D04 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400A4E10 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A50A8 (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1400A5870 (KeQuerySchedulingGroupReadyTime.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1400A8908 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 *     KeFirstGroupAffinityEx @ 0x1400AA560 (KeFirstGroupAffinityEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspGetServerSiloStatePointer @ 0x140171E30 (PspGetServerSiloStatePointer.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x1401DA888 (KeSetSchedulingGroupCycleNotification.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     SePrivilegeCheck @ 0x140414350 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140463A00 (PspLockJobMemoryLimitsExclusive.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140463A60 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140465DD0 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140465DE8 (PspNotificationLimitRateControlToleranceField.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspRateControlLimitFlag @ 0x14046833C (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404683A0 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1404683F4 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x140468440 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobConditionally @ 0x1404687F4 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140468810 (PspLockJobConditionally.c)
 *     PspUnlockJobChain @ 0x140468D3C (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x140468DBC (PspLockJobChain.c)
 *     IoAllocateMiniCompletionPacket @ 0x1404707FC (IoAllocateMiniCompletionPacket.c)
 *     PspFreeRateControl @ 0x1404B57B4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1404B57F8 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404B58A0 (PspAddSchedulingGroupToJobChain.c)
 *     PspSetBackgroundJobTree @ 0x1404CB7B0 (PspSetBackgroundJobTree.c)
 *     PspSetJobIoRateControl @ 0x1404D4610 (PspSetJobIoRateControl.c)
 *     PspSetJobIoAttribution @ 0x1404D4800 (PspSetJobIoAttribution.c)
 *     PspLockRootJobExclusive @ 0x1404D4E7C (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1404D4EDC (PspFreezeJobTree.c)
 *     PspBindProcessSessionToJob @ 0x1404D65B4 (PspBindProcessSessionToJob.c)
 *     PspScheduleEnforcementWorker @ 0x1404EAB28 (PspScheduleEnforcementWorker.c)
 *     IopFreeMiniCompletionPacket @ 0x1404FEE60 (IopFreeMiniCompletionPacket.c)
 *     PsChargeSharedPoolQuota @ 0x14051D950 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 *     SeCheckPrivilegedObject @ 0x140547ABC (SeCheckPrivilegedObject.c)
 *     PspConvertSiloToServerSilo @ 0x14067E604 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x14067E740 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140680278 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140680338 (PspApplyWorkingSetLimits.c)
 *     PspSetNetRateControl @ 0x140680CC4 (PspSetNetRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1406A1AA8 (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSiloRootDirectory @ 0x1406E613C (ObCreateSiloRootDirectory.c)
 */

NTSTATUS __stdcall NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  unsigned __int64 v4; // rbp
  size_t v5; // r12
  __int32 v8; // ecx
  ULONG v9; // edx
  bool v10; // zf
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int16 *v14; // rdi
  ACCESS_MASK v15; // edx
  __int64 v16; // r15
  void *v17; // rax
  int v18; // esi
  char v19; // bl
  _QWORD *MiniCompletionPacket; // rbx
  void *v21; // rcx
  void *v22; // rdi
  unsigned int v23; // ebx
  int v24; // eax
  struct _ERESOURCE *v25; // rdi
  unsigned int *v26; // rbx
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // r9
  int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  PVOID PoolWithTag; // rax
  __int64 v41; // rax
  unsigned __int16 Group; // ax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int16 v46; // ax
  __int64 v47; // rax
  __int64 v48; // rax
  int *v49; // rdi
  __int64 v50; // rcx
  char v51; // bl
  _BYTE *v52; // rax
  _BYTE *v53; // rdi
  _QWORD *i; // rdi
  int v55; // edi
  __int64 v56; // rbx
  int v57; // ecx
  bool v58; // cc
  int v59; // eax
  __int64 RateControl; // rax
  __int64 v61; // rdx
  __int64 *v62; // rsi
  int v63; // ecx
  __int64 v64; // rcx
  _QWORD *v65; // rbx
  _QWORD *v66; // r8
  _QWORD *v67; // rdx
  int v68; // ebx
  __int64 v69; // rcx
  __int64 v70; // rcx
  unsigned int v71; // ecx
  unsigned int v72; // ebx
  unsigned __int16 v73; // r8
  __m128i v74; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v76; // rax
  __int64 v77; // r9
  unsigned __int16 v78; // dx
  __int64 v79; // r8
  PVOID v80; // rdi
  __int64 v81; // rax
  void *v82; // r12
  __int64 *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  char v86; // bl
  __int64 v87; // r8
  int v88; // edx
  int Silo; // eax
  unsigned __int64 v90; // rcx
  unsigned __int16 v91; // dx
  unsigned __int64 v92; // r8
  POOL_TYPE v93; // ecx
  _WORD *PoolWithQuotaTag; // rax
  _WORD *v95; // rbx
  void *v96; // rcx
  bool v97; // bl
  void *v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rbx
  int v101; // eax
  int v102; // eax
  int v103; // r8d
  unsigned __int64 v104; // rdx
  __int64 v105; // r9
  unsigned __int64 v106; // r11
  __int64 v107; // r10
  __m128i v108; // xmm2
  __m128i v109; // xmm3
  __m128i v110; // xmm4
  unsigned __int64 v111; // rcx
  __m128i v112; // xmm2
  __m128i v113; // xmm3
  __m128i v114; // xmm1
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r8
  unsigned int v119; // edx
  int v120; // eax
  int v121; // edx
  int *v122; // r9
  int *v123; // r10
  int v124; // r8d
  int **v125; // rbx
  PVOID v126; // rdi
  __int64 v127; // rax
  int *v128; // rdi
  int v129; // esi
  __int64 v130; // rdx
  _DWORD *v131; // rax
  __int64 v132; // r8
  __int64 v133; // rdx
  __int64 v134; // r9
  _DWORD *v135; // rax
  _DWORD *v136; // r8
  int v137; // edx
  int *v138; // rax
  __int64 v139; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  char v141; // bl
  char v142; // di
  __int64 v143; // r8
  __int64 v144; // rdx
  volatile signed __int32 *ServerSiloStatePointer; // rcx
  signed __int32 v146; // eax
  signed __int32 v147; // ett
  KPROCESSOR_MODE v148; // bl
  __int64 v149; // rdx
  signed __int32 v150[8]; // [rsp+0h] [rbp-90h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-70h]
  PVOID *Object; // [rsp+28h] [rbp-68h]
  KPROCESSOR_MODE AccessMode; // [rsp+90h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = JobInformationLength;
  *(_QWORD *)(v4 + 112) = JobHandle;
  *(_DWORD *)(v4 + 8) = JobInformationClass;
  *(_QWORD *)(v4 + 120) = JobInformation;
  v8 = JobInformationClass - 1;
  if ( (unsigned int)(JobInformationClass - 1) > 0x29 )
    return -1073741821;
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( JobInformationLength == 144 )
        goto LABEL_18;
      v10 = JobInformationLength == 152;
      break;
    case JobObjectNotificationLimitInformation:
      v10 = ((JobInformationLength - 48) & 0xFFFFFFF7) == 0;
      break;
    case JobObjectIoRateControlInformation:
      if ( JobInformationLength == 48 || JobInformationLength == 96 )
        goto LABEL_18;
      v10 = JobInformationLength == 144;
      break;
    default:
      v9 = PspJobInfoLengths[v8];
      if ( JobInformationLength != v9
        && (JobInformationClass != JobObjectGroupInformation && JobInformationClass != JobObjectGroupInformationEx
         || JobInformationLength < v9) )
      {
        return -1073741820;
      }
      goto LABEL_18;
  }
  if ( !v10 )
    return -1073741820;
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  *(_BYTE *)v4 = PreviousMode;
  *(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = PreviousMode;
  if ( PreviousMode )
  {
    v14 = *(unsigned __int16 **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    if ( JobInformationLength )
    {
      if ( ((PspJobInfoAlign[v8] - 1) & (unsigned int)v14) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)v14 + JobInformationLength > 0x7FFFFFFF0000LL
        || (unsigned __int16 *)((char *)v14 + JobInformationLength) < v14 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    PreviousMode = *(_BYTE *)v4;
  }
  else
  {
    v14 = *(unsigned __int16 **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
  }
  if ( !JobHandle )
  {
    if ( JobInformationClass != JobObjectServerSiloRunningState )
      return -1073741816;
    v17 = *(void **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) + 184LL)
                   + 944LL);
    *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v17;
    v16 = (__int64)v17;
    if ( !v17 )
      return -1073741790;
    ObfReferenceObjectWithTag(v17, 0x79517350u);
    v14 = *(unsigned __int16 **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
LABEL_37:
    v18 = 0;
    *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
    v19 = 0;
    --*(_WORD *)(*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) + 486LL);
    if ( JobInformationClass <= JobObjectSchedulingRankBiasInformation )
    {
      if ( JobInformationClass != JobObjectSchedulingRankBiasInformation )
      {
        if ( JobInformationClass <= JobObjectGroupInformation )
        {
          if ( JobInformationClass != JobObjectGroupInformation )
          {
            if ( JobInformationClass != JobObjectBasicLimitInformation )
            {
              switch ( JobInformationClass )
              {
                case JobObjectBasicUIRestrictions:
                  v24 = *(_DWORD *)v14;
                  *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = *(_DWORD *)v14;
                  if ( (v24 & 0xFFFFFF00) != 0 )
                  {
                    v18 = -1073741811;
                  }
                  else
                  {
                    v25 = (struct _ERESOURCE *)(v16 + 56);
                    ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
                    if ( *(_QWORD *)(v16 + 1040) == v16 + 1040 )
                    {
                      v26 = (unsigned int *)(v16 + 480);
                      if ( *(_DWORD *)(v16 + 480) == -2 )
                      {
                        v18 = -1073741790;
                      }
                      else
                      {
                        v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                        PspBindProcessSessionToJob(v16, KeGetCurrentThread()->ApcState.Process);
                        v27 = *v26;
                        *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = *v26;
                        if ( v27 > 0xFFFFFFFD
                          || *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) == *(_DWORD *)(v16 + 448)
                          || (*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = v16,
                              *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = 0,
                              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = *(unsigned int *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x64),
                              v18 = PsInvokeWin32Callout(6, v4 + 376, 1, v4 + 224),
                              *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18,
                              v18 >= 0) )
                        {
                          *(_DWORD *)(v16 + 448) = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                             + 0x64);
                          _InterlockedOr((volatile signed __int32 *)(v16 + 1304), 0x10u);
                          v18 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                          v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                        }
                      }
                    }
                    else
                    {
                      v18 = -1073741637;
                    }
                    ExReleaseResourceLite(v25);
                  }
                  goto LABEL_454;
                case JobObjectSecurityLimitInformation:
                  *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0) = *(_OWORD *)v14;
                  *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = *((_OWORD *)v14 + 1);
                  *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = *((_QWORD *)v14 + 4);
                  v18 = (*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0) & 0xFFFFFFF0) != 0
                      ? -1073741811
                      : -1073741637;
LABEL_454:
                  KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
                  if ( v18 )
                  {
                    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                      EtwTraceJobSetQuery(v16, JobInformationClass, 0, 0, v18, 1831);
                  }
                  ObfDereferenceObjectWithTag((PVOID)v16, 0x79517350u);
                  return v18;
                case JobObjectEndOfJobTimeInformation:
                  v23 = *(_DWORD *)v14;
                  *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = *(_DWORD *)v14;
                  if ( v23 <= 1 )
                  {
                    ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
                    *(_DWORD *)(v16 + 452) = v23;
                    ExReleaseResourceLite((PERESOURCE)(v16 + 56));
                  }
                  else
                  {
                    v18 = -1073741811;
                  }
                  goto LABEL_454;
                case JobObjectAssociateCompletionPortInformation:
                  MiniCompletionPacket = 0LL;
                  *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = *(_OWORD *)v14;
                  v21 = *(void **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x140);
                  if ( v21 )
                  {
                    v18 = ObReferenceObjectByHandle(
                            v21,
                            2u,
                            IoCompletionObjectType,
                            *(_BYTE *)v4,
                            (PVOID *)(v4 + 256),
                            0LL);
                    if ( v18 >= 0 )
                    {
                      if ( *(_QWORD *)(v16 + 984)
                        || (MiniCompletionPacket = (_QWORD *)IoAllocateMiniCompletionPacket(
                                                               &PspNotificationPacketCallback,
                                                               v16)) != 0LL )
                      {
                        ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
                        if ( *(_QWORD *)(v16 + 456) || (*(_DWORD *)(v16 + 1304) & 1) != 0 )
                        {
                          ExReleaseResourceLite((PERESOURCE)(v16 + 56));
                          ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x100));
                          v18 = -1073741811;
                        }
                        else
                        {
                          if ( !*(_QWORD *)(v16 + 984) )
                          {
                            *(_QWORD *)(v16 + 984) = MiniCompletionPacket;
                            MiniCompletionPacket = 0LL;
                          }
                          PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                          *(_QWORD *)(v16 + 464) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                             + 0x138);
                          *(_QWORD *)(v16 + 456) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                             + 0x100);
                          *(_QWORD *)(v16 + 472) = 0LL;
                          PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                          if ( (*(_DWORD *)(v16 + 876) & 0x40) != 0 )
                            PspEnumJobsAndProcessesInJobHierarchy(
                              v16,
                              0,
                              0,
                              (unsigned int)PspAssociateCompletionPortCallback,
                              v16,
                              1);
                          ExReleaseResourceLite((PERESOURCE)(v16 + 56));
                        }
                      }
                      else
                      {
                        v18 = -1073741670;
                      }
                    }
                    if ( MiniCompletionPacket )
                    {
                      MiniCompletionPacket[7] = 0LL;
                      IopFreeMiniCompletionPacket(MiniCompletionPacket);
                    }
                  }
                  else
                  {
                    ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
                    PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                    v22 = *(void **)(v16 + 456);
                    *(_QWORD *)(v16 + 456) = 0LL;
                    PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                    ExReleaseResourceLite((PERESOURCE)(v16 + 56));
                    if ( v22 )
                      ObfDereferenceObject(v22);
                  }
                  goto LABEL_454;
              }
              if ( JobInformationClass != JobObjectExtendedLimitInformation )
                goto LABEL_426;
            }
            memmove((void *)(v4 + 848), v14, v5);
            if ( (unsigned int)v5 < 0x98 )
              memset((void *)(v5 + v4 + 848), 0, 152 - v5);
            if ( JobInformationClass == JobObjectBasicLimitInformation )
            {
              v28 = 255;
            }
            else
            {
              v28 = 2129919;
              if ( (_DWORD)v5 == 144 )
                v28 = 0x7FFF;
            }
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v28;
            v29 = ~v28;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v29;
            if ( (v29 & *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x360)) != 0 )
            {
LABEL_87:
              v18 = -1073741811;
              goto LABEL_454;
            }
            memset((void *)(v4 + 1296), 0, 0x608uLL);
            memset((void *)(v4 + 184), 0, 0x28uLL);
            v31 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x360);
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) = v31;
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x614) = (v31 & 8) != 0
                                                                                         ? *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x378)
                                                                                         : 0;
            if ( (v31 & 0x20) != 0 )
            {
              v32 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x388);
              if ( v32 > 6 )
                goto LABEL_87;
              if ( v32 - 3 <= 1 )
              {
                LOBYTE(v30) = *(_BYTE *)v4;
                v19 = 4
                    * (((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                         SeIncreaseBasePriorityPrivilege,
                         *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
                         2LL,
                         v30) & 1);
                if ( (v19 & 4) == 0 )
                {
LABEL_92:
                  v18 = -1073741727;
                  goto LABEL_454;
                }
                v31 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x360);
              }
              *(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x879) = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x388);
            }
            else
            {
              *(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x879) = 0;
            }
            if ( (v31 & 0x80u) == 0 )
            {
              *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6F4) = 5;
            }
            else
            {
              v33 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38C);
              if ( v33 >= 0xA )
                goto LABEL_87;
              if ( v33 > 5 )
              {
                LOBYTE(v30) = *(_BYTE *)v4;
                v19 ^= (v19 ^ (4
                             * ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
                                 2LL,
                                 v30))) & 4;
                if ( (v19 & 4) == 0 )
                  goto LABEL_92;
                v31 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x360);
                v33 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38C);
              }
              *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6F4) = v33;
            }
            if ( (v31 & 2) != 0 )
            {
              v34 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x350);
              if ( !v34 )
                goto LABEL_87;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F0) = v34;
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F0) = 0LL;
            }
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v31 & 4;
            if ( (v31 & 4) != 0 )
            {
              v35 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x358);
              if ( !v35 )
                goto LABEL_87;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F8) = v35;
            }
            if ( (v31 & 1) != 0 )
            {
              v36 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x368);
              if ( !v36 && !*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x370)
                || v36 == -1LL && *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) == -1LL
                || v36 > *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x370)
                || v36 < 0x14000 )
              {
                goto LABEL_87;
              }
              if ( v36 > PspMinimumWorkingSet )
              {
                if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, *(_BYTE *)v4) )
                  goto LABEL_92;
                v31 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x360);
                v36 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x368);
              }
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x600) = v36;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x608) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x370);
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x600) = 0LL;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x608) = 0LL;
            }
            if ( (v31 & 0x100) != 0 )
            {
              v37 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C0);
              if ( v37 < 0x1000 )
                goto LABEL_87;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x750) = v37 >> 12;
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x750) = 0LL;
            }
            if ( (v31 & 0x200) != 0 )
            {
              v38 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C8);
              if ( v38 < 0x1000 )
                goto LABEL_87;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x758) = v38 >> 12;
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x758) = 0LL;
            }
            if ( (v31 & 0x200000) != 0 )
            {
              v39 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E0);
              if ( v39 < 0x1000 )
                goto LABEL_87;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x760) = v39 >> 12;
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x760) = 0LL;
            }
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x618) = 1310721;
            memset((void *)(v4 + 1564), 0, 0xA4uLL);
            if ( (*(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) & 0x10) != 0 )
            {
              if ( (*(_DWORD *)(v16 + 1304) & 2) != 0
                || !*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x380) )
              {
                goto LABEL_87;
              }
              if ( !*(_QWORD *)(v16 + 432) )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v18 = -1073741670;
                  goto LABEL_454;
                }
                v41 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL, 0LL);
                *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v41;
                if ( !v41 )
                {
                  ExFreePoolWithTag(
                    *(PVOID *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                    0x614A7350u);
                  v18 = -1073741670;
                  v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                  goto LABEL_454;
                }
                v18 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              }
              SeCaptureSubjectContextEx(
                *(PETHREAD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
                *(PEPROCESS *)(*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) + 184LL),
                (PSECURITY_SUBJECT_CONTEXT)(v4 + 192));
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = ((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 192;
              if ( *(_BYTE *)v4 )
              {
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x320) = 1;
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x324) = 1;
                *(LUID *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x328) = SeDebugPrivilege;
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x330) = 0;
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) ^= (*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) ^ SePrivilegeCheck((PPRIVILEGE_SET)(v4 + 800), (PSECURITY_SUBJECT_CONTEXT)(v4 + 192), 1)) & 1;
              }
              else
              {
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) |= 1u;
              }
              v19 |= 2u;
            }
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v16 + 56;
            ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
            if ( (*(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) & 4) == 0 )
            {
              if ( (*(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) & 0x40) != 0 )
              {
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) |= *(_DWORD *)(v16 + 256) & 4;
                *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F8) = *(_QWORD *)(v16 + 232);
              }
              else
              {
                *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F8) = 0LL;
              }
            }
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) &= ~0x40u;
            if ( (v19 & 2) != 0 )
            {
              if ( (*(_DWORD *)(v16 + 1304) & 2) != 0 )
              {
LABEL_153:
                v18 = -1073741811;
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741811;
LABEL_183:
                v51 = v19 & 1;
                if ( v51 )
                {
                  v52 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402F9CD0, 0LL, 0);
                  v53 = v52;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402F9CD0, 0LL) )
                    ExfAcquirePushLockExclusiveEx(&qword_1402F9CD0, v52, (ULONG_PTR)&qword_1402F9CD0);
                  if ( v53 )
                    v53[26] |= 1u;
                  _InterlockedOr(
                    (volatile signed __int32 *)(*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                          + 0x18)
                                              + 1304LL),
                    0x100u);
                  v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                  for ( i = *(_QWORD **)(v16 + 40); i != (_QWORD *)(v16 + 40); i = (_QWORD *)*i )
                  {
                    if ( (*(_DWORD *)(i - 46) & 1) == 0 )
                      PspAddProcessToWorkingSetChangeList(i - 142);
                  }
                  v18 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                }
                ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
                if ( v51 )
                  PspApplyWorkingSetLimits(v16);
                if ( *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) )
                  SeReleaseSubjectContext(*(PSECURITY_SUBJECT_CONTEXT *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 0x50));
                if ( *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
                {
                  ExFreePoolWithTag(
                    *(PVOID *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                    0x614A7350u);
                  PsReturnSharedPoolQuota(*(PVOID *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
                }
                goto LABEL_454;
              }
              if ( (*(_DWORD *)(v16 + 256) & 0x10) != 0 )
              {
                KeFirstGroupAffinityEx((_QWORD *)(v4 + 280), (_WORD *)(v16 + 264));
                Group = *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x120);
              }
              else
              {
                Group = KeGetCurrentPrcb()->Group;
                *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = Group;
              }
              v43 = Group;
              v44 = qword_1403AA618[Group];
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = v44;
              v45 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x380);
              if ( v45 != (v45 & v44) )
              {
                v18 = -1073741811;
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741811;
                v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                goto LABEL_183;
              }
              v46 = *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x120);
              if ( *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x618) <= v46 )
                *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x618) = v46 + 1;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x620 + 8 * v43) |= v45;
              LODWORD(Object) = 1;
              *(_QWORD *)Tag = v4 + 184;
              v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              v18 = PspEnumJobsAndProcessesInJobHierarchy(
                      v16,
                      0,
                      0,
                      (unsigned int)PspSetAffinityLimitCallback,
                      v4 + 184,
                      1);
              *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18;
              if ( v18 < 0 )
                goto LABEL_183;
              v47 = *(_QWORD *)(v16 + 432);
              if ( v47 )
              {
                *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = *(_OWORD *)(v47 + 8);
                *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = *(_OWORD *)(v47 + 24);
                *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = ((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                            + 344;
              }
              else
              {
                *(_QWORD *)(v16 + 432) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                *(_QWORD *)(v16 + 440) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
                *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
              }
              v48 = *(_QWORD *)(v16 + 432);
              *(_OWORD *)v48 = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
              *(_OWORD *)(v48 + 16) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
              *(_QWORD *)(v48 + 32) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8);
            }
            else if ( (*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) & 0x4000) != 0
                   && (*(_DWORD *)(v16 + 1304) & 2) == 0 )
            {
              goto LABEL_153;
            }
            v49 = (int *)(v16 + 256);
            if ( (*(_DWORD *)(v16 + 256) & 1) != 0
              && (*(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) & 1) == 0 )
            {
              _InterlockedOr(v150, 0);
              if ( (qword_1402F9CD0 & 1) != 0 )
                ExfAcquireReleasePushLockExclusive((ULONG_PTR)&qword_1402F9CD0);
              v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              v18 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            }
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v16;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) = *v49;
            *(_QWORD *)(v16 + 240) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x600);
            *(_QWORD *)(v16 + 248) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x608);
            *(_DWORD *)(v16 + 260) = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x614);
            *(_OWORD *)(v16 + 264) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x618);
            *(_OWORD *)(v16 + 280) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x628);
            *(_OWORD *)(v16 + 296) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x638);
            *(_OWORD *)(v16 + 312) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x648);
            *(_OWORD *)(v16 + 328) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x658);
            *(_OWORD *)(v16 + 344) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x668);
            *(_OWORD *)(v16 + 360) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x678);
            *(_OWORD *)(v16 + 376) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x688);
            *(_OWORD *)(v16 + 392) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x698);
            *(_OWORD *)(v16 + 408) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A8);
            *(_QWORD *)(v16 + 424) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6B8);
            *(_BYTE *)(v16 + 873) = *(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x879);
            *(_DWORD *)(v16 + 484) = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6F4);
            *(_QWORD *)(v16 + 224) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F0);
            v50 = v16 + 232;
            *(_QWORD *)(v16 + 232) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F8);
            if ( JobInformationClass == JobObjectExtendedLimitInformation )
            {
              PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
              *v49 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) | *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) & *v49;
              *(_QWORD *)(v16 + 576) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x750);
              *(_QWORD *)(v16 + 584) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x758);
              *(_QWORD *)(v16 + 592) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x760);
              PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
              v50 = v16 + 232;
            }
            else
            {
              *v49 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x610) | *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) & *v49;
            }
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = ~(*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) | *v49);
            if ( *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) )
            {
              PspEnumJobsAndProcessesInJobHierarchy(v16, 0, 0, (unsigned int)PspSetJobTimeLimitCallback, v50, 1);
              *(_QWORD *)(v16 + 184) = 0LL;
              *(_QWORD *)(v16 + 192) = 0LL;
              KeResetEvent((PRKEVENT)v16);
            }
            if ( (*v49 & 6) != 0 )
            {
              _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
              v18 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            }
            if ( (*(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) & 1) == 0 )
              v19 |= 1u;
            PspEnumJobsAndProcessesInJobHierarchy(
              v16,
              (unsigned int)PspSetJobLimitsJobPreCallback,
              (unsigned int)PspSetJobLimitsJobPostCallback,
              (unsigned int)PspSetJobLimitsProcessCallback,
              v4 + 152,
              5);
            goto LABEL_183;
          }
LABEL_264:
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
          v71 = 2;
          if ( JobInformationClass == JobObjectGroupInformationEx )
            v71 = 16;
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v71;
          v72 = (unsigned int)v5 / v71;
          if ( (unsigned int)v5 % v71 )
          {
            v18 = -1073741820;
            goto LABEL_454;
          }
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = (unsigned int)v5 / v71;
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x460) = 1310721;
          memset((void *)(v4 + 1124), 0, 0xA4uLL);
          v73 = KeQueryActiveGroupCount() - 1;
          *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v73;
          while ( v72 )
          {
            if ( JobInformationClass == JobObjectGroupInformationEx )
            {
              v74 = *(__m128i *)v14;
              *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = *(_OWORD *)v14;
              epi16 = _mm_extract_epi16(v74, 4);
              *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = epi16;
              *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = epi16;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = v74.m128i_i64[0];
            }
            else
            {
              v76 = *v14;
              *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v76;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = qword_1403AA618[v76];
              epi16 = *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
            }
            v77 = qword_1403AA618[epi16];
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = v77;
            v78 = *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
            if ( v78 > v73
              || *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x468 + 8LL * epi16)
              || (v79 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x110), v79 != (v77 & v79)) )
            {
              v18 = -1073741811;
              *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741811;
              v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              break;
            }
            KeAddGroupAffinityEx((unsigned __int16 *)(v4 + 1120), v78, v79);
            v72 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) - 1;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v72;
            v14 = (unsigned __int16 *)(*(unsigned int *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30)
                                     + *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x78));
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v14;
            v18 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            v73 = *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
          }
          v80 = 0LL;
          if ( v18 < 0 )
            goto LABEL_454;
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v16 + 432;
          if ( !*(_QWORD *)(v16 + 432) )
          {
            v80 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
            if ( !v80 )
            {
              v18 = -1073741670;
              goto LABEL_454;
            }
            v81 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL, 0LL);
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v81;
            if ( !v81 )
            {
              ExFreePoolWithTag(v80, 0x614A7350u);
              v18 = -1073741670;
LABEL_443:
              v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              goto LABEL_454;
            }
            v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
          SeCaptureSubjectContextEx(
            *(PETHREAD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
            *(PEPROCESS *)(*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) + 184LL),
            (PSECURITY_SUBJECT_CONTEXT)(v4 + 192));
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 192;
          if ( *(_BYTE *)v4 )
          {
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x320) = 1;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x324) = 1;
            *(LUID *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x328) = SeDebugPrivilege;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x330) = 0;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) ^= (*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) ^ SePrivilegeCheck((PPRIVILEGE_SET)(v4 + 800), (PSECURITY_SUBJECT_CONTEXT)(v4 + 192), 1)) & 1;
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) |= 1u;
          }
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v16 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
          v18 = PspEnumJobsAndProcessesInJobHierarchy(v16, 0, 0, (unsigned int)PspSetAffinityLimitCallback, v4 + 184, 1);
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18;
          v82 = *(void **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          if ( v18 >= 0 )
          {
            v83 = *(__int64 **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
            v84 = *v83;
            if ( *v83 )
            {
              *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = *(_OWORD *)(v84 + 8);
              *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = *(_OWORD *)(v84 + 24);
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 344;
            }
            else
            {
              *v83 = (__int64)v80;
              *(_QWORD *)(v16 + 440) = v82;
              v80 = 0LL;
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
            }
            v85 = *v83;
            *(_OWORD *)v85 = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
            *(_OWORD *)(v85 + 16) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
            *(_QWORD *)(v85 + 32) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8);
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v16;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) = *(_DWORD *)(v16 + 256);
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = -17;
            *(_OWORD *)(v16 + 264) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x460);
            *(_OWORD *)(v16 + 280) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x470);
            *(_OWORD *)(v16 + 296) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x480);
            *(_OWORD *)(v16 + 312) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x490);
            *(_OWORD *)(v16 + 328) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x4A0);
            *(_OWORD *)(v16 + 344) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x4B0);
            *(_OWORD *)(v16 + 360) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C0);
            *(_OWORD *)(v16 + 376) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x4D0);
            *(_OWORD *)(v16 + 392) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x4E0);
            *(_OWORD *)(v16 + 408) = *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x4F0);
            *(_QWORD *)(v16 + 424) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x500);
            if ( JobInformationClass == JobObjectGroupInformationEx
              && (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v16 + 264)) )
            {
              *(_DWORD *)(v16 + 256) &= ~0x10u;
              _InterlockedAnd((volatile signed __int32 *)(v16 + 1304), 0xFFFFFFFD);
            }
            else
            {
              *(_DWORD *)(v16 + 256) |= 0x10u;
              _InterlockedOr((volatile signed __int32 *)(v16 + 1304), 2u);
            }
            LODWORD(Object) = 5;
            *(_QWORD *)Tag = v4 + 152;
            v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            PspEnumJobsAndProcessesInJobHierarchy(
              v16,
              (unsigned int)PspSetJobLimitsJobPreCallback,
              0,
              (unsigned int)PspSetJobLimitsProcessCallback,
              v4 + 152,
              5);
            v18 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          }
          ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
          if ( *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
            SeReleaseSubjectContext(*(PSECURITY_SUBJECT_CONTEXT *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                 + 0x28));
          if ( v80 )
          {
            ExFreePoolWithTag(v80, 0x614A7350u);
            PsReturnSharedPoolQuota(v82);
          }
          goto LABEL_454;
        }
        if ( JobInformationClass != JobObjectNotificationLimitInformation )
        {
          if ( JobInformationClass == JobObjectGroupInformationEx )
            goto LABEL_264;
          if ( JobInformationClass != JobObjectCpuRateControlInformation )
          {
            switch ( JobInformationClass )
            {
              case JobObjectCompletionFilter:
                v55 = *(_DWORD *)v14;
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x12C) = v55;
                if ( (v55 & 0xFFFFC001) != 0 )
                {
                  v18 = -1073741811;
                }
                else
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
                  PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                  *(_DWORD *)(v16 + 876) = v55;
                  PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
                  ExReleaseResourceLite((PERESOURCE)(v16 + 56));
                  v18 = 0;
                }
                goto LABEL_454;
              case JobObjectFreezeInformation:
                *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x338) = *(_OWORD *)v14;
                if ( !*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x338)
                  || (*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x338) & 0xFFFFFFF8) != 0 )
                {
                  v18 = -1073741811;
                }
                else
                {
                  v18 = PspFreezeJobTree(v16, v4 + 824);
                  if ( v18 >= 0 )
                    *(_DWORD *)v14 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x338);
                }
                goto LABEL_454;
              case JobObjectBackgroundInformation:
                *(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_BYTE *)v14;
                v18 = PspSetBackgroundJobTree(v16);
                if ( v18 >= 0 )
                  v18 = 0;
                goto LABEL_454;
            }
            goto LABEL_426;
          }
          memmove((void *)(v4 + 248), v14, v5);
          v56 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8);
          if ( (v56 & 0xFFFFFFE0) != 0 )
          {
LABEL_220:
            v18 = -1073741811;
            goto LABEL_454;
          }
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 0;
          v57 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xFC);
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v57;
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v56 & 1;
          if ( (v56 & 1) != 0 )
          {
            if ( (v56 & 2) != 0 )
            {
              if ( (v56 & 0x10) != 0 )
                goto LABEL_220;
              v58 = (unsigned __int16)(v57 - 1) <= 8u;
              goto LABEL_225;
            }
            if ( (unsigned __int16)(v57 - 1) > 0x270Fu )
              goto LABEL_220;
            if ( (v56 & 0x10) != 0 )
            {
              if ( (v56 & 4) != 0 || HIWORD(v57) < (unsigned __int16)v57 )
                goto LABEL_220;
              v58 = HIWORD(v57) <= 0x2710u;
LABEL_225:
              if ( !v58 )
                goto LABEL_220;
            }
          }
          PspLockJobChain(v16, *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
          v59 = *(_DWORD *)(v16 + 1304);
          if ( *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
          {
            if ( (v59 & 0x20) == 0 )
            {
              RateControl = PspAllocateRateControl(2LL);
              v61 = RateControl;
              if ( !RateControl )
              {
                v18 = -1073741670;
                goto LABEL_263;
              }
              *(_QWORD *)(v16 + 992) = RateControl;
LABEL_240:
              v62 = (__int64 *)(v16 + 992);
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v16 + 992;
              *(_DWORD *)(*(_QWORD *)(v16 + 992) + 40LL) = 0;
              v63 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xFC);
              *(_DWORD *)(*(_QWORD *)(v16 + 992) + 44LL) = v63;
              if ( *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
              {
                if ( (v56 & 4) != 0 )
                {
                  *(_DWORD *)(*v62 + 40) |= 1u;
                  *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x42) = v63;
                }
                if ( (v56 & 2) != 0 )
                {
                  *(_DWORD *)(*v62 + 40) |= 4u;
                  *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 0;
                }
                else
                {
                  *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 1;
                  if ( (v56 & 0x14) == 0 )
                    *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x42) = 10000;
                }
                if ( (v56 & 8) != 0 )
                  *(_DWORD *)(*v62 + 40) |= 2u;
                if ( (v56 & 0x10) != 0 )
                  *(_DWORD *)(*v62 + 40) |= 0x20u;
                v64 = *v62;
                if ( *v62 == v61 )
                {
                  *(_QWORD *)(v64 + 128) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
                  v18 = PspAddSchedulingGroupToJobChain(*(_QWORD *)(v16 + 1056), v16);
                  *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18;
                  if ( v18 < 0 )
                  {
                    v65 = *(_QWORD **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                    if ( *v65 )
                    {
                      PspFreeRateControl(*v65, 2LL);
                      *v65 = 0LL;
                    }
                    goto LABEL_263;
                  }
                  _InterlockedOr((volatile signed __int32 *)(v16 + 1304), 0x20u);
                  v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                  v62 = *(__int64 **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                }
                else
                {
                  *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v64 + 128;
                  v66 = (_QWORD *)(v4 + 64);
                  v67 = (_QWORD *)(v4 + 168);
                  if ( (*(_DWORD *)(v64 + 40) & 4) != 0 )
                    KeSetSchedulingGroupWeights(1u, (__int64)v67, (__int64)v66);
                  else
                    KeSetSchedulingGroupCpuRates(v64, v67, v66);
                }
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_DWORD *)(*v62 + 40);
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB4) = *(_DWORD *)(*v62 + 44);
              }
              else
              {
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 3;
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 655370000;
                *(_DWORD *)(*v62 + 40) |= 0x40u;
                v68 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
                *(_DWORD *)(*v62 + 44) = v68;
                v69 = *v62 + 128;
                *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v69;
                *(_QWORD *)(v16 + 1008) += KeQuerySchedulingGroupReadyTime(v69);
                KeSetSchedulingGroupCpuRates(v70, (_QWORD *)(v4 + 168), (_QWORD *)(v4 + 64));
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0;
                *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB4) = v68;
              }
              v18 = 0;
              if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                EtwTraceJobSetQuery(v16, 15, v4 + 176, 0, 0, 1829);
LABEL_263:
              PspUnlockJobChain(v16, *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
              goto LABEL_454;
            }
          }
          else if ( (v59 & 0x20) == 0 )
          {
            v18 = -1073741811;
            goto LABEL_263;
          }
          v61 = 0LL;
          goto LABEL_240;
        }
LABEL_358:
        if ( (_DWORD)v5 == 48 )
        {
          v112 = *(__m128i *)v14;
          *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x428) = *(_OWORD *)v14;
          v113 = *((__m128i *)v14 + 1);
          *(__m128i *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x438) = v113;
          v114 = *((__m128i *)v14 + 2);
          *(__m128i *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x448) = v114;
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) = 0LL;
          v103 = _mm_cvtsi128_si32(_mm_srli_si128(v114, 8));
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F8) = v103;
          v107 = v112.m128i_i64[0];
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) = v112.m128i_i64[0];
          v106 = _mm_srli_si128(v112, 8).m128i_u64[0];
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8) = v106;
          v105 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x438);
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E0) = v105;
          v104 = _mm_srli_si128(v113, 8).m128i_u64[0];
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E8) = v104;
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F0) = _mm_cvtsi128_si32(v114);
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F4) = _mm_cvtsi128_si32(_mm_srli_si128(v114, 4));
          v102 = 459268;
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 459268;
        }
        else
        {
          if ( (_DWORD)v5 == 56 )
          {
            v108 = *(__m128i *)v14;
            *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F0) = *(_OWORD *)v14;
            v109 = *((__m128i *)v14 + 1);
            *(__m128i *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x400) = v109;
            v110 = *((__m128i *)v14 + 2);
            *(__m128i *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x410) = v110;
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x420) = *((_QWORD *)v14 + 6);
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) = 0LL;
            v103 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x420);
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F8) = v103;
            v107 = v108.m128i_i64[0];
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) = v108.m128i_i64[0];
            v106 = _mm_srli_si128(v108, 8).m128i_u64[0];
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8) = v106;
            v105 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x400);
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E0) = v105;
            v111 = _mm_srli_si128(v109, 8).m128i_u64[0];
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x300) = v111;
            v104 = v110.m128i_i64[0];
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E8) = v110.m128i_i64[0];
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F0) = _mm_cvtsi128_si32(_mm_srli_si128(v110, 8));
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F4) = _mm_cvtsi128_si32(_mm_srli_si128(v110, 12));
            v102 = 2589188;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 2589188;
            goto LABEL_364;
          }
          memmove((void *)(v4 + 720), v14, v5);
          v102 = 2064900;
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 2064900;
          v103 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F8);
          v104 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E8);
          v105 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E0);
          v106 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8);
          v107 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0);
        }
        v111 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x300);
LABEL_364:
        if ( (~v102 & v103) != 0 )
        {
LABEL_365:
          v18 = -1073741811;
          goto LABEL_454;
        }
        if ( (v103 & 0x8000) != 0 )
        {
          if ( v111 < 0x1000 )
            goto LABEL_365;
        }
        else
        {
          v111 = 0LL;
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x300) = 0LL;
        }
        if ( (v103 & 0x200) != 0 )
        {
          if ( v104 < 0x1000 || v104 < v111 )
            goto LABEL_365;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E8) = 0LL;
        }
        if ( (v103 & 4) != 0 )
        {
          if ( !v105 )
            goto LABEL_365;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E0) = 0LL;
        }
        if ( (v103 & 0x10000) != 0 )
        {
          if ( !v107 )
            goto LABEL_365;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) = 0LL;
        }
        if ( (v103 & 0x20000) != 0 )
        {
          if ( !v106 )
            goto LABEL_365;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8) = 0LL;
        }
        v115 = 0LL;
        do
        {
          v116 = PspNotificationLimitRateControlToleranceField(v4 + 720, v115);
          PspNotificationLimitRateControlToleranceIntervalField(v4 + 720, v117, v118, v116);
          v120 = PspRateControlLimitFlag(v119);
          if ( (v120 & v124) != 0 )
          {
            if ( !*v122 || *v122 > 3 || !*v123 || *v123 > 3 )
              goto LABEL_365;
          }
          else
          {
            *v122 = 0;
            *v123 = 0;
          }
          v115 = (unsigned int)(v121 + 1);
        }
        while ( (int)v115 < 3 );
        v125 = (int **)(v16 + 968);
        if ( *(_QWORD *)(v16 + 968) )
        {
          v126 = 0LL;
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
        }
        else
        {
          v126 = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
          if ( !v126 )
          {
            v18 = -1073741670;
            goto LABEL_454;
          }
          v127 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 136LL, 0LL);
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v127;
          if ( !v127 )
          {
            ExFreePoolWithTag(v126, 0x624A7350u);
            v18 = -1073741670;
            v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            goto LABEL_454;
          }
          memset(v126, 0, 0x88uLL);
          v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        }
        *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v16 + 56;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
        if ( *v125 )
        {
          if ( v126 )
          {
            ExFreePoolWithTag(v126, 0x624A7350u);
            PsReturnSharedPoolQuota(*(PVOID *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
          }
        }
        else
        {
          *v125 = (int *)v126;
          *(_QWORD *)(v16 + 976) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        }
        v128 = *v125;
        v129 = **v125;
        *((_QWORD *)v128 + 1) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0);
        *((_QWORD *)v128 + 2) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8);
        *((_QWORD *)v128 + 3) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E0);
        v130 = 0LL;
        do
        {
          v131 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v4 + 720, v130);
          *(_DWORD *)(v132 - 12) = *v131;
          v135 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v4 + 720, v133, v132, v134);
          *v136 = *v135;
          v130 = (unsigned int)(v137 + 1);
        }
        while ( (int)v130 < 3 );
        PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
        *((_QWORD *)v128 + 4) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x300) >> 12;
        *((_QWORD *)v128 + 5) = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E8) >> 12;
        **v125 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F8);
        PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
        if ( (**v125 & 0xFFFF7DFF) != 0 )
        {
          _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
          v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        }
        if ( v129 )
        {
          v138 = *v125;
          if ( **v125 )
          {
LABEL_416:
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              EtwTraceJobSetQuery(v16, JobInformationClass, v4 + 720, 0, 0, 1829);
            ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
            PspLockJobMemoryLimitsShared(v16, 0LL);
            v139 = *(_QWORD *)(v16 + 1320);
            v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                     v16,
                                                     *(_QWORD *)(v16 + 960),
                                                     *(_QWORD *)(v16 + 960) + v139,
                                                     33280LL);
            PspUnlockJobMemoryLimitsShared(v16, 0LL);
            if ( JobMemoryUsageNotificationViolations )
            {
              PspScheduleEnforcementWorker(*(_QWORD *)(v16 + 1072));
              v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            }
            v18 = 0;
            goto LABEL_454;
          }
        }
        else
        {
          v138 = *v125;
          if ( !**v125 )
            goto LABEL_416;
        }
        PspEnumJobsAndProcessesInJobHierarchy(
          v16,
          (unsigned int)PspSetJobNotificationCountCallback,
          0,
          0,
          (__int64)v138,
          5);
        goto LABEL_416;
      }
      v86 = *(_BYTE *)v14;
      *(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x61) = *(_BYTE *)v14;
      ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
      if ( (*(_DWORD *)(v16 + 1304) & 0x20) != 0 )
      {
        v87 = *(_QWORD *)(v16 + 992);
        v88 = *(_DWORD *)(v87 + 40);
        if ( (v88 & 0x40) == 0 )
        {
          if ( (v88 & 0x21) != 0 )
          {
            v18 = -1073741637;
            goto LABEL_354;
          }
          if ( (((unsigned __int8)v88 >> 3) & 1) != (v86 != 0) )
          {
            *(_DWORD *)(v87 + 40) = v88 ^ ((unsigned __int8)v88 ^ (unsigned __int8)(8 * (v86 != 0))) & 8;
            KeSetSchedulingGroupRankBias(*(_QWORD *)(v16 + 992) + 128LL, v86, v87);
            v18 = 0;
LABEL_354:
            ExReleaseResourceLite((PERESOURCE)(v16 + 56));
            goto LABEL_454;
          }
        }
      }
      v18 = -1073741811;
      goto LABEL_354;
    }
    if ( JobInformationClass <= JobObjectNotificationLimitInformation2 )
    {
      switch ( JobInformationClass )
      {
        case JobObjectNotificationLimitInformation2:
          goto LABEL_358;
        case JobObjectTimerVirtualizationInformation:
          if ( *(_BYTE *)v14 == 1 )
          {
            PspEnumJobsAndProcessesInJobHierarchy(
              v16,
              0,
              (unsigned int)PspEnableTimerVirtualization,
              (unsigned int)PspEnableProcessTimerVirtualization,
              0LL,
              0);
            v18 = 0;
          }
          else
          {
            v18 = -1073741811;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741811;
          }
          goto LABEL_454;
        case JobObjectCycleTimeNotification:
          v99 = *(_QWORD *)v14;
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = v99;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
          if ( (*(_DWORD *)(v16 + 1304) & 0x20) != 0 )
          {
            v100 = *(_QWORD *)(v16 + 992);
            v101 = *(_DWORD *)(v100 + 40);
            if ( (v101 & 0x10) == 0 )
            {
              *(_DWORD *)(v100 + 40) = v101 | 0x10;
              KeInitializeDpc(
                (PRKDPC)(v100 + 48),
                (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine,
                (PVOID)v16);
            }
            KeSetSchedulingGroupCycleNotification(v100 + 128, v100 + 48, v99);
            v18 = 0;
          }
          else
          {
            v18 = -1073741811;
          }
          goto LABEL_354;
        case JobObjectClearEvent:
          ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 56), 1u);
          KeResetEvent((PRKEVENT)v16);
          ExReleaseResourceLite((PERESOURCE)(v16 + 56));
          break;
        case JobObjectClearPeakJobMemoryUsed:
          PspLockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
          *(_QWORD *)(v16 + 608) = 0LL;
          *(_QWORD *)(v16 + 600) = 0LL;
          PspUnlockJobMemoryLimitsExclusive(v16, 0LL, 0LL);
          break;
        case JobObjectIoRateControlInformation:
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = 0LL;
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0LL;
          memset((void *)(v4 + 544), 0, 0x90uLL);
          memmove((void *)(v4 + 544), v14, v5);
          v90 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x238);
          if ( v90 )
          {
            v91 = *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x248);
            if ( !v91 )
              goto LABEL_331;
            if ( (v90 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v92 = v90 + v91;
            if ( v92 > 0x7FFFFFFF0000LL || v92 < v90 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v91 = *(_WORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x248);
            }
            if ( !v91 || (v91 & 1) != 0 )
            {
LABEL_331:
              v18 = -1073741811;
              *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741811;
              v96 = 0LL;
              goto LABEL_342;
            }
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE4) = 1;
            v93 = PagedPool;
            if ( *(_BYTE *)v4 == 1 )
              v93 = 9;
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE4) = v93;
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(v93, v91 + 2LL, 0x624A7350u);
            v95 = PoolWithQuotaTag;
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = PoolWithQuotaTag;
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              v18 = -1073741801;
              *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1073741801;
              v96 = 0LL;
LABEL_342:
              if ( v96 )
                ExFreePoolWithTag(v96, 0);
              v98 = *(void **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0);
              if ( v98 )
                ExFreePoolWithTag(v98, 0);
              goto LABEL_454;
            }
            memmove(
              PoolWithQuotaTag,
              *(const void **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x238),
              *(unsigned __int16 *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x248));
            v95[(unsigned __int64)*(unsigned __int16 *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x248) >> 1] = 0;
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = v95;
          }
          if ( (*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x244) & 0xFFFFFFFC) != 0 )
          {
            v18 = -1073741811;
LABEL_334:
            v96 = *(void **)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
            goto LABEL_342;
          }
          if ( *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x258)
            || *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x230)
            || *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x270) )
          {
            v18 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                    (__int64)L"O:SYG:SYD:(A;;0x1;;;SY)(A;;0x1;;;BA)",
                    1,
                    v4 + 240,
                    0LL);
            *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18;
            if ( v18 < 0 )
              goto LABEL_334;
            SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 688));
            v97 = SeAccessCheck(
                    *(PSECURITY_DESCRIPTOR *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0),
                    (PSECURITY_SUBJECT_CONTEXT)(v4 + 688),
                    0,
                    1u,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)&IopFileMapping,
                    1,
                    (PACCESS_MASK)(v4 + 304),
                    (PNTSTATUS)(v4 + 16)) != 0;
            SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 688));
            if ( !v97 )
            {
              v18 = *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              goto LABEL_334;
            }
          }
          v18 = PspSetJobIoRateControl(v16, v4 + 544);
          goto LABEL_334;
        case JobObjectNetRateControlInformation:
          Silo = PspSetNetRateControl(v14, (unsigned int)v5);
LABEL_453:
          v18 = Silo;
          goto LABEL_454;
        default:
LABEL_426:
          v18 = -1073741821;
          goto LABEL_454;
      }
      v18 = 0;
      goto LABEL_454;
    }
    switch ( JobInformationClass )
    {
      case JobObjectCreateSilo:
        Silo = PspCreateSilo(v16, 2LL);
        goto LABEL_453;
      case JobObjectSiloRootDirectory:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *(_BYTE *)v4) )
          goto LABEL_448;
        if ( (*(_DWORD *)(v16 + 1304) & 0x40000000) != 0 )
        {
          Silo = ObCreateSiloRootDirectory(v16, *(unsigned int *)v14);
          goto LABEL_453;
        }
        break;
      case JobObjectServerSiloInitialize:
        v148 = *(_BYTE *)v4;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *(_BYTE *)v4) )
          goto LABEL_448;
        if ( (*(_DWORD *)(v16 + 1304) & 0x40000000) != 0 )
        {
          *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = *(_QWORD *)v14;
          LOBYTE(v149) = v148;
          Silo = PspConvertSiloToServerSilo(v16, v149);
          goto LABEL_453;
        }
        break;
      case JobObjectServerSiloRunningState:
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, *(_BYTE *)v4) )
        {
          *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = *(_DWORD *)v14;
          PsGetJobServerSilo(v16, (__int64 *)(v4 + 144));
          if ( !PsIsHostSilo(*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x90)) )
          {
            ServerSiloStatePointer = (volatile signed __int32 *)PspGetServerSiloStatePointer(*(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x90));
            v146 = *ServerSiloStatePointer;
            if ( *ServerSiloStatePointer == 1 )
            {
              while ( *(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) == 2 )
              {
                v147 = v146;
                v146 = _InterlockedCompareExchange(ServerSiloStatePointer, 2, v146);
                if ( v147 == v146 )
                {
                  v18 = 0;
                  goto LABEL_443;
                }
                if ( v146 != 1 )
                  break;
              }
            }
            v18 = -1073700861;
            goto LABEL_443;
          }
          break;
        }
LABEL_448:
        v18 = -1073741727;
        goto LABEL_454;
      case JobObjectIoAttribution:
        v141 = 0;
        *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = *(_OWORD *)v14;
        *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B0) = *((_OWORD *)v14 + 1);
        *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C0) = *((_OWORD *)v14 + 2);
        *(_OWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D0) = *((_OWORD *)v14 + 3);
        *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) = *((_QWORD *)v14 + 8);
        if ( (*(_DWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) & 0xFFFFFFFC) != 0
          || (*(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) & 3) == 0 )
        {
          v18 = -1073741811;
        }
        else
        {
          v142 = *(_BYTE *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) & 1;
          v141 = 8;
          PspLockRootJobExclusive(
            v16,
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
            v4 + 136);
          PspLockJobConditionally(v16, v4 + 136);
          LOBYTE(v143) = 1;
          LOBYTE(v144) = v142;
          v18 = PspSetJobIoAttribution(v16, v144, v143, 1LL);
          if ( v18 >= 0 )
          {
            PspUnlockJobConditionally(v16, v4 + 136);
            PspUnlockJob(
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
              *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
            v141 = 0;
          }
        }
        if ( (v141 & 8) != 0 )
        {
          PspUnlockJobConditionally(v16, v4 + 136);
          PspUnlockJob(
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
            *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
        }
        goto LABEL_454;
      default:
        goto LABEL_426;
    }
    v18 = -1073740535;
    goto LABEL_454;
  }
  v15 = 2;
  if ( JobInformationClass == JobObjectSecurityLimitInformation )
    v15 = 16;
  result = ObReferenceObjectByHandleWithTag(
             JobHandle,
             v15,
             (POBJECT_TYPE)PsJobType,
             PreviousMode,
             0x79517350u,
             (PVOID *)(v4 + 24),
             0LL);
  if ( result >= 0 )
  {
    v16 = *(_QWORD *)(((unsigned __int64)&AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    goto LABEL_37;
  }
  return result;
}
