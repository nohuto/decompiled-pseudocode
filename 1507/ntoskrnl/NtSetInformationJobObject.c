/*
 * XREFs of NtSetInformationJobObject @ 0x140417C04
 * Callers:
 *     <none>
 * Callees:
 *     KeQuerySchedulingGroupReadyTime @ 0x1400082DC (KeQuerySchedulingGroupReadyTime.c)
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeInsertSchedulingGroup @ 0x140121074 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x140121384 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14012156C (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1401217F0 (KeSetSchedulingGroupRankBias.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoCreateFlow @ 0x1401F8F48 (IoCreateFlow.c)
 *     IoDeleteFlow @ 0x1401F8F84 (IoDeleteFlow.c)
 *     IoEnableIoQos @ 0x1401F8FC0 (IoEnableIoQos.c)
 *     IoSetFlowPolicy @ 0x1401F90FC (IoSetFlowPolicy.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x14020A1D8 (KeSetSchedulingGroupCycleNotification.c)
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x1402445BC (RtlUnicodeStringCbCopyStringN.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PspReferenceJobSilo @ 0x140415668 (PspReferenceJobSilo.c)
 *     PspFreezeJobTree @ 0x140417490 (PspFreezeJobTree.c)
 *     PspUnlockJobChain @ 0x14041AC44 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x14041ACD8 (PspLockJobChain.c)
 *     PspBindProcessSessionToJob @ 0x14041BBAC (PspBindProcessSessionToJob.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     IoAllocateMiniCompletionPacket @ 0x14042D398 (IoAllocateMiniCompletionPacket.c)
 *     SePrivilegeCheck @ 0x140432040 (SePrivilegeCheck.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopFreeMiniCompletionPacket @ 0x1404BE310 (IopFreeMiniCompletionPacket.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     PsChargeSharedPoolQuota @ 0x1404CF74C (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1404D0010 (PsReturnSharedPoolQuota.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14053CE10 (PspAllocateRateControl.c)
 *     PspSetBackgroundJobTree @ 0x1405550AC (PspSetBackgroundJobTree.c)
 *     SeCheckPrivilegedObject @ 0x140583928 (SeCheckPrivilegedObject.c)
 *     PsSetSiloObjectRootDirectoryByPointer @ 0x1406C12E4 (PsSetSiloObjectRootDirectoryByPointer.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406C42F8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1406C43B8 (PspApplyWorkingSetLimits.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406C4724 (PspNotificationLimitRateControlToleranceField.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406C473C (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspRateControlLimitFlag @ 0x1406C4944 (PspRateControlLimitFlag.c)
 *     PspSetJobRateControl @ 0x1406C4C78 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x1406C4E6C (PspSetNetRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1406E3C4C (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength)
{
  unsigned __int64 v4; // rbp
  ULONG v6; // ecx
  __int64 v7; // r8
  bool v8; // zf
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE PreviousMode; // cl
  unsigned __int16 *v12; // r13
  ULONG64 v13; // rcx
  ACCESS_MASK v14; // edx
  __int64 v15; // r9
  int Flow; // esi
  __int64 v17; // r15
  char v18; // di
  __int64 MiniCompletionPacket; // rdi
  void *v20; // rcx
  struct _ERESOURCE *v21; // rsi
  __int64 v22; // r9
  unsigned __int64 *v23; // r15
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdi
  void *v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  int v35; // eax
  int v36; // ebx
  __int64 v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // eax
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // r9
  int v44; // edx
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  PVOID PoolWithTag; // rsi
  __int64 v54; // rax
  __int64 v55; // r9
  unsigned __int16 Group; // cx
  unsigned __int16 v57; // dx
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int16 v60; // ax
  __int64 v61; // rax
  __int64 v62; // rax
  int *v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // r9
  __int64 v66; // rcx
  unsigned __int64 *v67; // r15
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // rsi
  _QWORD *v71; // rcx
  char v72; // di
  __int64 v73; // rax
  __int64 v74; // r9
  __int64 v75; // rbx
  _QWORD *i; // rbx
  struct _ERESOURCE *v77; // r13
  __int64 v78; // r9
  unsigned __int64 *v79; // r15
  __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // rsi
  __int64 v83; // rbx
  int v84; // esi
  bool v85; // cc
  __int64 RateControl; // rax
  __int64 v87; // rcx
  _QWORD *v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rsi
  _QWORD *v91; // rax
  _QWORD *v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rbx
  __int64 v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // rcx
  _QWORD *v101; // rax
  __int64 v102; // rsi
  LARGE_INTEGER *v103; // rcx
  __int64 v104; // r12
  __int64 v105; // r12
  __int64 v106; // rcx
  _QWORD *v107; // rax
  bool v108; // bl
  int v109; // eax
  _QWORD *v110; // r8
  _QWORD *v111; // rdx
  int v112; // ebx
  __int64 v113; // rcx
  __int64 v114; // rcx
  unsigned int v115; // ecx
  int v116; // r15d
  unsigned __int16 v117; // r11
  __int64 v118; // r9
  __m128i v119; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v121; // rax
  __int64 v122; // r10
  unsigned __int16 v123; // r8
  __int64 v124; // rdx
  PVOID v125; // r13
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // r15
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // r15
  _WORD *v133; // r8
  unsigned __int16 v134; // cx
  __int32 v135; // r12d
  __int32 v136; // r12d
  __int32 v137; // r12d
  __int32 v138; // r12d
  unsigned __int64 *v139; // r15
  __int64 v140; // rax
  __int64 v141; // r9
  __int64 v142; // rdi
  __int64 v143; // rdi
  __int64 v144; // rbx
  int v145; // eax
  char v146; // bl
  __int64 v147; // r8
  int v148; // edx
  const wchar_t *v149; // rdi
  unsigned __int16 v150; // si
  ULONG64 v151; // rcx
  POOL_TYPE v152; // ecx
  PVOID PoolWithQuotaTag; // rax
  __int64 v154; // r13
  __int64 v155; // rax
  int v156; // ecx
  _QWORD *v157; // rax
  __int64 v158; // rbx
  int v159; // eax
  int v160; // eax
  int v161; // r9d
  int v162; // ecx
  _QWORD *v163; // rax
  __int16 v164; // ax
  __int32 v165; // r12d
  __int32 v166; // r12d
  __int32 v167; // r12d
  __int32 v168; // r12d
  char *v169; // rax
  char *v170; // rbx
  int v171; // eax
  char *v172; // rax
  int Silo; // eax
  unsigned int v174; // eax
  int v175; // eax
  __int64 v176; // r8
  unsigned __int64 v177; // rdx
  __int64 v178; // r9
  unsigned __int64 v179; // r11
  __int64 v180; // r10
  __m128i v181; // xmm2
  __m128i v182; // xmm3
  __m128i v183; // xmm4
  unsigned __int64 v184; // rcx
  __m128i v185; // xmm2
  __m128i v186; // xmm3
  __m128i v187; // xmm1
  __int64 v188; // rdx
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // r9
  int v192; // eax
  int v193; // edx
  int *v194; // r9
  int *v195; // r10
  __int64 *v196; // rbx
  PVOID v197; // rdi
  __int64 v198; // rax
  _QWORD *v199; // rcx
  __int64 v200; // rdx
  _DWORD *v201; // r8
  _DWORD *v202; // rax
  __int64 v203; // r8
  _DWORD *v204; // rax
  int v205; // r9d
  _DWORD *v206; // r8
  int v207; // edx
  __int64 v208; // rax
  __int64 v209; // rcx
  __int16 v210; // ax
  signed __int32 v211[8]; // [rsp+0h] [rbp-80h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-60h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-58h]
  int v214; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 24) = JobInformationLength;
  *(_DWORD *)v4 = JobInformationClass;
  *(_QWORD *)(v4 + 112) = JobHandle;
  *(_DWORD *)(v4 + 16) = JobInformationClass;
  *(_QWORD *)(v4 + 144) = JobInformation;
  if ( (unsigned int)(JobInformationClass - 1) > 0x28 )
    return -1073741821;
  if ( JobInformationClass == JobObjectExtendedLimitInformation )
  {
    if ( JobInformationLength == 144 )
      goto LABEL_14;
    v8 = JobInformationLength == 152;
  }
  else
  {
    if ( JobInformationClass != JobObjectNotificationLimitInformation )
    {
      v6 = dword_140723BAC[JobInformationClass];
      if ( JobInformationLength != v6 )
      {
        if ( (unsigned int)JobInformationClass > JobObjectSiloRootDirectory )
          return -1073741820;
        v7 = 0x2000004800LL;
        if ( !_bittest64(&v7, JobInformationClass) || JobInformationLength < v6 )
          return -1073741820;
      }
      goto LABEL_14;
    }
    v8 = ((JobInformationLength - 48) & 0xFFFFFFF7) == 0;
  }
  if ( !v8 )
    return -1073741820;
LABEL_14:
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = PreviousMode;
  *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = PreviousMode;
  if ( PreviousMode )
  {
    v12 = *(unsigned __int16 **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    if ( JobInformationLength )
    {
      if ( ((dword_140723AFC[JobInformationClass] - 1) & (unsigned int)v12) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = (ULONG64)v12 + JobInformationLength;
      if ( v13 > MmUserProbeAddress || v13 < (unsigned __int64)v12 )
        *(_BYTE *)MmUserProbeAddress = 0;
      PreviousMode = *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    }
  }
  else
  {
    v12 = *(unsigned __int16 **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
  }
  v14 = 2;
  if ( JobInformationClass == JobObjectSecurityLimitInformation )
    v14 = 16;
  result = ObReferenceObjectByHandle(
             *(HANDLE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
             v14,
             (POBJECT_TYPE)PsJobType,
             PreviousMode,
             (PVOID *)(v4 + 32),
             0LL);
  Flow = result;
  v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v17;
  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = result;
  if ( result >= 0 )
  {
    v18 = 0;
    --*(_WORD *)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) + 486LL);
    if ( JobInformationClass <= JobObjectBackgroundInformation )
    {
      if ( JobInformationClass == JobObjectBackgroundInformation )
      {
        *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8D) = *(_BYTE *)v12;
        Flow = PspSetBackgroundJobTree(v17);
        v36 = *(_DWORD *)v4;
        if ( Flow >= 0 )
          Flow = 0;
        goto LABEL_532;
      }
      if ( JobInformationClass <= JobObjectGroupInformation )
      {
        if ( JobInformationClass != JobObjectGroupInformation )
        {
          if ( JobInformationClass != JobObjectBasicLimitInformation )
          {
            switch ( JobInformationClass )
            {
              case JobObjectBasicUIRestrictions:
                v35 = *(_DWORD *)v12;
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *(_DWORD *)v12;
                if ( (v35 & 0xFFFFFF00) != 0 )
                {
                  Flow = -1073741811;
                }
                else
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
                  if ( *(_QWORD *)(v17 + 1048) == v17 + 1048 )
                  {
                    if ( *(_DWORD *)(v17 + 480) == -2 )
                    {
                      Flow = -1073741790;
                    }
                    else
                    {
                      v37 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                      PspBindProcessSessionToJob(v37, KeGetCurrentThread()->ApcState.Process);
                      v38 = *(_DWORD *)(v17 + 480);
                      *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xFC) = v38;
                      if ( v38 > 0xFFFFFFFD
                        || *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) == *(_DWORD *)(v37 + 448)
                        || (*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D0) = v37,
                            *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D8) = 0,
                            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) = *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
                            Flow = PsInvokeWin32Callout(6LL, v4 + 464, 1LL),
                            *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Flow,
                            Flow >= 0) )
                      {
                        *(_DWORD *)(v37 + 448) = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
                        _InterlockedOr((volatile signed __int32 *)(v37 + 1296), 0x10u);
                        Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                      }
                    }
                  }
                  else
                  {
                    Flow = -1073741637;
                  }
                  ExReleaseResourceLite((PERESOURCE)(v17 + 56));
                }
                v36 = *(_DWORD *)v4;
                goto LABEL_532;
              case JobObjectSecurityLimitInformation:
                *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0) = *(_OWORD *)v12;
                *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = *((_OWORD *)v12 + 1);
                *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = *((_QWORD *)v12 + 4);
                Flow = (*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0) & 0xFFFFFFF0) != 0
                     ? -1073741811
                     : -1073741637;
                goto LABEL_531;
              case JobObjectEndOfJobTimeInformation:
                v34 = *(_DWORD *)v12;
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = *(_DWORD *)v12;
                if ( v34 <= 1 )
                {
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
                  *(_DWORD *)(v17 + 452) = v34;
                  ExReleaseResourceLite((PERESOURCE)(v17 + 56));
                  goto LABEL_531;
                }
                goto LABEL_71;
              case JobObjectAssociateCompletionPortInformation:
                MiniCompletionPacket = 0LL;
                *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = *(_OWORD *)v12;
                v20 = *(void **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198);
                if ( v20 )
                {
                  Flow = ObReferenceObjectByHandle(
                           v20,
                           2u,
                           IoCompletionObjectType,
                           *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
                           (PVOID *)(v4 + 272),
                           0LL);
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Flow;
                  if ( Flow >= 0 )
                  {
                    if ( *(_QWORD *)(v17 + 992)
                      || (MiniCompletionPacket = IoAllocateMiniCompletionPacket(&PspNotificationPacketCallback, v17)) != 0 )
                    {
                      ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
                      if ( *(_QWORD *)(v17 + 456) || (*(_DWORD *)(v17 + 1296) & 1) != 0 )
                      {
                        ExReleaseResourceLite((PERESOURCE)(v17 + 56));
                        ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110));
                        Flow = -1073741811;
                      }
                      else
                      {
                        if ( !*(_QWORD *)(v17 + 992) )
                        {
                          *(_QWORD *)(v17 + 992) = MiniCompletionPacket;
                          MiniCompletionPacket = 0LL;
                        }
                        v29 = KeAbPreAcquire(v17 + 1024, 0LL, 0LL, v28);
                        v31 = v29;
                        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 1024), 0LL) )
                          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v17 + 1024), v29, v17 + 1024, v30);
                        if ( v31 )
                          *(_BYTE *)(v31 + 26) |= 1u;
                        v32 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                        *(_QWORD *)(v32 + 464) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190);
                        *(_QWORD *)(v17 + 456) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110);
                        *(_QWORD *)(v32 + 472) = 0LL;
                        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                          ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 1024));
                        KeAbPostRelease(v17 + 1024);
                        v33 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                        if ( (*(_DWORD *)(v33 + 884) & 0x40) != 0 )
                          PspEnumJobsAndProcessesInJobHierarchy(
                            v33,
                            0,
                            0,
                            (unsigned int)PspAssociateCompletionPortCallback,
                            v33,
                            1);
                        ExReleaseResourceLite((PERESOURCE)(v17 + 56));
                        Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
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
                    IopFreeMiniCompletionPacket((PSLIST_ENTRY)MiniCompletionPacket);
                  }
                }
                else
                {
                  v21 = (struct _ERESOURCE *)(v17 + 56);
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
                  if ( v17 )
                  {
                    v23 = (unsigned __int64 *)(v17 + 1024);
                    v24 = KeAbPreAcquire((ULONG_PTR)v23, 0LL, 0LL, v22);
                    v26 = v24;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
                      ExfAcquirePushLockExclusiveEx(v23, v24, (ULONG_PTR)v23, v25);
                    if ( v26 )
                      *(_BYTE *)(v26 + 26) |= 1u;
                    v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  }
                  *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = *(_QWORD *)(v17 + 456);
                  *(_QWORD *)(v17 + 456) = 0LL;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 1024));
                  KeAbPostRelease(v17 + 1024);
                  ExReleaseResourceLite(v21);
                  v27 = *(void **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158);
                  if ( v27 )
                    ObfDereferenceObject(v27);
                  Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                }
                goto LABEL_531;
            }
            if ( JobInformationClass != JobObjectExtendedLimitInformation )
              goto LABEL_457;
          }
          v39 = *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v39;
          memmove((void *)(v4 + 672), v12, (unsigned int)v39);
          v40 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          if ( v40 < 0x98 )
          {
            memset(
              (void *)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28)
                     + ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                     + 672),
              0,
              152LL - *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
            v40 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
          if ( JobInformationClass == JobObjectBasicLimitInformation )
          {
            v41 = 255;
          }
          else
          {
            v41 = 2129919;
            if ( v40 == 144 )
              v41 = 0x7FFF;
          }
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v41;
          v42 = ~v41;
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v42;
          if ( (v42 & *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0)) != 0 )
            goto LABEL_71;
          memset((void *)(v4 + 1120), 0, 0x528uLL);
          memset((void *)(v4 + 208), 0, 0x28uLL);
          v44 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0);
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) = v44;
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 0LL;
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x564) = (v44 & 8) != 0
                                                                                 ? *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                             + 0x2C8)
                                                                                 : 0;
          if ( (v44 & 0x20) != 0 )
          {
            v45 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8);
            if ( v45 > 6 )
              goto LABEL_71;
            if ( v45 - 3 <= 1 )
            {
              LOBYTE(v43) = *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
              v18 = 4
                  * (((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                       SeIncreaseBasePriorityPrivilege,
                       *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
                       2LL,
                       v43) & 1);
              if ( (v18 & 4) == 0 )
              {
LABEL_97:
                Flow = -1073741727;
                goto LABEL_531;
              }
              v44 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0);
            }
            *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7D1) = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                              + 0x2D8);
          }
          else
          {
            *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7D1) = 0;
          }
          if ( (v44 & 0x80u) == 0 )
          {
            *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x644) = 5;
          }
          else
          {
            v46 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2DC);
            if ( v46 >= 0xA )
              goto LABEL_71;
            if ( v46 > 5 )
            {
              LOBYTE(v43) = *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
              v18 ^= (v18 ^ (4
                           * ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
                               2LL,
                               v43))) & 4;
              if ( (v18 & 4) == 0 )
                goto LABEL_97;
              v44 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0);
              v46 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2DC);
            }
            *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x644) = v46;
          }
          if ( (v44 & 2) != 0 )
          {
            v47 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A0);
            if ( !v47 )
              goto LABEL_71;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x540) = v47;
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x540) = 0LL;
          }
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v44 & 4;
          if ( (v44 & 4) != 0 )
          {
            v48 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A8);
            if ( !v48 )
              goto LABEL_71;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x548) = v48;
          }
          if ( (v44 & 1) != 0 )
          {
            v49 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B8);
            if ( !v49 && !*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0)
              || v49 == -1LL && *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0) == -1LL
              || v49 > *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0)
              || v49 < 0x14 )
            {
              goto LABEL_71;
            }
            if ( v49 > PspMinimumWorkingSet )
            {
              if ( !SeSinglePrivilegeCheck(
                      SeIncreaseBasePriorityPrivilege,
                      *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4)) )
                goto LABEL_97;
              v44 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0);
              v49 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B8);
            }
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) = v49;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x558) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                               + 0x2C0);
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x550) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x558) = 0LL;
          }
          if ( (v44 & 0x100) != 0 )
          {
            v50 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x310);
            if ( v50 < 0x1000 )
              goto LABEL_71;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A0) = v50 >> 12;
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A0) = 0LL;
          }
          if ( (v44 & 0x200) != 0 )
          {
            v51 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x318);
            if ( v51 < 0x1000 )
              goto LABEL_71;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A8) = v51 >> 12;
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A8) = 0LL;
          }
          if ( (v44 & 0x200000) == 0 )
          {
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6B0) = 0LL;
            goto LABEL_139;
          }
          v52 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x330);
          if ( v52 >= 0x1000 )
          {
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6B0) = v52 >> 12;
LABEL_139:
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x568) = 1310721LL;
            memset((void *)(v4 + 1392), 0, 0xA0uLL);
            if ( (*(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) & 0x10) == 0 )
              goto LABEL_152;
            if ( (*(_DWORD *)(v17 + 1296) & 2) == 0
              && *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) )
            {
              if ( !*(_QWORD *)(v17 + 432) )
              {
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = PoolWithTag;
                if ( !PoolWithTag )
                {
LABEL_144:
                  Flow = -1073741670;
                  goto LABEL_531;
                }
                v54 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL, 0LL);
                *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v54;
                if ( !v54 )
                {
                  ExFreePoolWithTag(PoolWithTag, 0x614A7350u);
                  goto LABEL_144;
                }
                Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
              }
              SeCaptureSubjectContextEx(
                *(PETHREAD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                *(PEPROCESS *)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) + 184LL),
                (PSECURITY_SUBJECT_CONTEXT)(v4 + 216));
              *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 216;
              if ( *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
              {
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x270) = 1;
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x274) = 1;
                *(LUID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) = SeDebugPrivilege;
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x280) = 0;
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) ^= (*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) ^ SePrivilegeCheck((PPRIVILEGE_SET)(v4 + 624), (PSECURITY_SUBJECT_CONTEXT)(v4 + 216), 1)) & 1;
              }
              else
              {
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) |= 1u;
              }
              v18 |= 2u;
LABEL_152:
              *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v17 + 56;
              ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
              if ( (*(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) & 4) == 0 )
              {
                if ( (*(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) & 0x40) != 0 )
                {
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) |= *(_DWORD *)(v17 + 256) & 4;
                  *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x548) = *(_QWORD *)(v17 + 232);
                }
                else
                {
                  *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x548) = 0LL;
                }
              }
              *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) &= ~0x40u;
              if ( (v18 & 2) == 0 )
              {
                if ( (*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) & 0x4000) != 0
                  && (*(_DWORD *)(v17 + 1296) & 2) == 0 )
                {
                  goto LABEL_158;
                }
LABEL_177:
                v63 = (int *)(v17 + 256);
                *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v17 + 256;
                if ( (*(_DWORD *)(v17 + 256) & 1) != 0
                  && (*(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) & 1) == 0 )
                {
                  _InterlockedOr(v211, 0);
                  if ( (qword_140323A70 & 1) != 0 )
                  {
                    v64 = KeAbPreAcquire((ULONG_PTR)&qword_140323A70, 0LL, 0LL, v55);
                    ExfAcquirePushLockExclusiveEx(&qword_140323A70, v64, (ULONG_PTR)&qword_140323A70, v65);
                    if ( v64 )
                      *(_BYTE *)(v64 + 26) |= 1u;
                    ExfReleasePushLockExclusive((volatile signed __int64 *)&qword_140323A70);
                    if ( v64 )
                      KeAbPostRelease((ULONG_PTR)&qword_140323A70);
                    v63 = *(int **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                  }
                  Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                }
                *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v17;
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = *v63;
                *(_QWORD *)(v17 + 240) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x550);
                *(_QWORD *)(v17 + 248) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x558);
                *(_DWORD *)(v17 + 260) = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x564);
                *(_OWORD *)(v17 + 264) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x568);
                *(_OWORD *)(v17 + 280) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x578);
                *(_OWORD *)(v17 + 296) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x588);
                *(_OWORD *)(v17 + 312) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x598);
                *(_OWORD *)(v17 + 328) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5A8);
                *(_OWORD *)(v17 + 344) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5B8);
                *(_OWORD *)(v17 + 360) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C8);
                *(_OWORD *)(v17 + 376) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5D8);
                *(_OWORD *)(v17 + 392) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5E8);
                *(_OWORD *)(v17 + 408) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5F8);
                *(_QWORD *)(v17 + 424) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x608);
                *(_BYTE *)(v17 + 881) = *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7D1);
                *(_DWORD *)(v17 + 484) = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x644);
                *(_QWORD *)(v17 + 224) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x540);
                v66 = v17 + 232;
                *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v17 + 232;
                *(_QWORD *)(v17 + 232) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x548);
                if ( *(_DWORD *)v4 == 9 )
                {
                  v67 = (unsigned __int64 *)(v17 + 1024);
                  v68 = KeAbPreAcquire((ULONG_PTR)v67, 0LL, 0LL, v55);
                  v70 = v68;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)v67, 0LL) )
                    ExfAcquirePushLockExclusiveEx(v67, v68, (ULONG_PTR)v67, v69);
                  if ( v70 )
                    *(_BYTE *)(v70 + 26) |= 1u;
                  **(_DWORD **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) | *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) & **(_DWORD **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                  v71 = *(_QWORD **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  v71[72] = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A0);
                  v71[73] = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A8);
                  v71[74] = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6B0);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)v67);
                  KeAbPostRelease((ULONG_PTR)v67);
                  Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  v63 = *(int **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                  v66 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
                }
                else
                {
                  *v63 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x560) | *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) & *v63;
                }
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = ~(*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) | *v63);
                if ( *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
                {
                  PspEnumJobsAndProcessesInJobHierarchy(v17, 0, 0, (unsigned int)PspSetJobTimeLimitCallback, v66, 1);
                  *(_QWORD *)(v17 + 184) = 0LL;
                  *(_QWORD *)(v17 + 192) = 0LL;
                  KeResetEvent((PRKEVENT)v17);
                  v63 = *(int **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                }
                if ( (*v63 & 6) != 0 )
                {
                  _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                  Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                }
                if ( (*(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) & 1) == 0 )
                  v18 |= 1u;
                PspEnumJobsAndProcessesInJobHierarchy(
                  v17,
                  (unsigned int)PspSetJobLimitsJobPreCallback,
                  (unsigned int)PspSetJobLimitsJobPostCallback,
                  (unsigned int)PspSetJobLimitsProcessCallback,
                  v4 + 176,
                  5);
                goto LABEL_202;
              }
              if ( (*(_DWORD *)(v17 + 1296) & 2) != 0 )
              {
LABEL_158:
                Flow = -1073741811;
                *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = -1073741811;
LABEL_202:
                v72 = v18 & 1;
                if ( v72 )
                {
                  v73 = KeAbPreAcquire((ULONG_PTR)&qword_140323A70, 0LL, 0LL, v55);
                  v75 = v73;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140323A70, 0LL) )
                    ExfAcquirePushLockExclusiveEx(&qword_140323A70, v73, (ULONG_PTR)&qword_140323A70, v74);
                  if ( v75 )
                    *(_BYTE *)(v75 + 26) |= 1u;
                  _InterlockedOr(
                    (volatile signed __int32 *)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20)
                                              + 1296LL),
                    0x100u);
                  v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  for ( i = *(_QWORD **)(v17 + 40); i != (_QWORD *)(v17 + 40); i = (_QWORD *)*i )
                  {
                    if ( (*(_DWORD *)(i - 45) & 1) == 0 )
                      PspAddProcessToWorkingSetChangeList(i - 141);
                  }
                  Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                }
                ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
                if ( v72 )
                  PspApplyWorkingSetLimits(v17);
                if ( *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) )
                  SeReleaseSubjectContext(*(PSECURITY_SUBJECT_CONTEXT *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 0xC8));
                if ( *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) )
                {
                  ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50), 0x614A7350u);
                  PsReturnSharedPoolQuota(*(PVOID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
                }
                goto LABEL_531;
              }
              if ( (*(_DWORD *)(v17 + 256) & 0x10) != 0 )
              {
                Group = 0;
                v57 = *(_WORD *)(v17 + 264);
                if ( !v57 )
                {
LABEL_166:
                  v58 = *(unsigned __int16 *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120);
                  *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = qword_1403D15E8[v58];
                  v59 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0);
                  if ( v59 != (*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) & v59) )
                  {
                    Flow = -1073741811;
                    *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = -1073741811;
                    v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                    goto LABEL_202;
                  }
                  v60 = *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120);
                  if ( *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x568) <= v60 )
                    *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x568) = v60 + 1;
                  *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x570 + 8 * v58) |= v59;
                  LODWORD(HandleInformation) = 1;
                  Object = (PVOID *)(v4 + 208);
                  v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  Flow = PspEnumJobsAndProcessesInJobHierarchy(
                           v17,
                           0,
                           0,
                           (unsigned int)PspSetAffinityLimitCallback,
                           v4 + 208,
                           1);
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Flow;
                  if ( Flow < 0 )
                    goto LABEL_202;
                  v61 = *(_QWORD *)(v17 + 432);
                  if ( v61 )
                  {
                    *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = *(_OWORD *)(v61 + 8);
                    *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B0) = *(_OWORD *)(v61 + 24);
                    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 416;
                  }
                  else
                  {
                    *(_QWORD *)(v17 + 432) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
                    *(_QWORD *)(v17 + 440) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
                    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 0LL;
                  }
                  v62 = *(_QWORD *)(v17 + 432);
                  *(_OWORD *)v62 = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
                  *(_OWORD *)(v62 + 16) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
                  *(_QWORD *)(v62 + 32) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0);
                  goto LABEL_177;
                }
                while ( !*(_QWORD *)(v17 + 8LL * Group + 272) )
                {
                  if ( ++Group >= v57 )
                    goto LABEL_166;
                }
              }
              else
              {
                Group = KeGetCurrentPrcb()->Group;
              }
              *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = Group;
              goto LABEL_166;
            }
          }
LABEL_71:
          Flow = -1073741811;
LABEL_531:
          v36 = *(_DWORD *)v4;
LABEL_532:
          v209 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
          v210 = *(_WORD *)(v209 + 486) + 1;
          *(_WORD *)(v209 + 486) = v210;
          if ( !v210 && *(_QWORD *)(v209 + 152) != v209 + 152 )
            KiCheckForKernelApcDelivery();
          if ( Flow )
          {
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              EtwTraceJobSetQuery(
                *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
                v36,
                0,
                0LL,
                Flow,
                1831);
          }
          ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
          return Flow;
        }
LABEL_323:
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
        v115 = 2;
        if ( JobInformationClass == JobObjectGroupInformationEx )
          v115 = 16;
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v115;
        v116 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) / v115;
        if ( *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) % v115 )
        {
          Flow = -1073741820;
          goto LABEL_531;
        }
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C) = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x18)
                                                                              / v115;
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B0) = 1310721LL;
        memset((void *)(v4 + 952), 0, 0xA0uLL);
        v117 = KeQueryActiveGroupCount() - 1;
        v36 = *(_DWORD *)v4;
        v118 = *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        while ( v116 )
        {
          if ( v36 == 14 )
          {
            v119 = *(__m128i *)v12;
            *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = *(_OWORD *)v12;
            epi16 = _mm_extract_epi16(v119, 4);
            *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = epi16;
            *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = epi16;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = v119.m128i_i64[0];
          }
          else
          {
            v121 = *v12;
            *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v121;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = qword_1403D15E8[v121];
            epi16 = *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          }
          v122 = qword_1403D15E8[epi16];
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = v122;
          v123 = *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          if ( v123 > v117
            || *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B8 + 8LL * epi16)
            || (v124 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128), v124 != (v122 & v124)) )
          {
            Flow = -1073741811;
            *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = -1073741811;
            break;
          }
          if ( *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B0) <= v123 )
            *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B0) = v123 + 1;
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B8 + 8LL * epi16) |= v124;
          v116 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C) - 1;
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C) = v116;
          v12 = (unsigned __int16 *)(v118 + *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90));
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v12;
          Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        }
        v125 = 0LL;
        if ( Flow < 0 )
          goto LABEL_532;
        v126 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v126;
        if ( !*(_QWORD *)(v126 + 432) )
        {
          v125 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
          if ( !v125 )
          {
LABEL_342:
            Flow = -1073741670;
            goto LABEL_532;
          }
          v127 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL, 0LL);
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v127;
          if ( !v127 )
          {
            ExFreePoolWithTag(v125, 0x614A7350u);
            goto LABEL_342;
          }
        }
        SeCaptureSubjectContextEx(
          *(PETHREAD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
          *(PEPROCESS *)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) + 184LL),
          (PSECURITY_SUBJECT_CONTEXT)(v4 + 216));
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 216;
        if ( *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
        {
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x270) = 1;
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x274) = 1;
          *(LUID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) = SeDebugPrivilege;
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x280) = 0;
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) ^= (*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                              + 0xD0) ^ SePrivilegeCheck((PPRIVILEGE_SET)(v4 + 624), (PSECURITY_SUBJECT_CONTEXT)(v4 + 216), 1)) & 1;
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) |= 1u;
        }
        v128 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v128 + 56;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v128 + 56), 1u);
        Flow = PspEnumJobsAndProcessesInJobHierarchy(v128, 0, 0, (unsigned int)PspSetAffinityLimitCallback, v4 + 208, 1);
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Flow;
        if ( Flow < 0 )
        {
LABEL_359:
          ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0));
          if ( *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
            SeReleaseSubjectContext(*(PSECURITY_SUBJECT_CONTEXT *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                 + 0x28));
          if ( v125 )
          {
            ExFreePoolWithTag(v125, 0x614A7350u);
            PsReturnSharedPoolQuota(*(PVOID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
          }
          goto LABEL_532;
        }
        v129 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        v130 = *(_QWORD *)(v129 + 432);
        if ( v130 )
        {
          *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = *(_OWORD *)(v130 + 8);
          *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B0) = *(_OWORD *)(v130 + 24);
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                + 416;
        }
        else
        {
          *(_QWORD *)(v129 + 432) = v125;
          *(_QWORD *)(v128 + 440) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          v125 = 0LL;
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
        }
        v131 = *(_QWORD *)(v129 + 432);
        *(_OWORD *)v131 = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
        *(_OWORD *)(v131 + 16) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
        *(_QWORD *)(v131 + 32) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0);
        v132 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v132;
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = *(_DWORD *)(v132 + 256);
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = -17;
        v133 = (_WORD *)(v132 + 264);
        *(_OWORD *)(v132 + 264) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B0);
        *(_OWORD *)(v132 + 280) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C0);
        *(_OWORD *)(v132 + 296) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D0);
        *(_OWORD *)(v132 + 312) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E0);
        *(_OWORD *)(v132 + 328) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F0);
        *(_OWORD *)(v132 + 344) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x400);
        *(_OWORD *)(v132 + 360) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x410);
        *(_OWORD *)(v132 + 376) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x420);
        *(_OWORD *)(v132 + 392) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x430);
        *(_OWORD *)(v132 + 408) = *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x440);
        *(_QWORD *)(v132 + 424) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x450);
        if ( v36 == 14 )
        {
          v134 = 0;
          if ( !*v133 )
          {
LABEL_356:
            *(_DWORD *)(v132 + 256) &= ~0x10u;
            _InterlockedAnd(
              (volatile signed __int32 *)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) + 1296LL),
              0xFFFFFFFD);
LABEL_358:
            PspEnumJobsAndProcessesInJobHierarchy(
              *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
              (unsigned int)PspSetJobLimitsJobPreCallback,
              0,
              (unsigned int)PspSetJobLimitsProcessCallback,
              v4 + 176,
              5);
            Flow = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            goto LABEL_359;
          }
          while ( !*(_QWORD *)&v133[4 * v134 + 4] )
          {
            if ( ++v134 >= *v133 )
              goto LABEL_356;
          }
        }
        *(_DWORD *)(v132 + 256) |= 0x10u;
        _InterlockedOr(
          (volatile signed __int32 *)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) + 1296LL),
          2u);
        goto LABEL_358;
      }
      if ( JobInformationClass != JobObjectNotificationLimitInformation )
      {
        if ( JobInformationClass == JobObjectGroupInformationEx )
          goto LABEL_323;
        if ( JobInformationClass != JobObjectCpuRateControlInformation )
        {
          if ( JobInformationClass == JobObjectCompletionFilter )
          {
            *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_DWORD *)v12;
            if ( (*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) & 0xFFFFE001) != 0 )
            {
              Flow = -1073741811;
            }
            else
            {
              v77 = (struct _ERESOURCE *)(v17 + 56);
              ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
              if ( v17 )
              {
                v79 = (unsigned __int64 *)(v17 + 1024);
                v80 = KeAbPreAcquire((ULONG_PTR)v79, 0LL, 0LL, v78);
                v82 = v80;
                if ( _interlockedbittestandset64((volatile signed __int32 *)v79, 0LL) )
                  ExfAcquirePushLockExclusiveEx(v79, v80, (ULONG_PTR)v79, v81);
                if ( v82 )
                  *(_BYTE *)(v82 + 26) |= 1u;
                v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
              }
              *(_DWORD *)(v17 + 884) = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 1024));
              KeAbPostRelease(v17 + 1024);
              ExReleaseResourceLite(v77);
              Flow = 0;
            }
            v36 = *(_DWORD *)v4;
            goto LABEL_532;
          }
          if ( JobInformationClass == JobObjectFreezeInformation )
          {
            *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x288) = *(_OWORD *)v12;
            if ( *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x288)
              && (*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x288) & 0xFFFFFFF8) == 0 )
            {
              Flow = PspFreezeJobTree((char *)v17, (int *)(v4 + 648));
              if ( Flow >= 0 )
              {
                *(_DWORD *)v12 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x288);
                v36 = *(_DWORD *)v4;
                goto LABEL_532;
              }
              goto LABEL_531;
            }
            goto LABEL_71;
          }
LABEL_457:
          Flow = -1073741821;
          goto LABEL_531;
        }
        memmove((void *)(v4 + 312), v12, *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
        v83 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138);
        if ( (v83 & 0xFFFFFFE0) != 0 )
          goto LABEL_241;
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 0;
        v84 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13C);
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v84;
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v83 & 1;
        if ( (v83 & 1) == 0 )
          goto LABEL_254;
        if ( (v83 & 2) != 0 )
        {
          if ( (v83 & 0x10) == 0 )
          {
            v85 = (unsigned __int16)(v84 - 1) <= 8u;
LABEL_247:
            if ( !v85 )
              goto LABEL_241;
LABEL_254:
            PspLockJobChain(v17, *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60));
            if ( *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
            {
              *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v17 + 1296;
              if ( (*(_DWORD *)(v17 + 1296) & 0x20) == 0 )
              {
                RateControl = PspAllocateRateControl(2LL);
                v87 = RateControl;
                if ( !RateControl )
                {
                  Flow = -1073741670;
LABEL_322:
                  PspUnlockJobChain(v17, *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60));
                  goto LABEL_242;
                }
                *(_QWORD *)(v17 + 1000) = RateControl;
LABEL_262:
                v88 = (_QWORD *)(v17 + 1000);
                *(_DWORD *)(*(_QWORD *)(v17 + 1000) + 40LL) = 0;
                *(_DWORD *)(*(_QWORD *)(v17 + 1000) + 44LL) = v84;
                if ( *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
                {
                  if ( (v83 & 4) != 0 )
                  {
                    *(_DWORD *)(*v88 + 40LL) |= 1u;
                    *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x42) = v84;
                  }
                  if ( (v83 & 2) != 0 )
                  {
                    *(_DWORD *)(*v88 + 40LL) |= 4u;
                    *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 1;
                    if ( (v83 & 0x14) == 0 )
                      *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x42) = 10000;
                  }
                  if ( (v83 & 8) != 0 )
                    *(_DWORD *)(*v88 + 40LL) |= 2u;
                  if ( (v83 & 0x10) != 0 )
                    *(_DWORD *)(*v88 + 40LL) |= 0x20u;
                  v89 = *v88;
                  if ( *v88 == v87 )
                  {
                    *(_QWORD *)(v89 + 128) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
                    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 120;
                    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 120;
                    v90 = *(_QWORD *)(v17 + 1064);
                    v91 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
                    v92 = v91;
                    if ( !v91 )
                    {
                      Flow = -1073741670;
LABEL_311:
                      if ( *v88 )
                      {
                        PspFreeRateControl(*v88, 2LL);
                        *v88 = 0LL;
                      }
                      goto LABEL_322;
                    }
                    v91[2] = v17;
                    v93 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
                    *v92 = v93;
                    v92[1] = v4 + 120;
                    if ( *(_QWORD *)(v93 + 8) != v4 + 120 )
                      __fastfail(3u);
                    *(_QWORD *)(v93 + 8) = v92;
                    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v92;
                    if ( v90 )
                    {
                      while ( 1 )
                      {
                        if ( (*(_DWORD *)(v90 + 1296) & 0x20) != 0 )
                        {
LABEL_295:
                          v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                          goto LABEL_296;
                        }
                        v94 = PspAllocateRateControl(2LL);
                        *(_QWORD *)(v90 + 1000) = v94;
                        if ( !v94 )
                          goto LABEL_287;
                        *(_DWORD *)(v94 + 128) = 655370000;
                        *(_DWORD *)(v94 + 132) |= 3u;
                        *(_DWORD *)(*(_QWORD *)(v90 + 1000) + 44LL) = *(_DWORD *)(v94 + 128);
                        *(_DWORD *)(*(_QWORD *)(v90 + 1000) + 40LL) |= 0x40u;
                        v95 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
                        v92 = v95;
                        if ( !v95 )
                          break;
                        _InterlockedOr((volatile signed __int32 *)(v90 + 1296), 0x20u);
                        v95[2] = v90;
                        v96 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
                        *v92 = v96;
                        v92[1] = v4 + 120;
                        if ( *(_QWORD *)(v96 + 8) != v4 + 120 )
                          __fastfail(3u);
                        *(_QWORD *)(v96 + 8) = v92;
                        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v92;
                        v90 = *(_QWORD *)(v90 + 1064);
                        if ( !v90 )
                          goto LABEL_295;
                      }
                      PspFreeRateControl(*(_QWORD *)(v90 + 1000), 2LL);
                      *(_QWORD *)(v90 + 1000) = 0LL;
LABEL_287:
                      while ( 1 )
                      {
                        v97 = *(_QWORD **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
                        if ( v97 == (_QWORD *)(v4 + 120) )
                          break;
                        v98 = v97[2];
                        v99 = *(_QWORD *)(v98 + 1000);
                        if ( v99 )
                        {
                          PspFreeRateControl(v99, 2LL);
                          *(_QWORD *)(v98 + 1000) = 0LL;
                          _InterlockedAnd((volatile signed __int32 *)(v98 + 1296), 0xFFFFFFDF);
                        }
                        v100 = *v97;
                        v101 = (_QWORD *)v97[1];
                        if ( *(_QWORD **)(*v97 + 8LL) != v97 || (_QWORD *)*v101 != v97 )
                          __fastfail(3u);
                        *v101 = v100;
                        *(_QWORD *)(v100 + 8) = v101;
                        ExFreePoolWithTag(v97, 0x624A7350u);
                      }
                      Flow = -1073741670;
                      *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = -1073741670;
                      v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                    }
                    else
                    {
LABEL_296:
                      while ( v92 != (_QWORD *)(v4 + 120) )
                      {
                        v102 = v92[2];
                        v103 = (LARGE_INTEGER *)(*(_QWORD *)(v102 + 1000) + 128LL);
                        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v103;
                        v104 = *(_QWORD *)(v102 + 1064);
                        if ( v104 )
                        {
                          v105 = *(_QWORD *)(v104 + 1000) + 128LL;
                        }
                        else
                        {
                          v105 = *(_QWORD *)(v102 + 1008);
                          if ( PsCpuFairShareEnabled && v105 )
                          {
                            ObfReferenceObject(*(PVOID *)(v102 + 1104));
                            v103 = *(LARGE_INTEGER **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
                          }
                        }
                        KeInsertSchedulingGroup(v103, v103->QuadPart, (LARGE_INTEGER)v105);
                        if ( *(_QWORD *)(v102 + 1008) )
                          PspEnumJobsAndProcessesInJobHierarchy(
                            v102,
                            (unsigned int)PspSetCpuRateControlJobPreCallback,
                            (unsigned int)PspSetCpuRateControlJobPostCallback,
                            0,
                            0LL,
                            5);
                        PspEnumJobsAndProcessesInJobHierarchy(
                          v102,
                          (unsigned int)PspSetCpuRateControlJobPreCallback,
                          (unsigned int)PspSetCpuRateControlJobPostCallback,
                          0,
                          *(_QWORD *)(v102 + 1000),
                          5);
                        v106 = *v92;
                        v107 = (_QWORD *)v92[1];
                        if ( *(_QWORD **)(*v92 + 8LL) != v92 || (_QWORD *)*v107 != v92 )
                          __fastfail(3u);
                        *v107 = v106;
                        *(_QWORD *)(v106 + 8) = v107;
                        ExFreePoolWithTag(v92, 0x624A7350u);
                        v92 = *(_QWORD **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
                      }
                      Flow = 0;
                      *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
                    }
                    if ( Flow < 0 )
                      goto LABEL_311;
                    _InterlockedOr(
                      *(volatile signed __int32 **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                      0x20u);
                    v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  }
                  else
                  {
                    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v89 + 128;
                    LOBYTE(v87) = *(_BYTE *)(v89 + 132) & 2;
                    v108 = (_BYTE)v87 != 0;
                    v109 = *(_DWORD *)(v89 + 40);
                    v110 = (_QWORD *)(v4 + 64);
                    v111 = (_QWORD *)(v4 + 168);
                    if ( (v109 & 4) != 0 )
                      KeSetSchedulingGroupWeights(1u, (__int64)v111, (__int64)v110);
                    else
                      KeSetSchedulingGroupCpuRates(v87, v111, v110);
                    if ( v108 )
                      PspEnumJobsAndProcessesInJobHierarchy(
                        v17,
                        0,
                        0,
                        (unsigned int)PspUpdateSharedReadyQueueAffinityProcessCallback,
                        0LL,
                        5);
                  }
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_DWORD *)(*v88 + 40LL);
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC4) = *(_DWORD *)(*v88 + 44LL);
                }
                else
                {
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 3;
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 655370000;
                  *(_DWORD *)(*v88 + 40LL) |= 0x40u;
                  v112 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
                  *(_DWORD *)(*v88 + 44LL) = v112;
                  v113 = *v88 + 128LL;
                  *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v113;
                  *(_QWORD *)(v17 + 1016) += KeQuerySchedulingGroupReadyTime(v113);
                  KeSetSchedulingGroupCpuRates(v114, (_QWORD *)(v4 + 168), (_QWORD *)(v4 + 64));
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
                  *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC4) = v112;
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v17,
                    0,
                    0,
                    (unsigned int)PspUpdateSharedReadyQueueAffinityProcessCallback,
                    0LL,
                    5);
                }
                Flow = 0;
                if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                  EtwTraceJobSetQuery(
                    v17,
                    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
                    15,
                    v4 + 192,
                    0LL,
                    0,
                    1829);
                goto LABEL_322;
              }
            }
            else
            {
              *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v17 + 1296;
              if ( (*(_DWORD *)(v17 + 1296) & 0x20) == 0 )
              {
                Flow = -1073741811;
                goto LABEL_322;
              }
            }
            v87 = 0LL;
            goto LABEL_262;
          }
        }
        else if ( (unsigned __int16)(v84 - 1) <= 0x270Fu )
        {
          if ( (v83 & 0x10) == 0 )
            goto LABEL_254;
          if ( (v83 & 4) != 0 || HIWORD(v84) < (unsigned __int16)v84 )
            goto LABEL_241;
          v85 = HIWORD(v84) <= 0x2710u;
          goto LABEL_247;
        }
LABEL_241:
        Flow = -1073741811;
LABEL_242:
        v36 = *(_DWORD *)v4;
        goto LABEL_532;
      }
LABEL_467:
      v174 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( v174 == 48 )
      {
        v185 = *(__m128i *)v12;
        *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x378) = *(_OWORD *)v12;
        v186 = *((__m128i *)v12 + 1);
        *(__m128i *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x388) = v186;
        v187 = *((__m128i *)v12 + 2);
        *(__m128i *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x398) = v187;
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = 0LL;
        v176 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v187, 8));
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248) = v176;
        v180 = v185.m128i_i64[0];
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = v185.m128i_i64[0];
        v179 = _mm_srli_si128(v185, 8).m128i_u64[0];
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = v179;
        v178 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x388);
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = v178;
        v177 = _mm_srli_si128(v186, 8).m128i_u64[0];
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = v177;
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = _mm_cvtsi128_si32(v187);
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x244) = _mm_cvtsi128_si32(_mm_srli_si128(v187, 4));
        v175 = 459268;
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 459268;
      }
      else
      {
        if ( v174 == 56 )
        {
          v181 = *(__m128i *)v12;
          *(_OWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x340) = *(_OWORD *)v12;
          v182 = *((__m128i *)v12 + 1);
          *(__m128i *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x350) = v182;
          v183 = *((__m128i *)v12 + 2);
          *(__m128i *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x360) = v183;
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) = *((_QWORD *)v12 + 6);
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = 0LL;
          v176 = *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x370);
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248) = v176;
          v180 = v181.m128i_i64[0];
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = v181.m128i_i64[0];
          v179 = _mm_srli_si128(v181, 8).m128i_u64[0];
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = v179;
          v178 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x350);
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = v178;
          v184 = _mm_srli_si128(v182, 8).m128i_u64[0];
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) = v184;
          v177 = v183.m128i_i64[0];
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = v183.m128i_i64[0];
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = _mm_cvtsi128_si32(_mm_srli_si128(v183, 8));
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x244) = _mm_cvtsi128_si32(_mm_srli_si128(v183, 12));
          v175 = 492036;
          *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 492036;
          goto LABEL_473;
        }
        memmove((void *)(v4 + 544), v12, v174);
        v175 = 2064900;
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 2064900;
        v176 = *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248);
        v177 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x238);
        v178 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x230);
        v179 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228);
        v180 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220);
      }
      v184 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250);
LABEL_473:
      if ( (~v175 & (unsigned int)v176) != 0 )
      {
LABEL_474:
        Flow = -1073741811;
LABEL_475:
        v36 = *(_DWORD *)v4;
        goto LABEL_532;
      }
      if ( (v176 & 0x8000) != 0 )
      {
        if ( v184 < 0x1000 )
          goto LABEL_474;
      }
      else
      {
        v184 = 0LL;
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) = 0LL;
      }
      if ( (v176 & 0x200) != 0 )
      {
        if ( v177 < 0x1000 || v177 < v184 )
          goto LABEL_474;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = 0LL;
      }
      if ( (v176 & 4) != 0 )
      {
        if ( !v178 )
          goto LABEL_474;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = 0LL;
      }
      if ( (v176 & 0x10000) != 0 )
      {
        if ( !v180 )
          goto LABEL_474;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = 0LL;
      }
      if ( (v176 & 0x20000) != 0 )
      {
        if ( !v179 )
          goto LABEL_474;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = 0LL;
      }
      v188 = 0LL;
      do
      {
        PspNotificationLimitRateControlToleranceField(v4 + 544, v188, v176);
        PspNotificationLimitRateControlToleranceIntervalField(v4 + 544);
        v192 = PspRateControlLimitFlag((unsigned int)v189, v189, v190, v191);
        if ( (v192 & (unsigned int)v176) != 0 )
        {
          if ( !*v194 || *v194 > 3 || !*v195 || *v195 > 3 )
            goto LABEL_474;
        }
        else
        {
          *v194 = 0;
          *v195 = 0;
          v176 = *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248);
        }
        v188 = (unsigned int)(v193 + 1);
      }
      while ( (int)v188 < 3 );
      v196 = (__int64 *)(v17 + 976);
      if ( *(_QWORD *)(v17 + 976) )
      {
        v197 = 0LL;
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
      }
      else
      {
        v197 = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
        if ( !v197 )
        {
LABEL_508:
          Flow = -1073741670;
          goto LABEL_475;
        }
        v198 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 136LL, 0LL);
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v198;
        if ( !v198 )
        {
          ExFreePoolWithTag(v197, 0x624A7350u);
          goto LABEL_508;
        }
        memset(v197, 0, 0x88uLL);
        v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      }
      *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v17 + 56;
      ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
      if ( *v196 )
      {
        if ( v197 )
        {
          ExFreePoolWithTag(v197, 0x624A7350u);
          PsReturnSharedPoolQuota(*(PVOID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
        }
      }
      else
      {
        *v196 = (__int64)v197;
        *(_QWORD *)(v17 + 984) = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      }
      v199 = (_QWORD *)*v196;
      v199[1] = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220);
      v199[2] = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228);
      v199[3] = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x230);
      v199[4] = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) >> 12;
      v199[5] = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) >> 12;
      v200 = 0LL;
      v201 = (_DWORD *)v199 + 15;
      do
      {
        v202 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v4 + 544, v200, v201);
        *(_DWORD *)(v203 - 12) = *v202;
        v204 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v4 + 544);
        *v206 = *v204;
        v200 = (unsigned int)(v207 + 1);
        v201 = v206 + 1;
      }
      while ( (int)v200 < 3 );
      *(_DWORD *)*v196 = *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248);
      if ( (*(_DWORD *)*v196 & 0xFFFF7DFF) != 0 )
      {
        _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
        v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      }
      if ( v205 )
      {
        v208 = *v196;
        if ( *(_DWORD *)*v196 )
        {
LABEL_526:
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery(
              v17,
              *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
              *(_DWORD *)v4,
              v4 + 544,
              0LL,
              Flow,
              1829);
          ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
          Flow = 0;
          goto LABEL_475;
        }
      }
      else
      {
        v208 = *v196;
        if ( !*(_DWORD *)*v196 )
          goto LABEL_526;
      }
      PspEnumJobsAndProcessesInJobHierarchy(v17, (unsigned int)PspSetJobNotificationCountCallback, 0, 0, v208, 5);
      goto LABEL_526;
    }
    if ( JobInformationClass > JobObjectIoRateControlInformation )
    {
      v165 = JobInformationClass - 32;
      if ( v165 )
      {
        v166 = v165 - 1;
        if ( !v166 )
          goto LABEL_467;
        v167 = v166 - 2;
        if ( v167 )
        {
          v168 = v167 - 2;
          if ( v168 )
          {
            if ( v168 != 3 )
              goto LABEL_457;
            if ( !SeSinglePrivilegeCheck(
                    SeTcbPrivilege,
                    *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4)) )
              goto LABEL_97;
            Flow = -1073740535;
            v169 = (char *)PspReferenceJobSilo(
                             v17,
                             *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60));
            v170 = v169;
            if ( !v169 )
              goto LABEL_531;
            v171 = PsSetSiloObjectServerPropertyByPointer(v169, v12);
          }
          else
          {
            if ( !SeSinglePrivilegeCheck(
                    SeTcbPrivilege,
                    *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4)) )
              goto LABEL_97;
            Flow = -1073740535;
            v172 = (char *)PspReferenceJobSilo(
                             v17,
                             *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60));
            v170 = v172;
            if ( !v172 )
              goto LABEL_531;
            v171 = PsSetSiloObjectRootDirectoryByPointer(v172, v12);
          }
          Flow = v171;
          PspDereferenceSiloObject(v170);
          goto LABEL_531;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4)) )
          goto LABEL_97;
        Silo = PspCreateSilo(v17);
      }
      else
      {
        Silo = PspSetNetRateControl(
                 *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
                 v12,
                 *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                 v17);
      }
      Flow = Silo;
      goto LABEL_531;
    }
    if ( JobInformationClass != JobObjectIoRateControlInformation )
    {
      v135 = JobInformationClass - 22;
      if ( v135 )
      {
        v136 = v135 - 1;
        if ( !v136 )
        {
          if ( *(_BYTE *)v12 == 1 )
          {
            PspEnumJobsAndProcessesInJobHierarchy(
              v17,
              0,
              (unsigned int)PspEnableTimerVirtualization,
              (unsigned int)PspEnableProcessTimerVirtualization,
              0LL,
              0);
            Flow = 0;
          }
          else
          {
            Flow = -1073741811;
            *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = -1073741811;
          }
          v36 = *(_DWORD *)v4;
          goto LABEL_532;
        }
        v137 = v136 - 1;
        if ( v137 )
        {
          v138 = v137 - 1;
          if ( v138 )
          {
            if ( v138 != 2 )
              goto LABEL_457;
            if ( v17 )
            {
              v139 = (unsigned __int64 *)(v17 + 1024);
              v140 = KeAbPreAcquire((ULONG_PTR)v139, 0LL, 0LL, v15);
              v142 = v140;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v139, 0LL) )
                ExfAcquirePushLockExclusiveEx(v139, v140, (ULONG_PTR)v139, v141);
              if ( v142 )
                *(_BYTE *)(v142 + 26) |= 1u;
              v17 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            }
            *(_QWORD *)(v17 + 608) = 0LL;
            *(_QWORD *)(v17 + 600) = 0LL;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 1024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 1024));
            KeAbPostRelease(v17 + 1024);
          }
          else
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
            KeResetEvent((PRKEVENT)v17);
            ExReleaseResourceLite((PERESOURCE)(v17 + 56));
          }
          Flow = 0;
          goto LABEL_531;
        }
        v143 = *(_QWORD *)v12;
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E8) = *(_QWORD *)v12;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
        if ( (*(_DWORD *)(v17 + 1296) & 0x20) != 0 )
        {
          v144 = *(_QWORD *)(v17 + 1000);
          v145 = *(_DWORD *)(v144 + 40);
          if ( (v145 & 0x10) == 0 )
          {
            *(_DWORD *)(v144 + 40) = v145 | 0x10;
            KeInitializeDpc((PRKDPC)(v144 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, (PVOID)v17);
          }
          KeSetSchedulingGroupCycleNotification(v144 + 128, v144 + 48, v143);
          Flow = 0;
        }
        else
        {
          Flow = -1073741811;
        }
      }
      else
      {
        v146 = *(_BYTE *)v12;
        *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C) = *(_BYTE *)v12;
        ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
        if ( (*(_DWORD *)(v17 + 1296) & 0x20) == 0 )
          goto LABEL_400;
        v147 = *(_QWORD *)(v17 + 1000);
        v148 = *(_DWORD *)(v147 + 40);
        if ( (v148 & 0x40) != 0 )
          goto LABEL_400;
        if ( (v148 & 0x21) != 0 )
        {
          Flow = -1073741637;
          goto LABEL_389;
        }
        if ( (((unsigned __int8)v148 >> 3) & 1) == (v146 != 0) )
        {
LABEL_400:
          Flow = -1073741811;
          goto LABEL_389;
        }
        *(_DWORD *)(v147 + 40) = v148 ^ ((unsigned __int8)v148 ^ (unsigned __int8)(8 * (v146 != 0))) & 8;
        KeSetSchedulingGroupRankBias(*(_QWORD *)(v17 + 1000) + 128LL, v146);
        Flow = 0;
      }
LABEL_389:
      ExReleaseResourceLite((PERESOURCE)(v17 + 56));
      v36 = *(_DWORD *)v4;
      goto LABEL_532;
    }
    *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = 0LL;
    memmove((void *)(v4 + 352), v12, *(unsigned int *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
    v149 = *(const wchar_t **)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x178);
    if ( v149 )
    {
      v150 = *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188);
      if ( v150 )
      {
        if ( ((unsigned __int8)v149 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v151 = (ULONG64)v149 + v150;
        if ( v151 > MmUserProbeAddress || v151 < (unsigned __int64)v149 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = 1;
      v152 = PagedPool;
      if ( *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4) == 1 )
        v152 = 9;
      *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = v152;
      *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 256;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(v152, v150, 0x624A7350u);
      *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        Flow = -1073741801;
        *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = -1073741801;
        v36 = *(_DWORD *)v4;
        goto LABEL_450;
      }
      *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0;
      *(_WORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x102) = v150;
      Flow = RtlUnicodeStringCbCopyStringN((PUNICODE_STRING)(v4 + 256), v149, v150);
      *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Flow;
    }
    if ( Flow >= 0 )
    {
      *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 1;
      if ( (*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x184) & 0xFFFFFFFE) == 0
        && !*(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) )
      {
        v154 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        --*(_WORD *)(v154 + 486);
        while ( 1 )
        {
          *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v17 + 1072);
          ExAcquireResourceExclusiveLite(
            (PERESOURCE)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 56LL),
            1u);
          if ( *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) == *(_QWORD *)(v17 + 1072) )
            break;
          ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 56LL));
        }
        v155 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v155;
        *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = v155;
        v156 = 0;
        v157 = (_QWORD *)(v4 + 320);
        v158 = *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        while ( v158 != *v157 )
        {
          ++v156;
          ++v157;
          if ( v156 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v158 + 56), 1u);
            break;
          }
        }
        if ( (*(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x184) & 1) != 0 )
        {
          if ( *(_QWORD *)(v158 + 1288) )
          {
LABEL_433:
            v160 = IoSetFlowPolicy(
                     v158 + 1232,
                     *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130),
                     *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160),
                     *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168),
                     *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170));
            goto LABEL_437;
          }
          Flow = IoCreateFlow(v158 + 1232);
          if ( Flow == -1073741822 )
          {
            Flow = IoEnableIoQos();
            if ( Flow < 0 )
              goto LABEL_439;
            Flow = IoCreateFlow(v158 + 1232);
          }
          if ( Flow >= 0 )
          {
            *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 1;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = PspIoRateControlProcessCallback;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                  + 448;
            *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C0) = v158 + 1232;
            v159 = 0;
            if ( *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 4) == 1 )
              v159 = 6;
            *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C8) = v159;
            goto LABEL_433;
          }
        }
        else
        {
          if ( (*(_DWORD *)(v158 + 1296) & 0x10000000) != 0 )
          {
            v160 = IoDeleteFlow(v158 + 1232);
LABEL_437:
            Flow = v160;
            if ( v160 >= 0 )
              Flow = PspSetJobRateControl(
                       v158,
                       1,
                       *(_DWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x184),
                       v161,
                       *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
                       *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
LABEL_439:
            if ( Flow >= 0 )
              goto LABEL_442;
            goto LABEL_440;
          }
          Flow = -1073741811;
        }
LABEL_440:
        if ( *(_BYTE *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) )
          IoDeleteFlow(v158 + 1232);
LABEL_442:
        v162 = 0;
        v163 = (_QWORD *)(v4 + 320);
        while ( v158 != *v163 )
        {
          ++v162;
          ++v163;
          if ( v162 )
          {
            ExReleaseResourceLite((PERESOURCE)(v158 + 56));
            break;
          }
        }
        ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) + 56LL));
        v164 = *(_WORD *)(v154 + 486) + 1;
        *(_WORD *)(v154 + 486) = v164;
        if ( !v164 && *(_QWORD *)(v154 + 152) != v154 + 152 )
          KiCheckForKernelApcDelivery();
        goto LABEL_449;
      }
      Flow = -1073741811;
    }
LABEL_449:
    v36 = *(_DWORD *)v4;
LABEL_450:
    if ( *(_QWORD *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) )
      ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)&v214 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108), 0x624A7350u);
    goto LABEL_532;
  }
  return result;
}
