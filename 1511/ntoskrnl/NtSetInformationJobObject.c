/*
 * XREFs of NtSetInformationJobObject @ 0x1404855D8
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x140021D38 (KeQuerySchedulingGroupReadyTime.c)
 *     PsGetJobServerSilo @ 0x1400222FC (PsGetJobServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     KeAddGroupAffinityEx @ 0x14009409C (KeAddGroupAffinityEx.c)
 *     KeSetSchedulingGroupWeights @ 0x1400C3D64 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1400C3E74 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400C4120 (KeSetSchedulingGroupRankBias.c)
 *     KeFirstGroupAffinityEx @ 0x1400EB098 (KeFirstGroupAffinityEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     KeQueryActiveGroupCount @ 0x1400F9548 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoCreateFlow @ 0x1401BD6C0 (IoCreateFlow.c)
 *     IoDeleteFlow @ 0x1401BD6FC (IoDeleteFlow.c)
 *     IoEnableIoQos @ 0x1401BD738 (IoEnableIoQos.c)
 *     IoSetFlowPolicy @ 0x1401BD874 (IoSetFlowPolicy.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x1401CB2F4 (KeSetSchedulingGroupCycleNotification.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x1401F59BC (RtlUnicodeStringCbCopyStringN.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspBindProcessSessionToJob @ 0x1403E82EC (PspBindProcessSessionToJob.c)
 *     PspLockJobChain @ 0x1403E951C (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1403E9574 (PspUnlockJobChain.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1403EC4B0 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1403EC4CC (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x1403ECDA8 (PspLockRootJobExclusive.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopFreeMiniCompletionPacket @ 0x14042F3B0 (IopFreeMiniCompletionPacket.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     IoAllocateMiniCompletionPacket @ 0x14044EF10 (IoAllocateMiniCompletionPacket.c)
 *     PsChargeSharedPoolQuota @ 0x14046B774 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x14046C2DC (PsReturnSharedPoolQuota.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SePrivilegeCheck @ 0x140472B50 (SePrivilegeCheck.c)
 *     PspFreezeJobTree @ 0x14048641C (PspFreezeJobTree.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140486708 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspLockJobMemoryLimitsExclusive @ 0x140486750 (PspLockJobMemoryLimitsExclusive.c)
 *     PspSetBackgroundJobTree @ 0x1404867B0 (PspSetBackgroundJobTree.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404868AC (PspAddSchedulingGroupToJobChain.c)
 *     PspFreeRateControl @ 0x140487854 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140487898 (PspAllocateRateControl.c)
 *     SeCheckPrivilegedObject @ 0x14050C338 (SeCheckPrivilegedObject.c)
 *     PsSetSiloObjectRootDirectoryByPointer @ 0x14063FCE8 (PsSetSiloObjectRootDirectoryByPointer.c)
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140640174 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140641D50 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140641E10 (PspApplyWorkingSetLimits.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406421D4 (PspNotificationLimitRateControlToleranceField.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406421EC (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspRateControlLimitFlag @ 0x140642398 (PspRateControlLimitFlag.c)
 *     PspSetJobRateControl @ 0x140642730 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 *     EtwTraceJobSetQuery @ 0x140660C64 (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  unsigned __int64 v4; // rbp
  ULONG v6; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE PreviousMode; // al
  __m128i *v9; // rdi
  ULONG64 v10; // rcx
  void *v11; // rcx
  ACCESS_MASK v12; // edx
  NTSTATUS result; // eax
  __int64 v14; // r15
  int Flow; // esi
  char v16; // bl
  __int64 v17; // rbx
  int v18; // esi
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  bool v23; // bl
  int v24; // eax
  _QWORD *v25; // r8
  _QWORD *v26; // rdx
  struct _ERESOURCE *v27; // rcx
  __int64 MiniCompletionPacket; // rbx
  void *v29; // rcx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int8 v33; // bl
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 RateControl; // rax
  bool v37; // cc
  __int64 v38; // rax
  unsigned int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edi
  __int64 v43; // r9
  int *v44; // rdi
  __int64 v45; // rcx
  char v46; // bl
  __int32 v47; // edi
  void *v48; // rdi
  __int32 v49; // eax
  struct _ERESOURCE *v50; // rdi
  unsigned int *v51; // rbx
  unsigned int v52; // eax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  bool v55; // zf
  void *v56; // rax
  unsigned int v57; // ebx
  unsigned int v58; // eax
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  PVOID v64; // rsi
  __int64 v65; // rax
  unsigned __int16 Group; // ax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdi
  _QWORD *j; // rdi
  PVOID v76; // rbx
  unsigned int v77; // ecx
  int v78; // eax
  int v79; // edx
  unsigned __int16 v80; // r8
  __m128i v81; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v83; // rax
  __int64 v84; // r9
  unsigned __int16 v85; // dx
  __int64 v86; // r8
  int v87; // eax
  __int64 v88; // rax
  ULONG v89; // edx
  void *v90; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *v91; // rdi
  char *v92; // r12
  __int64 *v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  PVOID PoolWithQuotaTag; // rbx
  const wchar_t *v97; // rdi
  unsigned __int16 v98; // si
  ULONG64 v99; // rcx
  POOL_TYPE v100; // ecx
  int v101; // edi
  int v102; // eax
  int v103; // eax
  __int64 v104; // rdi
  __int64 v105; // rbx
  int v106; // eax
  int Silo; // eax
  struct _KTHREAD *v108; // rax
  __int64 v109; // rbx
  __int64 v110; // rcx
  int v111; // eax
  unsigned int v112; // eax
  int v113; // eax
  __int64 v114; // r8
  unsigned __int64 v115; // rdx
  __int64 v116; // r9
  unsigned __int64 v117; // r11
  __int64 v118; // r10
  __m128i v119; // xmm2
  __m128i v120; // xmm3
  __m128i v121; // xmm4
  unsigned __int64 v122; // rcx
  __m128i v123; // xmm2
  __m128i v124; // xmm3
  __m128i v125; // xmm1
  __int64 i; // rdx
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  int v130; // eax
  int v131; // edx
  int *v132; // r9
  int *v133; // r10
  int **v134; // rbx
  PVOID PoolWithTag; // rdi
  __int64 v136; // rax
  int *v137; // rcx
  int v138; // r9d
  __int64 v139; // rdx
  _DWORD *v140; // r8
  _DWORD *v141; // rax
  __int64 v142; // r8
  _DWORD *v143; // rax
  _DWORD *v144; // r8
  int v145; // edx
  int *v146; // rax
  signed __int32 v147[8]; // [rsp+0h] [rbp-80h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-60h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-58h]
  KPROCESSOR_MODE AccessMode[4]; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 48) = JobInformationLength;
  *(_QWORD *)(v4 + 96) = JobHandle;
  *(_DWORD *)(v4 + 8) = JobInformationClass;
  *(_QWORD *)(v4 + 112) = JobInformation;
  if ( (unsigned int)(JobInformationClass - 1) > 0x28 )
    return -1073741821;
  if ( JobInformationClass == JobObjectExtendedLimitInformation )
  {
    if ( JobInformationLength == 144 )
      goto LABEL_5;
    v55 = JobInformationLength == 152;
  }
  else
  {
    if ( JobInformationClass != JobObjectNotificationLimitInformation )
    {
      v6 = dword_1406A38BC[JobInformationClass];
      if ( JobInformationLength != v6
        && (JobInformationClass != JobObjectGroupInformation
         && JobInformationClass != JobObjectGroupInformationEx
         && JobInformationClass != JobObjectSiloRootDirectory
         || JobInformationLength < v6) )
      {
        return -1073741820;
      }
      goto LABEL_5;
    }
    if ( JobInformationLength == 48 )
      goto LABEL_5;
    v55 = JobInformationLength == 56;
  }
  if ( !v55 )
    return -1073741820;
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  *(_BYTE *)v4 = PreviousMode;
  *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = PreviousMode;
  if ( PreviousMode )
  {
    v9 = *(__m128i **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    if ( JobInformationLength )
    {
      if ( ((dword_1406A396C[JobInformationClass] - 1) & (unsigned int)v9) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (ULONG64)v9->m128i_u64 + JobInformationLength;
      if ( v10 > MmUserProbeAddress || v10 < (unsigned __int64)v9 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    PreviousMode = *(_BYTE *)v4;
  }
  else
  {
    v9 = *(__m128i **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
  }
  v11 = *(void **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  if ( !v11 )
  {
    if ( JobInformationClass != JobObjectServerSiloRunningState )
      return -1073741816;
    v56 = *(void **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) + 184LL)
                   + 944LL);
    *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v56;
    v14 = (__int64)v56;
    if ( !v56 )
      return -1073741790;
    ObfReferenceObject(v56);
    v9 = *(__m128i **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
LABEL_18:
    Flow = 0;
    *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    v16 = 0;
    --*(_WORD *)(*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) + 486LL);
    if ( JobInformationClass <= JobObjectBackgroundInformation )
    {
      if ( JobInformationClass == JobObjectBackgroundInformation )
      {
        *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v9->m128i_i8[0];
        Flow = PspSetBackgroundJobTree((PVOID)v14);
        if ( Flow >= 0 )
          Flow = 0;
        goto LABEL_59;
      }
      if ( JobInformationClass > JobObjectGroupInformation )
      {
        if ( JobInformationClass != JobObjectNotificationLimitInformation )
        {
          if ( JobInformationClass != JobObjectGroupInformationEx )
          {
            switch ( JobInformationClass )
            {
              case JobObjectCpuRateControlInformation:
                memmove(
                  (void *)(v4 + 272),
                  v9,
                  *(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
                v17 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x110);
                if ( (v17 & 0xFFFFFFE0) != 0 )
                  goto LABEL_272;
                *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 0;
                v18 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x114);
                *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v18;
                *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v17 & 1;
                if ( (v17 & 1) == 0 )
                  goto LABEL_29;
                if ( (v17 & 2) != 0 )
                {
                  if ( (v17 & 0x10) != 0 )
                    goto LABEL_272;
                  v37 = (unsigned __int16)(v18 - 1) <= 8u;
                }
                else
                {
                  if ( (unsigned __int16)(v18 - 1) > 0x270Fu )
                    goto LABEL_272;
                  if ( (v17 & 0x10) == 0 )
                    goto LABEL_29;
                  if ( (v17 & 4) != 0 || HIWORD(v18) < (unsigned __int16)v18 )
                  {
LABEL_272:
                    Flow = -1073741811;
                    goto LABEL_59;
                  }
                  v37 = HIWORD(v18) <= 0x2710u;
                }
                if ( v37 )
                {
LABEL_29:
                  PspLockJobChain(v14, *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
                  v19 = *(_DWORD *)(v14 + 1296);
                  if ( *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
                  {
                    if ( (v19 & 0x20) == 0 )
                    {
                      RateControl = PspAllocateRateControl(2LL);
                      v20 = RateControl;
                      if ( !RateControl )
                      {
                        Flow = -1073741670;
                        goto LABEL_58;
                      }
                      *(_QWORD *)(v14 + 1000) = RateControl;
LABEL_40:
                      v21 = (_QWORD *)(v14 + 1000);
                      *(_DWORD *)(*(_QWORD *)(v14 + 1000) + 40LL) = 0;
                      *(_DWORD *)(*(_QWORD *)(v14 + 1000) + 44LL) = v18;
                      if ( *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
                      {
                        if ( (v17 & 4) != 0 )
                        {
                          *(_DWORD *)(*v21 + 40LL) |= 1u;
                          *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A) = v18;
                        }
                        if ( (v17 & 2) != 0 )
                        {
                          *(_DWORD *)(*v21 + 40LL) |= 4u;
                          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 1;
                          if ( (v17 & 0x14) == 0 )
                            *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A) = 10000;
                        }
                        if ( (v17 & 8) != 0 )
                          *(_DWORD *)(*v21 + 40LL) |= 2u;
                        if ( (v17 & 0x10) != 0 )
                          *(_DWORD *)(*v21 + 40LL) |= 0x20u;
                        v22 = *v21;
                        if ( *v21 == v20 )
                        {
                          *(_QWORD *)(v22 + 128) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                             + 0x38);
                          Flow = PspAddSchedulingGroupToJobChain(*(_QWORD *)(v14 + 1064), v14);
                          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = Flow;
                          if ( Flow < 0 )
                          {
                            if ( *v21 )
                            {
                              PspFreeRateControl(*v21, 2LL);
                              *v21 = 0LL;
                            }
                            goto LABEL_58;
                          }
                          _InterlockedOr((volatile signed __int32 *)(v14 + 1296), 0x20u);
                          v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                        }
                        else
                        {
                          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v22 + 128;
                          LOBYTE(v20) = *(_BYTE *)(v22 + 132) & 2;
                          v23 = (_BYTE)v20 != 0;
                          v24 = *(_DWORD *)(v22 + 40);
                          v25 = (_QWORD *)(v4 + 56);
                          v26 = (_QWORD *)(v4 + 144);
                          if ( (v24 & 4) != 0 )
                            KeSetSchedulingGroupWeights(1u, (__int64)v26, (__int64)v25);
                          else
                            KeSetSchedulingGroupCpuRates(v20, v26, v25);
                          if ( v23 )
                            PspEnumJobsAndProcessesInJobHierarchy(
                              (_QWORD *)v14,
                              0,
                              0,
                              (int)PspUpdateSharedReadyQueueAffinityProcessCallback,
                              0LL,
                              5u);
                        }
                        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *(_DWORD *)(*v21 + 40LL);
                        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xAC) = *(_DWORD *)(*v21 + 44LL);
                      }
                      else
                      {
                        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 3;
                        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 655370000;
                        *(_DWORD *)(*v21 + 40LL) |= 0x40u;
                        v30 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
                        *(_DWORD *)(*v21 + 44LL) = v30;
                        v31 = *v21 + 128LL;
                        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v31;
                        *(_QWORD *)(v14 + 1016) += KeQuerySchedulingGroupReadyTime(v31);
                        KeSetSchedulingGroupCpuRates(v32, (_QWORD *)(v4 + 144), (_QWORD *)(v4 + 56));
                        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0;
                        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xAC) = v30;
                        PspEnumJobsAndProcessesInJobHierarchy(
                          (_QWORD *)v14,
                          0,
                          0,
                          (int)PspUpdateSharedReadyQueueAffinityProcessCallback,
                          0LL,
                          5u);
                      }
                      Flow = 0;
                      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                        EtwTraceJobSetQuery(
                          v14,
                          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                          15,
                          v4 + 168,
                          0LL,
                          0,
                          1829);
LABEL_58:
                      PspUnlockJobChain(v14, *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
LABEL_59:
                      KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                           + 0x50));
                      if ( Flow )
                      {
                        if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                          EtwTraceJobSetQuery(
                            v14,
                            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                            JobInformationClass,
                            0,
                            0LL,
                            Flow,
                            1831);
                      }
                      ObfDereferenceObject((PVOID)v14);
                      return Flow;
                    }
                  }
                  else if ( (v19 & 0x20) == 0 )
                  {
                    Flow = -1073741811;
                    goto LABEL_58;
                  }
                  v20 = 0LL;
                  goto LABEL_40;
                }
                goto LABEL_272;
              case JobObjectCompletionFilter:
                v47 = v9->m128i_i32[0];
                *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = v47;
                if ( (v47 & 0xFFFFC001) != 0 )
                {
                  Flow = -1073741811;
                }
                else
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
                  PspLockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
                  *(_DWORD *)(v14 + 884) = v47;
                  PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
                  ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                  Flow = 0;
                }
                goto LABEL_59;
              case JobObjectFreezeInformation:
                *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) = *v9;
                if ( !*(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x278)
                  || (*(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) & 0xFFFFFFF8) != 0 )
                {
                  Flow = -1073741811;
                }
                else
                {
                  Flow = PspFreezeJobTree(v14, v4 + 632);
                  if ( Flow >= 0 )
                    v9->m128i_i32[0] = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x278);
                }
                goto LABEL_59;
            }
LABEL_376:
            Flow = -1073741821;
            goto LABEL_59;
          }
          goto LABEL_280;
        }
LABEL_391:
        v112 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        if ( v112 == 48 )
        {
          v123 = *v9;
          *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x368) = *v9;
          v124 = v9[1];
          *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x378) = v124;
          v125 = v9[2];
          *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x388) = v125;
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = 0LL;
          v114 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v125, 8));
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = v114;
          v118 = v123.m128i_i64[0];
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = v123.m128i_i64[0];
          v117 = _mm_srli_si128(v123, 8).m128i_u64[0];
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) = v117;
          v116 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x378);
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = v116;
          v115 = _mm_srli_si128(v124, 8).m128i_u64[0];
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = v115;
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = _mm_cvtsi128_si32(v125);
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x234) = _mm_cvtsi128_si32(_mm_srli_si128(v125, 4));
          v113 = 459268;
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 459268;
        }
        else
        {
          if ( v112 == 56 )
          {
            v119 = *v9;
            *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x330) = *v9;
            v120 = v9[1];
            *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x340) = v120;
            v121 = v9[2];
            *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x350) = v121;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x360) = v9[3].m128i_i64[0];
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = 0LL;
            v114 = *(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x360);
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = v114;
            v118 = v119.m128i_i64[0];
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = v119.m128i_i64[0];
            v117 = _mm_srli_si128(v119, 8).m128i_u64[0];
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) = v117;
            v116 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x340);
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = v116;
            v122 = _mm_srli_si128(v120, 8).m128i_u64[0];
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = v122;
            v115 = v121.m128i_i64[0];
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = v121.m128i_i64[0];
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = _mm_cvtsi128_si32(_mm_srli_si128(v121, 8));
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x234) = _mm_cvtsi128_si32(_mm_srli_si128(v121, 12));
            v113 = 492036;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 492036;
            goto LABEL_397;
          }
          memmove((void *)(v4 + 528), v9, v112);
          v113 = 2064900;
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 2064900;
          v114 = *(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x238);
          v115 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x228);
          v116 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x220);
          v117 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x218);
          v118 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x210);
        }
        v122 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x240);
LABEL_397:
        if ( (~v113 & (unsigned int)v114) == 0 )
        {
          if ( (v114 & 0x8000) != 0 )
          {
            if ( v122 < 0x1000 )
              goto LABEL_400;
          }
          else
          {
            v122 = 0LL;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = 0LL;
          }
          if ( (v114 & 0x200) != 0 )
          {
            if ( v115 < 0x1000 || v115 < v122 )
              goto LABEL_400;
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = 0LL;
          }
          if ( (v114 & 4) != 0 )
          {
            if ( !v116 )
              goto LABEL_400;
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = 0LL;
          }
          if ( (v114 & 0x10000) != 0 )
          {
            if ( !v118 )
              goto LABEL_400;
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = 0LL;
          }
          if ( (v114 & 0x20000) != 0 )
          {
            if ( !v117 )
              goto LABEL_400;
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) = 0LL;
          }
          for ( i = 0LL; (int)i < 3; i = (unsigned int)(v131 + 1) )
          {
            PspNotificationLimitRateControlToleranceField(v4 + 528, i, v114);
            PspNotificationLimitRateControlToleranceIntervalField(v4 + 528);
            v130 = PspRateControlLimitFlag((unsigned int)v127, v127, v128, v129);
            if ( (v130 & (unsigned int)v114) != 0 )
            {
              if ( !*v132 || *v132 > 3 || !*v133 || *v133 > 3 )
                goto LABEL_400;
            }
            else
            {
              *v132 = 0;
              *v133 = 0;
              v114 = *(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x238);
            }
          }
          v134 = (int **)(v14 + 976);
          if ( *(_QWORD *)(v14 + 976) )
          {
            PoolWithTag = 0LL;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
          }
          else
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
            if ( !PoolWithTag )
              goto LABEL_433;
            v136 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x88uLL, 0LL);
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v136;
            v90 = PoolWithTag;
            if ( !v136 )
            {
              v89 = 1649046352;
              goto LABEL_434;
            }
            memset(PoolWithTag, 0, 0x88uLL);
            v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          }
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v14 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
          if ( *v134 )
          {
            if ( PoolWithTag )
            {
              ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
              PsReturnSharedPoolQuota(
                *(char **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                0x88uLL,
                0LL);
            }
          }
          else
          {
            *v134 = (int *)PoolWithTag;
            *(_QWORD *)(v14 + 984) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          }
          v137 = *v134;
          v138 = **v134;
          *((_QWORD *)v137 + 1) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x210);
          *((_QWORD *)v137 + 2) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x218);
          *((_QWORD *)v137 + 3) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x220);
          *((_QWORD *)v137 + 4) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) >> 12;
          *((_QWORD *)v137 + 5) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) >> 12;
          v139 = 0LL;
          v140 = v137 + 15;
          while ( (int)v139 < 3 )
          {
            v141 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v4 + 528, v139, v140);
            *(_DWORD *)(v142 - 12) = *v141;
            v143 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v4 + 528);
            *v144 = *v143;
            v139 = (unsigned int)(v145 + 1);
            v140 = v144 + 1;
          }
          **v134 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x238);
          if ( (**v134 & 0xFFFF7DFF) != 0 )
          {
            _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
            v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          }
          if ( v138 )
          {
            v146 = *v134;
            if ( **v134 )
            {
LABEL_452:
              if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                EtwTraceJobSetQuery(
                  v14,
                  *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                  JobInformationClass,
                  v4 + 528,
                  0LL,
                  0,
                  1829);
              v27 = *(struct _ERESOURCE **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
              goto LABEL_69;
            }
          }
          else
          {
            v146 = *v134;
            if ( !**v134 )
              goto LABEL_452;
          }
          PspEnumJobsAndProcessesInJobHierarchy(
            (_QWORD *)v14,
            (int)PspSetJobNotificationCountCallback,
            0,
            0,
            (__int64)v146,
            5u);
          goto LABEL_452;
        }
LABEL_400:
        Flow = -1073741811;
        goto LABEL_59;
      }
      if ( JobInformationClass == JobObjectGroupInformation )
      {
LABEL_280:
        v76 = 0LL;
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
        v77 = 2;
        if ( JobInformationClass == JobObjectGroupInformationEx )
          v77 = 16;
        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v77;
        v79 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) % v77;
        v78 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) / v77;
        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v78;
        if ( v79 )
        {
          Flow = -1073741820;
          goto LABEL_59;
        }
        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v78;
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A0) = 1310721LL;
        memset((void *)(v4 + 936), 0, 0xA0uLL);
        v80 = KeQueryActiveGroupCount() - 1;
        *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v80;
        while ( *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
        {
          if ( JobInformationClass == JobObjectGroupInformationEx )
          {
            v81 = *v9;
            *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = *v9;
            epi16 = _mm_extract_epi16(v81, 4);
            *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = epi16;
            *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = epi16;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = v81.m128i_i64[0];
          }
          else
          {
            v83 = v9->m128i_u16[0];
            *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v83;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = qword_1403825B8[v83];
            epi16 = *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          }
          v84 = qword_1403825B8[epi16];
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = v84;
          v85 = *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          if ( v85 > v80
            || *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A8 + 8LL * epi16)
            || (v86 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x118), v86 != (v84 & v86)) )
          {
            Flow = -1073741811;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -1073741811;
            v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            break;
          }
          KeAddGroupAffinityEx((unsigned __int16 *)(v4 + 928), v85, v86);
          v87 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) - 1;
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v87;
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v87;
          v9 = (__m128i *)(*(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48)
                         + *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v9;
          Flow = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v80 = *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        }
        if ( Flow < 0 )
          goto LABEL_59;
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v14 + 432;
        if ( *(_QWORD *)(v14 + 432) )
          goto LABEL_300;
        v76 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
        if ( v76 )
        {
          v88 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v88;
          if ( !v88 )
          {
            v89 = 1632269136;
            v90 = v76;
LABEL_434:
            ExFreePoolWithTag(v90, v89);
            Flow = -1073741670;
LABEL_435:
            v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            goto LABEL_59;
          }
          v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_300:
          SeCaptureSubjectContextEx(
            *(PETHREAD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
            *(PEPROCESS *)(*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) + 184LL),
            (PSECURITY_SUBJECT_CONTEXT)(v4 + 184));
          v91 = (struct _SECURITY_SUBJECT_CONTEXT *)(v4 + 184);
          if ( *(_BYTE *)v4 )
          {
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x260) = 1;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x264) = 1;
            *(LUID *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x268) = SeDebugPrivilege;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x270) = 0;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) ^= (*(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) ^ SePrivilegeCheck((PPRIVILEGE_SET)(v4 + 608), (PSECURITY_SUBJECT_CONTEXT)(v4 + 184), 1)) & 1;
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) |= 1u;
          }
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v14 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
          Flow = PspEnumJobsAndProcessesInJobHierarchy(
                   (_QWORD *)v14,
                   0,
                   0,
                   (int)PspSetAffinityLimitCallback,
                   v4 + 176,
                   1u);
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = Flow;
          v92 = *(char **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          if ( Flow >= 0 )
          {
            v93 = *(__int64 **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
            v94 = *v93;
            if ( *v93 )
            {
              *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = *(_OWORD *)(v94 + 8);
              *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = *(_OWORD *)(v94 + 24);
              v91 = (struct _SECURITY_SUBJECT_CONTEXT *)(v4 + 352);
            }
            else
            {
              *v93 = (__int64)v76;
              *(_QWORD *)(v14 + 440) = v92;
              v76 = 0LL;
              v91 = 0LL;
            }
            v95 = *v93;
            *(_OWORD *)v95 = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
            *(_OWORD *)(v95 + 16) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
            *(_QWORD *)(v95 + 32) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v14;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) = *(_DWORD *)(v14 + 256);
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = -17;
            *(_OWORD *)(v14 + 264) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A0);
            *(_OWORD *)(v14 + 280) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B0);
            *(_OWORD *)(v14 + 296) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C0);
            *(_OWORD *)(v14 + 312) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D0);
            *(_OWORD *)(v14 + 328) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E0);
            *(_OWORD *)(v14 + 344) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F0);
            *(_OWORD *)(v14 + 360) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x400);
            *(_OWORD *)(v14 + 376) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x410);
            *(_OWORD *)(v14 + 392) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x420);
            *(_OWORD *)(v14 + 408) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x430);
            *(_QWORD *)(v14 + 424) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x440);
            if ( JobInformationClass == JobObjectGroupInformationEx
              && (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v14 + 264)) )
            {
              *(_DWORD *)(v14 + 256) &= ~0x10u;
              _InterlockedAnd((volatile signed __int32 *)(v14 + 1296), 0xFFFFFFFD);
            }
            else
            {
              *(_DWORD *)(v14 + 256) |= 0x10u;
              _InterlockedOr((volatile signed __int32 *)(v14 + 1296), 2u);
            }
            LODWORD(HandleInformation) = 5;
            Object = (PVOID *)(v4 + 152);
            v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            PspEnumJobsAndProcessesInJobHierarchy(
              (_QWORD *)v14,
              (int)PspSetJobLimitsJobPreCallback,
              0,
              (int)PspSetJobLimitsProcessCallback,
              v4 + 152,
              5u);
            Flow = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          }
          ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
          if ( v91 )
            SeReleaseSubjectContext(v91);
          if ( v76 )
          {
            ExFreePoolWithTag(v76, 0x614A7350u);
            PsReturnSharedPoolQuota(v92, 0x28uLL, 0LL);
          }
          goto LABEL_59;
        }
LABEL_433:
        Flow = -1073741670;
        goto LABEL_59;
      }
      if ( JobInformationClass != JobObjectBasicLimitInformation )
      {
        switch ( JobInformationClass )
        {
          case JobObjectBasicUIRestrictions:
            v49 = v9->m128i_i32[0];
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C) = v9->m128i_i32[0];
            if ( (v49 & 0xFFFFFF00) != 0 )
            {
              Flow = -1073741811;
            }
            else
            {
              v50 = (struct _ERESOURCE *)(v14 + 56);
              ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
              if ( *(_QWORD *)(v14 + 1048) == v14 + 1048 )
              {
                v51 = (unsigned int *)(v14 + 480);
                if ( *(_DWORD *)(v14 + 480) == -2 )
                {
                  Flow = -1073741790;
                }
                else
                {
                  v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                  PspBindProcessSessionToJob(v14, KeGetCurrentThread()->ApcState.Process);
                  v52 = *v51;
                  *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = *v51;
                  if ( v52 > 0xFFFFFFFD
                    || *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C) == *(_DWORD *)(v14 + 448)
                    || (*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = v14,
                        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = 0,
                        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = *(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C),
                        Flow = PsInvokeWin32Callout((_KPROCESS *)6, v4 + 400, 1, (int)v4 + 264),
                        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = Flow,
                        Flow >= 0) )
                  {
                    *(_DWORD *)(v14 + 448) = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C);
                    _InterlockedOr((volatile signed __int32 *)(v14 + 1296), 0x10u);
                    Flow = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                    v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                  }
                }
              }
              else
              {
                Flow = -1073741637;
              }
              ExReleaseResourceLite(v50);
            }
            goto LABEL_59;
          case JobObjectSecurityLimitInformation:
            *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) = *v9;
            *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0) = v9[1];
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = v9[2].m128i_i64[0];
            Flow = (*(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) & 0xFFFFFFF0) != 0
                 ? -1073741811
                 : -1073741637;
            goto LABEL_59;
          case JobObjectEndOfJobTimeInformation:
            v57 = v9->m128i_i32[0];
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x14C) = v9->m128i_i32[0];
            if ( v57 <= 1 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
              *(_DWORD *)(v14 + 452) = v57;
              ExReleaseResourceLite((PERESOURCE)(v14 + 56));
              goto LABEL_59;
            }
            goto LABEL_400;
          case JobObjectAssociateCompletionPortInformation:
            MiniCompletionPacket = 0LL;
            *(__m128i *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = *v9;
            v29 = *(void **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x158);
            if ( v29 )
            {
              Flow = ObReferenceObjectByHandle(v29, 2u, IoCompletionObjectType, *(_BYTE *)v4, (PVOID *)(v4 + 288), 0LL);
              if ( Flow >= 0 )
              {
                if ( *(_QWORD *)(v14 + 992)
                  || (MiniCompletionPacket = IoAllocateMiniCompletionPacket(
                                               (__int64)&PspNotificationPacketCallback,
                                               v14)) != 0 )
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
                  if ( *(_QWORD *)(v14 + 456) || (*(_DWORD *)(v14 + 1296) & 1) != 0 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                    ObfDereferenceObject(*(PVOID *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x120));
                    Flow = -1073741811;
                  }
                  else
                  {
                    if ( !*(_QWORD *)(v14 + 992) )
                    {
                      *(_QWORD *)(v14 + 992) = MiniCompletionPacket;
                      MiniCompletionPacket = 0LL;
                    }
                    PspLockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
                    *(_QWORD *)(v14 + 464) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x150);
                    *(_QWORD *)(v14 + 456) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x120);
                    *(_QWORD *)(v14 + 472) = 0LL;
                    PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
                    if ( (*(_DWORD *)(v14 + 884) & 0x40) != 0 )
                      PspEnumJobsAndProcessesInJobHierarchy(
                        (_QWORD *)v14,
                        0,
                        0,
                        (int)PspAssociateCompletionPortCallback,
                        v14,
                        1u);
                    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                  }
                }
                else
                {
                  Flow = -1073741670;
                }
              }
              if ( MiniCompletionPacket )
              {
                *(_QWORD *)(MiniCompletionPacket + 56) = 0LL;
                IopFreeMiniCompletionPacket((_SLIST_ENTRY *)MiniCompletionPacket);
              }
            }
            else
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
              PspLockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
              v48 = *(void **)(v14 + 456);
              *(_QWORD *)(v14 + 456) = 0LL;
              PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
              ExReleaseResourceLite((PERESOURCE)(v14 + 56));
              if ( v48 )
                ObfDereferenceObject(v48);
            }
            goto LABEL_59;
        }
        if ( JobInformationClass != JobObjectExtendedLimitInformation )
          goto LABEL_376;
      }
      v38 = *(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v38;
      memmove((void *)(v4 + 656), v9, (unsigned int)v38);
      v39 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      if ( v39 < 0x98 )
      {
        memset(
          (void *)(*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20)
                 + ((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                 + 656),
          0,
          152LL - *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        v39 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      }
      if ( JobInformationClass == JobObjectBasicLimitInformation )
      {
        v40 = 255;
      }
      else
      {
        v55 = v39 == 144;
        v40 = 2129919;
        if ( v55 )
          v40 = 0x7FFF;
      }
      *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v40;
      v41 = ~v40;
      *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v41;
      v42 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A0);
      if ( (v41 & v42) != 0 )
        goto LABEL_176;
      memset((void *)(v4 + 1104), 0, 0x528uLL);
      memset((void *)(v4 + 176), 0, 0x28uLL);
      *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) = v42;
      *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
      *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
      *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
      *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x554) = (v42 & 8) != 0
                                                                                  ? *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                              + 0x2B8)
                                                                                  : 0;
      if ( (v42 & 0x20) != 0 )
      {
        v58 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C8);
        if ( v58 > 6 )
          goto LABEL_176;
        if ( v58 - 3 <= 1 )
        {
          LOBYTE(v43) = *(_BYTE *)v4;
          v16 = 4
              * (((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                   SeIncreaseBasePriorityPrivilege,
                   *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                   2LL,
                   v43) & 1);
          if ( (v16 & 4) == 0 )
            goto LABEL_204;
        }
        *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C1) = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                               + 0x2C8);
      }
      else
      {
        *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C1) = 0;
      }
      if ( (v42 & 0x80u) != 0 )
      {
        v59 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2CC);
        if ( v59 >= 0xA )
          goto LABEL_176;
        if ( v59 > 5 )
        {
          LOBYTE(v43) = *(_BYTE *)v4;
          v16 ^= (v16 ^ (4
                       * ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                           SeIncreaseBasePriorityPrivilege,
                           *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                           2LL,
                           v43))) & 4;
          if ( (v16 & 4) == 0 )
            goto LABEL_204;
          v59 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2CC);
        }
        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x634) = v59;
      }
      else
      {
        *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x634) = 5;
      }
      if ( (v42 & 2) != 0 )
      {
        v60 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x290);
        if ( !v60 )
          goto LABEL_176;
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x530) = v60;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x530) = 0LL;
      }
      *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v42 & 4;
      if ( (v42 & 4) != 0 )
      {
        v61 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x298);
        if ( !v61 )
          goto LABEL_176;
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x538) = v61;
      }
      if ( (v42 & 1) == 0 )
      {
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x540) = 0LL;
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x548) = 0LL;
LABEL_123:
        if ( (v42 & 0x100) != 0 )
        {
          v53 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x300);
          if ( v53 < 0x1000 )
            goto LABEL_176;
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x690) = v53 >> 12;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x690) = 0LL;
        }
        if ( (v42 & 0x200) != 0 )
        {
          v54 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x308);
          if ( v54 < 0x1000 )
            goto LABEL_176;
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x698) = v54 >> 12;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x698) = 0LL;
        }
        if ( (v42 & 0x200000) != 0 )
        {
          v63 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x320);
          if ( v63 < 0x1000 )
            goto LABEL_176;
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A0) = v63 >> 12;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A0) = 0LL;
        }
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x558) = 1310721LL;
        memset((void *)(v4 + 1376), 0, 0xA0uLL);
        if ( (*(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) & 0x10) == 0 )
          goto LABEL_130;
        if ( (*(_DWORD *)(v14 + 1296) & 2) == 0
          && *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0) )
        {
          if ( !*(_QWORD *)(v14 + 432) )
          {
            v64 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v64;
            if ( !v64 )
            {
              Flow = -1073741670;
              goto LABEL_59;
            }
            v65 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v65;
            if ( !v65 )
            {
              ExFreePoolWithTag(v64, 0x614A7350u);
              Flow = -1073741670;
              v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              goto LABEL_59;
            }
            Flow = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          }
          SeCaptureSubjectContextEx(
            *(PETHREAD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
            *(PEPROCESS *)(*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) + 184LL),
            (PSECURITY_SUBJECT_CONTEXT)(v4 + 184));
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 184;
          if ( *(_BYTE *)v4 )
          {
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x260) = 1;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x264) = 1;
            *(LUID *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x268) = SeDebugPrivilege;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x270) = 0;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) ^= (*(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) ^ SePrivilegeCheck((PPRIVILEGE_SET)(v4 + 608), (PSECURITY_SUBJECT_CONTEXT)(v4 + 184), 1)) & 1;
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) |= 1u;
          }
          v16 |= 2u;
LABEL_130:
          *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v14 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
          if ( (*(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) & 4) == 0 )
          {
            if ( (*(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) & 0x40) != 0 )
            {
              *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) |= *(_DWORD *)(v14 + 256) & 4;
              *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x538) = *(_QWORD *)(v14 + 232);
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x538) = 0LL;
            }
          }
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) &= ~0x40u;
          if ( (v16 & 2) != 0 )
          {
            if ( (*(_DWORD *)(v14 + 1296) & 2) == 0 )
            {
              if ( (*(_DWORD *)(v14 + 256) & 0x10) != 0 )
              {
                KeFirstGroupAffinityEx((_QWORD *)(v4 + 312), (_WORD *)(v14 + 264));
                Group = *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x140);
              }
              else
              {
                Group = KeGetCurrentPrcb()->Group;
                *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = Group;
              }
              v67 = Group;
              v68 = qword_1403825B8[Group];
              *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = v68;
              v69 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0);
              if ( v69 == (v69 & v68) )
              {
                v70 = *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x140);
                if ( *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x558) <= v70 )
                  *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x558) = v70 + 1;
                *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x560 + 8 * v67) |= v69;
                LODWORD(HandleInformation) = 1;
                Object = (PVOID *)(v4 + 176);
                v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                Flow = PspEnumJobsAndProcessesInJobHierarchy(
                         (_QWORD *)v14,
                         0,
                         0,
                         (int)PspSetAffinityLimitCallback,
                         v4 + 176,
                         1u);
                *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = Flow;
                if ( Flow < 0 )
                  goto LABEL_145;
                v71 = *(_QWORD *)(v14 + 432);
                if ( v71 )
                {
                  *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = *(_OWORD *)(v71 + 8);
                  *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = *(_OWORD *)(v71 + 24);
                  *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                             + 352;
                }
                else
                {
                  *(_QWORD *)(v14 + 432) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
                  *(_QWORD *)(v14 + 440) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                  *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
                  *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
                }
                v72 = *(_QWORD *)(v14 + 432);
                *(_OWORD *)v72 = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
                *(_OWORD *)(v72 + 16) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
                *(_QWORD *)(v72 + 32) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
                goto LABEL_135;
              }
              Flow = -1073741811;
              *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -1073741811;
              v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_145:
              v46 = v16 & 1;
              if ( v46 )
              {
                v73 = KeAbPreAcquire((ULONG_PTR)&qword_1402D4950, 0LL, 0LL);
                v74 = v73;
                if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402D4950, 0LL) )
                  ExfAcquirePushLockExclusiveEx(&qword_1402D4950, v73, (ULONG_PTR)&qword_1402D4950);
                if ( v74 )
                  *(_BYTE *)(v74 + 26) |= 1u;
                _InterlockedOr(
                  (volatile signed __int32 *)(*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)
                                            + 1296LL),
                  0x100u);
                v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                for ( j = *(_QWORD **)(v14 + 40); j != (_QWORD *)(v14 + 40); j = (_QWORD *)*j )
                {
                  if ( (*(_DWORD *)(j - 46) & 1) == 0 )
                    PspAddProcessToWorkingSetChangeList(j - 142);
                }
                Flow = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4);
              }
              ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
              if ( v46 )
                PspApplyWorkingSetLimits(v14);
              if ( *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
                SeReleaseSubjectContext(*(PSECURITY_SUBJECT_CONTEXT *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                     + 0x20));
              if ( *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) )
              {
                ExFreePoolWithTag(
                  *(PVOID *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
                  0x614A7350u);
                PsReturnSharedPoolQuota(
                  *(char **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                  0x28uLL,
                  0LL);
              }
              goto LABEL_59;
            }
          }
          else if ( (*(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) & 0x4000) == 0
                 || (*(_DWORD *)(v14 + 1296) & 2) != 0 )
          {
LABEL_135:
            v44 = (int *)(v14 + 256);
            if ( (*(_DWORD *)(v14 + 256) & 1) != 0
              && (*(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) & 1) == 0 )
            {
              _InterlockedOr(v147, 0);
              if ( (qword_1402D4950 & 1) != 0 )
                ExfAcquireReleasePushLockExclusive(&qword_1402D4950);
              v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
              Flow = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            }
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v14;
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) = *v44;
            *(_QWORD *)(v14 + 240) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x540);
            *(_QWORD *)(v14 + 248) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x548);
            *(_DWORD *)(v14 + 260) = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x554);
            *(_OWORD *)(v14 + 264) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x558);
            *(_OWORD *)(v14 + 280) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x568);
            *(_OWORD *)(v14 + 296) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x578);
            *(_OWORD *)(v14 + 312) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x588);
            *(_OWORD *)(v14 + 328) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x598);
            *(_OWORD *)(v14 + 344) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5A8);
            *(_OWORD *)(v14 + 360) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5B8);
            *(_OWORD *)(v14 + 376) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C8);
            *(_OWORD *)(v14 + 392) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5D8);
            *(_OWORD *)(v14 + 408) = *(_OWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5E8);
            *(_QWORD *)(v14 + 424) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F8);
            *(_BYTE *)(v14 + 881) = *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C1);
            *(_DWORD *)(v14 + 484) = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x634);
            *(_QWORD *)(v14 + 224) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x530);
            v45 = v14 + 232;
            *(_QWORD *)(v14 + 232) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x538);
            if ( JobInformationClass == JobObjectExtendedLimitInformation )
            {
              PspLockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
              *v44 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) | *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) & *v44;
              *(_QWORD *)(v14 + 576) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x690);
              *(_QWORD *)(v14 + 584) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x698);
              *(_QWORD *)(v14 + 592) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A0);
              PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
              v45 = v14 + 232;
            }
            else
            {
              *v44 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) | *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 8) & *v44;
            }
            *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = ~(*(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) | *v44);
            if ( *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
            {
              PspEnumJobsAndProcessesInJobHierarchy((_QWORD *)v14, 0, 0, (int)PspSetJobTimeLimitCallback, v45, 1u);
              *(_QWORD *)(v14 + 184) = 0LL;
              *(_QWORD *)(v14 + 192) = 0LL;
              KeResetEvent((PRKEVENT)v14);
            }
            if ( (*v44 & 6) != 0 )
            {
              _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
              Flow = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4);
              v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            }
            if ( (*(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) & 1) == 0 )
              v16 |= 1u;
            PspEnumJobsAndProcessesInJobHierarchy(
              (_QWORD *)v14,
              (int)PspSetJobLimitsJobPreCallback,
              (int)PspSetJobLimitsJobPostCallback,
              (int)PspSetJobLimitsProcessCallback,
              v4 + 152,
              5u);
            goto LABEL_145;
          }
          Flow = -1073741811;
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -1073741811;
          goto LABEL_145;
        }
LABEL_176:
        Flow = -1073741811;
        goto LABEL_59;
      }
      v62 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A8);
      if ( !v62 && !*(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0)
        || v62 == -1LL && *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0) == -1LL
        || v62 > *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0)
        || v62 < 0x14 )
      {
        goto LABEL_176;
      }
      if ( v62 <= PspMinimumWorkingSet )
      {
LABEL_224:
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x540) = v62;
        *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x548) = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                                + 0x2B0);
        goto LABEL_123;
      }
      if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, *(_BYTE *)v4) )
      {
        v62 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A8);
        goto LABEL_224;
      }
LABEL_204:
      Flow = -1073741727;
      goto LABEL_59;
    }
    if ( JobInformationClass <= JobObjectNetRateControlInformation )
    {
      if ( JobInformationClass != JobObjectNetRateControlInformation )
      {
        switch ( JobInformationClass )
        {
          case JobObjectSchedulingRankBiasInformation:
            v33 = v9->m128i_i8[0];
            *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x69) = v9->m128i_i8[0];
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( (*(_DWORD *)(v14 + 1296) & 0x20) == 0 )
              goto LABEL_363;
            v34 = *(_QWORD *)(v14 + 1000);
            v35 = *(unsigned int *)(v34 + 40);
            if ( (v35 & 0x40) != 0 )
              goto LABEL_363;
            if ( (v35 & 0x21) != 0 )
            {
              Flow = -1073741637;
              break;
            }
            if ( (((unsigned __int8)v35 >> 3) & 1) == (v33 != 0) )
            {
LABEL_363:
              Flow = -1073741811;
              break;
            }
            *(_DWORD *)(v34 + 40) = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(8 * (v33 != 0))) & 8;
            LOBYTE(v35) = v33;
            KeSetSchedulingGroupRankBias(*(_QWORD *)(v14 + 1000) + 128LL, v35, v34);
            Flow = 0;
            break;
          case JobObjectTimerVirtualizationInformation:
            if ( v9->m128i_i8[0] == 1 )
            {
              PspEnumJobsAndProcessesInJobHierarchy(
                (_QWORD *)v14,
                0,
                (int)PspEnableTimerVirtualization,
                (int)PspEnableProcessTimerVirtualization,
                0LL,
                0);
              Flow = 0;
            }
            else
            {
              Flow = -1073741811;
              *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -1073741811;
            }
            goto LABEL_59;
          case JobObjectCycleTimeNotification:
            v104 = v9->m128i_i64[0];
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D8) = v104;
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( (*(_DWORD *)(v14 + 1296) & 0x20) != 0 )
            {
              v105 = *(_QWORD *)(v14 + 1000);
              v106 = *(_DWORD *)(v105 + 40);
              if ( (v106 & 0x10) == 0 )
              {
                *(_DWORD *)(v105 + 40) = v106 | 0x10;
                KeInitializeDpc(
                  (PRKDPC)(v105 + 48),
                  (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine,
                  (PVOID)v14);
              }
              KeSetSchedulingGroupCycleNotification(v105 + 128, v105 + 48, v104);
              Flow = 0;
            }
            else
            {
              Flow = -1073741811;
            }
            break;
          case JobObjectClearEvent:
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            KeResetEvent((PRKEVENT)v14);
            v27 = (struct _ERESOURCE *)(v14 + 56);
LABEL_69:
            ExReleaseResourceLite(v27);
LABEL_70:
            Flow = 0;
            goto LABEL_59;
          case JobObjectClearPeakJobMemoryUsed:
            PspLockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
            *(_QWORD *)(v14 + 608) = 0LL;
            *(_QWORD *)(v14 + 600) = 0LL;
            PspUnlockJobMemoryLimitsExclusive(v14, 0LL, 0LL);
            goto LABEL_70;
          case JobObjectIoRateControlInformation:
            *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 0LL;
            PoolWithQuotaTag = 0LL;
            *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 0LL;
            memmove(
              (void *)(v4 + 424),
              v9,
              *(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
            v97 = *(const wchar_t **)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C0);
            if ( v97 )
            {
              v98 = *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D0);
              if ( v98 )
              {
                if ( ((unsigned __int8)v97 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v99 = (ULONG64)v97 + v98;
                if ( v99 > MmUserProbeAddress || v99 < (unsigned __int64)v97 )
                  *(_BYTE *)MmUserProbeAddress = 0;
              }
              *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = 1;
              v100 = PagedPool;
              if ( *(_BYTE *)v4 == 1 )
                v100 = 9;
              *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = v100;
              *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = ((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 216;
              PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(v100, v98, 0x624A7350u);
              *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = PoolWithQuotaTag;
              if ( !PoolWithQuotaTag )
              {
                Flow = -1073741801;
                *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -1073741801;
                goto LABEL_353;
              }
              *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 0;
              *(_WORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xDA) = v98;
              Flow = RtlUnicodeStringCbCopyStringN((PUNICODE_STRING)(v4 + 216), v97, v98);
              *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = Flow;
              PoolWithQuotaTag = *(PVOID *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
            }
            if ( Flow < 0 )
            {
LABEL_353:
              if ( PoolWithQuotaTag )
                ExFreePoolWithTag(PoolWithQuotaTag, 0x624A7350u);
              goto LABEL_59;
            }
            v101 = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1CC);
            if ( (v101 & 0xFFFFFFFE) != 0 || *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C8) )
            {
              Flow = -1073741811;
              goto LABEL_353;
            }
            PspLockRootJobExclusive(
              v14,
              *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
              (_QWORD *)(v4 + 256));
            PspLockJobConditionally(v14, (_QWORD *)(v4 + 256));
            if ( (v101 & 1) != 0 )
            {
              if ( !*(_QWORD *)(v14 + 1288) )
              {
                Flow = IoCreateFlow(v14 + 1232);
                if ( Flow == -1073741822 )
                {
                  Flow = IoEnableIoQos();
                  if ( Flow < 0 )
                    goto LABEL_349;
                  Flow = IoCreateFlow(v14 + 1232);
                }
                if ( Flow < 0 )
                  goto LABEL_350;
                *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 1;
                *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = PspIoRateControlProcessCallback;
                *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 384;
                *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = v14 + 1232;
                v102 = 0;
                if ( *(_BYTE *)v4 == 1 )
                  v102 = 6;
                *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = v102;
              }
              v103 = IoSetFlowPolicy(
                       v14 + 1232,
                       *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x128),
                       *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A8),
                       *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B0),
                       *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B8));
            }
            else
            {
              if ( (*(_DWORD *)(v14 + 1296) & 0x10000000) == 0 )
              {
                Flow = -1073741811;
                goto LABEL_350;
              }
              v103 = IoDeleteFlow(v14 + 1232);
            }
            Flow = v103;
            if ( v103 >= 0 )
              Flow = PspSetJobRateControl(
                       (PVOID)v14,
                       *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
                       *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
LABEL_349:
            if ( Flow >= 0 )
            {
LABEL_352:
              PspUnlockJobConditionally(v14, (_QWORD *)(v4 + 256));
              PspUnlockJob(
                *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x100),
                *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
              PoolWithQuotaTag = *(PVOID *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
              goto LABEL_353;
            }
LABEL_350:
            if ( *(_BYTE *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
              IoDeleteFlow(v14 + 1232);
            goto LABEL_352;
          default:
            goto LABEL_376;
        }
        ExReleaseResourceLite((PERESOURCE)(v14 + 56));
        goto LABEL_59;
      }
      Silo = PspSetNetRateControl(
               *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
               v9,
               *(unsigned int *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
               v14);
LABEL_365:
      Flow = Silo;
      goto LABEL_59;
    }
    switch ( JobInformationClass )
    {
      case JobObjectNotificationLimitInformation2:
        goto LABEL_391;
      case JobObjectCreateSilo:
        Silo = PspCreateSilo(v14, 16LL);
        goto LABEL_365;
      case JobObjectSiloRootDirectory:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *(_BYTE *)v4) )
          goto LABEL_388;
        if ( *(_QWORD *)(v14 + 1248) )
        {
          Silo = PsSetSiloObjectRootDirectoryByPointer(v14, v9);
          goto LABEL_365;
        }
        break;
      case JobObjectServerSiloInitialize:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *(_BYTE *)v4) )
          goto LABEL_388;
        if ( *(_QWORD *)(v14 + 1248) )
        {
          Silo = PspConvertSiloToServerSilo((PRKEVENT)v14);
          goto LABEL_365;
        }
        break;
      case JobObjectServerSiloRunningState:
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, *(_BYTE *)v4) )
        {
          *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = v9->m128i_i32[0];
          PsGetJobServerSilo(v14, (_QWORD *)(v4 + 232));
          if ( *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) )
          {
            v108 = KeGetCurrentThread();
            --v108->SpecialApcDisable;
            v109 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v109 + 1248), 1u);
            v110 = *(_QWORD *)(*(_QWORD *)(v109 + 1248) + 136LL);
            v111 = *(_DWORD *)(v110 + 112);
            if ( v111 == 1 && *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) == 2
              || v111 == 2 && *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) == 1 )
            {
              *(_DWORD *)(v110 + 112) = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
              *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -1073700861;
            }
            ExReleaseResourceLite(*(PERESOURCE *)(v109 + 1248));
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            ObfDereferenceObject(*(PVOID *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8));
            Flow = *(_DWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            goto LABEL_435;
          }
          break;
        }
LABEL_388:
        Flow = -1073741727;
        goto LABEL_59;
      default:
        goto LABEL_376;
    }
    Flow = -1073740535;
    goto LABEL_59;
  }
  v12 = 2;
  if ( JobInformationClass == JobObjectSecurityLimitInformation )
    v12 = 16;
  result = ObReferenceObjectByHandle(v11, v12, (POBJECT_TYPE)PsJobType, PreviousMode, (PVOID *)(v4 + 240), 0LL);
  v14 = *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0);
  *(_QWORD *)(((unsigned __int64)AccessMode & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v14;
  if ( result >= 0 )
    goto LABEL_18;
  return result;
}
