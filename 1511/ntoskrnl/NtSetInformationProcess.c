/*
 * XREFs of NtSetInformationProcess @ 0x1404507B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400612C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     MmGetDefaultPagePriority @ 0x14007A034 (MmGetDefaultPagePriority.c)
 *     MmGetMinWsPagePriority @ 0x14007A03C (MmGetMinWsPagePriority.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     MmSetMemoryPriorityProcess @ 0x1400936F0 (MmSetMemoryPriorityProcess.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     RtlInsertDynamicFunctionTable @ 0x140096130 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14009660C (RtlRemoveDynamicFunctionTable.c)
 *     PspLockUnlockProcessExclusive @ 0x140096778 (PspLockUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x1400967CC (KeSetExecuteOptions.c)
 *     KeQueryGroupMaskProcess @ 0x14009B4A0 (KeQueryGroupMaskProcess.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MmRemoveExecuteGrants @ 0x1400BB4A8 (MmRemoveExecuteGrants.c)
 *     KeInitializeGate @ 0x1400EF318 (KeInitializeGate.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1400FB7D0 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400FB824 (PsSetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14010579C (ExCpuSetResourceManagerAccessCheck.c)
 *     KeVerifyGroupAffinity @ 0x1401230CC (KeVerifyGroupAffinity.c)
 *     xKdEnumerateDebuggingDevices @ 0x140142AF0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 *     KeSetCpuSetsProcess @ 0x1401C8660 (KeSetCpuSetsProcess.c)
 *     MmGetMaximumUserAddress @ 0x1401D0990 (MmGetMaximumUserAddress.c)
 *     MmSetCommitReleaseEligibility @ 0x1401D09A8 (MmSetCommitReleaseEligibility.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeCompareSigningLevels @ 0x140448D98 (SeCompareSigningLevels.c)
 *     PsSetProcessPriorityByClass @ 0x1404503DC (PsSetProcessPriorityByClass.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1404520A4 (PspSetProcessDefaultHardErrorMode.c)
 *     KeSetAutoAlignmentProcess @ 0x140452180 (KeSetAutoAlignmentProcess.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404521A0 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     LpcRequestPort @ 0x1404521F4 (LpcRequestPort.c)
 *     ExEnableHandleExceptions @ 0x140452258 (ExEnableHandleExceptions.c)
 *     PspSetProcessPriorityClass @ 0x1404523AC (PspSetProcessPriorityClass.c)
 *     SeSetVirtualizationToken @ 0x140452458 (SeSetVirtualizationToken.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     KeSetDisableBoostThread @ 0x140452B08 (KeSetDisableBoostThread.c)
 *     PspWritePebAffinityInfo @ 0x1404645DC (PspWritePebAffinityInfo.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     PsSetProcessFaultInformation @ 0x1404C5CE0 (PsSetProcessFaultInformation.c)
 *     SeCheckPrivilegedObject @ 0x14050C338 (SeCheckPrivilegedObject.c)
 *     MmProcessWorkingSetControl @ 0x140517540 (MmProcessWorkingSetControl.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140517F80 (PspSetProcessAffinityUpdateMode.c)
 *     ObSetDeviceMap @ 0x140545400 (ObSetDeviceMap.c)
 *     KeSetCheckStackExtentsProcess @ 0x14061A418 (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x14062B190 (MmValidateUserCallTarget.c)
 *     PsSetProcessHandleTracingInformation @ 0x14063EDC4 (PsSetProcessHandleTracingInformation.c)
 *     PspSetProcessAffinitySafe @ 0x14063F50C (PspSetProcessAffinitySafe.c)
 *     PspAssignPrimaryToken @ 0x140640D98 (PspAssignPrimaryToken.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rsi
  __int128 *v5; // rdi
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v9; // r15
  int v10; // eax
  ULONG64 v11; // rdx
  unsigned int v12; // ebx
  NTSTATUS result; // eax
  PVOID v14; // rcx
  char *v15; // r14
  int v16; // edx
  int *PoolWithQuotaTag; // r14
  int v18; // r9d
  __int64 v19; // r8
  unsigned int k; // edx
  _KPROCESS *Process; // rcx
  int v22; // r12d
  _QWORD *m; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // r15
  char *v26; // rax
  char *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rax
  char *v30; // rcx
  __int64 v31; // r9
  char *v32; // rdx
  char *v33; // rcx
  int v34; // r10d
  char *v35; // rdx
  __int64 v36; // rcx
  _OWORD *v37; // rax
  __int64 v38; // rdx
  char *v39; // rdx
  unsigned int v40; // ebx
  int v41; // r12d
  unsigned __int64 v42; // rdx
  HANDLE *v43; // roff
  signed __int64 v44; // rbx
  bool v45; // zf
  signed __int64 v46; // rax
  NTSTATUS v47; // r12d
  __int64 v48; // rdx
  volatile void **v49; // rdi
  unsigned int v50; // edi
  NTSTATUS v51; // r13d
  char *v52; // rbx
  __int64 v53; // rax
  void *v54; // rbx
  int v55; // eax
  char v56; // bl
  unsigned int v57; // r13d
  NTSTATUS v58; // edi
  __int16 v59; // bx
  PVOID v60; // rdi
  NTSTATUS v61; // esi
  unsigned int DefaultPagePriority; // eax
  unsigned int v63; // ecx
  unsigned int MinWsPagePriority; // eax
  unsigned int v65; // ecx
  volatile signed __int32 *v66; // rsi
  struct _EX_RUNDOWN_REF *v67; // r13
  signed __int32 v68; // eax
  int v69; // r8d
  signed __int32 v70; // edx
  char *v71; // r15
  char *v72; // rdi
  int v73; // ebx
  PVOID v74; // rcx
  PACCESS_TOKEN v75; // rbx
  unsigned int v76; // eax
  volatile signed __int32 *v77; // rdi
  struct _EX_RUNDOWN_REF *v78; // rsi
  signed __int32 v79; // eax
  int v80; // r8d
  signed __int32 v81; // edx
  char *v82; // r15
  char *v83; // rbx
  char v84; // r13
  int v85; // ecx
  HANDLE v86; // rax
  void *v87; // rbx
  unsigned int v88; // edx
  int v89; // ecx
  char v90; // dl
  char v91; // bl
  NTSTATUS v92; // r13d
  struct _EX_RUNDOWN_REF *v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rcx
  int v96; // ebx
  bool v97; // di
  struct _EX_RUNDOWN_REF *v98; // rsi
  char *v99; // r9
  char *j; // r8
  char **v101; // r8
  int v102; // ebx
  char v103; // si
  PVOID v104; // rdi
  NTSTATUS v105; // eax
  NTSTATUS v106; // ebx
  int v107; // r14d
  int v108; // edi
  volatile signed __int64 *v109; // rbx
  _QWORD *PoolWithTag; // rax
  void *v111; // r8
  unsigned int v112; // r14d
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  _QWORD *v115; // rdi
  unsigned __int8 v116; // di
  _DWORD *v117; // rbx
  unsigned __int8 v118; // al
  __int64 v119; // rcx
  int v120; // ebx
  PVOID v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rdx
  char *v124; // rbx
  struct _EX_RUNDOWN_REF *v125; // rsi
  unsigned __int64 *v126; // rbx
  __int64 v127; // rdi
  volatile signed __int32 *v128; // rbx
  HANDLE v129; // rbx
  int v130; // ebx
  NTSTATUS v131; // r13d
  void *v132; // rcx
  int v133; // ecx
  int *v134; // rdx
  HANDLE v135; // rcx
  _KPROCESS *v136; // rdi
  BOOLEAN v137; // al
  __int64 v138; // rdi
  volatile signed __int32 **v139; // rbx
  volatile signed __int32 *v140; // rax
  __int64 v141; // rcx
  __int64 *v142; // rax
  char v143; // bl
  int v144; // eax
  int v145; // ecx
  void *v146; // rbx
  int v147; // eax
  void *v148; // rcx
  ULONG64 v149; // rdx
  PVOID v150; // rax
  int v151; // esi
  volatile signed __int64 *v152; // rsi
  volatile signed __int64 *v153; // rcx
  unsigned int v154; // esi
  signed __int32 v155[8]; // [rsp+0h] [rbp-3B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-368h] BYREF
  unsigned int v157; // [rsp+58h] [rbp-360h]
  int v158; // [rsp+5Ch] [rbp-35Ch]
  HANDLE Handle; // [rsp+68h] [rbp-350h]
  PVOID P; // [rsp+78h] [rbp-340h]
  ULONG Alignment; // [rsp+80h] [rbp-338h]
  int v162; // [rsp+88h] [rbp-330h]
  HANDLE v163; // [rsp+90h] [rbp-328h]
  PVOID v164; // [rsp+98h] [rbp-320h]
  int v165; // [rsp+A0h] [rbp-318h]
  _OWORD *v166; // [rsp+A8h] [rbp-310h]
  char v167; // [rsp+B0h] [rbp-308h]
  __int16 v168; // [rsp+B4h] [rbp-304h]
  char v169; // [rsp+B8h] [rbp-300h]
  char *v170; // [rsp+C0h] [rbp-2F8h]
  int v171; // [rsp+C8h] [rbp-2F0h]
  __int128 v172; // [rsp+D0h] [rbp-2E8h]
  __int64 v173; // [rsp+E0h] [rbp-2D8h]
  __int128 v174; // [rsp+E8h] [rbp-2D0h] BYREF
  int v175; // [rsp+F8h] [rbp-2C0h]
  int v176; // [rsp+100h] [rbp-2B8h] BYREF
  int v177; // [rsp+104h] [rbp-2B4h]
  int v178; // [rsp+108h] [rbp-2B0h]
  int v179; // [rsp+10Ch] [rbp-2ACh] BYREF
  unsigned int v180; // [rsp+110h] [rbp-2A8h]
  BOOL v181; // [rsp+114h] [rbp-2A4h]
  PVOID v182; // [rsp+118h] [rbp-2A0h] BYREF
  int v183; // [rsp+120h] [rbp-298h] BYREF
  int v184; // [rsp+124h] [rbp-294h]
  int v185; // [rsp+128h] [rbp-290h] BYREF
  void *Src; // [rsp+130h] [rbp-288h]
  PVOID v187; // [rsp+138h] [rbp-280h]
  PVOID v188; // [rsp+140h] [rbp-278h] BYREF
  PVOID v189; // [rsp+148h] [rbp-270h]
  HANDLE v190; // [rsp+158h] [rbp-260h]
  int v191; // [rsp+160h] [rbp-258h]
  __int128 v192; // [rsp+168h] [rbp-250h]
  __int64 v193; // [rsp+178h] [rbp-240h]
  int v194; // [rsp+180h] [rbp-238h]
  __int64 v195; // [rsp+188h] [rbp-230h] BYREF
  int v196; // [rsp+190h] [rbp-228h]
  int v197; // [rsp+194h] [rbp-224h]
  int v198; // [rsp+198h] [rbp-220h]
  unsigned __int64 v199; // [rsp+1A0h] [rbp-218h] BYREF
  int v200; // [rsp+1B0h] [rbp-208h]
  int v201; // [rsp+1B4h] [rbp-204h]
  int v202; // [rsp+1B8h] [rbp-200h]
  int v203; // [rsp+1BCh] [rbp-1FCh]
  unsigned int v204; // [rsp+1C0h] [rbp-1F8h]
  int v205; // [rsp+1C4h] [rbp-1F4h]
  int v206; // [rsp+1C8h] [rbp-1F0h]
  int v207; // [rsp+1CCh] [rbp-1ECh]
  __int128 v208; // [rsp+1D0h] [rbp-1E8h]
  __int128 v209; // [rsp+1E0h] [rbp-1D8h] BYREF
  __int128 v210; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int64 v211; // [rsp+200h] [rbp-1B8h]
  HANDLE v212; // [rsp+208h] [rbp-1B0h]
  unsigned __int64 v213; // [rsp+210h] [rbp-1A8h]
  unsigned __int64 v214; // [rsp+218h] [rbp-1A0h]
  HANDLE v215; // [rsp+220h] [rbp-198h]
  _DWORD v216[10]; // [rsp+228h] [rbp-190h] BYREF
  __int64 v217; // [rsp+250h] [rbp-168h]
  int *v218; // [rsp+258h] [rbp-160h]
  __int128 v219; // [rsp+260h] [rbp-158h]
  $D4FCF91253F76F57393CBFE908971F67 v220; // [rsp+270h] [rbp-148h] BYREF
  _BYTE v221[48]; // [rsp+2A0h] [rbp-118h] BYREF
  char v222[160]; // [rsp+2D0h] [rbp-E8h] BYREF

  v4 = ProcessInformationLength;
  v5 = (__int128 *)ProcessInformation;
  P = ProcessInformation;
  Alignment = ProcessInformationLength;
  CurrentThread = KeGetCurrentThread();
  v164 = CurrentThread;
  v9 = CurrentThread->gap0[10];
  if ( !v9 )
  {
    v11 = MmUserProbeAddress;
    goto LABEL_30;
  }
  switch ( ProcessInformationClass )
  {
    case ProcessBasePriority:
      goto LABEL_21;
    case ProcessEnableAlignmentFaultFixup:
      v10 = 1;
      break;
    case ProcessForegroundInformation:
      v10 = 1;
      break;
    case ProcessPriorityClass:
      v10 = 1;
      break;
    case ProcessAffinityMask:
      v10 = 8;
      break;
    case ProcessPagePriority:
    case ProcessIoPriority:
      goto LABEL_21;
    case ProcessTlsInformation:
      v10 = 8;
      break;
    case ProcessExceptionPort:
      v10 = 8;
      break;
    case ProcessInstrumentationCallback:
      v10 = 8;
      break;
    case ProcessThreadStackAllocation:
      v10 = 8;
      break;
    case ProcessAffinityUpdateMode:
    case ProcessMemoryAllocationMode:
      goto LABEL_21;
    case ProcessConsoleHostProcess:
      v10 = 8;
      break;
    case ProcessDynamicFunctionTableInformation:
      v10 = 8;
      break;
    case ProcessRevokeFileHandles:
      v10 = 8;
      break;
    case ProcessMemoryExhaustion:
      v10 = 8;
      break;
    case ProcessCommitReleaseInformation:
      v10 = 8;
      break;
    case ProcessInPrivate:
      v10 = 1;
      break;
    default:
LABEL_21:
      v10 = 4;
      break;
  }
  if ( !ProcessInformationLength )
  {
LABEL_27:
    v11 = MmUserProbeAddress;
    goto LABEL_30;
  }
  if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = MmUserProbeAddress;
  if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > MmUserProbeAddress
    || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    goto LABEL_27;
  }
LABEL_30:
  if ( ProcessInformationClass == ProcessDefaultHardErrorMode )
  {
    if ( ProcessInformationLength == 4 )
    {
      v12 = *(_DWORD *)ProcessInformation;
      v204 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        PspSetProcessDefaultHardErrorMode(Object, CurrentThread, v12);
LABEL_34:
        v14 = Object;
LABEL_35:
        ObfDereferenceObjectWithTag(v14, 0x79517350u);
        return 0;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ProcessInformationClass == ProcessThreadStackAllocation )
  {
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      v15 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v209 = *(_OWORD *)ProcessInformation;
          v210 = *((_OWORD *)ProcessInformation + 1);
          v211 = *((_QWORD *)ProcessInformation + 4);
          v15 = (char *)ProcessInformation + 32;
          v5 = &v209;
        }
        v16 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
          return -1073741811;
        ++v5;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v16 = 0;
        if ( v9 )
        {
          v210 = *(_OWORD *)ProcessInformation;
          v15 = (char *)ProcessInformation + 16;
          v5 = &v210;
        }
      }
      if ( *(_QWORD *)v5 )
      {
        v199 = *(_QWORD *)v5;
        *((_QWORD *)v5 + 2) = 0LL;
        result = MiAllocateVirtualMemory(
                   -1LL,
                   (unsigned __int64 *)v5 + 2,
                   *((void **)v5 + 1),
                   &v199,
                   v16 | 0x2000,
                   4u,
                   0,
                   0x80000000,
                   0LL);
        if ( result >= 0 )
        {
          if ( v9 )
            *(_QWORD *)v15 = *((_QWORD *)v5 + 2);
        }
        return result;
      }
    }
    return -1073741811;
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits(ProcessHandle);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v206 = *(_DWORD *)ProcessInformation;
      v102 = v206;
      if ( v206 < 0 )
      {
        v103 = 2;
        v102 = v206 & 0x7FFFFFFF;
      }
      else
      {
        v103 = 0;
      }
      if ( (unsigned int)(v102 - 1) > 0x1E )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v104 = Object;
      if ( v102 <= *((char *)Object + 444)
        || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                              SeIncreaseBasePriorityPrivilege,
                              ProcessHandle,
                              512LL,
                              v9) )
      {
        KeSetPriorityAndQuantumProcess((__int64)v104, (unsigned int)v102, 0, 0, 0);
        MmSetMemoryPriorityProcess((__int64)v104, v103);
        ObfDereferenceObjectWithTag(v104, 0x79517350u);
        return 0;
      }
      ObfDereferenceObjectWithTag(v104, 0x79517350u);
      return -1073741727;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v112 = *(_DWORD *)ProcessInformation;
      v197 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v22 = result;
      if ( result < 0 )
        return result;
      v87 = Object;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
        goto LABEL_326;
      for ( i = 0LL; ; i = v115 )
      {
        NextProcessThread = PsGetNextProcessThread((__int64)v87, i);
        v115 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        KeBoostPriorityThread((__int64)NextProcessThread, v112);
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v87 + 92);
      goto LABEL_259;
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v40 = 0;
        v180 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v190 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v190 = Handle;
        v180 = *((_DWORD *)ProcessInformation + 2);
        v40 = v180;
        if ( (v180 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v182, 0LL);
      v187 = v182;
      if ( result < 0 )
        return result;
      v41 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x800u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v41 < 0 )
      {
        ObfDereferenceObject(v182);
        return v41;
      }
      v42 = (unsigned __int64)v182 | v40;
      v166 = (_OWORD *)v42;
      v43 = (HANDLE *)((char *)Object + 848);
      _m_prefetchw((char *)Object + 848);
      v44 = (signed __int64)*v43;
      for ( Handle = *v43; ; Handle = (HANDLE)v46 )
      {
        if ( (_DWORD)v4 == 16 )
        {
          *((_DWORD *)v5 + 2) = v44 & 7;
        }
        else if ( (v44 & 7) != 0 )
        {
          ObfDereferenceObject(v187);
          goto LABEL_329;
        }
        v46 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 106, v42, v44);
        v45 = v44 == v46;
        v44 = v46;
        if ( v45 )
          break;
      }
      if ( v46 )
      {
        v54 = (void *)(v46 & 0xFFFFFFFFFFFFFFF8uLL);
        v216[0] = 3145736;
        v216[1] = 13;
        v217 = *((_QWORD *)Object + 93);
        while ( 1 )
        {
          v55 = LpcRequestPort(v54, v216);
          if ( v55 != -1073741801 && v55 != -1073741670 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
        }
        PspLockUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
        ObfDereferenceObject(v54);
      }
      v47 = 0;
      goto LABEL_122;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v212 = *(HANDLE *)ProcessInformation;
      return PspAssignPrimaryToken(CurrentThread, v9, ProcessHandle);
    case ProcessLdtInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_339;
      return result;
    case ProcessLdtSize:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_339;
      return result;
    case ProcessIoPortHandlers:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
LABEL_339:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return xKdEnumerateDebuggingDevices();
      }
      return result;
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v109 = (volatile signed __int64 *)Object;
      v58 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
      if ( v58 < 0 )
        goto LABEL_605;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      if ( PoolWithTag )
      {
        PsWatchEnabled = 1;
        *(_DWORD *)PoolWithTag = 0;
        PoolWithTag[1] = 0LL;
        KeInitializeGate((__int64)(PoolWithTag + 2));
        if ( !_InterlockedCompareExchange64(v109 + 122, (signed __int64)v111, 0LL) )
        {
          v58 = 0;
          v109 = (volatile signed __int64 *)Object;
          goto LABEL_605;
        }
        ExFreePoolWithTag(v111, 0);
        v58 = -1073741752;
        v109 = (volatile signed __int64 *)Object;
      }
      else
      {
        v58 = -1073741801;
      }
      PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)v109, 24616LL);
      goto LABEL_605;
    case ProcessUserModeIOPL:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741822;
      }
      return result;
    case ProcessEnableAlignmentFaultFixup:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v116 = *(_BYTE *)ProcessInformation;
      v169 = *(_BYTE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v117 = Object;
      PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
      if ( v116 )
        v117[296] |= 4u;
      else
        v117[296] &= ~4u;
      v118 = v116;
      if ( *((_QWORD *)v117 + 133) )
        v118 = 1;
      KeSetAutoAlignmentProcess(v117, v118);
      PspUnlockProcessExclusive(v119, (__int64)CurrentThread);
      v14 = v117;
      goto LABEL_35;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v59 = *(_WORD *)ProcessInformation;
      v168 = *(_WORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v60 = Object;
        v61 = PspSetProcessPriorityClass(Object, HIBYTE(v168), ProcessHandle, v9);
        if ( v61 >= 0 )
          PsSetProcessPriorityByClass((__int64)v60, (_BYTE)v59 != 0);
        ObfDereferenceObjectWithTag(v60, 0x79517350u);
        return v61;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v120 = *(_DWORD *)ProcessInformation;
      v198 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v22 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v22 < 0 )
        return v22;
      v121 = Object;
      if ( *((_QWORD *)Object + 224) )
      {
        v22 = -1073741790;
      }
      else
      {
        if ( v120 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFEFFFFFF);
        v121 = Object;
      }
      ObfDereferenceObjectWithTag(v121, 0x79517350u);
      return v22;
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        v174 = 0uLL;
        *(_QWORD *)&v174 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v174 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v174 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v174, 0) )
          return -1073741811;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      LODWORD(v122) = KeQueryGroupMaskProcess((__int64)Object);
      if ( (((_DWORD)v122 - 1) & (unsigned int)v122) != 0 )
        goto LABEL_329;
      if ( (_DWORD)v4 != 8 )
        goto LABEL_371;
      _BitScanForward((unsigned int *)&v122, v122);
      v184 = v122;
      v123 = v174 & qword_1403825B8[v122];
      if ( v123 == (_QWORD)v174 )
      {
        WORD4(v174) = v184;
        *(_QWORD *)&v174 = v123;
LABEL_371:
        --CurrentThread->KernelApcDisable;
        v124 = (char *)Object;
        v125 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
        {
          v126 = (unsigned __int64 *)(v124 + 728);
          v127 = KeAbPreAcquire((ULONG_PTR)v126, 0LL, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v126, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v126, v127, (ULONG_PTR)v126);
          if ( v127 )
            *(_BYTE *)(v127 + 26) |= 1u;
          v47 = PspSetProcessAffinitySafe((_DWORD)Object, 0, 0, (unsigned int)&v174, (__int64)&v183);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v126, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v126);
          KeAbPostRelease((ULONG_PTR)v126);
          ExReleaseRundownProtection_0(v125);
          if ( v47 >= 0 )
          {
            v128 = (volatile signed __int32 *)Object;
            if ( v183 )
              PspWritePebAffinityInfo(CurrentThread, Object);
            _InterlockedOr(v128 + 192, 0x200000u);
          }
        }
        else
        {
          v47 = -1073741558;
        }
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      }
      else
      {
LABEL_329:
        v47 = -1073741811;
      }
LABEL_122:
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v47;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v203 = *(_DWORD *)ProcessInformation;
      v97 = v203 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v22 = result;
      if ( result < 0 )
        return result;
      v87 = Object;
      v98 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        PspLockProcessExclusive((__int64)v87, (__int64)CurrentThread);
        if ( v97 )
          _interlockedbittestandset((volatile signed __int32 *)v87 + 110, 1u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)v87 + 110, 1u);
        v87 = Object;
        v99 = (char *)Object + 1160;
        for ( j = (char *)*((_QWORD *)Object + 145); j != v99; j = *v101 )
          KeSetDisableBoostThread(j - 1680, v97);
        PspUnlockProcessExclusive((__int64)v87, (__int64)CurrentThread);
        ExReleaseRundownProtection_0(v98);
      }
      else
      {
LABEL_326:
        v22 = -1073741558;
      }
      goto LABEL_259;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v129 = *(HANDLE *)ProcessInformation;
      v215 = *(HANDLE *)ProcessInformation;
      if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
        return -1073741790;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v105 = ObSetDeviceMap(Object, v129);
      goto LABEL_278;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v130 = *(_DWORD *)ProcessInformation;
      v200 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v131 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x204u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        if ( v130 != (unsigned int)MmGetSessionId((struct _KPROCESS *)Object) )
          v131 = -1073741790;
        ObfDereferenceObjectWithTag(v132, 0x79517350u);
        return v131;
      }
      return result;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v56 = *(_BYTE *)ProcessInformation;
      v167 = *(_BYTE *)ProcessInformation;
      v57 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v57) = v56 != 0;
      PsSetProcessPriorityByClass((__int64)Object, v57);
      goto LABEL_34;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v96 = *(_DWORD *)ProcessInformation;
      v191 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v96 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFDFFF);
      goto LABEL_34;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v22 = result;
      if ( result < 0 )
        return result;
      v178 = *(_DWORD *)v5;
      if ( (v178 & 0xFFFFFFFE) != 0 )
      {
        v22 = -1073741811;
      }
      else if ( (v178 & 1) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFFD);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
      }
      v74 = Object;
      goto LABEL_182;
    case ProcessHandleTracing:
      if ( !ProcessInformationLength )
        goto LABEL_411;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v133 = *(_DWORD *)ProcessInformation;
      v176 = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        v177 = *((_DWORD *)ProcessInformation + 1);
      else
        v177 = 0;
      if ( v133 )
        return -1073741811;
LABEL_411:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v109 = (volatile signed __int64 *)Object;
      if ( (_DWORD)v4 )
        v134 = &v176;
      else
        v134 = 0LL;
      v58 = PsSetProcessHandleTracingInformation(Object, v134);
LABEL_605:
      v153 = v109;
      goto LABEL_606;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v76 = *(_DWORD *)ProcessInformation;
        v162 = *(_DWORD *)ProcessInformation;
        LOBYTE(Handle) = 0;
      }
      else
      {
        v213 = *(_QWORD *)ProcessInformation;
        v76 = v213;
        Handle = (HANDLE)HIDWORD(v213);
        v162 = v213;
      }
      if ( v76 >= 4 )
        return -1073741811;
      if ( v76 >= 3
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v9) )
      {
        return -1073741727;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v22 = result;
      if ( result < 0 )
        return result;
      v77 = (volatile signed __int32 *)Object;
      v78 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        PspLockProcessExclusive((__int64)v77, (__int64)CurrentThread);
        v79 = *((_DWORD *)v77 + 193);
        v80 = v162 << 27;
        do
        {
          v81 = v79;
          v79 = _InterlockedCompareExchange(v77 + 193, v80 | v79 & 0xC7FFFFFF, v79);
        }
        while ( v79 != v81 );
        v77 = (volatile signed __int32 *)Object;
        v82 = (char *)Object + 1160;
        v83 = (char *)*((_QWORD *)Object + 145);
        v84 = (char)Handle;
        while ( 1 )
        {
          v85 = v162;
          if ( v83 == v82 )
            break;
          if ( v84 == 1 && ((*((_DWORD *)v83 + 11) >> 9) & 7) < v162 )
          {
            IoBoostThreadIoPriority((KSPIN_LOCK *)v83 - 210, v162, 0);
            v85 = v162;
          }
          PsSetIoPriorityThread((__int64)(v83 - 1680), v85);
          v83 = *(char **)v83;
        }
        PspUnlockProcessExclusive((__int64)v77, (__int64)CurrentThread);
        ExReleaseRundownProtection_0(v78);
      }
      else
      {
        v22 = -1073741558;
      }
      v74 = (PVOID)v77;
      goto LABEL_182;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v175 = *(_DWORD *)ProcessInformation;
      v58 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v175);
      if ( v58 >= 0 && (v175 & 3) == 1 )
        MmRemoveExecuteGrants();
      return v58;
    case ProcessTlsInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = (int *)v221;
        P = v221;
      }
      else
      {
        PoolWithQuotaTag = (int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ProcessInformationLength, 0x736C5450u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      memmove(PoolWithQuotaTag, v5, v4);
      if ( (unsigned int)PoolWithQuotaTag[1] < 2
        && (v18 = *PoolWithQuotaTag, (*PoolWithQuotaTag & 0xFFFFFFFE) == 0)
        && (v19 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v19)
        && (unsigned int)(v4 - 16) / 0x18uLL == v19 )
      {
        for ( k = 0; ; ++k )
        {
          v157 = k;
          if ( k >= (unsigned int)v19 )
            break;
          if ( PoolWithQuotaTag[6 * k + 4] )
            goto LABEL_425;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        Object = Process;
        v165 = 0;
        if ( (v18 & 1) != 0 )
        {
          if ( !Process[1].ActiveProcessors.Bitmap[7] )
          {
LABEL_425:
            v22 = -1073741811;
            goto LABEL_95;
          }
          v165 = 1;
          Handle = (HANDLE)4;
          Alignment = 4;
        }
        else
        {
          Handle = (HANDLE)8;
          Alignment = 8;
        }
        v166 = v5;
        v157 = 0;
        v22 = 0;
        v158 = 0;
        for ( m = 0LL; ; m = v164 )
        {
          v164 = PsGetNextProcessThread((__int64)Object, m);
          v24 = v164;
          if ( !v164 || v157 >= PoolWithQuotaTag[2] )
            break;
          if ( (*((_DWORD *)v164 + 29) & 0x400) == 0 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)v164 + 212) )
          {
            v25 = v24[30];
            if ( v165 )
            {
              v193 = v25 + 0x2000;
              v26 = (char *)(v25 + 8236);
              v173 = v25 + 8236;
              v27 = (char *)*(unsigned int *)(v25 + 8236);
            }
            else
            {
              v26 = (char *)(v25 + 88);
              v173 = v25 + 88;
              v27 = *(char **)(v25 + 88);
            }
            v170 = v27;
            if ( v27 )
            {
              if ( PoolWithQuotaTag[1] == 1 )
              {
                if ( v27 == v26 )
                {
                  v170 = 0LL;
                }
                else
                {
                  v48 = (_QWORD)Handle * (unsigned int)PoolWithQuotaTag[3];
                  if ( v48 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v27) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v27[v48] > MmUserProbeAddress || &v27[v48] < v27 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  v49 = (volatile void **)&PoolWithQuotaTag[6 * v157 + 6];
                  ProbeForWrite(*v49, (_QWORD)Handle * (unsigned int)PoolWithQuotaTag[3], Alignment);
                  memmove((void *)*v49, v27, (_QWORD)Handle * (unsigned int)PoolWithQuotaTag[3]);
                  _InterlockedOr(v155, 0);
                }
                v38 = 6LL * v157;
                *(_DWORD *)((char *)v166 + v38 * 4 + 16) |= 1u;
                if ( v165 )
                {
                  v193 = v25 + 0x2000;
                  v207 = PoolWithQuotaTag[v38 + 6];
                  *(_DWORD *)(v25 + 8236) = v207;
                }
                else
                {
                  *(_QWORD *)(v25 + 88) = *(_QWORD *)&PoolWithQuotaTag[v38 + 6];
                }
                v39 = (char *)v166 + 24 * v157;
                *((_QWORD *)v39 + 4) = *((_QWORD *)v164 + 198);
                *((_QWORD *)v39 + 3) = v170;
                *((_DWORD *)v39 + 4) ^= 3u;
                ++v157;
              }
              else
              {
                v28 = 6LL * v157;
                *(_DWORD *)((char *)v166 + v28 * 4 + 16) |= 1u;
                v29 = (unsigned int)PoolWithQuotaTag[3];
                if ( v165 )
                {
                  v33 = &v27[4 * v29];
                  if ( (unsigned __int64)v33 >= MmUserProbeAddress )
                    v33 = (char *)MmUserProbeAddress;
                  v31 = *(unsigned int *)v33;
                  v173 = v31;
                  v34 = PoolWithQuotaTag[v28 + 6];
                  v194 = v34;
                  v35 = &v170[4 * PoolWithQuotaTag[3]];
                  if ( (unsigned __int64)v35 >= MmUserProbeAddress )
                    v35 = (char *)MmUserProbeAddress;
                  *(_DWORD *)v35 = v34;
                }
                else
                {
                  v30 = &v27[8 * v29];
                  if ( (unsigned __int64)v30 >= MmUserProbeAddress )
                    v30 = (char *)MmUserProbeAddress;
                  v31 = *(_QWORD *)v30;
                  v173 = *(_QWORD *)v30;
                  v32 = &v170[8 * PoolWithQuotaTag[3]];
                  if ( (unsigned __int64)v32 >= MmUserProbeAddress )
                    v32 = (char *)MmUserProbeAddress;
                  *(_QWORD *)v32 = *(_QWORD *)&PoolWithQuotaTag[v28 + 6];
                }
                v36 = 3LL * v157;
                v37 = v166;
                *((_QWORD *)v166 + v36 + 3) = v31;
                *((_DWORD *)v37 + 2 * v36 + 4) ^= 3u;
                ++v157;
              }
            }
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v164 + 212);
          }
        }
        if ( v164 )
          ObfDereferenceObjectWithTag(v164, 0x6E457350u);
      }
      else
      {
        v22 = -1073741820;
      }
LABEL_95:
      if ( PoolWithQuotaTag != (int *)v221 )
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v22;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v171 = *(_DWORD *)ProcessInformation;
      DefaultPagePriority = MmGetDefaultPagePriority();
      if ( v63 > DefaultPagePriority )
        return -1073741811;
      MinWsPagePriority = MmGetMinWsPagePriority();
      if ( v65 < MinWsPagePriority )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v22 = result;
      if ( result < 0 )
        return result;
      v66 = (volatile signed __int32 *)Object;
      v67 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        PspLockProcessExclusive((__int64)v66, (__int64)CurrentThread);
        v68 = *((_DWORD *)v66 + 192);
        v69 = v171 << 12;
        do
        {
          v70 = v68;
          v68 = _InterlockedCompareExchange(v66 + 192, v69 | v68 & 0xFFFF8FFF, v68);
        }
        while ( v68 != v70 );
        v66 = (volatile signed __int32 *)Object;
        v71 = (char *)Object + 1160;
        v72 = (char *)*((_QWORD *)Object + 145);
        v73 = v171;
        while ( v72 != v71 )
        {
          PsSetPagePriorityThread((__int64)(v72 - 1680), v73);
          v72 = *(char **)v72;
        }
        PspUnlockProcessExclusive((__int64)v66, (__int64)CurrentThread);
        ExReleaseRundownProtection_0(v67);
      }
      else
      {
        v22 = -1073741558;
      }
      v74 = (PVOID)v66;
      goto LABEL_182;
    case ProcessInstrumentationCallback:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      v51 = 0;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v172 = 0LL;
        v135 = *(HANDLE *)ProcessInformation;
        *((_QWORD *)&v172 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v172 = *(_OWORD *)ProcessInformation;
        v135 = (HANDLE)*((_QWORD *)&v172 + 1);
      }
      if ( DWORD1(v172) )
        return -1073741811;
      if ( (_DWORD)v172 != DWORD1(v172) )
        return -1073741736;
      if ( v135 != (HANDLE)((__int64)((_QWORD)v135 << 16) >> 16) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v136 = KeGetCurrentThread()->ApcState.Process;
      v137 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v52 = (char *)Object;
      if ( !v137 && Object != v136 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741727;
      }
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        ObfDereferenceObjectWithTag(v52, 0x79517350u);
        return -1073741558;
      }
      if ( *((_QWORD *)v52 + 133) )
      {
        if ( v136[1].ActiveProcessors.Bitmap[7] )
        {
          KiStackAttachProcess((_KPROCESS *)v52, 0LL, (__int64)&v220);
          if ( *((_QWORD *)&v172 + 1) < MmGetMaximumUserAddress()
            && (unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v172 + 1), 1LL) )
          {
            v141 = 0LL;
            v142 = (__int64 *)*((_QWORD *)v52 + 133);
            if ( v142 )
              v141 = *v142;
            *(_DWORD *)(v141 + 1132) = DWORD2(v172);
          }
          else
          {
            v51 = -1073741811;
          }
          KiUnstackDetachProcess(&v220, 0LL);
LABEL_135:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v52 + 92);
LABEL_136:
          ObfDereferenceObjectWithTag(v52, 0x79517350u);
          return v51;
        }
      }
      else if ( !v136[1].ActiveProcessors.Bitmap[7] )
      {
        KiStackAttachProcess((_KPROCESS *)v52, 0LL, (__int64)&v220);
        v138 = *((_QWORD *)&v172 + 1);
        if ( !(unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v172 + 1), 0LL) )
          v51 = -1073741811;
        KiUnstackDetachProcess(&v220, 0LL);
        if ( v51 >= 0 )
        {
          PspLockProcessExclusive((__int64)v52, (__int64)CurrentThread);
          *((_QWORD *)v52 + 89) = v138;
          v139 = (volatile signed __int32 **)(v52 + 1160);
          v140 = *v139;
          while ( v140 != (volatile signed __int32 *)v139 )
          {
            if ( v138 )
              _interlockedbittestandset(v140 - 420, 0x19u);
            else
              _interlockedbittestandreset(v140 - 420, 0x19u);
            v140 = *(volatile signed __int32 **)v140;
            v138 = *((_QWORD *)&v172 + 1);
          }
          v52 = (char *)Object;
          PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
        }
        goto LABEL_135;
      }
      v51 = -1073741637;
      goto LABEL_135;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v179 = *(_DWORD *)ProcessInformation;
      if ( (v179 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v179);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v201 = *(_DWORD *)ProcessInformation;
      v143 = v201;
      if ( (v201 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (v143 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFDFFFFF);
      goto LABEL_34;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v196 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v75 = PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken(v75);
      ObfDereferenceObject(v75);
      goto LABEL_34;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v214 = *(_QWORD *)ProcessInformation;
      if ( (v214 & 3) != 1 )
        return -1073741811;
      KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[0] = v214;
      return 0;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v86 = *(HANDLE *)ProcessInformation;
      v163 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v86 != 2 )
        return -1073741811;
      v87 = KeGetCurrentThread()->ApcState.Process;
      Object = v87;
      if ( (_DWORD)v163 == 3 )
      {
        if ( (HIDWORD(v163) & 0xFFFFFFFC) != 0 )
        {
          v22 = -1073741811;
        }
        else if ( ((HIDWORD(v163) >> 1) & 1) != 0 || (BYTE4(v163) & 1) == 0 )
        {
          if ( ((HIDWORD(v163) >> 1) & 1) != 0 && (BYTE4(v163) & 1) == 0 )
          {
            v22 = -1073741811;
          }
          else
          {
            v95 = ObReferenceProcessHandleTable(v87);
            if ( v95 )
            {
              if ( (unsigned __int8)ExEnableHandleExceptions(v95, (BYTE4(v163) & 1) != 0) )
                v22 = 0;
              else
                v22 = -1073741790;
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v87 + 92);
            }
            else
            {
              v22 = -1073741558;
            }
          }
        }
        else
        {
          v22 = -1073741811;
        }
        goto LABEL_219;
      }
      if ( (_DWORD)v163 != 1 )
      {
        switch ( (int)v163 )
        {
          case 2:
            if ( (HIDWORD(v163) & 0xFFFFFFFE) != 0 )
            {
              v22 = -1073741811;
              goto LABEL_219;
            }
            if ( (PspSystemMitigationOptions & 0xF000000000LL) == 0x6000000000LL )
            {
LABEL_249:
              v22 = -1073741637;
              goto LABEL_219;
            }
            if ( ProcessHandle == (HANDLE)-1LL )
            {
              v90 = 0;
            }
            else
            {
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
              {
                v22 = -1073741727;
                goto LABEL_219;
              }
              v22 = ObReferenceObjectByHandleWithTag(
                      ProcessHandle,
                      0x200u,
                      (POBJECT_TYPE)PsProcessType,
                      v9,
                      0x79517350u,
                      &Object,
                      0LL);
              if ( v22 < 0 )
              {
LABEL_297:
                v87 = Object;
                goto LABEL_219;
              }
              v90 = 1;
              v87 = Object;
              if ( Object != KeGetCurrentThread()->ApcState.Process )
              {
                if ( (BYTE4(v163) & 1) != 0 && (*((_DWORD *)Object + 192) & 0x400) == 0 )
                {
                  v22 = -1073741790;
                  goto LABEL_220;
                }
                if ( (BYTE4(v163) & 1) != 0 )
                  goto LABEL_496;
                _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xFFFFFBFF);
LABEL_495:
                v87 = Object;
LABEL_496:
                v22 = 0;
                goto LABEL_220;
              }
            }
            if ( (BYTE4(v163) & 1) == 0 && (*((_DWORD *)v87 + 192) & 0x400) != 0 )
            {
              v22 = -1073741790;
              goto LABEL_220;
            }
            if ( (BYTE4(v163) & 1) == 0 )
              goto LABEL_496;
            _InterlockedOr((volatile signed __int32 *)v87 + 192, 0x400u);
            goto LABEL_495;
          case 4:
            if ( (HIDWORD(v163) & 0xFFFFFFFE) != 0 )
            {
              v22 = -1073741811;
              goto LABEL_219;
            }
            if ( (BYTE4(v163) & 1) == 0 && *((int *)v87 + 192) < 0 )
            {
              v22 = -1073741790;
              goto LABEL_219;
            }
            v22 = 0;
            if ( (BYTE4(v163) & 1) == 0 )
              goto LABEL_219;
            _InterlockedOr((volatile signed __int32 *)v87 + 192, 0x80000000);
            v87 = Object;
            v90 = 0;
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0 )
              v22 = -1073741431;
            goto LABEL_220;
          case 6:
            if ( (HIDWORD(v163) & 0xFFFFFFFE) != 0 )
            {
              v22 = -1073741811;
              goto LABEL_219;
            }
            if ( (BYTE4(v163) & 1) == 0 && (*((_DWORD *)v87 + 192) & 0x4000000) != 0 )
            {
              v22 = -1073741790;
              goto LABEL_219;
            }
            v22 = 0;
            if ( (BYTE4(v163) & 1) == 0 )
              goto LABEL_219;
            _InterlockedOr((volatile signed __int32 *)v87 + 192, 0x4000000u);
            goto LABEL_297;
          case 7:
            v144 = -1073741790;
            if ( (HIDWORD(v163) & 0xFFFFFFFE) != 0 )
              v144 = -1073741811;
            v22 = v144;
            goto LABEL_219;
          case 8:
            v107 = HIDWORD(v163);
            if ( (HIDWORD(v163) & 0xFFFFFFF8) != 0 )
            {
              v22 = -1073741811;
              goto LABEL_219;
            }
            v108 = (HIDWORD(v163) >> 1) & 1;
            if ( v108 + (BYTE4(v163) & 1u) > 1 )
            {
              v22 = -1073741811;
              goto LABEL_219;
            }
            if ( (BYTE4(v163) & 1) != 0 )
              goto LABEL_286;
            if ( *((_BYTE *)v87 + 1720) >= 8u && *((_BYTE *)v87 + 1721) >= 8u )
            {
              v22 = -1073741790;
              goto LABEL_219;
            }
            if ( !v108 && (unsigned int)SeCompareSigningLevels() && (unsigned int)SeCompareSigningLevels() )
            {
              v22 = -1073741790;
              goto LABEL_219;
            }
LABEL_286:
            v22 = 0;
            if ( (BYTE4(v163) & 1) != 0 )
            {
              if ( *((_BYTE *)v87 + 1720) < 8u )
                *((_BYTE *)v87 + 1720) = 8;
              if ( *((_BYTE *)v87 + 1721) < 8u )
                *((_BYTE *)v87 + 1721) = 8;
            }
            else if ( v108 )
            {
              if ( !(unsigned int)SeCompareSigningLevels() )
              {
                v22 = -1073741790;
                goto LABEL_219;
              }
              if ( (unsigned int)SeCompareSigningLevels() )
                *((_BYTE *)v87 + 1721) = 6;
            }
            if ( v107 )
            {
              _InterlockedOr((volatile signed __int32 *)v87 + 431, 0x2000u);
              v87 = Object;
            }
            goto LABEL_219;
          case 9:
            if ( (HIDWORD(v163) & 0xFFFFFFFC) != 0 )
            {
              v22 = -1073741811;
            }
            else if ( (BYTE4(v163) & 1) != 0 || (*((_DWORD *)v87 + 431) & 4) == 0 )
            {
              if ( (BYTE4(v163) & 1) != 0 || (BYTE4(v163) & 2) != 0 || (*((_DWORD *)v87 + 431) & 8) == 0 )
              {
                v22 = 0;
                if ( (BYTE4(v163) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v87 + 431, 4u);
                  _InterlockedAnd((volatile signed __int32 *)v87 + 431, 0xFFFFFFF7);
                  v87 = Object;
                }
                else if ( (BYTE4(v163) & 2) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v87 + 431, 8u);
                  _InterlockedAnd((volatile signed __int32 *)v87 + 431, 0xFFFFFFFB);
                  v87 = Object;
                }
              }
              else
              {
                v22 = -1073741790;
              }
            }
            else
            {
              v22 = -1073741790;
            }
            goto LABEL_219;
          case 10:
            if ( (HIDWORD(v163) & 0xFFFFFFFC) != 0 )
            {
              v22 = -1073741811;
              goto LABEL_219;
            }
            if ( (BYTE4(v163) & 1) == 0 && (*((_DWORD *)v87 + 431) & 0x800) != 0 )
              goto LABEL_536;
            v145 = (HIDWORD(v163) >> 1) & 1;
            if ( !v145 && (*((_DWORD *)v87 + 431) & 0x1000) != 0 )
              goto LABEL_536;
            if ( (BYTE4(v163) & 1) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)v87 + 431, 0x800u);
              v87 = Object;
            }
            if ( v145 )
            {
              _InterlockedOr((volatile signed __int32 *)v87 + 431, 0x1000u);
              v87 = Object;
            }
            v22 = 0;
            goto LABEL_219;
          default:
            goto LABEL_249;
        }
      }
      if ( (HIDWORD(v163) & 0xFFFFFFF0) != 0 )
      {
        v22 = -1073741811;
        goto LABEL_219;
      }
      v88 = (unsigned int)v163 & (HIDWORD(v163) >> 1);
      if ( !v88 && (*((_DWORD *)v87 + 192) & 0x8000000) != 0
        || (BYTE4(v163) & 1) == 0 && (*((_DWORD *)v87 + 192) & 0x20000) == 0 )
      {
LABEL_536:
        v22 = -1073741790;
        goto LABEL_219;
      }
      v89 = (HIDWORD(v163) >> 3) & 1;
      if ( !v89 && (*((_DWORD *)v87 + 192) & 0x1000000) != 0 )
      {
        v22 = -1073741790;
        goto LABEL_219;
      }
      if ( v89 )
      {
        if ( !v88 )
        {
          v22 = -1073741776;
          goto LABEL_219;
        }
        goto LABEL_213;
      }
      if ( v88 )
      {
LABEL_213:
        _InterlockedOr((volatile signed __int32 *)v87 + 192, 0x8000000u);
        v87 = Object;
      }
      if ( (BYTE4(v163) & 1) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v87 + 192, 0xFFFDFFFF);
        v87 = Object;
      }
      if ( v89 )
      {
        _InterlockedOr((volatile signed __int32 *)v87 + 192, 0x1000000u);
        v87 = Object;
      }
      v22 = 0;
LABEL_219:
      v90 = 0;
LABEL_220:
      if ( v90 == 1 )
      {
LABEL_259:
        v74 = v87;
LABEL_182:
        ObfDereferenceObjectWithTag(v74, 0x79517350u);
      }
      return v22;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v208 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v208) )
        return RtlRemoveDynamicFunctionTable(v208);
      else
        return RtlInsertDynamicFunctionTable(v208);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v205 = *(_DWORD *)ProcessInformation;
      v91 = v205;
      if ( (v205 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      v92 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v93 = (struct _EX_RUNDOWN_REF *)Object;
        v94 = ObReferenceProcessHandleTable(Object);
        if ( v94 )
        {
          ExEnableHandleExceptions(v94, (v91 & 1) != 0);
          ExReleaseRundownProtection_0(v93 + 92);
        }
        else
        {
          v92 = -1073741558;
        }
        ObfDereferenceObjectWithTag(v93, 0x79517350u);
        return v92;
      }
      return result;
    case ProcessRevokeFileHandles:
      v146 = 0LL;
      v189 = 0LL;
      if ( v9 != 1 )
        goto LABEL_570;
      if ( (unsigned __int64)ProcessInformation >= v11 )
        v5 = (__int128 *)v11;
      v147 = *(_DWORD *)v5;
      v185 = v147;
      v148 = (void *)*((_QWORD *)v5 + 1);
      Src = v148;
      if ( !(_WORD)v147 )
        return -1073741811;
      if ( ((unsigned __int8)v148 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v149 = (ULONG64)v148 + (unsigned __int16)v147;
      if ( v149 > MmUserProbeAddress || v149 < (unsigned __int64)v148 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v150 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v185, 0x6E497350u);
      v146 = v150;
      v189 = v150;
      if ( !v150 )
        return -1073741670;
      memmove(v150, Src, (unsigned __int16)v185);
      Src = v146;
      v5 = (__int128 *)&v185;
      v218 = &v185;
LABEL_570:
      v151 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x200u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
      if ( v151 >= 0 )
      {
        v152 = (volatile signed __int64 *)Object;
        v58 = IoRevokeHandlesForProcess((__int64)v5, (struct _KPROCESS *)Object);
        if ( v146 )
          ExFreePoolWithTag(v146, 0);
        v153 = v152;
LABEL_606:
        ObfDereferenceObjectWithTag((PVOID)v153, 0x79517350u);
        return v58;
      }
      else
      {
        if ( v146 )
          ExFreePoolWithTag(v146, 0);
        return v151;
      }
    case ProcessWorkingSetControl:
      return MmProcessWorkingSetControl(ProcessHandle);
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v181 = *(_DWORD *)v5 != 0;
      v87 = Object;
      if ( KeGetCurrentThread()->ApcState.Process == Object )
      {
        v22 = -1073741790;
      }
      else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        v22 = 0;
        KeSetCheckStackExtentsProcess(v87, v181);
      }
      else
      {
        v22 = -1073741727;
      }
      goto LABEL_259;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v219 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v219 != 1 || DWORD1(v219) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v219 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFEFF);
      goto LABEL_34;
    case ProcessFaultInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v195 = *(_QWORD *)v5;
      v105 = PsSetProcessFaultInformation(Object, &v195);
      goto LABEL_278;
    case ProcessCommitReleaseInformation:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x209u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v192 = *v5;
      if ( (_DWORD)v192 == 2 )
      {
        if ( (DWORD1(v192) & 0xFFFFFFFE) != 0 || *((_QWORD *)&v192 + 1) )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        else
        {
          v105 = MmSetCommitReleaseEligibility((__int64)Object, BYTE4(v192) & 1);
LABEL_278:
          v106 = v105;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v106;
        }
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      memmove(v222, ProcessInformation, ProcessInformationLength);
      v154 = (unsigned int)v4 >> 3;
      if ( ProcessInformationClass == ProcessAllowedCpuSetsInformation )
      {
        result = ExCpuSetResourceManagerAccessCheck(v9);
        if ( result < 0 )
          return result;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v105 = KeSetCpuSetsProcess((__int64)Object, v154, v222);
      goto LABEL_278;
    case ProcessSubsystemProcess:
      if ( (KeGetCurrentThread()->ApcState.Process[2].DirectoryTableBase & 0x100) == 0 )
        return -1073741727;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v188, 0LL);
      v106 = result;
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)v188 + 431, 0x100u);
      ObfDereferenceObject(v188);
      return v106;
    case ProcessInPrivate:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 431, 0x400u);
      goto LABEL_34;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v50 = *(_DWORD *)ProcessInformation;
      v202 = *(_DWORD *)ProcessInformation;
      v51 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v52 = (char *)Object;
      v53 = ObReferenceProcessHandleTable(Object);
      if ( v53 )
      {
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v53, v50);
        goto LABEL_135;
      }
      v51 = -1073741558;
      goto LABEL_136;
    default:
      return -1073741821;
  }
}
