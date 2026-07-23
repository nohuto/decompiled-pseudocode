/*
 * XREFs of NtSetInformationProcess @ 0x1404248E0
 * Callers:
 *     <none>
 * Callees:
 *     KeBoostPriorityThread @ 0x1400049F8 (KeBoostPriorityThread.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140029750 (PsChargeProcessNonPagedPoolQuota.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     PsSetPagePriorityThread @ 0x1400707C0 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140071C90 (PsSetIoPriorityThread.c)
 *     SeTokenIsNoChildProcessRestricted @ 0x14007BFAC (SeTokenIsNoChildProcessRestricted.c)
 *     MmSetMemoryPriorityProcess @ 0x14007E574 (MmSetMemoryPriorityProcess.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EAE4 (KeSetPriorityAndQuantumProcess.c)
 *     RtlInsertDynamicFunctionTable @ 0x140097DC0 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1400994CC (RtlRemoveDynamicFunctionTable.c)
 *     PspLockUnlockProcessExclusive @ 0x1400A8F34 (PspLockUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x1400ACD8C (KeSetExecuteOptions.c)
 *     KeInitializeGate @ 0x1400ADD84 (KeInitializeGate.c)
 *     MmRemoveExecuteGrants @ 0x1400B6730 (MmRemoveExecuteGrants.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MmGetMinWsPagePriority @ 0x1400D1BB0 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     KeQueryGroupMaskProcess @ 0x1400F5118 (KeQueryGroupMaskProcess.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140110550 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeVerifyGroupAffinity @ 0x140133128 (KeVerifyGroupAffinity.c)
 *     xKdEnumerateDebuggingDevices @ 0x14014CF94 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x1401C9960 (IoRevokeHandlesForProcess.c)
 *     KeSetCpuSetsProcess @ 0x1401D754C (KeSetCpuSetsProcess.c)
 *     MmGetMaximumUserAddress @ 0x1401E0E58 (MmGetMaximumUserAddress.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E0E70 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1401E1044 (MmSetCommitReleaseEligibility.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeQueryUserSidToken @ 0x1403FEB00 (SeQueryUserSidToken.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x140427A30 (PspSetProcessDefaultHardErrorMode.c)
 *     KeSetAutoAlignmentProcess @ 0x140427B10 (KeSetAutoAlignmentProcess.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeCompareSigningLevels @ 0x14045C0B0 (SeCompareSigningLevels.c)
 *     PsSetProcessPriorityByClass @ 0x140471F98 (PsSetProcessPriorityByClass.c)
 *     LpcRequestPort @ 0x1404ACD8C (LpcRequestPort.c)
 *     ExEnableHandleExceptions @ 0x1404B7C54 (ExEnableHandleExceptions.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404B7CF0 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetQuotaLimits @ 0x1404C28C8 (PspSetQuotaLimits.c)
 *     PspSetProcessPriorityClass @ 0x1404C9A88 (PspSetProcessPriorityClass.c)
 *     SeSetVirtualizationToken @ 0x1404CB060 (SeSetVirtualizationToken.c)
 *     KeSetDisableBoostThread @ 0x1404D2008 (KeSetDisableBoostThread.c)
 *     PsSetProcessFaultInformation @ 0x1404D2AC8 (PsSetProcessFaultInformation.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     PspWritePebAffinityInfo @ 0x1404FE0C0 (PspWritePebAffinityInfo.c)
 *     SeCheckPrivilegedObject @ 0x140547ABC (SeCheckPrivilegedObject.c)
 *     MmProcessWorkingSetControl @ 0x14054C038 (MmProcessWorkingSetControl.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14054CD14 (PspSetProcessAffinityUpdateMode.c)
 *     KeSetCheckStackExtentsProcess @ 0x14064F6D8 (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1406618B0 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x140668BF8 (ObSetProcessDeviceMap.c)
 *     PspGetRedirectionTrustPolicy @ 0x14067D310 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x14067D36C (PspSetRedirectionTrustPolicy.c)
 *     PsSetProcessHandleTracingInformation @ 0x14067D510 (PsSetProcessHandleTracingInformation.c)
 *     PspSetProcessAffinitySafe @ 0x14067DD40 (PspSetProcessAffinitySafe.c)
 *     PspAssignPrimaryToken @ 0x14067F0C0 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1406821CC (PsIumEnableOnDemandDebugWithResponse.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1406A825C (EtwCheckSecurityLoggerAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rdi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v9; // si
  int v10; // ecx
  NTSTATUS result; // eax
  volatile signed __int64 *v12; // rdi
  NTSTATUS v13; // ebx
  _QWORD *PoolWithTag; // rax
  void *v15; // r8
  PVOID v16; // rcx
  int v17; // ebx
  char v18; // r12
  PVOID v19; // rdi
  __int16 v20; // bx
  unsigned int v21; // r14d
  struct _EX_RUNDOWN_REF *v22; // rdi
  int v23; // esi
  char v24; // bl
  unsigned int v25; // r14d
  int v26; // r12d
  __int64 i; // rbx
  __int64 v28; // r8
  unsigned int v29; // ebx
  unsigned int v30; // r12d
  int v31; // esi
  void *v32; // rdx
  HANDLE *v33; // roff
  signed __int64 v34; // r15
  NTSTATUS UserSidToken; // esi
  bool v36; // zf
  signed __int64 v37; // rax
  void *v38; // r15
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  PVOID v42; // rcx
  unsigned __int8 v43; // di
  __int64 v44; // r13
  _DWORD *v45; // rbx
  unsigned __int8 v46; // al
  __int64 v47; // rcx
  int v48; // ebx
  unsigned int GroupMaskProcess; // eax
  __int64 v50; // rdx
  __int64 v51; // r13
  char *v52; // rbx
  struct _EX_RUNDOWN_REF *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 *v57; // rbx
  __int64 v58; // rdi
  volatile signed __int32 *v59; // rbx
  bool v60; // di
  volatile signed __int32 *v61; // rbx
  struct _EX_RUNDOWN_REF *v62; // r14
  __int64 v63; // r13
  char *v64; // r8
  _BOOL8 v65; // rdx
  void **v66; // r8
  char *v67; // r9
  HANDLE v68; // rbx
  NTSTATUS v69; // eax
  NTSTATUS v70; // ebx
  int v71; // ebx
  NTSTATUS v72; // r14d
  void *v73; // rcx
  int v74; // ebx
  int v75; // ecx
  PVOID v76; // rbx
  int *v77; // rdx
  NTSTATUS v78; // eax
  NTSTATUS v79; // edi
  unsigned int v80; // eax
  unsigned __int64 v81; // r12
  volatile signed __int32 *v82; // r14
  __int64 v83; // r13
  signed __int32 v84; // eax
  signed int v85; // r8d
  signed __int32 v86; // edx
  KSPIN_LOCK *v87; // rbx
  signed int v88; // r15d
  int v89; // ebx
  _KPROCESS *CurrentProcess; // rax
  NTSTATUS v91; // edi
  unsigned int DefaultPagePriority; // eax
  unsigned int v93; // ecx
  unsigned int MinWsPagePriority; // eax
  unsigned int v95; // ecx
  struct _EX_RUNDOWN_REF *v96; // r12
  __int64 v97; // r13
  signed __int32 v98; // eax
  int v99; // r8d
  signed __int32 v100; // edx
  PVOID v101; // r14
  char *v102; // r15
  char *v103; // rdi
  int v104; // ebx
  unsigned __int64 v105; // rsi
  struct _KTHREAD *PoolWithQuotaTag; // r15
  LONG LockNV; // edi
  __int64 Flink_low; // r8
  unsigned int v109; // edx
  _KPROCESS *v110; // rax
  PVOID j; // rdx
  _QWORD *v112; // rbx
  __int64 v113; // r8
  char *v114; // rax
  char *v115; // r13
  __int64 v116; // rdx
  volatile void **v117; // rdi
  __int64 v118; // rdx
  char *v119; // rdx
  __int64 v120; // r8
  __int64 Flink_high; // rax
  unsigned __int64 v122; // rcx
  __int64 v123; // r9
  int v124; // r8d
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rdx
  __int64 v128; // rcx
  _QWORD *v129; // rax
  NTSTATUS v130; // r14d
  unsigned __int64 v131; // rdi
  _KPROCESS *v132; // r15
  BOOLEAN v133; // al
  char *v134; // rbx
  __int64 v135; // r13
  volatile signed __int32 *v136; // rax
  __int64 v137; // rcx
  __int64 *v138; // rax
  char *v139; // r15
  int v140; // edx
  __int64 v141; // r8
  int v142; // ebx
  unsigned int v143; // r12d
  PACCESS_TOKEN v144; // rbx
  unsigned __int64 v145; // rbx
  __int64 v146; // rdx
  unsigned __int8 *v147; // rbx
  __int64 v148; // r8
  int v149; // edx
  int v150; // ecx
  __int64 v151; // rcx
  char v152; // r15
  unsigned int v153; // edi
  _KPROCESS *v154; // rax
  int v155; // edi
  int v156; // ecx
  int v157; // edi
  int v158; // eax
  int v159; // r12d
  int v160; // edi
  __int64 v161; // rcx
  int v162; // ecx
  unsigned int v163; // edi
  int RedirectionTrustPolicy; // eax
  int v165; // ecx
  int v166; // edi
  __int64 v167; // rdx
  int v168; // ebx
  NTSTATUS v169; // r14d
  struct _EX_RUNDOWN_REF *v170; // rdi
  __int64 v171; // rax
  void *v172; // rdi
  int v173; // eax
  void *v174; // rcx
  unsigned __int64 v175; // rdx
  PVOID v176; // rax
  PVOID v177; // rsi
  NTSTATUS v178; // ebx
  _BOOL8 v179; // rdi
  _KPROCESS *v180; // rax
  unsigned int v181; // edi
  unsigned int v182; // edi
  __int64 v183; // rax
  void *v184; // rdi
  PACCESS_TOKEN v185; // r15
  __int64 v186; // rbx
  char v187; // bl
  _KPROCESS *v188; // rax
  KPROCESSOR_MODE v189; // dl
  int v190; // edx
  unsigned int v191; // r14d
  volatile signed __int32 *v192; // rcx
  signed __int32 v193[8]; // [rsp+0h] [rbp-408h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+30h] [rbp-3D8h]
  PVOID Object; // [rsp+50h] [rbp-3B8h] BYREF
  unsigned int v196; // [rsp+58h] [rbp-3B0h]
  struct _KTHREAD *v197; // [rsp+60h] [rbp-3A8h]
  int v198; // [rsp+68h] [rbp-3A0h]
  PROCESSINFOCLASS v199; // [rsp+70h] [rbp-398h]
  HANDLE v200; // [rsp+78h] [rbp-390h]
  ULONG Alignment; // [rsp+80h] [rbp-388h]
  HANDLE Handle; // [rsp+88h] [rbp-380h]
  PVOID NextProcessThread; // [rsp+90h] [rbp-378h]
  _QWORD *v204; // [rsp+98h] [rbp-370h]
  char v205; // [rsp+A0h] [rbp-368h]
  char v206; // [rsp+A1h] [rbp-367h]
  char v207; // [rsp+A2h] [rbp-366h]
  __int16 v208; // [rsp+A4h] [rbp-364h]
  __int16 v209; // [rsp+A8h] [rbp-360h]
  signed int v210; // [rsp+ACh] [rbp-35Ch]
  int v211; // [rsp+B0h] [rbp-358h]
  int v212; // [rsp+B4h] [rbp-354h]
  char *v213; // [rsp+B8h] [rbp-350h]
  __int64 v214; // [rsp+C0h] [rbp-348h]
  __int64 v215; // [rsp+C8h] [rbp-340h]
  __int128 v216; // [rsp+D0h] [rbp-338h] BYREF
  __int128 v217; // [rsp+E0h] [rbp-328h]
  unsigned int v218; // [rsp+F0h] [rbp-318h]
  unsigned int v219; // [rsp+F4h] [rbp-314h]
  int v220; // [rsp+F8h] [rbp-310h] BYREF
  int v221; // [rsp+FCh] [rbp-30Ch]
  int v222; // [rsp+100h] [rbp-308h] BYREF
  PVOID v223; // [rsp+108h] [rbp-300h] BYREF
  int v224; // [rsp+110h] [rbp-2F8h] BYREF
  int v225; // [rsp+114h] [rbp-2F4h]
  int v226; // [rsp+118h] [rbp-2F0h] BYREF
  void *Src; // [rsp+120h] [rbp-2E8h]
  PVOID v228; // [rsp+128h] [rbp-2E0h]
  PVOID v229; // [rsp+130h] [rbp-2D8h]
  PVOID v230; // [rsp+138h] [rbp-2D0h] BYREF
  int v231; // [rsp+140h] [rbp-2C8h]
  int v232; // [rsp+144h] [rbp-2C4h]
  BOOL v233; // [rsp+148h] [rbp-2C0h]
  int v234; // [rsp+14Ch] [rbp-2BCh]
  int v235; // [rsp+150h] [rbp-2B8h]
  int v236; // [rsp+154h] [rbp-2B4h]
  int v237; // [rsp+158h] [rbp-2B0h]
  int v238; // [rsp+15Ch] [rbp-2ACh]
  int v239; // [rsp+160h] [rbp-2A8h]
  int v240; // [rsp+164h] [rbp-2A4h]
  int v241; // [rsp+168h] [rbp-2A0h]
  HANDLE v242; // [rsp+170h] [rbp-298h]
  int v243; // [rsp+178h] [rbp-290h]
  __int64 v244; // [rsp+180h] [rbp-288h]
  __int64 v245; // [rsp+188h] [rbp-280h] BYREF
  __int64 v246; // [rsp+190h] [rbp-278h] BYREF
  __int128 v247; // [rsp+198h] [rbp-270h]
  int v248; // [rsp+1A8h] [rbp-260h]
  int v249; // [rsp+1ACh] [rbp-25Ch]
  int v250; // [rsp+1B0h] [rbp-258h]
  PSID Sid2[2]; // [rsp+1B8h] [rbp-250h]
  __m256i v252; // [rsp+1C8h] [rbp-240h]
  __int128 v253; // [rsp+1E8h] [rbp-220h] BYREF
  __int128 v254; // [rsp+1F8h] [rbp-210h] BYREF
  __int64 v255; // [rsp+208h] [rbp-200h]
  int *v256; // [rsp+210h] [rbp-1F8h]
  HANDLE v257; // [rsp+218h] [rbp-1F0h]
  unsigned __int64 v258; // [rsp+220h] [rbp-1E8h]
  HANDLE v259; // [rsp+228h] [rbp-1E0h]
  unsigned __int64 v260; // [rsp+230h] [rbp-1D8h]
  _DWORD v261[10]; // [rsp+238h] [rbp-1D0h] BYREF
  __int64 v262; // [rsp+260h] [rbp-1A8h]
  __int128 v263; // [rsp+268h] [rbp-1A0h]
  _BYTE v264[48]; // [rsp+278h] [rbp-190h] BYREF
  _BYTE P[40]; // [rsp+2A8h] [rbp-160h] BYREF
  _BYTE Sid1[80]; // [rsp+2D0h] [rbp-138h] BYREF
  char v267[160]; // [rsp+320h] [rbp-E8h] BYREF

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  v199 = ProcessInformationClass;
  v204 = ProcessInformation;
  Alignment = ProcessInformationLength;
  CurrentThread = KeGetCurrentThread();
  v197 = CurrentThread;
  v9 = CurrentThread->gap0[10];
  if ( v9 )
  {
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
      default:
        if ( ProcessInformationClass != ProcessAffinityMask )
        {
          if ( ProcessInformationClass == ProcessIoPriority )
          {
            v10 = 4;
            break;
          }
          if ( ProcessInformationClass == ProcessPagePriority )
          {
            v10 = 4;
            break;
          }
          if ( ProcessInformationClass != ProcessTlsInformation
            && ProcessInformationClass != ProcessExceptionPort
            && ProcessInformationClass != ProcessInstrumentationCallback
            && ProcessInformationClass != ProcessThreadStackAllocation )
          {
            if ( ProcessInformationClass == ProcessAffinityUpdateMode )
            {
              v10 = 4;
              break;
            }
            if ( ProcessInformationClass == ProcessMemoryAllocationMode )
            {
              v10 = 4;
              break;
            }
            if ( ProcessInformationClass != ProcessConsoleHostProcess
              && ProcessInformationClass != ProcessDynamicFunctionTableInformation
              && ProcessInformationClass != ProcessRevokeFileHandles
              && ProcessInformationClass != ProcessMemoryExhaustion
              && ProcessInformationClass != ProcessCommitReleaseInformation )
            {
              if ( ProcessInformationClass == ProcessInPrivate )
              {
                v10 = 1;
              }
              else
              {
                v10 = 4;
                if ( ProcessInformationClass == ProcessHighGraphicsPriorityInformation )
                  v10 = 1;
              }
              break;
            }
          }
        }
        v10 = 8;
        break;
    }
    if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
      v10 = 1;
    if ( ProcessInformationLength )
    {
      if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
        || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    CurrentThread = v197;
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits(ProcessHandle);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v17 = *(_DWORD *)ProcessInformation;
      v236 = v17;
      if ( v17 >= 0 )
      {
        v18 = 0;
      }
      else
      {
        v18 = 2;
        v17 &= ~0x80000000;
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
      KeSetPriorityAndQuantumProcess((__int64)v19, (unsigned int)v17, 0, 0, 0);
      MmSetMemoryPriorityProcess((__int64)v19, v18);
      ObfDereferenceObjectWithTag(v19, 0x79517350u);
      return 0;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v26 = *(_DWORD *)ProcessInformation;
      v237 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v23 = result;
      if ( result < 0 )
        return result;
      v22 = (struct _EX_RUNDOWN_REF *)Object;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        for ( i = PsGetNextProcessThread(v22, 0LL); i; i = PsGetNextProcessThread(v22, i) )
          KeBoostPriorityThread(i, v26, v28);
        ExReleaseRundownProtection(v22 + 92);
      }
      else
      {
        v23 = -1073741558;
      }
      goto LABEL_78;
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v30 = 0;
        v218 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v242 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v242 = Handle;
        v218 = *((_DWORD *)ProcessInformation + 2);
        v30 = v218;
        if ( (v218 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v223, 0LL);
      v228 = v223;
      if ( result < 0 )
        return result;
      v31 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x800u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v31 < 0 )
      {
        ObfDereferenceObject(v223);
        return v31;
      }
      v32 = (void *)((unsigned __int64)v223 | v30);
      NextProcessThread = v32;
      v33 = (HANDLE *)((char *)Object + 848);
      _m_prefetchw((char *)Object + 848);
      v34 = (signed __int64)*v33;
      for ( Handle = *v33; ; Handle = (HANDLE)v37 )
      {
        if ( (_DWORD)v4 == 16 )
        {
          *(_DWORD *)(v5 + 8) = v34 & 7;
        }
        else if ( (v34 & 7) != 0 )
        {
          ObfDereferenceObject(v228);
          goto LABEL_106;
        }
        v37 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 106, (signed __int64)v32, v34);
        v36 = v34 == v37;
        v34 = v37;
        if ( v36 )
          break;
      }
      if ( v37 )
      {
        v38 = (void *)(v37 & 0xFFFFFFFFFFFFFFF8uLL);
        v261[0] = 3145736;
        v261[1] = 13;
        v262 = *((_QWORD *)Object + 93);
        while ( 1 )
        {
          v39 = LpcRequestPort(v38, v261);
          if ( v39 != -1073741801 && v39 != -1073741670 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
        }
        PspLockUnlockProcessExclusive((__int64)Object, (__int64)v197, v40, v41);
        ObfDereferenceObject(v38);
      }
      UserSidToken = 0;
      goto LABEL_115;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v257 = *(HANDLE *)ProcessInformation;
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
        goto LABEL_126;
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
        goto LABEL_126;
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v29 = *(_DWORD *)ProcessInformation;
      v239 = *(_DWORD *)ProcessInformation;
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
      PspSetProcessDefaultHardErrorMode(Object, v197, v29);
      goto LABEL_60;
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
LABEL_126:
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
      v12 = (volatile signed __int64 *)Object;
      v13 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
      if ( v13 < 0 )
        goto LABEL_51;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      if ( PoolWithTag )
      {
        PsWatchEnabled = 1;
        *(_DWORD *)PoolWithTag = 0;
        PoolWithTag[1] = 0LL;
        KeInitializeGate((__int64)(PoolWithTag + 2));
        if ( !_InterlockedCompareExchange64(v12 + 122, (signed __int64)v15, 0LL) )
        {
          v13 = 0;
          v12 = (volatile signed __int64 *)Object;
          goto LABEL_51;
        }
        ExFreePoolWithTag(v15, 0);
        v13 = -1073741752;
        v12 = (volatile signed __int64 *)Object;
      }
      else
      {
        v13 = -1073741801;
      }
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)v12, 0x6028uLL);
LABEL_51:
      ObfDereferenceObjectWithTag((PVOID)v12, 0x79517350u);
      return v13;
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
      v43 = *(_BYTE *)ProcessInformation;
      v206 = *(_BYTE *)ProcessInformation;
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
      v44 = (__int64)v197;
      v45 = Object;
      PspLockProcessExclusive((__int64)Object, (__int64)v197);
      if ( v43 )
        v45[296] |= 4u;
      else
        v45[296] &= ~4u;
      v46 = v43;
      if ( *((_QWORD *)v45 + 133) )
        v46 = 1;
      KeSetAutoAlignmentProcess(v45, v46);
      PspUnlockProcessExclusive(v47, v44);
      v16 = v45;
      goto LABEL_61;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v20 = *(_WORD *)ProcessInformation;
      v208 = *(_WORD *)ProcessInformation;
      v21 = 0;
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
      v22 = (struct _EX_RUNDOWN_REF *)Object;
      v23 = PspSetProcessPriorityClass(Object, HIBYTE(v208), ProcessHandle, v9);
      if ( v23 >= 0 )
      {
        LOBYTE(v21) = (_BYTE)v20 != 0;
        PsSetProcessPriorityByClass(v22, v21);
      }
LABEL_78:
      ObfDereferenceObjectWithTag(v22, 0x79517350u);
      return v23;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v48 = *(_DWORD *)ProcessInformation;
      v240 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      UserSidToken = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x200u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
      if ( UserSidToken < 0 )
        return UserSidToken;
      v42 = Object;
      if ( *((_QWORD *)Object + 226) )
      {
        UserSidToken = -1073741790;
        goto LABEL_116;
      }
      if ( v48 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x1000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFEFFFFFF);
      goto LABEL_115;
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        v216 = 0uLL;
        *(_QWORD *)&v216 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v216 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v216 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v216, 0) )
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
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
        goto LABEL_106;
      if ( (_DWORD)v4 != 8 )
        goto LABEL_156;
      _BitScanForward(&GroupMaskProcess, GroupMaskProcess);
      v219 = GroupMaskProcess;
      v50 = v216 & qword_1403AA618[GroupMaskProcess];
      if ( v50 == (_QWORD)v216 )
      {
        WORD4(v216) = v219;
        *(_QWORD *)&v216 = v50;
LABEL_156:
        v51 = (__int64)v197;
        --v197->KernelApcDisable;
        v52 = (char *)Object;
        v53 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
        {
          v57 = (unsigned __int64 *)(v52 + 728);
          v58 = KeAbPreAcquire((ULONG_PTR)v57, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v57, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v57, v58, (ULONG_PTR)v57);
          if ( v58 )
            *(_BYTE *)(v58 + 26) |= 1u;
          UserSidToken = PspSetProcessAffinitySafe((_DWORD)Object, 0, 0, (unsigned int)&v216, (__int64)&v220);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v57, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v57);
          KeAbPostRelease((ULONG_PTR)v57);
          ExReleaseRundownProtection(v53);
          if ( UserSidToken >= 0 )
          {
            v59 = (volatile signed __int32 *)Object;
            if ( v220 )
              PspWritePebAffinityInfo(v51, Object);
            _InterlockedOr(v59 + 192, 0x200000u);
          }
        }
        else
        {
          UserSidToken = -1073741558;
        }
        KiLeaveCriticalRegionUnsafe(v51, v54, v55, v56);
      }
      else
      {
LABEL_106:
        UserSidToken = -1073741811;
      }
LABEL_115:
      v42 = Object;
      goto LABEL_116;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v241 = *(_DWORD *)ProcessInformation;
      v60 = v241 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      UserSidToken = result;
      if ( result < 0 )
        return result;
      v61 = (volatile signed __int32 *)Object;
      v62 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        v63 = (__int64)v197;
        PspLockProcessExclusive((__int64)v61, (__int64)v197);
        if ( v60 )
          _interlockedbittestandset(v61 + 110, 1u);
        else
          _interlockedbittestandreset(v61 + 110, 1u);
        v61 = (volatile signed __int32 *)Object;
        v64 = (char *)*((_QWORD *)Object + 145);
        if ( v64 != (char *)Object + 1160 )
        {
          v65 = v60;
          do
          {
            KeSetDisableBoostThread(v64 - 1688, v65);
            v64 = (char *)*v66;
          }
          while ( v64 != v67 );
        }
        PspUnlockProcessExclusive((__int64)v61, v63);
        ExReleaseRundownProtection(v62);
      }
      else
      {
        UserSidToken = -1073741558;
      }
      goto LABEL_180;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v68 = *(HANDLE *)ProcessInformation;
      v259 = *(HANDLE *)ProcessInformation;
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
      v69 = ObSetProcessDeviceMap(Object, v68, v9);
LABEL_192:
      v70 = v69;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v70;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v71 = *(_DWORD *)ProcessInformation;
      v243 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v72 = 0;
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
        if ( v71 != (unsigned int)MmGetSessionId((struct _KPROCESS *)Object) )
          v72 = -1073741790;
        ObfDereferenceObjectWithTag(v73, 0x79517350u);
        return v72;
      }
      return result;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v24 = *(_BYTE *)ProcessInformation;
      v205 = *(_BYTE *)ProcessInformation;
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
      PsSetProcessPriorityByClass(Object, v25);
      goto LABEL_60;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v74 = *(_DWORD *)ProcessInformation;
      v248 = *(_DWORD *)ProcessInformation;
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
      if ( v74 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFDFFF);
      goto LABEL_60;
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
      UserSidToken = result;
      if ( result < 0 )
        return result;
      v221 = *(_DWORD *)v5;
      if ( (v221 & 0xFFFFFFFE) != 0 )
        goto LABEL_106;
      if ( (v221 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
      goto LABEL_115;
    case ProcessHandleTracing:
      if ( !ProcessInformationLength )
        goto LABEL_213;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v75 = *(_DWORD *)ProcessInformation;
      v224 = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        v225 = *((_DWORD *)ProcessInformation + 1);
      else
        v225 = 0;
      if ( v75 )
        return -1073741811;
LABEL_213:
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
      v76 = Object;
      if ( (_DWORD)v4 )
        v77 = &v224;
      else
        v77 = 0LL;
      v78 = PsSetProcessHandleTracingInformation(Object, v77);
      goto LABEL_218;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v80 = *(_DWORD *)ProcessInformation;
        v210 = *(_DWORD *)ProcessInformation;
        LOBYTE(v81) = 0;
      }
      else
      {
        v258 = *(_QWORD *)ProcessInformation;
        v80 = v258;
        v81 = HIDWORD(v258);
        v210 = v258;
      }
      if ( v80 >= 4 )
        return -1073741811;
      if ( v80 >= 3
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
      UserSidToken = result;
      if ( result < 0 )
        return result;
      v82 = (volatile signed __int32 *)Object;
      Handle = (char *)Object + 736;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        v83 = (__int64)v197;
        PspLockProcessExclusive((__int64)v82, (__int64)v197);
        v84 = *((_DWORD *)v82 + 193);
        v85 = v210 << 27;
        do
        {
          v86 = v84;
          v84 = _InterlockedCompareExchange(v82 + 193, v85 | v84 & 0xC7FFFFFF, v84);
        }
        while ( v84 != v86 );
        v82 = (volatile signed __int32 *)Object;
        v87 = (KSPIN_LOCK *)*((_QWORD *)Object + 145);
        if ( v87 != (KSPIN_LOCK *)((char *)Object + 1160) )
        {
          v88 = v210;
          do
          {
            if ( (_BYTE)v81 == 1 && ((*((_DWORD *)v87 + 10) >> 9) & 7) < v88 )
              IoBoostThreadIoPriority(v87 - 211, v88, 0);
            PsSetIoPriorityThread((__int64)(v87 - 211), v88);
            v87 = (KSPIN_LOCK *)*v87;
          }
          while ( v87 != (KSPIN_LOCK *)(v82 + 290) );
        }
        PspUnlockProcessExclusive((__int64)v82, v83);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)Handle);
      }
      else
      {
LABEL_228:
        UserSidToken = -1073741558;
      }
      v42 = (PVOID)v82;
      goto LABEL_116;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v89 = *(_DWORD *)ProcessInformation;
      v249 = v89;
      CurrentProcess = PsGetCurrentProcess();
      v91 = KeSetExecuteOptions((__int64)CurrentProcess, v89);
      if ( v91 >= 0 && (v89 & 3) == 1 )
        MmRemoveExecuteGrants();
      return v91;
    case ProcessTlsInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 )
        return -1073741820;
      v105 = (ProcessInformationLength - 16) / 0x18uLL;
      if ( (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = (struct _KTHREAD *)P;
        v197 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = (struct _KTHREAD *)ExAllocatePoolWithQuotaTag(
                                                (POOL_TYPE)9,
                                                ProcessInformationLength,
                                                0x736C5450u);
        v197 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( PoolWithQuotaTag->Header.SignalState < 2u
        && (LockNV = PoolWithQuotaTag->Header.LockNV, (PoolWithQuotaTag->Header.LockNV & 0xFFFFFFFE) == 0)
        && (Flink_low = LODWORD(PoolWithQuotaTag->Header.WaitListHead.Flink), (_DWORD)Flink_low)
        && v105 == Flink_low )
      {
        v109 = 0;
        v196 = 0;
        do
        {
          if ( *((_DWORD *)&PoolWithQuotaTag->Header.WaitListHead.Blink + 6 * v109) )
            goto LABEL_273;
          v196 = ++v109;
        }
        while ( v109 < (unsigned int)Flink_low );
        v110 = PsGetCurrentProcess();
        Object = v110;
        v199 = ProcessBasicInformation;
        if ( (LockNV & 1) != 0 )
        {
          if ( !v110[1].ActiveProcessors.Bitmap[7] )
          {
LABEL_273:
            UserSidToken = -1073741811;
            goto LABEL_318;
          }
          v199 = ProcessQuotaLimits;
          Handle = (HANDLE)4;
          Alignment = 4;
        }
        else
        {
          Handle = (HANDLE)8;
          Alignment = 8;
        }
        v204 = (_QWORD *)v5;
        v196 = 0;
        UserSidToken = 0;
        v198 = 0;
        for ( j = 0LL; ; j = NextProcessThread )
        {
          NextProcessThread = (PVOID)PsGetNextProcessThread(Object, j);
          v112 = NextProcessThread;
          if ( !NextProcessThread || v196 >= LODWORD(PoolWithQuotaTag->Header.WaitListHead.Flink) )
            break;
          if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0
            && ExAcquireRundownProtection((PEX_RUNDOWN_REF)NextProcessThread + 213) )
          {
            v113 = v112[30];
            v215 = v113;
            if ( v199 )
            {
              v244 = v113 + 0x2000;
              v114 = (char *)(v113 + 8236);
              v214 = v113 + 8236;
              v115 = (char *)*(unsigned int *)(v113 + 8236);
            }
            else
            {
              v114 = (char *)(v113 + 88);
              v214 = v113 + 88;
              v115 = *(char **)(v113 + 88);
            }
            v213 = v115;
            if ( v115 )
            {
              if ( PoolWithQuotaTag->Header.SignalState == 1 )
              {
                if ( v115 == v114 )
                {
                  v213 = 0LL;
                }
                else
                {
                  v116 = (_QWORD)Handle * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink);
                  if ( v116 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v115) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v115[v116] > 0x7FFFFFFF0000LL || &v115[v116] < v115 )
                      MEMORY[0x7FFFFFFF0000] = 0;
                  }
                  v117 = (volatile void **)(&PoolWithQuotaTag->SListFaultAddress + 3 * v196);
                  ProbeForWrite(*v117, (_QWORD)Handle * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink), Alignment);
                  memmove((void *)*v117, v115, (_QWORD)Handle * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink));
                  _InterlockedOr(v193, 0);
                  v113 = v215;
                }
                v118 = 24LL * v196;
                LODWORD(v204[(unsigned __int64)v118 / 8 + 2]) |= 1u;
                if ( v199 )
                {
                  v244 = v113 + 0x2000;
                  v238 = *(_DWORD *)((char *)&PoolWithQuotaTag->SListFaultAddress + v118);
                  *(_DWORD *)(v113 + 8236) = v238;
                }
                else
                {
                  *(_QWORD *)(v113 + 88) = *(void **)((char *)&PoolWithQuotaTag->SListFaultAddress + v118);
                }
                v119 = (char *)&v204[3 * v196];
                *((_QWORD *)v119 + 4) = *((_QWORD *)NextProcessThread + 199);
                *((_QWORD *)v119 + 3) = v213;
                *((_DWORD *)v119 + 4) ^= 3u;
                ++v196;
              }
              else
              {
                v120 = 24LL * v196;
                LODWORD(v204[(unsigned __int64)v120 / 8 + 2]) |= 1u;
                Flink_high = HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink);
                if ( v199 )
                {
                  v122 = (unsigned __int64)&v115[4 * Flink_high];
                  if ( v122 >= 0x7FFFFFFF0000LL )
                    v122 = 0x7FFFFFFF0000LL;
                  v123 = *(unsigned int *)v122;
                  v214 = v123;
                  v124 = *(_DWORD *)((char *)&PoolWithQuotaTag->SListFaultAddress + v120);
                  v250 = v124;
                  v125 = (unsigned __int64)&v213[4 * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink)];
                  if ( v125 >= 0x7FFFFFFF0000LL )
                    v125 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v125 = v124;
                }
                else
                {
                  v126 = (unsigned __int64)&v115[8 * Flink_high];
                  if ( v126 >= 0x7FFFFFFF0000LL )
                    v126 = 0x7FFFFFFF0000LL;
                  v123 = *(_QWORD *)v126;
                  v214 = *(_QWORD *)v126;
                  v127 = (unsigned __int64)&v213[8 * HIDWORD(PoolWithQuotaTag->Header.WaitListHead.Flink)];
                  if ( v127 >= 0x7FFFFFFF0000LL )
                    v127 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v127 = *(void **)((char *)&PoolWithQuotaTag->SListFaultAddress + v120);
                }
                v128 = 3LL * v196;
                v129 = v204;
                v204[v128 + 3] = v123;
                LODWORD(v129[v128 + 2]) ^= 3u;
                ++v196;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)NextProcessThread + 213);
          }
        }
        if ( NextProcessThread )
          ObfDereferenceObjectWithTag(NextProcessThread, 0x6E457350u);
      }
      else
      {
        UserSidToken = -1073741820;
      }
LABEL_318:
      if ( PoolWithQuotaTag != (struct _KTHREAD *)P )
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return UserSidToken;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v212 = *(_DWORD *)ProcessInformation;
      DefaultPagePriority = MmGetDefaultPagePriority();
      if ( v93 > DefaultPagePriority )
        return -1073741811;
      MinWsPagePriority = MmGetMinWsPagePriority();
      if ( v95 < MinWsPagePriority )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      UserSidToken = result;
      if ( result < 0 )
        return result;
      v82 = (volatile signed __int32 *)Object;
      v96 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
        goto LABEL_228;
      v97 = (__int64)v197;
      PspLockProcessExclusive((__int64)v82, (__int64)v197);
      v98 = *((_DWORD *)v82 + 192);
      v99 = v212 << 12;
      do
      {
        v100 = v98;
        v98 = _InterlockedCompareExchange(v82 + 192, v99 | v98 & 0xFFFF8FFF, v98);
      }
      while ( v98 != v100 );
      v101 = Object;
      v102 = (char *)Object + 1160;
      v103 = (char *)*((_QWORD *)Object + 145);
      if ( v103 != (char *)Object + 1160 )
      {
        v104 = v212;
        do
        {
          PsSetPagePriorityThread((__int64)(v103 - 1688), v104);
          v103 = *(char **)v103;
        }
        while ( v103 != v102 );
      }
      PspUnlockProcessExclusive((__int64)v101, v97);
      ExReleaseRundownProtection(v96);
      v42 = v101;
      goto LABEL_116;
    case ProcessInstrumentationCallback:
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      v130 = 0;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v217 = 0LL;
        v131 = *(_QWORD *)ProcessInformation;
        *((_QWORD *)&v217 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v217 = *(_OWORD *)ProcessInformation;
        v131 = *((_QWORD *)&v217 + 1);
      }
      if ( DWORD1(v217) )
        return -1073741811;
      if ( (_DWORD)v217 != DWORD1(v217) )
        return -1073741736;
      if ( v131 != (__int64)(v131 << 16) >> 16 )
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
      v132 = PsGetCurrentProcess();
      v133 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v134 = (char *)Object;
      if ( !v133 && Object != v132 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741727;
      }
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        ObfDereferenceObjectWithTag(v134, 0x79517350u);
        return -1073741558;
      }
      if ( !*((_QWORD *)v134 + 133) )
      {
        if ( !v132[1].ActiveProcessors.Bitmap[7] )
        {
          KiStackAttachProcess((_KPROCESS *)v134, 0, (__int64)v264);
          if ( !(unsigned int)MmValidateUserCallTarget(v131, 0LL) )
            v130 = -1073741811;
          KiUnstackDetachProcess((struct _KTHREAD *)v264, 0);
          if ( v130 >= 0 )
          {
            v135 = (__int64)v197;
            PspLockProcessExclusive((__int64)v134, (__int64)v197);
            *((_QWORD *)v134 + 89) = v131;
            v136 = (volatile signed __int32 *)*((_QWORD *)v134 + 145);
            if ( v136 != (volatile signed __int32 *)(v134 + 1160) )
            {
              while ( 1 )
              {
                if ( v131 )
                  _interlockedbittestandset(v136 - 422, 0x19u);
                else
                  _interlockedbittestandreset(v136 - 422, 0x19u);
                v136 = *(volatile signed __int32 **)v136;
                if ( v136 == (volatile signed __int32 *)(v134 + 1160) )
                  break;
                v131 = *((_QWORD *)&v217 + 1);
              }
              v134 = (char *)Object;
            }
            PspUnlockProcessExclusive((__int64)v134, v135);
          }
          goto LABEL_356;
        }
LABEL_348:
        v130 = -1073741637;
        goto LABEL_356;
      }
      if ( !v132[1].ActiveProcessors.Bitmap[7] )
        goto LABEL_348;
      KiStackAttachProcess((_KPROCESS *)v134, 0, (__int64)v264);
      if ( v131 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v131, 1LL) )
      {
        v137 = 0LL;
        v138 = (__int64 *)*((_QWORD *)v134 + 133);
        if ( v138 )
          v137 = *v138;
        *(_DWORD *)(v137 + 1128) = DWORD2(v217);
      }
      else
      {
        v130 = -1073741811;
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v264, 0);
LABEL_356:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v134 + 92);
LABEL_357:
      ObfDereferenceObjectWithTag(v134, 0x79517350u);
      return v130;
    case ProcessThreadStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v139 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v253 = *(_OWORD *)ProcessInformation;
          v254 = *((_OWORD *)ProcessInformation + 1);
          v255 = *((_QWORD *)ProcessInformation + 4);
          v139 = (char *)ProcessInformation + 32;
          v5 = (__int64)&v253;
        }
        v140 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v140 = 0;
        if ( v9 )
        {
          v254 = *(_OWORD *)ProcessInformation;
          v139 = (char *)ProcessInformation + 16;
          v5 = (__int64)&v254;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v245 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
      v141 = *(_QWORD *)(v5 + 8);
      LOBYTE(HandleInformation) = 0;
      result = MiAllocateVirtualMemory(
                 -1LL,
                 v5 + 16,
                 v141,
                 &v245,
                 v140 | 0x2000u,
                 4,
                 (_DWORD)HandleInformation,
                 0x80000000,
                 0LL);
      if ( result >= 0 && v9 )
        *(_QWORD *)v139 = *(_QWORD *)(v5 + 16);
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v222 = *(_DWORD *)ProcessInformation;
      if ( (v222 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v222);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v142 = *(_DWORD *)ProcessInformation;
      v231 = v142;
      if ( (v142 & 0xFFFFFFFE) != 0 )
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
      if ( (v142 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFDFFFFF);
      goto LABEL_60;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v143 = *(_DWORD *)ProcessInformation;
      v235 = *(_DWORD *)ProcessInformation;
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
      v144 = PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken(v144, v143);
      ObfDereferenceObject(v144);
      goto LABEL_60;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v145 = *(_QWORD *)ProcessInformation;
      v260 = v145;
      if ( (v145 & 3) != 1 )
        return -1073741811;
      PsGetCurrentProcess()[1].ActiveProcessors.Bitmap[0] = v145;
      return 0;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v200 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v200 != 2 )
        return -1073741811;
      v147 = (unsigned __int8 *)PsGetCurrentProcess();
      Object = v147;
      switch ( (int)v200 )
      {
        case 1:
          if ( (HIDWORD(v200) & 0xFFFFFFF0) != 0 )
          {
            UserSidToken = -1073741811;
            goto LABEL_544;
          }
          v149 = (HIDWORD(v200) >> 1) & 1;
          if ( !v149 && (*((_DWORD *)v147 + 192) & 0x8000000) != 0 )
            goto LABEL_402;
          if ( (BYTE4(v200) & 1) == 0 && (*((_DWORD *)v147 + 192) & 0x20000) == 0 )
            goto LABEL_402;
          v150 = (HIDWORD(v200) >> 3) & 1;
          if ( !v150 && (*((_DWORD *)v147 + 192) & 0x1000000) != 0 )
            goto LABEL_402;
          if ( v150 )
          {
            if ( !v149 )
            {
              UserSidToken = -1073741776;
              goto LABEL_544;
            }
          }
          else if ( !v149 )
          {
LABEL_408:
            if ( (BYTE4(v200) & 1) != 0 )
            {
              _InterlockedAnd((volatile signed __int32 *)v147 + 192, 0xFFFDFFFF);
              v147 = (unsigned __int8 *)Object;
            }
            if ( v150 )
            {
              _InterlockedOr((volatile signed __int32 *)v147 + 192, 0x1000000u);
              v147 = (unsigned __int8 *)Object;
            }
            goto LABEL_412;
          }
          _InterlockedOr((volatile signed __int32 *)v147 + 192, 0x8000000u);
          v147 = (unsigned __int8 *)Object;
          goto LABEL_408;
        case 2:
          v153 = HIDWORD(v200);
          if ( (HIDWORD(v200) & 0xFFFFFFFC) != 0 )
          {
            UserSidToken = -1073741811;
            goto LABEL_544;
          }
          if ( (PspSystemMitigationOptions & 0xF000000000LL) == 0x6000000000LL )
          {
LABEL_543:
            UserSidToken = -1073741637;
          }
          else
          {
            if ( ProcessHandle == (HANDLE)-1LL )
            {
              v152 = 0;
              goto LABEL_448;
            }
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
            {
              UserSidToken = -1073741727;
              goto LABEL_544;
            }
            UserSidToken = ObReferenceObjectByHandleWithTag(
                             ProcessHandle,
                             0x200u,
                             (POBJECT_TYPE)PsProcessType,
                             v9,
                             0x79517350u,
                             &Object,
                             0LL);
            if ( UserSidToken >= 0 )
            {
              v152 = 1;
              v154 = PsGetCurrentProcess();
              v147 = (unsigned __int8 *)Object;
              if ( Object != v154 )
              {
                v155 = v153 & 1;
                if ( v155 && (*((_DWORD *)Object + 192) & 0x400) == 0 )
                {
                  UserSidToken = -1073741790;
                  goto LABEL_545;
                }
                if ( v155 )
                  goto LABEL_461;
                _InterlockedAnd((volatile signed __int32 *)Object + 192, 0xFFFFFBFF);
LABEL_460:
                v147 = (unsigned __int8 *)Object;
LABEL_461:
                UserSidToken = 0;
                goto LABEL_545;
              }
LABEL_448:
              v156 = v153 & 1;
              if ( (v153 & 1) == 0 && (*((_DWORD *)v147 + 192) & 0x400) != 0 )
              {
                UserSidToken = -1073741790;
                goto LABEL_545;
              }
              v157 = (v153 >> 1) & 1;
              if ( v157 && (*((_DWORD *)v147 + 192) & 0x400) != 0 && (*((_DWORD *)v147 + 435) & 0x4000) == 0 )
              {
                UserSidToken = -1073741790;
                goto LABEL_545;
              }
              if ( v156 )
              {
                _InterlockedOr((volatile signed __int32 *)v147 + 192, 0x400u);
                v147 = (unsigned __int8 *)Object;
              }
              if ( v157 )
                _InterlockedOr((volatile signed __int32 *)v147 + 435, 0x4000u);
              else
                _InterlockedAnd((volatile signed __int32 *)v147 + 435, 0xFFFFBFFF);
              goto LABEL_460;
            }
LABEL_469:
            v147 = (unsigned __int8 *)Object;
          }
LABEL_544:
          v152 = 0;
LABEL_545:
          if ( v152 != 1 )
            return UserSidToken;
          v42 = v147;
          break;
        case 3:
          if ( (HIDWORD(v200) & 0xFFFFFFFC) != 0 )
          {
            UserSidToken = -1073741811;
          }
          else if ( ((HIDWORD(v200) >> 1) & 1) != 0 || (BYTE4(v200) & 1) == 0 )
          {
            if ( ((HIDWORD(v200) >> 1) & 1) == 0 || (BYTE4(v200) & 1) != 0 )
            {
              v151 = ObReferenceProcessHandleTable(v147);
              if ( v151 )
              {
                UserSidToken = -1073741790;
                if ( (unsigned __int8)ExEnableHandleExceptions(v151, BYTE4(v200) & 1) )
                  UserSidToken = 0;
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)v147 + 92);
              }
              else
              {
                UserSidToken = -1073741558;
              }
            }
            else
            {
              UserSidToken = -1073741811;
            }
          }
          else
          {
            UserSidToken = -1073741811;
          }
          goto LABEL_544;
        case 4:
          if ( (HIDWORD(v200) & 0xFFFFFFFE) != 0 )
          {
            UserSidToken = -1073741811;
            goto LABEL_544;
          }
          if ( (BYTE4(v200) & 1) == 0 && *((int *)v147 + 192) < 0 )
          {
            UserSidToken = -1073741790;
            goto LABEL_544;
          }
          UserSidToken = 0;
          if ( (BYTE4(v200) & 1) == 0 )
            goto LABEL_544;
          _InterlockedOr((volatile signed __int32 *)v147 + 192, 0x80000000);
          v147 = (unsigned __int8 *)Object;
          v152 = 0;
          if ( (*((_DWORD *)&v197->0 + 1) & 0x40) != 0 )
            UserSidToken = -1073741431;
          goto LABEL_545;
        case 6:
          if ( (HIDWORD(v200) & 0xFFFFFFFE) != 0 )
          {
            UserSidToken = -1073741811;
            goto LABEL_544;
          }
          if ( (BYTE4(v200) & 1) == 0 && (*((_DWORD *)v147 + 192) & 0x4000000) != 0 )
          {
            UserSidToken = -1073741790;
            goto LABEL_544;
          }
          UserSidToken = 0;
          if ( (BYTE4(v200) & 1) == 0 )
            goto LABEL_544;
          _InterlockedOr((volatile signed __int32 *)v147 + 192, 0x4000000u);
          goto LABEL_469;
        case 7:
          v158 = -1073741790;
          if ( (HIDWORD(v200) & 0xFFFFFFFE) != 0 )
            v158 = -1073741811;
          UserSidToken = v158;
          goto LABEL_544;
        case 8:
          v159 = HIDWORD(v200);
          if ( (HIDWORD(v200) & 0xFFFFFFF8) != 0 )
          {
            UserSidToken = -1073741811;
            goto LABEL_544;
          }
          v160 = (HIDWORD(v200) >> 1) & 1;
          if ( (BYTE4(v200) & 1u) + v160 > 1 )
          {
            UserSidToken = -1073741811;
            goto LABEL_544;
          }
          if ( (BYTE4(v200) & 1) != 0 )
            goto LABEL_485;
          if ( v147[1736] >= 8u && v147[1737] >= 8u )
          {
            UserSidToken = -1073741790;
            goto LABEL_544;
          }
          if ( !v160 )
          {
            LOBYTE(v146) = 6;
            if ( (unsigned int)SeCompareSigningLevels(v147[1736], v146) )
            {
              LOBYTE(v146) = 6;
              if ( (unsigned int)SeCompareSigningLevels(v147[1737], v146) )
              {
                UserSidToken = -1073741790;
                goto LABEL_544;
              }
            }
          }
LABEL_485:
          UserSidToken = 0;
          if ( (BYTE4(v200) & 1) != 0 )
          {
            if ( v147[1736] < 8u )
              v147[1736] = 8;
            if ( v147[1737] < 8u )
              v147[1737] = 8;
          }
          else if ( v160 )
          {
            LOBYTE(v146) = 6;
            if ( !(unsigned int)SeCompareSigningLevels(v147[1736], v146) )
            {
              UserSidToken = -1073741790;
              goto LABEL_544;
            }
            LOBYTE(v161) = 6;
            if ( (unsigned int)SeCompareSigningLevels(v161, v147[1737]) )
              v147[1737] = 6;
          }
          if ( v159 )
          {
            _InterlockedOr((volatile signed __int32 *)v147 + 435, 0x2000u);
            v147 = (unsigned __int8 *)Object;
          }
          goto LABEL_544;
        case 9:
          if ( (HIDWORD(v200) & 0xFFFFFFFC) != 0 )
          {
            UserSidToken = -1073741811;
          }
          else if ( (BYTE4(v200) & 1) != 0 || (*((_DWORD *)v147 + 435) & 4) == 0 )
          {
            if ( (BYTE4(v200) & 1) != 0 || (BYTE4(v200) & 2) != 0 || (*((_DWORD *)v147 + 435) & 8) == 0 )
            {
              UserSidToken = 0;
              if ( (BYTE4(v200) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)v147 + 435, 4u);
                _InterlockedAnd((volatile signed __int32 *)v147 + 435, 0xFFFFFFF7);
                v147 = (unsigned __int8 *)Object;
              }
              else if ( (BYTE4(v200) & 2) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)v147 + 435, 8u);
                _InterlockedAnd((volatile signed __int32 *)v147 + 435, 0xFFFFFFFB);
                v147 = (unsigned __int8 *)Object;
              }
            }
            else
            {
              UserSidToken = -1073741790;
            }
          }
          else
          {
            UserSidToken = -1073741790;
          }
          goto LABEL_544;
        case 10:
          if ( (HIDWORD(v200) & 0xFFFFFFF8) != 0 )
          {
            UserSidToken = -1073741811;
          }
          else if ( (BYTE4(v200) & 1) == 0 && (*((_DWORD *)v147 + 435) & 0x800) != 0
                 || ((HIDWORD(v200) >> 1) & 1) == 0 && (*((_DWORD *)v147 + 435) & 0x1000) != 0 )
          {
LABEL_402:
            UserSidToken = -1073741790;
          }
          else
          {
            v162 = (HIDWORD(v200) >> 2) & 1;
            if ( v162 || (*((_DWORD *)v147 + 435) & 0x20000) == 0 )
            {
              if ( (BYTE4(v200) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)v147 + 435, 0x800u);
                v147 = (unsigned __int8 *)Object;
              }
              if ( ((HIDWORD(v200) >> 1) & 1) != 0 )
              {
                _InterlockedOr((volatile signed __int32 *)v147 + 435, 0x1000u);
                v147 = (unsigned __int8 *)Object;
              }
              if ( v162 )
              {
                _InterlockedOr((volatile signed __int32 *)v147 + 435, 0x20000u);
                v147 = (unsigned __int8 *)Object;
              }
              UserSidToken = 0;
            }
            else
            {
              UserSidToken = -1073741790;
            }
          }
          goto LABEL_544;
        case 16:
          v163 = HIDWORD(v200);
          if ( (HIDWORD(v200) & 0xFFFFFFFC) != 0 )
          {
            UserSidToken = -1073741811;
            goto LABEL_544;
          }
          if ( (BYTE4(v200) & 1) != 0 && (BYTE4(v200) & 2) != 0 )
            v163 = HIDWORD(v200) & 0xFFFFFFFD;
          RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(v147, v146, v148);
          v165 = v163 & 1;
          if ( (v163 & 1) == 0 && RedirectionTrustPolicy == 1 )
          {
            UserSidToken = -1073741790;
            goto LABEL_544;
          }
          v166 = (v163 >> 1) & 1;
          if ( v166 )
            goto LABEL_538;
          if ( v165 )
            goto LABEL_539;
          if ( RedirectionTrustPolicy == 2 )
          {
            UserSidToken = -1073741790;
          }
          else
          {
LABEL_538:
            if ( v165 )
            {
LABEL_539:
              v167 = 1LL;
            }
            else
            {
              if ( !v166 )
              {
LABEL_412:
                UserSidToken = 0;
                goto LABEL_544;
              }
              v167 = 2LL;
            }
            PspSetRedirectionTrustPolicy(v147, v167);
            UserSidToken = 0;
          }
          goto LABEL_544;
        default:
          goto LABEL_543;
      }
      goto LABEL_116;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v247 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v247) )
        return RtlRemoveDynamicFunctionTable(v247);
      else
        return RtlInsertDynamicFunctionTable(v247);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v168 = *(_DWORD *)ProcessInformation;
      v232 = v168;
      if ( (v168 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      v169 = 0;
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
        v170 = (struct _EX_RUNDOWN_REF *)Object;
        v171 = ObReferenceProcessHandleTable(Object);
        if ( v171 )
        {
          ExEnableHandleExceptions(v171, v168 & 1);
          ExReleaseRundownProtection(v170 + 92);
        }
        else
        {
          v169 = -1073741558;
        }
        ObfDereferenceObjectWithTag(v170, 0x79517350u);
        return v169;
      }
      return result;
    case ProcessRevokeFileHandles:
      v172 = 0LL;
      v229 = 0LL;
      if ( v9 != 1 )
        goto LABEL_572;
      if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v173 = *(_DWORD *)v5;
      v226 = v173;
      v174 = *(void **)(v5 + 8);
      Src = v174;
      if ( !(_WORD)v173 )
        return -1073741811;
      if ( ((unsigned __int8)v174 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v175 = (unsigned __int64)v174 + (unsigned __int16)v173;
      if ( v175 > 0x7FFFFFFF0000LL || v175 < (unsigned __int64)v174 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v176 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v226, 0x6E497350u);
      v172 = v176;
      v229 = v176;
      if ( !v176 )
        return -1073741670;
      memmove(v176, Src, (unsigned __int16)v226);
      Src = v172;
      v5 = (__int64)&v226;
      v256 = &v226;
LABEL_572:
      UserSidToken = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x200u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
      if ( UserSidToken < 0 )
      {
        if ( v172 )
          ExFreePoolWithTag(v172, 0);
        return UserSidToken;
      }
      v177 = Object;
      v178 = IoRevokeHandlesForProcess(v5, (struct _KPROCESS *)Object);
      if ( v172 )
        ExFreePoolWithTag(v172, 0);
      ObfDereferenceObjectWithTag(v177, 0x79517350u);
      return v178;
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
      v179 = *(_DWORD *)v5 != 0;
      v233 = *(_DWORD *)v5 != 0;
      v180 = PsGetCurrentProcess();
      v61 = (volatile signed __int32 *)Object;
      if ( v180 == Object )
      {
        UserSidToken = -1073741790;
      }
      else
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        {
          UserSidToken = 0;
          KeSetCheckStackExtentsProcess(v61, v179);
LABEL_116:
          ObfDereferenceObjectWithTag(v42, 0x79517350u);
          return UserSidToken;
        }
        UserSidToken = -1073741727;
      }
LABEL_180:
      v42 = (PVOID)v61;
      goto LABEL_116;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v263 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v263 != 1 || DWORD1(v263) )
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
      if ( *((_QWORD *)&v263 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 193, 0xFFFFFEFF);
      goto LABEL_60;
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
      v246 = *(_QWORD *)v5;
      v69 = PsSetProcessFaultInformation(Object, &v246);
      goto LABEL_192;
    case ProcessCommitReleaseInformation:
      if ( ProcessInformationLength != 32 )
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
      v252 = *(__m256i *)v5;
      if ( v252.m256i_i32[0] == 3 )
      {
        if ( (v252.m256i_i32[1] & 0xFFFFFFF8) != 0
          || *(_OWORD *)&v252.m256i_u64[1] != 0LL
          || ((((unsigned __int32)v252.m256i_i32[1] >> 1) & 1) != 0 || (v252.m256i_i8[4] & 4) != 0)
          && (v252.m256i_i8[4] & 1) == 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        else
        {
          if ( (((unsigned __int32)v252.m256i_i32[1] >> 1) & 1) != 0 || (v252.m256i_i8[4] & 4) != 0 )
          {
            v76 = Object;
            v78 = MmReleaseCommitForMemResetPages((_KPROCESS *)Object, ((unsigned __int32)v252.m256i_i32[1] >> 2) & 1);
          }
          else
          {
            v76 = Object;
            v78 = MmSetCommitReleaseEligibility((__int64)Object, v252.m256i_i8[4] & 1);
          }
LABEL_218:
          v79 = v78;
          ObfDereferenceObjectWithTag(v76, 0x79517350u);
          return v79;
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
      memmove(v267, ProcessInformation, ProcessInformationLength);
      v181 = (unsigned int)v4 >> 3;
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
      v69 = KeSetCpuSetsProcess((__int64)Object, v181, v267);
      goto LABEL_192;
    case ProcessSubsystemProcess:
      if ( (BYTE1(PsGetCurrentProcess()[2].Header.WaitListHead.Flink) & 1) == 0 )
        return -1073741727;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v230, 0LL);
      v70 = result;
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)v230 + 435, 0x100u);
      ObfDereferenceObject(v230);
      return v70;
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
      _InterlockedOr((volatile signed __int32 *)Object + 435, 0x400u);
      goto LABEL_60;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v182 = *(_DWORD *)ProcessInformation;
      v234 = *(_DWORD *)ProcessInformation;
      v130 = 0;
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
      v134 = (char *)Object;
      v183 = ObReferenceProcessHandleTable(Object);
      if ( v183 )
      {
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v183, v182);
        goto LABEL_356;
      }
      v130 = -1073741558;
      goto LABEL_357;
    case ProcessIumChallengeResponse:
      return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
    case ProcessChildProcessInformation:
      Sid2[0] = SeExports->SeLocalSystemSid;
      Sid2[1] = SeExports->SeLocalServiceSid;
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741790;
      v184 = PsGetCurrentProcess();
      Object = v184;
      v209 = *(_WORD *)v5;
      v185 = PsReferencePrimaryToken((PEPROCESS)v184);
      UserSidToken = SeQueryUserSidToken((__int64)v185, Sid1, 0x44u, 0LL);
      if ( UserSidToken )
        goto LABEL_632;
      UserSidToken = -1073741790;
      v186 = 0LL;
      while ( RtlEqualSid(Sid1, Sid2[v186]) != 1 )
      {
        if ( (unsigned __int64)++v186 >= 2 )
          goto LABEL_632;
      }
      UserSidToken = 0;
      if ( !SeTokenIsNoChildProcessRestricted((__int64)v185) )
      {
        if ( HIBYTE(v209) )
          _InterlockedOr((volatile signed __int32 *)v184 + 435, 0x80000u);
        else
          _InterlockedAnd((volatile signed __int32 *)v184 + 435, 0xFFF7FFFF);
        v184 = Object;
      }
LABEL_632:
      ObFastDereferenceObject((signed __int64 *)v184 + 107, (unsigned __int64)v185);
      return UserSidToken;
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v187 = *(_BYTE *)ProcessInformation;
      v207 = *(_BYTE *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
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
      if ( v187 )
        _InterlockedOr((volatile signed __int32 *)Object + 435, 0x100000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 435, 0xFFEFFFFF);
      goto LABEL_60;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
        || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
      {
        return -1073741820;
      }
      v188 = PsGetCurrentProcess();
      result = EtwCheckSecurityLoggerAccess(v188, v9);
      if ( result < 0 )
        return result;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v189) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
        v190 = (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2 ^ *(_BYTE *)v5 & 1;
      else
        v190 = *(_DWORD *)v5;
      v211 = v190;
      if ( (v190 & 0xFFFFFFF0) != 0 )
        return -1073741811;
      v191 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v192 = (volatile signed __int32 *)Object;
        _InterlockedAnd((volatile signed __int32 *)Object + 435, 0xC3FFFFFF);
        if ( (v211 & 4) != 0 )
          v191 = 0x10000000;
        if ( (v211 & 8) != 0 )
          v191 |= 0x20000000u;
        if ( (v211 & 1) != 0 )
          v191 |= 0x4000000u;
        if ( (v211 & 2) != 0 )
          v191 |= 0x8000000u;
        _InterlockedOr(v192 + 435, v191);
LABEL_60:
        v16 = Object;
LABEL_61:
        ObfDereferenceObjectWithTag(v16, 0x79517350u);
        return 0;
      }
      return result;
    default:
      return -1073741821;
  }
}
