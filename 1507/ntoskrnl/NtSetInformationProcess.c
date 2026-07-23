/*
 * XREFs of NtSetInformationProcess @ 0x14041CF90
 * Callers:
 *     <none>
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x14000A100 (KeAbProcessBaseIoPriorityChange.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14000AC60 (RtlRemoveDynamicFunctionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x14000AE00 (RtlInsertDynamicFunctionTable.c)
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     MmSetMemoryPriorityProcess @ 0x14002B708 (MmSetMemoryPriorityProcess.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     MmGetMinWsPagePriority @ 0x140043E34 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x140043E3C (MmGetDefaultPagePriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     MmRemoveExecuteGrants @ 0x14007B234 (MmRemoveExecuteGrants.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14008B6A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KeQueryGroupMaskProcess @ 0x1400F08FC (KeQueryGroupMaskProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeSetExecuteOptions @ 0x14012D660 (KeSetExecuteOptions.c)
 *     KeInitializeGate @ 0x14012F290 (KeInitializeGate.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140133DD4 (ExCpuSetResourceManagerAccessCheck.c)
 *     xKdEnumerateDebuggingDevices @ 0x140170968 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017F2F0 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x1401F7200 (IoRevokeHandlesForProcess.c)
 *     KeSetCpuSetsProcess @ 0x140205964 (KeSetCpuSetsProcess.c)
 *     MmGetMaximumUserAddress @ 0x1402107BC (MmGetMaximumUserAddress.c)
 *     MmSetCommitReleaseEligibility @ 0x1402107D4 (MmSetCommitReleaseEligibility.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     LpcRequestPort @ 0x14041BF2C (LpcRequestPort.c)
 *     PspSetProcessPriorityClass @ 0x14041BFC8 (PspSetProcessPriorityClass.c)
 *     PsSetProcessPriorityByClass @ 0x14041C598 (PsSetProcessPriorityByClass.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x14041C5CC (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     KeSetAutoAlignmentProcess @ 0x14042025C (KeSetAutoAlignmentProcess.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     PspWritePebAffinityInfo @ 0x1404668C8 (PspWritePebAffinityInfo.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     PsSetProcessFaultInformation @ 0x140547A48 (PsSetProcessFaultInformation.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 *     ExEnableHandleExceptions @ 0x1405517F8 (ExEnableHandleExceptions.c)
 *     SeSetVirtualizationToken @ 0x140557234 (SeSetVirtualizationToken.c)
 *     KeSetDisableBoostThread @ 0x1405645D8 (KeSetDisableBoostThread.c)
 *     SeCheckPrivilegedObject @ 0x140583928 (SeCheckPrivilegedObject.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14058B36C (PspSetProcessAffinityUpdateMode.c)
 *     ObSetDeviceMap @ 0x1405BBFDC (ObSetDeviceMap.c)
 *     KeSetCheckStackExtentsProcess @ 0x140698A3C (KeSetCheckStackExtentsProcess.c)
 *     MmProcessWorkingSetControl @ 0x1406A9564 (MmProcessWorkingSetControl.c)
 *     MmValidateUserCallTarget @ 0x1406A9A54 (MmValidateUserCallTarget.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406BF750 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1406BF7AC (PspSetRedirectionTrustPolicy.c)
 *     PsSetProcessHandleTracingInformation @ 0x1406BFC88 (PsSetProcessHandleTracingInformation.c)
 *     PspSetProcessAffinitySafe @ 0x1406C0654 (PspSetProcessAffinitySafe.c)
 *     PspAssignPrimaryToken @ 0x1406C3208 (PspAssignPrimaryToken.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rdi
  int *v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v9; // si
  int v10; // eax
  ULONG64 v11; // rcx
  NTSTATUS result; // eax
  volatile signed __int64 *v13; // rdi
  NTSTATUS v14; // ebx
  _QWORD *PoolWithTag; // rax
  void *v16; // r8
  int v17; // ebx
  char v18; // r15
  PVOID v19; // rdi
  __int16 v20; // bx
  unsigned int v21; // r14d
  PVOID v22; // rdi
  NTSTATUS v23; // esi
  char v24; // bl
  unsigned int v25; // r14d
  int v26; // esi
  struct _EX_RUNDOWN_REF *v27; // rdi
  unsigned __int64 v28; // rtt
  PVOID v29; // r14
  __int64 NextProcessThread; // rbx
  int v31; // r15d
  unsigned __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rcx
  PVOID v34; // rcx
  __int64 v35; // r9
  unsigned __int64 *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rdi
  _QWORD *v40; // rcx
  bool v41; // al
  __int16 v42; // ax
  int v43; // esi
  void *v44; // rdx
  HANDLE *v45; // roff
  signed __int64 v46; // r12
  bool v47; // zf
  signed __int64 v48; // rax
  unsigned __int64 v49; // r12
  _QWORD *v50; // rdi
  int v51; // eax
  __int64 v52; // r9
  unsigned __int64 *v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // r9
  __int16 v56; // ax
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // rdi
  int v61; // ebx
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // rdx
  struct _EX_RUNDOWN_REF *v65; // rbx
  unsigned __int64 v66; // rtt
  unsigned __int64 *v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // r9
  unsigned __int64 v70; // rtt
  volatile signed __int32 *v71; // rbx
  __int16 v72; // ax
  bool v73; // r13
  __int64 v74; // r9
  struct _EX_RUNDOWN_REF *v75; // rbx
  unsigned __int64 v76; // rtt
  unsigned __int64 *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r9
  __int64 v80; // r14
  char *v81; // r8
  _BOOL8 v82; // rdx
  void **v83; // r8
  char *v84; // r9
  __int16 v85; // ax
  unsigned __int64 v86; // rtt
  HANDLE v87; // rbx
  NTSTATUS v88; // eax
  NTSTATUS v89; // ebx
  int v90; // ebx
  NTSTATUS v91; // r14d
  void *v92; // rcx
  int v93; // ebx
  int v94; // ecx
  PVOID v95; // rbx
  int *v96; // rdx
  NTSTATUS v97; // edi
  unsigned int v98; // eax
  __int64 v99; // r9
  unsigned __int64 v100; // rtt
  unsigned __int64 *v101; // r12
  __int64 v102; // rax
  __int64 v103; // r9
  __int64 v104; // rbx
  volatile signed __int32 *v105; // r8
  signed __int32 v106; // eax
  int v107; // r9d
  signed __int32 v108; // edx
  struct _KTHREAD *v109; // r13
  int v110; // r12d
  ULONG v111; // edx
  $29DF45BF5BC2EFA0758B58CE3E7E6C3E *v112; // rdi
  signed __int32 SessionPad; // eax
  unsigned __int32 v114; // ebx
  int v115; // ebx
  __int16 v116; // ax
  NTSTATUS v117; // edi
  unsigned int DefaultPagePriority; // eax
  unsigned int v119; // ecx
  unsigned int MinWsPagePriority; // eax
  unsigned int v121; // ecx
  __int64 v122; // r9
  struct _EX_RUNDOWN_REF *v123; // r12
  unsigned __int64 v124; // rtt
  unsigned __int64 *v125; // r13
  __int64 v126; // rax
  __int64 v127; // r9
  __int64 v128; // rbx
  volatile signed __int32 *v129; // r8
  signed __int32 v130; // eax
  int v131; // edi
  signed __int32 v132; // edx
  _DWORD *v133; // rbx
  signed __int32 v134; // eax
  unsigned __int32 v135; // r8d
  int v136; // r8d
  __int16 v137; // ax
  unsigned __int64 v138; // rtt
  unsigned __int64 *PoolWithQuotaTag; // r15
  int v140; // r9d
  __int64 v141; // r8
  unsigned int v142; // edx
  _QWORD *p_Lock; // rdi
  unsigned int v144; // ebx
  PVOID i; // rdx
  struct _EX_RUNDOWN_REF *v146; // rax
  struct _EX_RUNDOWN_REF *v147; // rcx
  unsigned __int64 v148; // rtt
  __int64 v149; // r13
  char *v150; // rax
  char *v151; // r12
  __int64 v152; // rdx
  volatile void **v153; // rdi
  unsigned int v154; // r8d
  __int64 v155; // rdx
  char *v156; // rdx
  __int64 v157; // r8
  __int64 v158; // rax
  char *v159; // rcx
  __int64 v160; // r9
  int v161; // r8d
  char *v162; // rdx
  char *v163; // rcx
  char *v164; // rdx
  unsigned int v165; // edx
  __int64 v166; // rcx
  struct _KTHREAD *v167; // rax
  struct _EX_RUNDOWN_REF *v168; // rcx
  unsigned __int64 v169; // rtt
  NTSTATUS v170; // r14d
  HANDLE v171; // rcx
  _KPROCESS *Process; // rdi
  struct _EX_RUNDOWN_REF *v173; // rcx
  unsigned __int64 v174; // rtt
  struct _EX_RUNDOWN_REF *v175; // rbx
  __int64 v176; // r9
  unsigned __int64 *p_Count; // rbx
  __int64 v178; // rax
  __int64 v179; // r9
  __int64 v180; // rdi
  __int64 v181; // rcx
  _QWORD *v182; // rax
  volatile signed __int32 *v183; // rdx
  volatile signed __int32 *v184; // rax
  __int16 v185; // ax
  unsigned __int64 v186; // rtt
  char *v187; // r15
  int v188; // edx
  char v189; // bl
  unsigned int v190; // r15d
  PACCESS_TOKEN v191; // rbx
  char v192; // r13
  char *v193; // rbx
  int v194; // edx
  int v195; // ecx
  __int64 v196; // rcx
  unsigned __int64 v197; // rtt
  char v198; // cl
  int v199; // ecx
  int v200; // eax
  unsigned int v201; // edi
  int RedirectionTrustPolicy; // eax
  int v203; // ecx
  int v204; // edi
  __int64 v205; // rdx
  char v206; // di
  NTSTATUS v207; // r14d
  struct _EX_RUNDOWN_REF *v208; // rbx
  __int64 v209; // rax
  unsigned __int64 v210; // rtt
  void *v211; // rdi
  int v212; // eax
  void *v213; // rcx
  ULONG64 v214; // rdx
  PVOID v215; // rax
  PVOID v216; // rsi
  NTSTATUS v217; // ebx
  PVOID v218; // rbx
  unsigned int v219; // edi
  int v220; // r14d
  int v221; // edi
  __int64 v222; // rax
  __int64 v223; // r8
  __int64 v224; // r9
  signed __int32 v225[8]; // [rsp+0h] [rbp-398h] BYREF
  PVOID Object; // [rsp+40h] [rbp-358h] BYREF
  unsigned int v227; // [rsp+48h] [rbp-350h]
  char v228; // [rsp+4Ch] [rbp-34Ch]
  HANDLE Handle; // [rsp+50h] [rbp-348h]
  int v230; // [rsp+58h] [rbp-340h]
  ULONG Alignment; // [rsp+60h] [rbp-338h]
  unsigned __int64 *v232; // [rsp+68h] [rbp-330h]
  HANDLE v233; // [rsp+78h] [rbp-320h]
  PROCESSINFOCLASS v234; // [rsp+80h] [rbp-318h]
  PVOID v235; // [rsp+88h] [rbp-310h]
  struct _KTHREAD *v236; // [rsp+90h] [rbp-308h]
  int v237; // [rsp+98h] [rbp-300h]
  __int16 v238; // [rsp+9Ch] [rbp-2FCh]
  char v239; // [rsp+A0h] [rbp-2F8h]
  char *v240; // [rsp+B0h] [rbp-2E8h]
  int v241; // [rsp+B8h] [rbp-2E0h]
  __int128 v242; // [rsp+C0h] [rbp-2D8h]
  unsigned int v243; // [rsp+D0h] [rbp-2C8h]
  __int128 v244; // [rsp+D8h] [rbp-2C0h] BYREF
  PVOID v245; // [rsp+E8h] [rbp-2B0h]
  __int64 v246; // [rsp+F0h] [rbp-2A8h]
  int v247; // [rsp+F8h] [rbp-2A0h]
  int v248; // [rsp+FCh] [rbp-29Ch] BYREF
  int v249; // [rsp+100h] [rbp-298h]
  int v250; // [rsp+104h] [rbp-294h]
  int v251; // [rsp+108h] [rbp-290h] BYREF
  PVOID v252; // [rsp+110h] [rbp-288h] BYREF
  int v253; // [rsp+118h] [rbp-280h]
  ULONG_PTR v254; // [rsp+120h] [rbp-278h] BYREF
  int v255; // [rsp+128h] [rbp-270h] BYREF
  int v256; // [rsp+12Ch] [rbp-26Ch]
  int v257; // [rsp+130h] [rbp-268h]
  BOOL v258; // [rsp+134h] [rbp-264h]
  int v259; // [rsp+138h] [rbp-260h] BYREF
  void *Src; // [rsp+140h] [rbp-258h]
  PVOID v261; // [rsp+148h] [rbp-250h] BYREF
  unsigned __int64 v262; // [rsp+150h] [rbp-248h]
  PVOID v263; // [rsp+158h] [rbp-240h]
  int v264; // [rsp+160h] [rbp-238h]
  int v265; // [rsp+164h] [rbp-234h]
  int v266; // [rsp+168h] [rbp-230h]
  int v267; // [rsp+16Ch] [rbp-22Ch]
  int v268; // [rsp+170h] [rbp-228h]
  int v269; // [rsp+174h] [rbp-224h]
  int v270; // [rsp+178h] [rbp-220h]
  __int64 v271; // [rsp+180h] [rbp-218h]
  int v272; // [rsp+188h] [rbp-210h]
  int v273; // [rsp+18Ch] [rbp-20Ch]
  __int128 v274; // [rsp+190h] [rbp-208h]
  int v275; // [rsp+1A0h] [rbp-1F8h]
  ULONG_PTR RegionSize; // [rsp+1A8h] [rbp-1F0h] BYREF
  int v277; // [rsp+1B0h] [rbp-1E8h]
  HANDLE v278; // [rsp+1B8h] [rbp-1E0h]
  __int128 v279; // [rsp+1C0h] [rbp-1D8h]
  __int128 v280; // [rsp+1D0h] [rbp-1C8h] BYREF
  __int128 v281; // [rsp+1E0h] [rbp-1B8h] BYREF
  __int64 v282; // [rsp+1F0h] [rbp-1A8h]
  unsigned __int64 v283; // [rsp+1F8h] [rbp-1A0h]
  int *v284; // [rsp+200h] [rbp-198h]
  HANDLE v285; // [rsp+208h] [rbp-190h]
  _DWORD v286[10]; // [rsp+210h] [rbp-188h] BYREF
  __int64 v287; // [rsp+238h] [rbp-160h]
  HANDLE v288; // [rsp+240h] [rbp-158h]
  __int128 v289; // [rsp+248h] [rbp-150h]
  _BYTE v290[48]; // [rsp+258h] [rbp-140h] BYREF
  _BYTE P[40]; // [rsp+288h] [rbp-110h] BYREF
  char v292[160]; // [rsp+2B0h] [rbp-E8h] BYREF

  v4 = ProcessInformationLength;
  v5 = (int *)ProcessInformation;
  v234 = ProcessInformationClass;
  v232 = (unsigned __int64 *)ProcessInformation;
  Alignment = ProcessInformationLength;
  CurrentThread = KeGetCurrentThread();
  v236 = CurrentThread;
  v9 = CurrentThread->gap0[10];
  if ( !v9 )
  {
    v11 = MmUserProbeAddress;
    goto LABEL_49;
  }
  switch ( ProcessInformationClass )
  {
    case ProcessBasePriority:
      v10 = 4;
      break;
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
    case ProcessIoPriority:
      v10 = 4;
      break;
    case ProcessPagePriority:
      v10 = 4;
      break;
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
      v10 = 4;
      break;
    case ProcessMemoryAllocationMode:
      v10 = 4;
      break;
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
    default:
      v10 = 4;
      if ( ProcessInformationClass == ProcessInPrivate )
        v10 = 1;
      break;
  }
  if ( !ProcessInformationLength )
    goto LABEL_46;
  if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = MmUserProbeAddress;
  if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > MmUserProbeAddress
    || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
LABEL_46:
    v11 = MmUserProbeAddress;
  }
LABEL_49:
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits(ProcessHandle);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v264 = *(_DWORD *)ProcessInformation;
      v17 = v264;
      if ( v264 >= 0 )
      {
        v18 = 0;
      }
      else
      {
        v18 = 2;
        v17 = v264 & 0x7FFFFFFF;
      }
      if ( (unsigned int)(v17 - 1) > 0x1E )
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
      v19 = Object;
      if ( v17 > *((char *)Object + 444)
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v9) )
      {
        ObfDereferenceObjectWithTag(v19, 0x79517350u);
        return -1073741727;
      }
      KeSetPriorityAndQuantumProcess((__int64)v19, (unsigned int)v17, 0, 0);
      MmSetMemoryPriorityProcess((__int64)v19, v18);
      ObfDereferenceObjectWithTag(v19, 0x79517350u);
      return 0;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v250 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v26 = result;
      if ( result < 0 )
        return result;
      v27 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      _m_prefetchw((char *)Object + 736);
      v28 = v27->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)v27, v28 + 2, v28)
        && !ExfAcquireRundownProtection(v27) )
      {
        goto LABEL_92;
      }
      v29 = Object;
      NextProcessThread = PsGetNextProcessThread(Object, 0LL);
      if ( NextProcessThread )
      {
        v31 = v250;
        do
        {
          KeBoostPriorityThread(NextProcessThread, v31);
          NextProcessThread = PsGetNextProcessThread(v29, NextProcessThread);
        }
        while ( NextProcessThread );
      }
      goto LABEL_96;
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v243 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v278 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v278 = Handle;
        v243 = *((_DWORD *)ProcessInformation + 2);
        if ( (v243 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v252, 0LL);
      v245 = v252;
      if ( result < 0 )
        return result;
      v43 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x800u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v43 < 0 )
      {
        ObfDereferenceObject(v252);
        return v43;
      }
      v44 = (void *)((unsigned __int64)v252 | v243);
      v235 = v44;
      v45 = (HANDLE *)((char *)Object + 848);
      _m_prefetchw((char *)Object + 848);
      v46 = (signed __int64)*v45;
      for ( Handle = *v45; ; Handle = (HANDLE)v48 )
      {
        if ( (_DWORD)v4 == 16 )
        {
          v5[2] = v46 & 7;
        }
        else if ( (v46 & 7) != 0 )
        {
          ObfDereferenceObject(v245);
          goto LABEL_132;
        }
        v48 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 106, (signed __int64)v44, v46);
        v47 = v46 == v48;
        v46 = v48;
        if ( v47 )
          break;
      }
      if ( v48 )
      {
        v49 = v48 & 0xFFFFFFFFFFFFFFF8uLL;
        v245 = (PVOID)(v48 & 0xFFFFFFFFFFFFFFF8uLL);
        v286[0] = 3145736;
        v286[1] = 13;
        v50 = Object;
        v287 = *((_QWORD *)Object + 93);
        while ( 1 )
        {
          v51 = LpcRequestPort(v49, (__int64)v286);
          if ( v51 != -1073741801 && v51 != -1073741670 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
        }
        --CurrentThread->KernelApcDisable;
        v53 = v50 + 91;
        _InterlockedOr(v225, 0);
        if ( (v50[91] & 1) != 0 )
        {
          v54 = KeAbPreAcquire((ULONG_PTR)(v50 + 91), 0LL, 0LL, v52);
          ExfAcquirePushLockExclusiveEx(v53, v54, (ULONG_PTR)v53, v55);
          if ( v54 )
            *(_BYTE *)(v54 + 26) |= 1u;
          ExfReleasePushLockExclusive((volatile signed __int64 *)v53);
          if ( v54 )
            KeAbPostRelease((ULONG_PTR)v53);
        }
        v56 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v56;
        if ( !v56
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(v245);
      }
      v26 = 0;
      goto LABEL_99;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v285 = *(HANDLE *)ProcessInformation;
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
        goto LABEL_158;
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
        goto LABEL_158;
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v249 = *(_DWORD *)ProcessInformation;
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
      --CurrentThread->KernelApcDisable;
      v36 = (unsigned __int64 *)((char *)Object + 728);
      v37 = KeAbPreAcquire((ULONG_PTR)Object + 728, 0LL, 0LL, v35);
      v39 = v37;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0LL) )
        ExfAcquirePushLockExclusiveEx(v36, v37, (ULONG_PTR)v36, v38);
      if ( v39 )
        *(_BYTE *)(v39 + 26) |= 1u;
      v40 = Object;
      if ( *((_DWORD *)Object + 294) == v249 )
        goto LABEL_112;
      v41 = (v249 & 4) != 0;
      *((_DWORD *)Object + 294) = v249;
      if ( v40[133] )
        v41 = 1;
      goto LABEL_111;
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
LABEL_158:
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
      v13 = (volatile signed __int64 *)Object;
      v14 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
      if ( v14 < 0 )
        goto LABEL_58;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      if ( PoolWithTag )
      {
        PsWatchEnabled = 1;
        *(_DWORD *)PoolWithTag = 0;
        PoolWithTag[1] = 0LL;
        KeInitializeGate((__int64)(PoolWithTag + 2));
        if ( !_InterlockedCompareExchange64(v13 + 122, (signed __int64)v16, 0LL) )
        {
          v14 = 0;
          v13 = (volatile signed __int64 *)Object;
          goto LABEL_58;
        }
        ExFreePoolWithTag(v16, 0);
        v14 = -1073741752;
        v13 = (volatile signed __int64 *)Object;
      }
      else
      {
        v14 = -1073741801;
      }
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)v13, 0x6028uLL);
LABEL_58:
      ObfDereferenceObjectWithTag((PVOID)v13, 0x79517350u);
      return v14;
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
      v228 = *(_BYTE *)ProcessInformation;
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
      --CurrentThread->KernelApcDisable;
      v36 = (unsigned __int64 *)((char *)Object + 728);
      v58 = KeAbPreAcquire((ULONG_PTR)Object + 728, 0LL, 0LL, v57);
      v60 = v58;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0LL) )
        ExfAcquirePushLockExclusiveEx(v36, v58, (ULONG_PTR)v36, v59);
      if ( v60 )
        *(_BYTE *)(v60 + 26) |= 1u;
      v41 = v228;
      v40 = Object;
      if ( v228 )
        *((_DWORD *)Object + 294) |= 4u;
      else
        *((_DWORD *)Object + 294) &= ~4u;
      if ( v40[133] )
        v41 = 1;
      v228 = v41;
LABEL_111:
      KeSetAutoAlignmentProcess(v40, v41);
LABEL_112:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v36);
      KeAbPostRelease((ULONG_PTR)v36);
      v42 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v42;
      if ( !v42
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_67;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v20 = *(_WORD *)ProcessInformation;
      v238 = *(_WORD *)ProcessInformation;
      v21 = 0;
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
        v22 = Object;
        v23 = PspSetProcessPriorityClass((__int64)Object, HIBYTE(v238), (__int64)ProcessHandle, v9);
        if ( v23 >= 0 )
        {
          LOBYTE(v21) = (_BYTE)v20 != 0;
          PsSetProcessPriorityByClass((__int64)v22, v21);
        }
        ObfDereferenceObjectWithTag(v22, 0x79517350u);
        return v23;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v61 = *(_DWORD *)ProcessInformation;
      v272 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v26 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v26 < 0 )
        return v26;
      v34 = Object;
      if ( *((_QWORD *)Object + 223) )
      {
        v26 = -1073741790;
        goto LABEL_100;
      }
      if ( v61 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x1000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFEFFFFFF);
      goto LABEL_99;
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        v244 = 0uLL;
        *(_QWORD *)&v244 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v244 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v244 = *(_OWORD *)ProcessInformation;
        if ( WORD4(v244) >= KeQueryActiveGroupCount()
          || !(_QWORD)v244
          || (qword_1403D15E8[WORD4(v244)] & (unsigned __int64)v244) != (_QWORD)v244
          || WORD5(v244) | (unsigned __int16)(WORD6(v244) | HIWORD(v244)) )
        {
          return -1073741811;
        }
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
      LODWORD(v62) = KeQueryGroupMaskProcess((__int64)Object);
      if ( (((_DWORD)v62 - 1) & (unsigned int)v62) != 0 )
        goto LABEL_132;
      if ( (_DWORD)v4 != 8 )
        goto LABEL_195;
      _BitScanForward((unsigned int *)&v62, v62);
      v253 = v62;
      v64 = v244 & qword_1403D15E8[v62];
      if ( v64 == (_QWORD)v244 )
      {
        WORD4(v244) = v253;
        *(_QWORD *)&v244 = v64;
LABEL_195:
        --CurrentThread->KernelApcDisable;
        v65 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
        _m_prefetchw((char *)Object + 736);
        v66 = v65->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v66 == _InterlockedCompareExchange64((volatile signed __int64 *)v65, v66 + 2, v66)
          || ExfAcquireRundownProtection(v65) )
        {
          v67 = (unsigned __int64 *)((char *)Object + 728);
          v68 = KeAbPreAcquire((ULONG_PTR)Object + 728, 0LL, 0LL, v63);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v67, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v67, v68, (ULONG_PTR)v67, v69);
          if ( v68 )
            *(_BYTE *)(v68 + 26) |= 1u;
          v26 = PspSetProcessAffinitySafe((_DWORD)Object, 0, 0, (unsigned int)&v244, (__int64)&v251);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v67, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v67);
          KeAbPostRelease((ULONG_PTR)v67);
          _m_prefetchw(v65);
          v70 = v65->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v70 != _InterlockedCompareExchange64((volatile signed __int64 *)v65, v70 - 2, v70) )
            ExfReleaseRundownProtection(v65);
          if ( v26 >= 0 )
          {
            v71 = (volatile signed __int32 *)Object;
            if ( v251 )
              PspWritePebAffinityInfo(CurrentThread, Object);
            _InterlockedOr(v71 + 192, 0x200000u);
          }
        }
        else
        {
          v26 = -1073741558;
        }
        v72 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v72;
        if ( !v72
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      else
      {
LABEL_132:
        v26 = -1073741811;
      }
LABEL_99:
      v34 = Object;
      goto LABEL_100;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v275 = *(_DWORD *)ProcessInformation;
      v73 = v275 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v26 = result;
      if ( result < 0 )
        return result;
      v75 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      _m_prefetchw((char *)Object + 736);
      v76 = v75->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v76 != _InterlockedCompareExchange64((volatile signed __int64 *)v75, v76 + 2, v76)
        && !ExfAcquireRundownProtection(v75) )
      {
        goto LABEL_92;
      }
      --CurrentThread->KernelApcDisable;
      v77 = (unsigned __int64 *)((char *)Object + 728);
      v78 = KeAbPreAcquire((ULONG_PTR)Object + 728, 0LL, 0LL, v74);
      v80 = v78;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v77, 0LL) )
        ExfAcquirePushLockExclusiveEx(v77, v78, (ULONG_PTR)v77, v79);
      if ( v80 )
        *(_BYTE *)(v80 + 26) |= 1u;
      if ( v73 )
        _interlockedbittestandset((volatile signed __int32 *)Object + 110, 1u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)Object + 110, 1u);
      v81 = (char *)*((_QWORD *)Object + 144);
      if ( v81 != (char *)Object + 1152 )
      {
        v82 = v73;
        do
        {
          KeSetDisableBoostThread(v81 - 1680, v82);
          v81 = (char *)*v83;
        }
        while ( v81 != v84 );
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v77, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v77);
      KeAbPostRelease((ULONG_PTR)v77);
      v85 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v85;
      if ( !v85
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      _m_prefetchw(v75);
      v86 = v75->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v86 == _InterlockedCompareExchange64((volatile signed __int64 *)v75, v86 - 2, v86) )
        goto LABEL_99;
      v33 = v75;
      goto LABEL_98;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v87 = *(HANDLE *)ProcessInformation;
      v288 = *(HANDLE *)ProcessInformation;
      if ( RtlIsSandboxedToken(0LL, v9) )
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
      v88 = ObSetDeviceMap(Object, v87);
      goto LABEL_247;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v90 = *(_DWORD *)ProcessInformation;
      v269 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v91 = 0;
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
        if ( v90 != (unsigned int)MmGetSessionId((struct _KPROCESS *)Object) )
          v91 = -1073741790;
        ObfDereferenceObjectWithTag(v92, 0x79517350u);
        return v91;
      }
      return result;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v24 = *(_BYTE *)ProcessInformation;
      v239 = *(_BYTE *)ProcessInformation;
      v25 = 0;
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
      LOBYTE(v25) = v24 != 0;
      PsSetProcessPriorityByClass((__int64)Object, v25);
      goto LABEL_67;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v93 = *(_DWORD *)ProcessInformation;
      v268 = *(_DWORD *)ProcessInformation;
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
      if ( v93 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFDFFF);
      goto LABEL_67;
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
      v26 = result;
      if ( result < 0 )
        return result;
      v257 = *v5;
      if ( (v257 & 0xFFFFFFFE) != 0 )
        goto LABEL_132;
      if ( (v257 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
      goto LABEL_99;
    case ProcessHandleTracing:
      if ( !ProcessInformationLength )
        goto LABEL_268;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v94 = *(_DWORD *)ProcessInformation;
      v255 = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        v256 = *((_DWORD *)ProcessInformation + 1);
      else
        v256 = 0;
      if ( v94 )
        return -1073741811;
LABEL_268:
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
        v95 = Object;
        if ( (_DWORD)v4 )
          v96 = &v255;
        else
          v96 = 0LL;
        v97 = PsSetProcessHandleTracingInformation(Object, v96);
        ObfDereferenceObjectWithTag(v95, 0x79517350u);
        return v97;
      }
      return result;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v98 = *(_DWORD *)ProcessInformation;
        v237 = *(_DWORD *)ProcessInformation;
        LOBYTE(Handle) = 0;
      }
      else
      {
        v262 = *(_QWORD *)ProcessInformation;
        v98 = v262;
        Handle = (HANDLE)HIDWORD(v262);
        v237 = v262;
      }
      if ( v98 >= 4 )
        return -1073741811;
      if ( v98 >= 3
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
      v26 = result;
      if ( result < 0 )
        return result;
      v27 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      v235 = v27;
      _m_prefetchw((char *)Object + 736);
      v100 = v27->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v100 == _InterlockedCompareExchange64((volatile signed __int64 *)v27, v100 + 2, v100)
        || ExfAcquireRundownProtection(v27) )
      {
        --CurrentThread->KernelApcDisable;
        v101 = (unsigned __int64 *)((char *)Object + 728);
        v232 = (unsigned __int64 *)((char *)Object + 728);
        v102 = KeAbPreAcquire((ULONG_PTR)Object + 728, 0LL, 0LL, v99);
        v104 = v102;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v101, 0LL) )
          ExfAcquirePushLockExclusiveEx(v101, v102, (ULONG_PTR)v101, v103);
        if ( v104 )
          *(_BYTE *)(v104 + 26) |= 1u;
        v105 = (volatile signed __int32 *)Object;
        v106 = *((_DWORD *)Object + 193);
        v107 = v237 << 27;
        do
        {
          v108 = v106;
          v106 = _InterlockedCompareExchange(v105 + 193, v107 | v106 & 0xC7FFFFFF, v106);
        }
        while ( v106 != v108 );
        v236 = (struct _KTHREAD *)((char *)Object + 1152);
        v109 = (struct _KTHREAD *)*((_QWORD *)Object + 144);
        if ( v109 != (struct _KTHREAD *)((char *)Object + 1152) )
        {
          v110 = v237;
          v111 = v237 << 9;
          Alignment = v237 << 9;
          do
          {
            v112 = &v109[-2].LockEntries[5].32;
            if ( (_BYTE)Handle == 1 && (signed int)((v112[107].LockState.SessionPad >> 9) & 7) < v110 )
            {
              IoBoostThreadIoPriority((__int64)&v109[-2].LockEntries[5].32, v110, 0);
              v111 = Alignment;
            }
            SessionPad = v112[107].LockState.SessionPad;
            do
            {
              v114 = SessionPad;
              SessionPad = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&v112[107].LockState.SessionPad,
                             v111 | SessionPad & 0xFFFFF1FF,
                             SessionPad);
            }
            while ( SessionPad != v114 );
            v115 = (v114 >> 9) & 7;
            v110 = v237;
            if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
              EtwTracePriority((__int64)&v109[-2].LockEntries[5].32, 0x534u, v115, v237, 0LL);
            if ( v110 != v115 )
              KeAbProcessBaseIoPriorityChange((__int64)&v109[-2].LockEntries[5].32, v115, v110);
            v109 = *(struct _KTHREAD **)&v109->Header.Lock;
            v111 = Alignment;
          }
          while ( v109 != v236 );
          v27 = (struct _EX_RUNDOWN_REF *)v235;
          v101 = v232;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v101, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v101);
        KeAbPostRelease((ULONG_PTR)v101);
        v116 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v116;
        if ( !v116
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
LABEL_96:
        v32 = v27->Count & 0xFFFFFFFFFFFFFFFEuLL;
        _m_prefetchw(v27);
        if ( v32 != _InterlockedCompareExchange64((volatile signed __int64 *)v27, v32 - 2, v32) )
        {
          v33 = v27;
LABEL_98:
          ExfReleaseRundownProtection(v33);
        }
      }
      else
      {
LABEL_92:
        v26 = -1073741558;
      }
      goto LABEL_99;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v247 = *(_DWORD *)ProcessInformation;
      v117 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v247);
      if ( v117 >= 0 && (v247 & 3) == 1 )
        MmRemoveExecuteGrants();
      return v117;
    case ProcessTlsInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = (unsigned __int64 *)P;
        v232 = (unsigned __int64 *)P;
      }
      else
      {
        PoolWithQuotaTag = (unsigned __int64 *)ExAllocatePoolWithQuotaTag(
                                                 (POOL_TYPE)9,
                                                 ProcessInformationLength,
                                                 0x736C5450u);
        v232 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      memmove(PoolWithQuotaTag, v5, v4);
      if ( *((_DWORD *)PoolWithQuotaTag + 1) < 2u
        && (v140 = *(_DWORD *)PoolWithQuotaTag, (*(_DWORD *)PoolWithQuotaTag & 0xFFFFFFFE) == 0)
        && (v141 = *((unsigned int *)PoolWithQuotaTag + 2), (_DWORD)v141)
        && (unsigned int)(v4 - 16) / 0x18uLL == v141 )
      {
        v142 = 0;
        v227 = 0;
        do
        {
          if ( LODWORD(PoolWithQuotaTag[3 * v142 + 2]) )
            goto LABEL_357;
          v227 = ++v142;
        }
        while ( v142 < (unsigned int)v141 );
        p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = p_Lock;
        v234 = ProcessBasicInformation;
        if ( (v140 & 1) != 0 )
        {
          if ( !p_Lock[133] )
          {
LABEL_357:
            v26 = -1073741811;
            goto LABEL_405;
          }
          v234 = ProcessQuotaLimits;
          Handle = (HANDLE)4;
          Alignment = 4;
        }
        else
        {
          Handle = (HANDLE)8;
          Alignment = 8;
        }
        v236 = (struct _KTHREAD *)v5;
        v144 = 0;
        v227 = 0;
        v26 = 0;
        v230 = 0;
        for ( i = 0LL; ; i = v235 )
        {
          v146 = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(p_Lock, i);
          v235 = v146;
          if ( !v146 || v144 >= *((_DWORD *)PoolWithQuotaTag + 2) )
            break;
          if ( (HIDWORD(v146[14].Ptr) & 0x400) == 0 )
          {
            v147 = v146 + 212;
            _m_prefetchw(&v146[212]);
            v148 = v146[212].Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v148 == _InterlockedCompareExchange64(
                           (volatile signed __int64 *)v147,
                           (v147->Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                           v147->Count & 0xFFFFFFFFFFFFFFFEuLL)
              || ExfAcquireRundownProtection(v147) )
            {
              v149 = *((_QWORD *)v235 + 30);
              if ( v234 )
              {
                v271 = v149 + 0x2000;
                v150 = (char *)(v149 + 8236);
                v246 = v149 + 8236;
                v151 = (char *)*(unsigned int *)(v149 + 8236);
              }
              else
              {
                v150 = (char *)(v149 + 88);
                v246 = v149 + 88;
                v151 = *(char **)(v149 + 88);
              }
              v240 = v151;
              if ( v151 )
              {
                if ( *((_DWORD *)PoolWithQuotaTag + 1) == 1 )
                {
                  if ( v151 == v150 )
                  {
                    v240 = 0LL;
                  }
                  else
                  {
                    v152 = (_QWORD)Handle * *((unsigned int *)PoolWithQuotaTag + 3);
                    if ( v152 )
                    {
                      if ( ((Alignment - 1) & (unsigned int)v151) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( (unsigned __int64)&v151[v152] > MmUserProbeAddress || &v151[v152] < v151 )
                        *(_BYTE *)MmUserProbeAddress = 0;
                    }
                    v153 = (volatile void **)&PoolWithQuotaTag[3 * v227 + 3];
                    ProbeForWrite(*v153, (_QWORD)Handle * *((unsigned int *)PoolWithQuotaTag + 3), Alignment);
                    memmove((void *)*v153, v151, (_QWORD)Handle * *((unsigned int *)PoolWithQuotaTag + 3));
                    _InterlockedOr(v225, 0);
                  }
                  v154 = v227;
                  v155 = 3LL * v227;
                  *(_DWORD *)((char *)&v236->Header.WaitListHead.Blink + v155 * 8) |= 1u;
                  if ( v234 )
                  {
                    v271 = v149 + 0x2000;
                    v273 = PoolWithQuotaTag[v155 + 3];
                    *(_DWORD *)(v149 + 8236) = v273;
                  }
                  else
                  {
                    *(_QWORD *)(v149 + 88) = PoolWithQuotaTag[v155 + 3];
                  }
                  v156 = (char *)(&v236->Header + v154);
                  *((_QWORD *)v156 + 4) = *((_QWORD *)v235 + 198);
                  *((_QWORD *)v156 + 3) = v240;
                  *((_DWORD *)v156 + 4) ^= 3u;
                  v227 = v154 + 1;
                }
                else
                {
                  v157 = 3LL * v227;
                  *(_DWORD *)((char *)&v236->Header.WaitListHead.Blink + v157 * 8) |= 1u;
                  v158 = *((unsigned int *)PoolWithQuotaTag + 3);
                  if ( v234 )
                  {
                    v159 = &v151[4 * v158];
                    if ( (unsigned __int64)v159 >= MmUserProbeAddress )
                      v159 = (char *)MmUserProbeAddress;
                    v160 = *(unsigned int *)v159;
                    v246 = v160;
                    v161 = PoolWithQuotaTag[v157 + 3];
                    v270 = v161;
                    v162 = &v240[4 * *((unsigned int *)PoolWithQuotaTag + 3)];
                    if ( (unsigned __int64)v162 >= MmUserProbeAddress )
                      v162 = (char *)MmUserProbeAddress;
                    *(_DWORD *)v162 = v161;
                  }
                  else
                  {
                    v163 = &v151[8 * v158];
                    if ( (unsigned __int64)v163 >= MmUserProbeAddress )
                      v163 = (char *)MmUserProbeAddress;
                    v160 = *(_QWORD *)v163;
                    v246 = *(_QWORD *)v163;
                    v164 = &v240[8 * *((unsigned int *)PoolWithQuotaTag + 3)];
                    if ( (unsigned __int64)v164 >= MmUserProbeAddress )
                      v164 = (char *)MmUserProbeAddress;
                    *(_QWORD *)v164 = PoolWithQuotaTag[v157 + 3];
                  }
                  v165 = v227;
                  v166 = 3LL * v227;
                  v167 = v236;
                  *((_QWORD *)&v236->SListFaultAddress + v166) = v160;
                  *((_DWORD *)&v167->Header.WaitListHead.Blink + 2 * v166) ^= 3u;
                  v227 = v165 + 1;
                }
              }
              v168 = (struct _EX_RUNDOWN_REF *)((char *)v235 + 1696);
              _m_prefetchw((char *)v235 + 1696);
              v169 = v168->Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v169 != _InterlockedCompareExchange64((volatile signed __int64 *)v168, v169 - 2, v169) )
                ExfReleaseRundownProtection(v168);
            }
            p_Lock = Object;
            v144 = v227;
          }
        }
        if ( v235 )
          ObfDereferenceObjectWithTag(v235, 0x6E457350u);
      }
      else
      {
        v26 = -1073741820;
      }
LABEL_405:
      if ( PoolWithQuotaTag != (unsigned __int64 *)P )
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v26;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v241 = *(_DWORD *)ProcessInformation;
      DefaultPagePriority = MmGetDefaultPagePriority();
      if ( v119 > DefaultPagePriority )
        return -1073741811;
      MinWsPagePriority = MmGetMinWsPagePriority();
      if ( v121 < MinWsPagePriority )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v26 = result;
      if ( result < 0 )
        return result;
      v123 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      _m_prefetchw((char *)Object + 736);
      v124 = v123->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v124 != _InterlockedCompareExchange64((volatile signed __int64 *)v123, v124 + 2, v124)
        && !ExfAcquireRundownProtection(v123) )
      {
        goto LABEL_92;
      }
      --CurrentThread->KernelApcDisable;
      v125 = (unsigned __int64 *)((char *)Object + 728);
      v126 = KeAbPreAcquire((ULONG_PTR)Object + 728, 0LL, 0LL, v122);
      v128 = v126;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v125, 0LL) )
        ExfAcquirePushLockExclusiveEx(v125, v126, (ULONG_PTR)v125, v127);
      if ( v128 )
        *(_BYTE *)(v128 + 26) |= 1u;
      v129 = (volatile signed __int32 *)Object;
      v130 = *((_DWORD *)Object + 192);
      v131 = v241 << 12;
      do
      {
        v132 = v130;
        v130 = _InterlockedCompareExchange(v129 + 192, v131 | v130 & 0xFFFF8FFF, v130);
      }
      while ( v130 != v132 );
      Handle = (char *)Object + 1152;
      v133 = (_DWORD *)*((_QWORD *)Object + 144);
      if ( v133 != (_DWORD *)((char *)Object + 1152) )
      {
        do
        {
          v134 = v133[11];
          do
          {
            v135 = v134;
            v134 = _InterlockedCompareExchange(v133 + 11, v131 | v134 & 0xFFFF8FFF, v134);
          }
          while ( v134 != v135 );
          v136 = (v135 >> 12) & 7;
          if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
            EtwTracePriority((__int64)(v133 - 420), 0x533u, v136, v241, 0LL);
          v133 = *(_DWORD **)v133;
        }
        while ( v133 != Handle );
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v125, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v125);
      KeAbPostRelease((ULONG_PTR)v125);
      v137 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v137;
      if ( !v137
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      _m_prefetchw(v123);
      v138 = v123->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v138 == _InterlockedCompareExchange64((volatile signed __int64 *)v123, v138 - 2, v138) )
        goto LABEL_99;
      v33 = v123;
      goto LABEL_98;
    case ProcessInstrumentationCallback:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      v170 = 0;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v242 = 0LL;
        v171 = *(HANDLE *)ProcessInformation;
        *((_QWORD *)&v242 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v242 = *(_OWORD *)ProcessInformation;
        v171 = (HANDLE)*((_QWORD *)&v242 + 1);
      }
      if ( DWORD1(v242) )
        return -1073741811;
      if ( (_DWORD)v242 != DWORD1(v242) )
        return -1073741736;
      if ( v171 != (HANDLE)((__int64)((_QWORD)v171 << 16) >> 16) )
        return -1073741811;
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
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) || Object == Process )
        {
          v173 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
          _m_prefetchw((char *)Object + 736);
          v174 = *((_QWORD *)Object + 92) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v174 == _InterlockedCompareExchange64((volatile signed __int64 *)v173, v174 + 2, v174)
            || ExfAcquireRundownProtection(v173) )
          {
            v175 = (struct _EX_RUNDOWN_REF *)Object;
            if ( *((_QWORD *)Object + 133) )
            {
              if ( Process[1].ActiveProcessors.Bitmap[7] )
              {
                KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v290);
                if ( *((_QWORD *)&v242 + 1) < MmGetMaximumUserAddress()
                  && (unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v242 + 1), 1LL) )
                {
                  *(_DWORD *)(v175[133].Count + 604) = DWORD2(v242);
                }
                else
                {
                  v170 = -1073741811;
                }
                KiUnstackDetachProcess((struct _KTHREAD *)v290, 0);
              }
              else
              {
                v170 = -1073741637;
              }
            }
            else if ( Process[1].ActiveProcessors.Bitmap[7] )
            {
              v170 = -1073741637;
            }
            else
            {
              KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v290);
              if ( !(unsigned int)MmValidateUserCallTarget(*((_QWORD *)&v242 + 1), 0LL) )
                v170 = -1073741811;
              KiUnstackDetachProcess((struct _KTHREAD *)v290, 0);
              if ( v170 >= 0 )
              {
                --CurrentThread->KernelApcDisable;
                p_Count = &v175[91].Count;
                v178 = KeAbPreAcquire((ULONG_PTR)p_Count, 0LL, 0LL, v176);
                v180 = v178;
                if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
                  ExfAcquirePushLockExclusiveEx(p_Count, v178, (ULONG_PTR)p_Count, v179);
                if ( v180 )
                  *(_BYTE *)(v180 + 26) |= 1u;
                v181 = *((_QWORD *)&v242 + 1);
                v182 = Object;
                *((_QWORD *)Object + 89) = *((_QWORD *)&v242 + 1);
                v183 = (volatile signed __int32 *)(v182 + 144);
                v184 = (volatile signed __int32 *)v182[144];
                if ( v184 != v183 )
                {
                  while ( 1 )
                  {
                    if ( v181 )
                      _interlockedbittestandset(v184 - 420, 0x19u);
                    else
                      _interlockedbittestandreset(v184 - 420, 0x19u);
                    v184 = *(volatile signed __int32 **)v184;
                    if ( v184 == v183 )
                      break;
                    v181 = *((_QWORD *)&v242 + 1);
                  }
                }
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Count, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)p_Count);
                KeAbPostRelease((ULONG_PTR)p_Count);
                v185 = CurrentThread->KernelApcDisable + 1;
                CurrentThread->KernelApcDisable = v185;
                if ( !v185
                  && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
                  && !CurrentThread->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery();
                }
                v175 = (struct _EX_RUNDOWN_REF *)Object;
              }
            }
            _m_prefetchw(&v175[92]);
            v186 = v175[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v186 != _InterlockedCompareExchange64((volatile signed __int64 *)&v175[92], v186 - 2, v186) )
              ExfReleaseRundownProtection(v175 + 92);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v170;
          }
          else
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741558;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741727;
        }
      }
      return result;
    case ProcessThreadStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v187 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v280 = *(_OWORD *)ProcessInformation;
          v281 = *((_OWORD *)ProcessInformation + 1);
          v282 = *((_QWORD *)ProcessInformation + 4);
          v187 = (char *)ProcessInformation + 32;
          v5 = (int *)&v280;
        }
        v188 = *v5;
        if ( (unsigned int)*v5 > 0x40 || v5[1] | v5[2] | v5[3] )
          return -1073741811;
        v5 += 4;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v188 = 0;
        if ( v9 )
        {
          v281 = *(_OWORD *)ProcessInformation;
          v187 = (char *)ProcessInformation + 16;
          v5 = (int *)&v281;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      RegionSize = *(_QWORD *)v5;
      *((_QWORD *)v5 + 2) = 0LL;
      result = ZwAllocateVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 (PVOID *)v5 + 2,
                 *((_QWORD *)v5 + 1),
                 &RegionSize,
                 v188 | 0x2000,
                 4u);
      if ( result >= 0 && v9 )
        *(_QWORD *)v187 = *((_QWORD *)v5 + 2);
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v248 = *(_DWORD *)ProcessInformation;
      if ( (v248 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v248);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v267 = *(_DWORD *)ProcessInformation;
      v189 = v267;
      if ( (v267 & 0xFFFFFFFE) != 0 )
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
      if ( (v189 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFDFFFFF);
      goto LABEL_67;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v190 = *(_DWORD *)ProcessInformation;
      v265 = *(_DWORD *)ProcessInformation;
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
      v191 = PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken(v191, v190);
      ObfDereferenceObject(v191);
      goto LABEL_67;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v283 = *(_QWORD *)ProcessInformation;
      if ( (v283 & 3) != 1 )
        return -1073741811;
      KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[0] = v283;
      return 0;
    case ProcessMitigationPolicy:
      v192 = 0;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v233 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v233 != 2 )
        return -1073741811;
      break;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v279 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v279) )
        return RtlRemoveDynamicFunctionTable(v279);
      else
        return RtlInsertDynamicFunctionTable(v279);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v277 = *(_DWORD *)ProcessInformation;
      v206 = v277;
      if ( (v277 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      v207 = 0;
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
      v208 = (struct _EX_RUNDOWN_REF *)Object;
      v209 = ObReferenceProcessHandleTable(Object);
      if ( v209 )
      {
        ExEnableHandleExceptions(v209, v206 & 1);
LABEL_617:
        _m_prefetchw(&v208[92]);
        v210 = v208[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v210 != _InterlockedCompareExchange64((volatile signed __int64 *)&v208[92], v210 - 2, v210) )
          ExfReleaseRundownProtection(v208 + 92);
        v208 = (struct _EX_RUNDOWN_REF *)Object;
      }
      else
      {
LABEL_620:
        v207 = -1073741558;
      }
      ObfDereferenceObjectWithTag(v208, 0x79517350u);
      return v207;
    case ProcessRevokeFileHandles:
      v211 = 0LL;
      v263 = 0LL;
      if ( v9 != 1 )
        goto LABEL_635;
      if ( (unsigned __int64)ProcessInformation >= v11 )
        v5 = (int *)v11;
      v212 = *v5;
      v259 = v212;
      v213 = (void *)*((_QWORD *)v5 + 1);
      Src = v213;
      if ( !(_WORD)v212 )
        return -1073741811;
      if ( ((unsigned __int8)v213 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v214 = (ULONG64)v213 + (unsigned __int16)v212;
      if ( v214 > MmUserProbeAddress || v214 < (unsigned __int64)v213 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v215 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v259, 0x6E497350u);
      v211 = v215;
      v263 = v215;
      if ( !v215 )
        return -1073741670;
      memmove(v215, Src, (unsigned __int16)v259);
      Src = v211;
      v5 = &v259;
      v284 = &v259;
LABEL_635:
      v26 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v26 < 0 )
      {
        if ( v211 )
          ExFreePoolWithTag(v211, 0);
        return v26;
      }
      v216 = Object;
      v217 = IoRevokeHandlesForProcess((__int64)v5, (struct _KPROCESS *)Object);
      if ( v211 )
        ExFreePoolWithTag(v211, 0);
      ObfDereferenceObjectWithTag(v216, 0x79517350u);
      return v217;
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
      v258 = *v5 != 0;
      v218 = Object;
      if ( KeGetCurrentThread()->ApcState.Process == Object )
      {
        v26 = -1073741790;
      }
      else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        v26 = 0;
        KeSetCheckStackExtentsProcess(v218, v258);
      }
      else
      {
        v26 = -1073741727;
      }
      v34 = v218;
      goto LABEL_100;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v289 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v289 != 1 || DWORD1(v289) )
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
      if ( *((_QWORD *)&v289 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFEFF);
LABEL_67:
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return 0;
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
      v254 = *(_QWORD *)v5;
      v88 = PsSetProcessFaultInformation(Object, &v254);
      goto LABEL_247;
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
      v274 = *(_OWORD *)v5;
      if ( (_DWORD)v274 == 2 )
      {
        if ( (DWORD1(v274) & 0xFFFFFFFE) != 0 || *((_QWORD *)&v274 + 1) )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        else
        {
          v88 = MmSetCommitReleaseEligibility((__int64)Object, BYTE4(v274) & 1);
LABEL_247:
          v89 = v88;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v89;
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
      memmove(v292, ProcessInformation, ProcessInformationLength);
      v219 = (unsigned int)v4 >> 3;
      if ( ProcessInformationClass == ProcessAllowedCpuSetsInformation )
      {
        result = ExCpuSetResourceManagerAccessCheck(v9);
        if ( result < 0 )
          return result;
      }
      v220 = 0;
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
      LOBYTE(v220) = v234 == ProcessAllowedCpuSetsInformation;
      v88 = KeSetCpuSetsProcess((__int64)Object, v219, v292, v220);
      goto LABEL_247;
    case ProcessSubsystemProcess:
      if ( (BYTE1(KeGetCurrentThread()->ApcState.Process[2].ProfileListHead.Blink) & 1) == 0 )
        return -1073741727;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v261, 0LL);
      v89 = result;
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)v261 + 429, 0x100u);
      ObfDereferenceObject(v261);
      return v89;
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
      _InterlockedOr((volatile signed __int32 *)Object + 429, 0x400u);
      goto LABEL_67;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v221 = *(_DWORD *)ProcessInformation;
      v266 = *(_DWORD *)ProcessInformation;
      v207 = 0;
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
      v208 = (struct _EX_RUNDOWN_REF *)Object;
      v222 = ObReferenceProcessHandleTable(Object);
      if ( !v222 )
        goto LABEL_620;
      ExEnableRaiseUMExceptionOnInvalidHandleClose(v222, v221, v223, v224);
      goto LABEL_617;
    default:
      return -1073741821;
  }
  v193 = (char *)KeGetCurrentThread()->ApcState.Process;
  Object = v193;
  switch ( (int)v233 )
  {
    case 1:
      if ( (HIDWORD(v233) & 0xFFFFFFF0) == 0 )
      {
        v194 = (HIDWORD(v233) >> 1) & 1;
        if ( !v194 && (*((_DWORD *)v193 + 192) & 0x8000000) != 0 )
          goto LABEL_499;
        if ( (BYTE4(v233) & 1) == 0 && (*((_DWORD *)v193 + 192) & 0x20000) == 0 )
          goto LABEL_499;
        v195 = (HIDWORD(v233) >> 3) & 1;
        if ( !v195 && (*((_DWORD *)v193 + 192) & 0x1000000) != 0 )
          goto LABEL_499;
        if ( v195 )
        {
          if ( !v194 )
          {
            v26 = -1073741776;
            goto LABEL_605;
          }
        }
        else if ( !v194 )
        {
LABEL_505:
          if ( (BYTE4(v233) & 1) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v193 + 192, 0xFFFDFFFF);
            v193 = (char *)Object;
          }
          if ( v195 )
          {
            _InterlockedOr((volatile signed __int32 *)v193 + 192, 0x1000000u);
            v193 = (char *)Object;
          }
          goto LABEL_509;
        }
        _InterlockedOr((volatile signed __int32 *)v193 + 192, 0x8000000u);
        v193 = (char *)Object;
        goto LABEL_505;
      }
      v26 = -1073741811;
LABEL_605:
      if ( v192 == 1 )
      {
        v34 = v193;
LABEL_100:
        ObfDereferenceObjectWithTag(v34, 0x79517350u);
      }
      return v26;
    case 2:
      v198 = BYTE4(v233);
      if ( (HIDWORD(v233) & 0xFFFFFFFE) != 0 )
      {
        v26 = -1073741811;
        goto LABEL_605;
      }
      if ( (PspSystemMitigationOptions & 0xF000000000LL) == 0x6000000000LL )
      {
LABEL_604:
        v26 = -1073741637;
        goto LABEL_605;
      }
      if ( ProcessHandle == (HANDLE)-1LL )
        goto LABEL_546;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        v26 = -1073741727;
        goto LABEL_605;
      }
      v26 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v26 < 0 )
      {
LABEL_524:
        v193 = (char *)Object;
        goto LABEL_605;
      }
      v192 = 1;
      v193 = (char *)Object;
      v198 = BYTE4(v233);
      if ( Object == KeGetCurrentThread()->ApcState.Process )
      {
LABEL_546:
        v199 = v198 & 1;
        if ( !v199 && (*((_DWORD *)v193 + 192) & 0x400) != 0 )
        {
          v26 = -1073741790;
          goto LABEL_605;
        }
        if ( !v199 )
          goto LABEL_552;
        _InterlockedOr((volatile signed __int32 *)v193 + 192, 0x400u);
      }
      else
      {
        if ( (BYTE4(v233) & 1) != 0 && (*((_DWORD *)Object + 192) & 0x400) == 0 )
        {
          v26 = -1073741790;
          goto LABEL_605;
        }
        if ( (BYTE4(v233) & 1) != 0 )
          goto LABEL_552;
        _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xFFFFFBFF);
      }
      v193 = (char *)Object;
LABEL_552:
      v26 = 0;
      goto LABEL_605;
    case 3:
      if ( (HIDWORD(v233) & 0xFFFFFFFC) != 0 )
      {
        v26 = -1073741811;
        goto LABEL_605;
      }
      if ( ((HIDWORD(v233) >> 1) & 1) == 0 && (BYTE4(v233) & 1) != 0 )
      {
        v26 = -1073741811;
        goto LABEL_605;
      }
      if ( ((HIDWORD(v233) >> 1) & 1) != 0 && (BYTE4(v233) & 1) == 0 )
      {
        v26 = -1073741811;
        goto LABEL_605;
      }
      v196 = ObReferenceProcessHandleTable(v193);
      if ( !v196 )
      {
        v26 = -1073741558;
        goto LABEL_605;
      }
      v26 = -1073741790;
      if ( (unsigned __int8)ExEnableHandleExceptions(v196, BYTE4(v233) & 1) )
        v26 = 0;
      _m_prefetchw(v193 + 736);
      v197 = *((_QWORD *)v193 + 92) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v197 != _InterlockedCompareExchange64((volatile signed __int64 *)v193 + 92, v197 - 2, v197) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)v193 + 92);
      goto LABEL_524;
    case 4:
      if ( (HIDWORD(v233) & 0xFFFFFFFE) != 0 )
      {
        v26 = -1073741811;
      }
      else if ( (BYTE4(v233) & 1) != 0 || *((int *)v193 + 192) >= 0 )
      {
        v26 = 0;
        if ( (BYTE4(v233) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v193 + 192, 0x80000000);
          v193 = (char *)Object;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0 )
            v26 = -1073741431;
        }
      }
      else
      {
        v26 = -1073741790;
      }
      goto LABEL_605;
    case 6:
      if ( (HIDWORD(v233) & 0xFFFFFFFE) != 0 )
      {
        v26 = -1073741811;
      }
      else if ( (BYTE4(v233) & 1) != 0 || (*((_DWORD *)v193 + 192) & 0x4000000) == 0 )
      {
        v26 = 0;
        if ( (BYTE4(v233) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v193 + 192, 0x4000000u);
          v193 = (char *)Object;
        }
      }
      else
      {
        v26 = -1073741790;
      }
      goto LABEL_605;
    case 7:
      v200 = -1073741790;
      if ( (HIDWORD(v233) & 0xFFFFFFFE) != 0 )
        v200 = -1073741811;
      v26 = v200;
      goto LABEL_605;
    case 8:
      if ( (HIDWORD(v233) & 0xFFFFFFFE) != 0 )
      {
        v26 = -1073741811;
      }
      else
      {
        if ( (BYTE4(v233) & 1) != 0 )
          goto LABEL_569;
        if ( (unsigned __int8)v193[1712] >= 8u )
        {
LABEL_499:
          v26 = -1073741790;
          goto LABEL_605;
        }
        if ( (unsigned __int8)v193[1713] < 8u )
        {
LABEL_569:
          v26 = 0;
          if ( (BYTE4(v233) & 1) != 0 )
          {
            if ( (unsigned __int8)v193[1712] < 8u )
              v193[1712] = 8;
            if ( (unsigned __int8)v193[1713] < 8u )
              v193[1713] = 8;
          }
        }
        else
        {
          v26 = -1073741790;
        }
      }
      goto LABEL_605;
    case 9:
      if ( (HIDWORD(v233) & 0xFFFFFFFC) != 0 )
      {
        v26 = -1073741811;
      }
      else if ( (BYTE4(v233) & 1) != 0 || (*((_DWORD *)v193 + 429) & 4) == 0 )
      {
        if ( (BYTE4(v233) & 1) != 0 || (BYTE4(v233) & 2) != 0 || (*((_DWORD *)v193 + 429) & 8) == 0 )
        {
          v26 = 0;
          if ( (BYTE4(v233) & 1) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v193 + 429, 4u);
            _InterlockedAnd((volatile signed __int32 *)v193 + 429, 0xFFFFFFF7);
            v193 = (char *)Object;
          }
          else if ( (BYTE4(v233) & 2) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v193 + 429, 8u);
            _InterlockedAnd((volatile signed __int32 *)v193 + 429, 0xFFFFFFFB);
            v193 = (char *)Object;
          }
        }
        else
        {
          v26 = -1073741790;
        }
      }
      else
      {
        v26 = -1073741790;
      }
      goto LABEL_605;
    case 16:
      v201 = HIDWORD(v233);
      if ( (HIDWORD(v233) & 0xFFFFFFFC) != 0 )
      {
        v26 = -1073741811;
        goto LABEL_605;
      }
      if ( (BYTE4(v233) & 1) != 0 && (BYTE4(v233) & 2) != 0 )
        v201 = HIDWORD(v233) & 0xFFFFFFFD;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(v193);
      v203 = v201 & 1;
      if ( (v201 & 1) == 0 && RedirectionTrustPolicy == 1 )
      {
        v26 = -1073741790;
        goto LABEL_605;
      }
      v204 = (v201 >> 1) & 1;
      if ( v204 )
        goto LABEL_599;
      if ( v203 )
        goto LABEL_600;
      if ( RedirectionTrustPolicy == 2 )
      {
        v26 = -1073741790;
      }
      else
      {
LABEL_599:
        if ( v203 )
        {
LABEL_600:
          v205 = 1LL;
        }
        else
        {
          if ( !v204 )
          {
LABEL_509:
            v26 = 0;
            goto LABEL_605;
          }
          v205 = 2LL;
        }
        PspSetRedirectionTrustPolicy(v193, v205);
        v26 = 0;
      }
      goto LABEL_605;
    default:
      goto LABEL_604;
  }
}
