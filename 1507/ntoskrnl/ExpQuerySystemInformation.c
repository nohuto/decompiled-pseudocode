/*
 * XREFs of ExpQuerySystemInformation @ 0x14042E880
 * Callers:
 *     NtQuerySystemInformation @ 0x14042E740 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x14053E6F0 (NtQuerySystemInformationEx.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x140007840 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryBootTimeValues @ 0x1400138A4 (KeQueryBootTimeValues.c)
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     MmQueryMemoryListInformation @ 0x140013C30 (MmQueryMemoryListInformation.c)
 *     MmGetPeakCommitment @ 0x140014360 (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x140014374 (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x140014388 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x14001439C (MmGetAvailablePages.c)
 *     ExpGetSystemProcessorInformation @ 0x1400143B0 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400144D0 (ExpGetSystemBasicInformation.c)
 *     PoGetIdleTimes @ 0x140014610 (PoGetIdleTimes.c)
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     KeQueryGroupAffinity @ 0x14002B0B4 (KeQueryGroupAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140113204 (MmQuerySystemWorkingSetInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140113FA0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14012705C (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14012BF88 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140133DD4 (ExCpuSetResourceManagerAccessCheck.c)
 *     HvlGetNestedPageProtectionFlags @ 0x14015A5A4 (HvlGetNestedPageProtectionFlags.c)
 *     PsQueryCpuQuotaInformation @ 0x1401707F4 (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1401E58B8 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1401E5CF4 (HvlQueryProcessorTopologyCount.c)
 *     VslIsSecureKernelRunning @ 0x1401EE648 (VslIsSecureKernelRunning.c)
 *     VslRetrieveMailbox @ 0x1401EE654 (VslRetrieveMailbox.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140209394 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x140232E1C (MmEnumerateBadPages.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14023F454 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x14023F734 (PpmCapturePerformanceDistribution.c)
 *     PsRootSiloInformation @ 0x140243F20 (PsRootSiloInformation.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14024FC38 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExGetBigPoolInfo @ 0x1402621DC (ExGetBigPoolInfo.c)
 *     ExpGetLookasideInformation @ 0x140262C20 (ExpGetLookasideInformation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 *     sub_140452868 @ 0x140452868 (sub_140452868.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExIsRestrictedCaller @ 0x1404CA200 (ExIsRestrictedCaller.c)
 *     ExGetPoolTagInfo @ 0x1404F44F4 (ExGetPoolTagInfo.c)
 *     ExpQueryNumaProcessorMap @ 0x1404FADD4 (ExpQueryNumaProcessorMap.c)
 *     ExpQueryModuleInformation @ 0x1404FF130 (ExpQueryModuleInformation.c)
 *     PsQueryFullProcessImageName @ 0x140510730 (PsQueryFullProcessImageName.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 *     ExGetSessionPoolTagInformation @ 0x14051C77C (ExGetSessionPoolTagInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14052DF08 (ExpGetSystemFirmwareTableInformation.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x140541798 (KeBuildLogicalProcessorSystemInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x140544AD4 (PfSnQueryPrefetcherInformation.c)
 *     MmGetPageFileInformation @ 0x140556774 (MmGetPageFileInformation.c)
 *     SeSecureBootQueryInformation @ 0x14055A5BC (SeSecureBootQueryInformation.c)
 *     ExpReadComPlusPackage @ 0x14055CD60 (ExpReadComPlusPackage.c)
 *     IoQuerySystemDeviceName @ 0x14057F754 (IoQuerySystemDeviceName.c)
 *     SmQueryStoreInformation @ 0x140583E10 (SmQueryStoreInformation.c)
 *     CmQueryRegistryQuotaInformation @ 0x140587880 (CmQueryRegistryQuotaInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14058A3D4 (ExpQueryNumaAvailableMemory.c)
 *     ExQueryBootEntropyInformation @ 0x140598048 (ExQueryBootEntropyInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1405AC3EC (ExpQueryModuleInformationEx.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1405BB274 (ExpQueryMemoryTopologyInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1405BF130 (ExpGetSystemPlatformBinary.c)
 *     HvlQueryEnlightenmentInfo @ 0x1405C1ED4 (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x1405C2010 (IoQueryVhdBootInformation.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     HvlQueryDetailInfo @ 0x1406703D4 (HvlQueryDetailInfo.c)
 *     HvlQueryDmaProtectionInfo @ 0x1406704E8 (HvlQueryDmaProtectionInfo.c)
 *     IoQueryLowPriorityIoInformation @ 0x1406741C0 (IoQueryLowPriorityIoInformation.c)
 *     KeQueryCpuSetInformation @ 0x140699500 (KeQueryCpuSetInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x140699748 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140699B5C (KeQueryKvaShadowInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x1406A0A34 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x1406AD1F8 (ObQueryRefTraceInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1406EDFF0 (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x1406EE204 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x1406EE3DC (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1406EE448 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1406EE4B4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1406EE520 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1406EE59C (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpQueryChannelInformation @ 0x1406EE700 (ExpQueryChannelInformation.c)
 *     ExpQueryLegacyDriverInformation @ 0x1406EEAF4 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaProximityNode @ 0x1406EEBDC (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406EED28 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x1406EEF38 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x1406F8EF0 (ExpCovQueryInformation.c)
 *     SeQueryHSTIResults @ 0x1407212E0 (SeQueryHSTIResults.c)
 *     VfGetVerifierInformation @ 0x140758934 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x1407589F4 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x14075E2A8 (BgkQueryBootGraphicsInformation.c)
 */

int __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        LOGICAL_PROCESSOR_RELATIONSHIP *a2,
        __int64 a3,
        ULONG64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  __int64 v6; // rdi
  PVOID v9; // rsi
  unsigned __int8 v10; // r10
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdx
  ULONG64 v14; // rcx
  unsigned __int64 v15; // rcx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // r9
  USHORT v18; // r14
  unsigned __int16 v19; // dx
  unsigned __int64 v20; // rcx
  int result; // eax
  unsigned __int64 PeakCommitment; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // r8d
  unsigned int v25; // r10d
  unsigned int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rdx
  unsigned __int64 v30; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v32; // rbx
  unsigned int i; // ebx
  __int64 v34; // rax
  __int64 v35; // r13
  int v36; // ebx
  char v37; // si
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  ULONG64 v40; // rdx
  struct _KTHREAD *v41; // rsi
  NTSTATUS v42; // ebx
  __int16 v43; // cx
  __int16 v44; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v46; // rcx
  int v47; // eax
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  struct _KTHREAD *v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // ecx
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rdx
  unsigned int v56; // edi
  int v57; // ecx
  int v58; // edx
  __int64 *v59; // r12
  __int64 v60; // r8
  __int64 *v61; // r12
  __int64 v62; // rdx
  unsigned int v63; // edx
  unsigned __int16 v64; // r8
  __int64 v65; // rax
  _DWORD *v66; // rcx
  struct _KTHREAD *v67; // rcx
  __int16 v68; // ax
  _OWORD *v69; // rcx
  __int64 v70; // rax
  struct _KTHREAD *v71; // rcx
  __int16 v72; // ax
  int SystemFirmwareTableInformation; // eax
  __int64 *v74; // r12
  __int64 v75; // rcx
  unsigned int v76; // ebx
  unsigned int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  unsigned int j; // edx
  __int64 v82; // rax
  unsigned int v83; // eax
  _DWORD *PoolWithQuotaTag; // rbx
  int v85; // eax
  int v86; // ecx
  __int64 v87; // rax
  PVOID v88; // rbx
  unsigned int v89; // ecx
  int v90; // edx
  PVOID v91; // r14
  void *v92; // rcx
  unsigned int k; // edx
  __int64 v94; // rax
  __int64 v95; // r11
  unsigned int v96; // r10d
  unsigned int v97; // r9d
  char v98; // bl
  char NestedPageProtectionFlags; // al
  NTSTATUS v100; // eax
  int SystemBasicInformation; // [rsp+30h] [rbp-3B8h]
  unsigned int Size; // [rsp+34h] [rbp-3B4h] BYREF
  unsigned __int8 Size_4; // [rsp+38h] [rbp-3B0h]
  int v104; // [rsp+3Ch] [rbp-3ACh]
  USHORT v105; // [rsp+40h] [rbp-3A8h] BYREF
  char v106; // [rsp+42h] [rbp-3A6h]
  char v107; // [rsp+43h] [rbp-3A5h]
  USHORT v108; // [rsp+44h] [rbp-3A4h]
  unsigned __int16 v109; // [rsp+48h] [rbp-3A0h]
  unsigned __int64 v110; // [rsp+80h] [rbp-368h]
  _DWORD v111[3]; // [rsp+C4h] [rbp-324h] BYREF
  unsigned int *v112; // [rsp+D0h] [rbp-318h]
  unsigned int NumberOfBytes; // [rsp+DCh] [rbp-30Ch] BYREF
  unsigned int NumberOfBytes_4; // [rsp+E0h] [rbp-308h]
  _BYTE v115[4]; // [rsp+E4h] [rbp-304h] BYREF
  int v116; // [rsp+E8h] [rbp-300h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+ECh] [rbp-2FCh]
  __int128 v118; // [rsp+F0h] [rbp-2F8h]
  __int64 v119; // [rsp+100h] [rbp-2E8h]
  unsigned int v120; // [rsp+108h] [rbp-2E0h]
  PEPROCESS Process; // [rsp+110h] [rbp-2D8h] BYREF
  unsigned int v122; // [rsp+118h] [rbp-2D0h] BYREF
  unsigned int v123; // [rsp+11Ch] [rbp-2CCh]
  __int64 v124; // [rsp+120h] [rbp-2C8h]
  int v125; // [rsp+128h] [rbp-2C0h] BYREF
  unsigned int v126; // [rsp+12Ch] [rbp-2BCh]
  HANDLE ProcessId[2]; // [rsp+130h] [rbp-2B8h]
  ULONG64 v128; // [rsp+140h] [rbp-2A8h]
  _QWORD *v129; // [rsp+148h] [rbp-2A0h]
  PVOID P; // [rsp+150h] [rbp-298h] BYREF
  PVOID v131; // [rsp+158h] [rbp-290h] BYREF
  HANDLE Handle; // [rsp+160h] [rbp-288h]
  __int64 v133; // [rsp+168h] [rbp-280h]
  _QWORD v134[2]; // [rsp+170h] [rbp-278h] BYREF
  LARGE_INTEGER Src; // [rsp+180h] [rbp-268h] BYREF
  __int64 v136; // [rsp+188h] [rbp-260h] BYREF
  __int64 v137; // [rsp+190h] [rbp-258h]
  __int64 v138; // [rsp+198h] [rbp-250h]
  __int64 v139; // [rsp+1A0h] [rbp-248h] BYREF
  __int64 v140; // [rsp+1A8h] [rbp-240h]
  unsigned __int64 v141; // [rsp+1B0h] [rbp-238h] BYREF
  unsigned int v142; // [rsp+1B8h] [rbp-230h]
  PVOID Object; // [rsp+1C0h] [rbp-228h] BYREF
  int v144; // [rsp+1C8h] [rbp-220h]
  unsigned int v145; // [rsp+1CCh] [rbp-21Ch]
  int v146; // [rsp+1D0h] [rbp-218h]
  __int64 v147; // [rsp+1D8h] [rbp-210h]
  __int64 v148; // [rsp+1E8h] [rbp-200h]
  int v149; // [rsp+1F0h] [rbp-1F8h]
  __int64 v150; // [rsp+1F8h] [rbp-1F0h] BYREF
  __int128 v151; // [rsp+200h] [rbp-1E8h] BYREF
  __int128 v152; // [rsp+210h] [rbp-1D8h]
  __int128 v153; // [rsp+220h] [rbp-1C8h]
  __int64 v154[2]; // [rsp+230h] [rbp-1B8h] BYREF
  int v155; // [rsp+240h] [rbp-1A8h]
  __int64 v156; // [rsp+248h] [rbp-1A0h]
  __int64 v157; // [rsp+250h] [rbp-198h]
  __int64 v158; // [rsp+258h] [rbp-190h]
  __int64 v159; // [rsp+260h] [rbp-188h]
  int v160; // [rsp+268h] [rbp-180h]
  int v161; // [rsp+26Ch] [rbp-17Ch]
  _BYTE v162[32]; // [rsp+270h] [rbp-178h] BYREF
  __int64 v163; // [rsp+290h] [rbp-158h]
  volatile void *v164; // [rsp+298h] [rbp-150h]
  __int64 v165; // [rsp+2A0h] [rbp-148h]
  __int64 v166; // [rsp+2A8h] [rbp-140h]
  __int64 v167; // [rsp+2B0h] [rbp-138h]
  __int64 v168; // [rsp+2B8h] [rbp-130h]
  _DWORD v169[4]; // [rsp+2C0h] [rbp-128h] BYREF
  _QWORD v170[4]; // [rsp+2D0h] [rbp-118h] BYREF
  _OWORD v171[3]; // [rsp+2F0h] [rbp-F8h] BYREF
  _BYTE v172[128]; // [rsp+320h] [rbp-C8h] BYREF

  v6 = a4;
  NumberOfBytes_4 = a3;
  v126 = a1;
  v112 = a6;
  v9 = 0LL;
  Size = 0;
  SystemBasicInformation = 0;
  v10 = KeGetCurrentThread()->gap0[10];
  Size_4 = v10;
  if ( !v10 )
  {
    v12 = Length;
    goto LABEL_36;
  }
  v11 = 4;
  if ( a1 == 35 )
  {
LABEL_19:
    v11 = 1;
    goto LABEL_20;
  }
  if ( a1 != 12 )
  {
    if ( a1 == 88
      || a1 == 5
      || a1 == 57
      || a1 == 148
      || a1 == 17
      || a1 == 95
      || a1 == 108
      || a1 == 133
      || a1 == 138
      || a1 == 139
      || a1 == 126
      || a1 == 140
      || a1 != 147 && a1 != 158 )
    {
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  v11 = 8;
LABEL_20:
  v12 = Length;
  if ( Length )
  {
    v13 = a4;
    if ( ((v11 - 1) & (unsigned int)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = Length + a4 - 1;
    if ( a4 > v14 || v14 >= MmUserProbeAddress )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
    }
    else
    {
      v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v13 = *(_BYTE *)v13;
        v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v13 != v15 );
    }
  }
  if ( a6 )
  {
    v16 = a6;
    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
  }
LABEL_36:
  Size = 0;
  RelationshipType = RelationAll;
  LODWORD(v17) = 0;
  v110 = 0LL;
  v18 = 0;
  v108 = 0;
  v19 = 0;
  v109 = 0;
  v119 = 0LL;
  Handle = 0LL;
  v20 = 0x140000000uLL;
  switch ( a1 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v108 = -1;
      LODWORD(v17) = KeNumberProcessors_0;
      v110 = (unsigned int)KeNumberProcessors_0;
      v18 = -1;
      v19 = v109;
      goto LABEL_57;
    case 8u:
    case 0x17u:
    case 0x2Au:
    case 0x3Du:
    case 0x49u:
    case 0x53u:
    case 0x64u:
    case 0x6Cu:
    case 0x8Du:
    case 0xA0u:
      if ( (unsigned int)a3 < 2 )
        return -1073741811;
      v108 = *(_WORD *)a2;
      v18 = v108;
      if ( v108 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v10 = Size_4;
      if ( v108 == 0xFFFF )
      {
        LODWORD(v17) = KeNumberProcessors_0;
        v110 = (unsigned int)KeNumberProcessors_0;
        v18 = -1;
        v19 = v109;
        a3 = NumberOfBytes_4;
      }
      else
      {
        if ( v108 >= (unsigned __int16)KiActiveGroups )
        {
          LODWORD(v17) = 0;
          v110 = 0LL;
        }
        else
        {
          v20 = (qword_1403D15E8[v108] - (((unsigned __int64)qword_1403D15E8[v108] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL;
          v17 = (0x101010101010101LL
               * ((v20
                 + (((qword_1403D15E8[v108] - (((unsigned __int64)qword_1403D15E8[v108] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((v20
                   + (((qword_1403D15E8[v108] - (((unsigned __int64)qword_1403D15E8[v108] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          v110 = v17;
          v18 = v108;
        }
        v19 = v109;
        a3 = NumberOfBytes_4;
      }
      goto LABEL_57;
    case 0x6Bu:
      if ( (unsigned int)a3 < 4 )
        return -1073741811;
      RelationshipType = *a2;
      goto LABEL_57;
    case 0x79u:
      if ( (unsigned int)a3 < 2 )
        return -1073741811;
      v109 = *(_WORD *)a2;
      v19 = v109;
      if ( v109 >= (unsigned __int16)KeNumberNodes )
        return -1073741811;
      goto LABEL_57;
    case 0xA5u:
      v119 = 0LL;
      if ( (_DWORD)a3 )
      {
        if ( (_DWORD)a3 != 8 )
          return -1073741811;
        v119 = *(_QWORD *)a2;
      }
      else
      {
        v119 = 0LL;
      }
LABEL_57:
      switch ( a1 )
      {
        case 0u:
        case 0x72u:
          if ( v12 == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(v6);
            goto LABEL_63;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( v12 >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(v6);
            goto LABEL_72;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 2u:
          if ( v12 < 0x138 )
          {
            if ( a6 )
              *a6 = 344;
            return -1073741820;
          }
          if ( v12 > 0x158 )
            v12 = 344;
          ExpQuerySystemPerformanceInformation(v17, (void *)v6, v12);
          goto LABEL_89;
        case 3u:
          if ( v12 > 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            return -1073741820;
          }
          Src.QuadPart = 0LL;
          v136 = 0LL;
          v137 = 0LL;
          v138 = 0LL;
          v139 = 0LL;
          v140 = 0LL;
          KeQueryBootTimeValues(&v136, &Src, &v139);
          v137 = ExpTimeZoneBias;
          LODWORD(v138) = ExpCurrentTimeZoneId;
          v140 = MEMORY[0xFFFFF780000003B0];
          memmove((void *)v6, &Src, v12);
LABEL_89:
          Size = v12;
          goto LABEL_637;
        case 4u:
        case 0xAu:
        case 0x19u:
        case 0x1Du:
        case 0x60u:
          return -1073741822;
        case 5u:
        case 0x39u:
        case 0x94u:
          SystemBasicInformation = ExpGetProcessInformation(v6, v12, (unsigned int)&Size, 0, a1);
          goto LABEL_637;
        case 6u:
        case 0x48u:
          return -1073741637;
        case 7u:
          if ( v12 == 24 )
          {
            *(_DWORD *)v6 = dword_14077E7D0;
            *(_DWORD *)(v6 + 4) = dword_14077E7D4;
            *(_DWORD *)(v6 + 8) = dword_14077E7D8;
            *(_DWORD *)(v6 + 12) = dword_14077E7DC;
            *(_DWORD *)(v6 + 16) = dword_14077E7E4;
            *(_DWORD *)(v6 + 20) = dword_14077E7E8;
            Size = 24;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8u:
        case 0x8Du:
          v24 = 72;
          if ( a1 == 8 )
            v24 = 48;
          NumberOfBytes_4 = v24;
          if ( v12 && !(v12 % v24) )
          {
            v25 = 0;
            v26 = 0;
            v104 = 0;
            while ( v26 < (unsigned int)v17 )
            {
              v105 = v18;
              v106 = v26;
              v107 = 0;
              if ( v18 || (_BYTE)v26 )
              {
                if ( v18 >= (unsigned __int16)KiMaximumGroups || (unsigned __int8)v26 >= 0x40u )
                {
                  v27 = 0xFFFFFFFFLL;
                }
                else
                {
                  v27 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v18 + (unsigned __int8)v26];
                  if ( !(_DWORD)v27 )
                    v27 = 0xFFFFFFFFLL;
                }
              }
              else
              {
                v27 = 0LL;
              }
              v124 = KiProcessorBlock[v27];
              if ( v12 < v24 + v25 )
                break;
              LODWORD(v112) = v24 + v25;
              PoGetIdleTimes((__int64)&v105, 0LL, (__int64)v169);
              v28 = KeMaximumIncrement;
              v29 = (_DWORD *)v124;
              *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(v124 + 23304);
              *(_QWORD *)(v6 + 8) = v28 * v169[1];
              *(_QWORD *)(v6 + 24) = v28 * (unsigned int)v29[5827];
              *(_QWORD *)(v6 + 32) = v28 * (unsigned int)v29[5828];
              *(_QWORD *)v6 = v28 * v169[0];
              *(_DWORD *)(v6 + 40) = v29[5824];
              if ( v126 == 141 )
              {
                *(_QWORD *)(v6 + 48) = v28 * (unsigned int)v29[5836];
                *(_DWORD *)(v6 + 44) = 0;
                *(_QWORD *)(v6 + 56) = 0LL;
                *(_QWORD *)(v6 + 64) = 0LL;
              }
              v24 = NumberOfBytes_4;
              v6 += NumberOfBytes_4;
              v104 = ++v26;
              LODWORD(v17) = v110;
              v25 = (unsigned int)v112;
            }
            Size = v25;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = v17 * v24;
          return -1073741820;
        case 9u:
          if ( v12 == 4 )
          {
            *(_DWORD *)v6 = NtGlobalFlag;
            goto LABEL_194;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          v47 = ExpQueryModuleInformation(v46, v6, v12, &Size);
          goto LABEL_198;
        case 0xCu:
          if ( v12 < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(v6, v12, &Size);
          goto LABEL_637;
        case 0xDu:
          if ( v12 >= 0x128 )
            goto LABEL_213;
          if ( a6 )
            *a6 = 296;
          return -1073741820;
        case 0xEu:
        case 0xFu:
        case 0x13u:
LABEL_213:
          SystemBasicInformation = -1073741822;
          goto LABEL_637;
        case 0x10u:
          if ( v12 < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (v6 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v10) )
          {
            SystemBasicInformation = ExpGetHandleInformation(v6, v12, &Size);
            goto LABEL_637;
          }
          return -1073741790;
        case 0x11u:
          if ( v12 < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(v6, v12, &Size);
          goto LABEL_637;
        case 0x12u:
        case 0x90u:
          v52 = 40;
          if ( a1 == 18 )
            v52 = 32;
          Size = v52;
          if ( v12 >= v52 )
          {
            Size = 0;
            LOBYTE(v9) = a1 == 144;
            SystemBasicInformation = MmGetPageFileInformation(v6, v12, (unsigned int)v9, &Size);
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = v52;
          return -1073741820;
        case 0x15u:
        case 0x51u:
        case 0x77u:
        case 0x78u:
          if ( v12 < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          v53 = 2;
          if ( a1 == 119 )
          {
            v54 = 3;
          }
          else
          {
            if ( a1 == 120 )
              v53 = 4;
            v54 = v53;
          }
          MmQuerySystemWorkingSetInformation(v54, v154);
          *(_QWORD *)v6 = v154[0];
          *(_QWORD *)(v6 + 8) = v154[1];
          *(_DWORD *)(v6 + 16) = v155;
          v104 = 64;
          *(_QWORD *)(v6 + 24) = v156;
          *(_QWORD *)(v6 + 32) = v157;
          *(_QWORD *)(v6 + 40) = v158;
          *(_QWORD *)(v6 + 48) = v159;
          *(_DWORD *)(v6 + 56) = v160;
          *(_DWORD *)(v6 + 60) = v161;
LABEL_63:
          Size = 64;
          goto LABEL_637;
        case 0x16u:
          if ( v12 >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(v6, v12, &Size);
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x17u:
          Size = 24 * v17;
          if ( v12 < 24 * (int)v17 )
          {
            if ( a6 )
              *a6 = 24 * v17;
            return -1073741820;
          }
          v63 = 0;
          v64 = KiMaximumGroups;
          while ( 1 )
          {
            v104 = v63;
            if ( v63 >= (unsigned int)v17 )
              break;
            v105 = v18;
            v106 = v63;
            v107 = 0;
            if ( v18 || (_BYTE)v63 )
            {
              if ( v18 >= v64 || (unsigned __int8)v63 >= 0x40u )
              {
                v65 = 0xFFFFFFFFLL;
              }
              else
              {
                v65 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v18 + (unsigned __int8)v63];
                if ( !(_DWORD)v65 )
                  v65 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v65 = 0LL;
            }
            v66 = (_DWORD *)KiProcessorBlock[v65];
            v146 = v66[2863];
            *(_DWORD *)v6 = v146;
            *(_DWORD *)(v6 + 4) = v66[2919];
            *(_DWORD *)(v6 + 8) = v66[2935];
            *(_DWORD *)(v6 + 12) = KeTimeIncrement;
            *(_DWORD *)(v6 + 16) = 0;
            *(_DWORD *)(v6 + 20) = 0;
            v6 += 24LL;
            ++v63;
          }
          goto LABEL_330;
        case 0x18u:
          if ( v12 == 20 )
          {
            *(_DWORD *)(v6 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(v6 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(v6 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(v6 + 16) = KiIdealDpcRate;
            goto LABEL_306;
          }
          if ( a6 )
            *a6 = 20;
          return -1073741820;
        case 0x1Cu:
          if ( v12 != 12 )
          {
            if ( a6 )
              *a6 = 12;
            return -1073741820;
          }
          ExAcquireTimeRefreshLock(1u);
          v36 = KeTimeAdjustment;
          v37 = KeTimeSynchronization;
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          v38 = KeGetCurrentThread();
          v39 = v38->KernelApcDisable + 1;
          v38->KernelApcDisable = v39;
          if ( !v39
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
            && !v38->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          *(_DWORD *)v6 = v36;
          *(_DWORD *)(v6 + 4) = KeMaximumIncrement;
          *(_BYTE *)(v6 + 8) = v37;
LABEL_72:
          Size = 12;
          goto LABEL_637;
        case 0x1Fu:
          SystemFirmwareTableInformation = EtwQueryPerformanceTraceInformation(v6, v12, v10, &Size);
          goto LABEL_350;
        case 0x21u:
          if ( v12 < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          Size = 16;
          v57 = 0;
          v58 = 0;
          v104 = 0;
          if ( (_DWORD)v17 )
          {
            v59 = KiProcessorBlock;
            v60 = (unsigned int)v17;
            v104 = v17;
            do
            {
              v57 += *(_DWORD *)(*v59 + 24316);
              v58 += *(_DWORD *)(*v59++ + 23348);
              --v60;
            }
            while ( v60 );
          }
          *(_DWORD *)v6 = v57;
          *(_DWORD *)(v6 + 4) = v58;
          *(_DWORD *)(v6 + 8) = 0;
          *(_DWORD *)(v6 + 12) = 0;
          goto LABEL_637;
        case 0x23u:
          if ( v12 >= 2 )
          {
            *(_BYTE *)v6 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerNotPresent;
            Size = 2;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 2;
          return -1073741820;
        case 0x24u:
          if ( v12 < 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            return -1073741820;
          }
          v104 = 0;
          if ( (_DWORD)v17 )
          {
            v61 = KiProcessorBlock;
            v62 = (unsigned int)v17;
            v104 = v17;
            do
            {
              LODWORD(v9) = *(_DWORD *)(*v61++ + 11452) + (_DWORD)v9;
              --v62;
            }
            while ( v62 );
          }
          *(_DWORD *)v6 = (_DWORD)v9;
          *(_DWORD *)(v6 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(v6 + 8) = dword_140338CE8;
          *(_DWORD *)(v6 + 12) = dword_140338CE4;
          *(_DWORD *)(v6 + 16) = dword_140338CEC;
          *(_DWORD *)(v6 + 20) = dword_140338CF0;
          *(_DWORD *)(v6 + 24) = dword_140338CF8;
          *(_DWORD *)(v6 + 28) = dword_140338CF4;
          *(_DWORD *)(v6 + 32) = dword_140338CFC;
          *(_DWORD *)(v6 + 36) = dword_140338D00;
          *(_DWORD *)(v6 + 40) = dword_140338D04;
          *(_DWORD *)(v6 + 44) = dword_140338D08;
          Size = 48;
          goto LABEL_637;
        case 0x25u:
          if ( v12 >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(v6);
            Size = 16;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x2Au:
          Size = 48 * v17;
          if ( v12 < 48 * (int)v17 )
            goto LABEL_121;
          while ( 1 )
          {
            v104 = (int)v9;
            if ( (unsigned int)v9 >= (unsigned int)v17 )
              break;
            v105 = v18;
            v106 = (char)v9;
            v107 = 0;
            PoGetIdleTimes((__int64)&v105, (__int64)v171, 0LL);
            *(_OWORD *)v6 = v171[0];
            *(_OWORD *)(v6 + 16) = v171[1];
            *(_OWORD *)(v6 + 32) = v171[2];
            v6 += 48LL;
            LODWORD(v9) = (_DWORD)v9 + 1;
            LODWORD(v17) = v110;
          }
          goto LABEL_637;
        case 0x2Bu:
          if ( v12 >= 0x18 )
          {
            Size = v12;
            SystemFirmwareTableInformation = ExpQueryLegacyDriverInformation(v6, &Size);
            goto LABEL_350;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 0x2Cu:
          if ( v12 < 0xAC )
          {
            if ( a6 )
              *a6 = 172;
            return -1073741820;
          }
          ExAcquireTimeRefreshLock(1u);
          *(_OWORD *)v6 = ExpTimeZoneInformation;
          *(_OWORD *)(v6 + 16) = *((_OWORD *)&ExpTimeZoneInformation + 1);
          *(_OWORD *)(v6 + 32) = *((_OWORD *)&ExpTimeZoneInformation + 2);
          *(_OWORD *)(v6 + 48) = *((_OWORD *)&ExpTimeZoneInformation + 3);
          *(_OWORD *)(v6 + 64) = *((_OWORD *)&ExpTimeZoneInformation + 4);
          *(_OWORD *)(v6 + 80) = *((_OWORD *)&ExpTimeZoneInformation + 5);
          *(_OWORD *)(v6 + 96) = *((_OWORD *)&ExpTimeZoneInformation + 6);
          *(_OWORD *)(v6 + 112) = *((_OWORD *)&ExpTimeZoneInformation + 7);
          *(_OWORD *)(v6 + 128) = *((_OWORD *)&ExpTimeZoneInformation + 8);
          *(_OWORD *)(v6 + 144) = *((_OWORD *)&ExpTimeZoneInformation + 9);
          *(_QWORD *)(v6 + 160) = *((_QWORD *)&ExpTimeZoneInformation + 20);
          *(_DWORD *)(v6 + 168) = *((_DWORD *)&ExpTimeZoneInformation + 42);
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          v67 = KeGetCurrentThread();
          v68 = v67->KernelApcDisable + 1;
          v67->KernelApcDisable = v68;
          if ( !v68
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v67->ApcState.ApcListHead[0].Flink != &v67->152
            && !v67->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          Size = 172;
LABEL_330:
          SystemBasicInformation = 0;
          goto LABEL_637;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(v6, v12, &Size);
          goto LABEL_637;
        case 0x32u:
          if ( v12 == 8 )
          {
            *(_QWORD *)v6 = MmSystemRangeStart;
            Size = 8;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0x33u:
          if ( v12 >= 0x80 )
            goto LABEL_349;
          if ( a6 )
            *a6 = 128;
          return -1073741820;
        case 0x35u:
          if ( v12 >= 0x10 )
          {
            v111[0] = *(_DWORD *)v6;
            v164 = *(volatile void **)(v6 + 8);
            v142 = *(_DWORD *)(v6 + 4);
            ProbeForWrite(v164, v142, 4u);
            SystemBasicInformation = ExpGetProcessInformation(
                                       (_DWORD)v164,
                                       v142,
                                       (unsigned int)&Size,
                                       (unsigned int)v111,
                                       5);
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemFirmwareTableInformation = ExpQueryNumaProcessorMap(v6, v12, &Size);
          goto LABEL_350;
        case 0x38u:
          SystemFirmwareTableInformation = PfSnQueryPrefetcherInformation(v20, v6, v12, v10, &Size);
          goto LABEL_350;
        case 0x3Au:
          if ( v12 >= 4 )
          {
            *(_DWORD *)v6 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_194;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x3Bu:
          if ( v12 != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( MEMORY[0xFFFFF780000002E0] != -1
            || (MEMORY[0xFFFFF780000002E0] = 0,
                result = ExpReadComPlusPackage(),
                SystemBasicInformation = result,
                result >= 0) )
          {
            *(_DWORD *)v6 = MEMORY[0xFFFFF780000002E0];
            goto LABEL_194;
          }
          return result;
        case 0x3Cu:
          SystemFirmwareTableInformation = ExpQueryNumaAvailableMemory(v6, v12, &Size);
          goto LABEL_350;
        case 0x3Du:
          Size = 80 * v17;
          if ( v12 < 80 * (int)v17 )
            goto LABEL_121;
          v148 = v6;
          for ( i = 0; ; ++i )
          {
            v104 = i;
            if ( i >= (unsigned int)v17 )
              break;
            v105 = v18;
            v106 = i;
            v107 = 0;
            if ( v18 || (_BYTE)i )
            {
              if ( v18 >= (unsigned __int16)KiMaximumGroups || (unsigned __int8)i >= 0x40u )
              {
                v34 = 0xFFFFFFFFLL;
              }
              else
              {
                v34 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v18 + (unsigned __int8)i];
                if ( !(_DWORD)v34 )
                  v34 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v34 = 0LL;
            }
            v35 = KiProcessorBlock[v34];
            PoGetPerfStateAndParkingInfo((__int64)&v105, (__int64)v162, 0LL, &v141);
            memset((void *)v6, 0, 0x50uLL);
            *(_QWORD *)(v6 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v35 + 23300) + *(_DWORD *)(v35 + 23304));
            *(_QWORD *)(v6 + 48) = KeMaximumIncrement
                                 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v35 + 24) + 652LL);
            if ( v162[28] )
            {
              *(_BYTE *)v6 = v162[8];
              *(_BYTE *)(v6 + 7) = v162[12];
              *(_BYTE *)(v6 + 8) = v162[16];
              *(_DWORD *)(v6 + 12) = 1;
            }
            *(_QWORD *)(v6 + 72) = v141;
            v6 += 80LL;
            v148 = v6;
            LODWORD(v17) = v110;
          }
          goto LABEL_637;
        case 0x3Eu:
          if ( v12 == 64 )
          {
            SystemBasicInformation = ExpGetSystemEmulationBasicInformation(v6);
            Size = 64;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x3Fu:
          if ( v12 >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(v6);
            Size = 12;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 0x40u:
          if ( v12 < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (v6 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v10) )
          {
            SystemBasicInformation = ExpGetHandleInformationEx(v6, v12, &Size);
            goto LABEL_637;
          }
          return -1073741790;
        case 0x41u:
          if ( v12 < 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          v104 = 0;
          if ( (_DWORD)v17 )
          {
            v74 = KiProcessorBlock;
            v75 = (unsigned int)v17;
            v104 = v17;
            do
            {
              LODWORD(v9) = *(_DWORD *)(*v74++ + 23740) + (_DWORD)v9;
              --v75;
            }
            while ( v75 );
          }
          *(_DWORD *)v6 = (_DWORD)v9;
          goto LABEL_194;
        case 0x42u:
          if ( v12 < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)v6, v12, 1, &Size);
          goto LABEL_637;
        case 0x43u:
          if ( v12 < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v111[0] = *(_DWORD *)v6;
          v165 = *(_QWORD *)(v6 + 8);
          v55 = *(unsigned int *)(v6 + 4);
          v144 = *(_DWORD *)(v6 + 4);
          if ( (v165 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation(v165, v55, &Size, v111);
          goto LABEL_637;
        case 0x44u:
          if ( v12 < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          v111[0] = *(_DWORD *)(v6 + 8);
          if ( (v6 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(v6, v12, &Size, v111);
          goto LABEL_637;
        case 0x45u:
          goto LABEL_468;
        case 0x46u:
          if ( v12 != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          *(_DWORD *)v6 = ObpObjectSecurityMode;
LABEL_194:
          Size = 4;
          goto LABEL_637;
        case 0x49u:
          SystemBasicInformation = KeBuildLogicalProcessorSystemInformation(v18, v6, v12, &Size);
          goto LABEL_637;
        case 0x4Cu:
          SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((void *)v6);
          goto LABEL_350;
        case 0x4Du:
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          v50 = KeGetCurrentThread();
          --v50->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          v47 = ExpQueryModuleInformationEx(v51, v6, v12, &Size);
LABEL_198:
          SystemBasicInformation = v47;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          v48 = KeGetCurrentThread();
          v49 = v48->KernelApcDisable + 1;
          v48->KernelApcDisable = v49;
          if ( !v49
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
            && !v48->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          goto LABEL_637;
        case 0x4Fu:
          SystemFirmwareTableInformation = PfQuerySuperfetchInformation(v20, v6, v12, v10, (__int64)&Size);
          goto LABEL_350;
        case 0x50u:
          SystemFirmwareTableInformation = MmQueryMemoryListInformation((_OWORD *)v6, v12, a3, &Size);
          goto LABEL_350;
        case 0x53u:
          Size = 8 * v17;
          if ( v12 < 8 )
            goto LABEL_522;
          if ( v12 >= 8 * (int)v17 )
          {
            v76 = v110;
          }
          else
          {
            v76 = v12 >> 3;
            SystemBasicInformation = -1073741820;
          }
          v129 = (_QWORD *)v6;
          KeFlushProcessWriteBuffers(1);
          v77 = 0;
          while ( 1 )
          {
            v104 = v77;
            if ( v77 >= v76 )
              break;
            v105 = v18;
            v106 = v77;
            v107 = 0;
            if ( v18 || (_BYTE)v77 )
            {
              if ( v18 >= (unsigned __int16)KiMaximumGroups || (unsigned __int8)v77 >= 0x40u )
              {
                v78 = 0xFFFFFFFFLL;
              }
              else
              {
                v78 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v18 + (unsigned __int8)v77];
                if ( !(_DWORD)v78 )
                  v78 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v78 = 0LL;
            }
            v79 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[v78] + 24) + 72LL);
            v80 = v129;
            *v129 = v79;
            v129 = v80 + 1;
            v77 = v104 + 1;
            v18 = v108;
          }
          goto LABEL_637;
        case 0x56u:
          SystemFirmwareTableInformation = ObQueryRefTraceInformation((void *)v6, v12);
          goto LABEL_350;
        case 0x57u:
          Size = 8;
          if ( v12 == 8 )
          {
            *(_DWORD *)v6 = MmSpecialPoolTag;
            LOBYTE(v9) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(v6 + 4) = (_DWORD)v9;
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x58u:
          Size = 24;
          if ( v12 != 24 )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_637;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)v6;
          v128 = *(_QWORD *)(v6 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v10 && WORD1(ProcessId[1]) )
          {
            if ( (v128 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v40 = v128 + WORD1(ProcessId[1]);
            if ( v40 > MmUserProbeAddress || v40 < v128 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
          v41 = KeGetCurrentThread();
          v116 = WORD1(ProcessId[1]);
          --v41->KernelApcDisable;
          v42 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v42 < 0 )
          {
            v43 = v41->KernelApcDisable + 1;
            v41->KernelApcDisable = v43;
            if ( !v43
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v41->ApcState.ApcListHead[0].Flink != &v41->152
              && !v41->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            return v42;
          }
          SystemBasicInformation = PsQueryFullProcessImageName(Process, v6 + 8, v128, &v116);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          v44 = v41->KernelApcDisable + 1;
          v41->KernelApcDisable = v44;
          if ( !v44
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v41->ApcState.ApcListHead[0].Flink != &v41->152
            && !v41->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( SystemBasicInformation == -1073741820 )
            *(_WORD *)(v6 + 10) = v116;
          goto LABEL_637;
        case 0x5Au:
          Size = 32;
          if ( v12 < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)v6 = ExpBootEnvironmentInformation;
          *(_DWORD *)(v6 + 16) = dword_1403254D0;
          if ( v12 < 0x20 )
LABEL_306:
            Size = 20;
          else
            *(_QWORD *)(v6 + 24) = qword_1403254D8;
          goto LABEL_637;
        case 0x5Bu:
          SystemFirmwareTableInformation = HvlQueryEnlightenmentInfo(v6, v12, v10, &Size);
          goto LABEL_350;
        case 0x5Cu:
          if ( v12 != 40 )
          {
            if ( a6 )
              *a6 = 40;
            return -1073741820;
          }
          SystemBasicInformation = VfGetVerifierInformationEx(v6);
          if ( SystemBasicInformation >= 0 )
            LODWORD(v9) = 40;
          Size = (unsigned int)v9;
          goto LABEL_637;
        case 0x5Fu:
          if ( !v10 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v10) )
            return -1073741790;
          if ( v12 >= 0x40 )
          {
            SystemFirmwareTableInformation = ExpCovQueryInformation(v6, v12, &Size);
            goto LABEL_350;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x62u:
          SystemFirmwareTableInformation = IoQuerySystemDeviceName(98LL, v6, v12, &Size);
          goto LABEL_350;
        case 0x63u:
          SystemFirmwareTableInformation = IoQuerySystemDeviceName(99LL, v6, v12, &Size);
          goto LABEL_350;
        case 0x64u:
          v134[1] = v18;
          v134[0] = KeQueryGroupAffinity(v18);
          v30 = (0x101010101010101LL
               * ((((v134[0] - ((v134[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v134[0] - ((v134[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                 + ((((v134[0] - ((v134[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v134[0] - ((v134[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          SystemBasicInformation = PpmCapturePerformanceDistribution(
                                     0LL,
                                     0,
                                     (unsigned int)((0x101010101010101LL
                                                   * ((((v134[0] - ((v134[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v134[0] - ((v134[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                                                     + ((((v134[0] - ((v134[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + (((v134[0] - ((v134[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                     (__int64)v134,
                                     &NumberOfBytes);
          if ( SystemBasicInformation == -1073741820 )
          {
            if ( NumberOfBytes <= v12 )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x744D5050u);
              v32 = PoolWithTag;
              v110 = (unsigned __int64)PoolWithTag;
              if ( PoolWithTag )
              {
                memset(PoolWithTag, 0, NumberOfBytes);
                SystemBasicInformation = PpmCapturePerformanceDistribution(
                                           v32,
                                           NumberOfBytes,
                                           v30,
                                           (__int64)v134,
                                           &Size);
                if ( SystemBasicInformation >= 0 )
                  memmove((void *)v6, v32, Size);
                ExFreePoolWithTag(v32, 0x744D5050u);
              }
              else
              {
                SystemBasicInformation = -1073741670;
              }
            }
            else
            {
              SystemBasicInformation = -1073741820;
              Size = NumberOfBytes;
            }
          }
          goto LABEL_637;
        case 0x65u:
          SystemFirmwareTableInformation = ExpQueryNumaProximityNode(v6, v12, &Size);
          goto LABEL_350;
        case 0x66u:
          if ( v12 < 0x1B0 )
          {
            if ( a6 )
              *a6 = 432;
            return -1073741820;
          }
          ExAcquireTimeRefreshLock(1u);
          v69 = &ExpTimeZoneInformation;
          v70 = 3LL;
          do
          {
            *(_OWORD *)v6 = *v69;
            *(_OWORD *)(v6 + 16) = v69[1];
            *(_OWORD *)(v6 + 32) = v69[2];
            *(_OWORD *)(v6 + 48) = v69[3];
            *(_OWORD *)(v6 + 64) = v69[4];
            *(_OWORD *)(v6 + 80) = v69[5];
            *(_OWORD *)(v6 + 96) = v69[6];
            v6 += 128LL;
            *(_OWORD *)(v6 - 16) = v69[7];
            v69 += 8;
            --v70;
          }
          while ( v70 );
          *(_OWORD *)v6 = *v69;
          *(_OWORD *)(v6 + 16) = v69[1];
          *(_OWORD *)(v6 + 32) = v69[2];
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          v71 = KeGetCurrentThread();
          v72 = v71->KernelApcDisable + 1;
          v71->KernelApcDisable = v72;
          if ( !v72
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v71->ApcState.ApcListHead[0].Flink != &v71->152
            && !v71->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          Size = 432;
          SystemBasicInformation = 0;
          goto LABEL_637;
        case 0x67u:
          if ( qword_14032C138 )
          {
            LOBYTE(a3) = SeILSigningPolicy != 0;
            SystemFirmwareTableInformation = qword_14032C138(v6, v12, a3, &Size);
          }
          else
          {
            SystemFirmwareTableInformation = -1073741823;
          }
          goto LABEL_350;
        case 0x69u:
          SystemBasicInformation = off_140321B18();
          if ( SystemBasicInformation != -1073741820 )
          {
LABEL_468:
            SystemBasicInformation = -1073741637;
            goto LABEL_637;
          }
          v83 = NumberOfBytes;
          if ( v12 < NumberOfBytes || !v6 )
            goto LABEL_575;
          if ( Size_4 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x6F666E49u);
            v110 = (unsigned __int64)PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              SystemBasicInformation = -1073741670;
              goto LABEL_637;
            }
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)v6;
            v110 = v6;
          }
          v85 = off_140321B18();
          SystemBasicInformation = v85;
          if ( !Size_4 )
            goto LABEL_637;
          if ( v85 >= 0 )
            memmove((void *)v6, PoolWithQuotaTag, Size);
          goto LABEL_479;
        case 0x6Au:
          SystemBasicInformation = -1073741821;
          goto LABEL_637;
        case 0x6Bu:
          Size = v12;
          SystemBasicInformation = KeQueryLogicalProcessorRelationship(
                                     0LL,
                                     RelationshipType,
                                     (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)v6,
                                     &Size);
          goto LABEL_637;
        case 0x6Cu:
          Size = 8 * v17;
          if ( v12 < 8 )
            goto LABEL_522;
          if ( v12 < 8 * (int)v17 )
          {
            LODWORD(v17) = v12 >> 3;
            SystemBasicInformation = -1073741820;
          }
          v147 = v6;
          for ( j = 0; ; ++j )
          {
            v104 = j;
            if ( j >= (unsigned int)v17 )
              break;
            v105 = v18;
            v106 = j;
            v107 = 0;
            if ( v18 || (_BYTE)j )
            {
              if ( v18 >= (unsigned __int16)KiMaximumGroups || (unsigned __int8)j >= 0x40u )
              {
                v82 = 0xFFFFFFFFLL;
              }
              else
              {
                v82 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v18 + (unsigned __int8)j];
                if ( !(_DWORD)v82 )
                  v82 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v82 = 0LL;
            }
            v167 = *(_QWORD *)(KiProcessorBlock[v82] + 23544);
            *(_QWORD *)v6 = v167;
            v6 += 8LL;
            v147 = v6;
          }
          goto LABEL_637;
        case 0x6Du:
          SystemFirmwareTableInformation = SmQueryStoreInformation(v20, v6, v12, v10, &Size);
          goto LABEL_350;
        case 0x70u:
          SystemFirmwareTableInformation = IoQueryVhdBootInformation(v20, v6, v12, &Size);
          goto LABEL_350;
        case 0x71u:
          SystemFirmwareTableInformation = PsQueryCpuQuotaInformation((_DWORD *)v6, v12, v10, &Size);
          goto LABEL_350;
        case 0x73u:
          if ( (_DWORD)a3 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_350;
          }
          Size = 8;
          if ( v12 < 8 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_350;
          }
          *(_DWORD *)v6 = DbgkErrorPortStartTimeout;
          *(_DWORD *)(v6 + 4) = DbgkErrorPortCommTimeout;
          goto LABEL_637;
        case 0x74u:
          SystemFirmwareTableInformation = IoQueryLowPriorityIoInformation(v20, v6, v12, &Size);
          goto LABEL_350;
        case 0x75u:
          Size = 888;
          if ( v12 != 888 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_350;
          }
          if ( v10 )
            return -1073741790;
          SystemFirmwareTableInformation = ExQueryBootEntropyInformation(v6);
          goto LABEL_350;
        case 0x76u:
          if ( v12 >= 0x100 )
          {
LABEL_349:
            SystemFirmwareTableInformation = VfGetVerifierInformation((void *)v6);
            goto LABEL_350;
          }
          if ( a6 )
            *a6 = 256;
          return -1073741820;
        case 0x79u:
          Size = 4 * (unsigned __int16)KeNumberNodes;
          if ( v12 < Size )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_350;
          }
          v104 = 0;
          while ( (unsigned int)v9 < (unsigned __int16)KeNumberNodes )
          {
            *(_DWORD *)(v6 + 4LL * (unsigned int)v9) = *((_DWORD *)KeNodeDistance
                                                       + (unsigned int)v9
                                                       + v19 * (unsigned __int16)KeNumberNodes);
            LODWORD(v9) = (_DWORD)v9 + 1;
            v104 = (int)v9;
            v19 = v109;
          }
          goto LABEL_637;
        case 0x7Au:
          Size = 8;
          if ( v12 != 8 || !v6 )
            goto LABEL_121;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
          v124 = (__int64)PoolWithQuotaTag;
          if ( PoolWithQuotaTag )
          {
            SystemBasicInformation = off_140321B18();
            if ( SystemBasicInformation >= 0 )
            {
              *(_DWORD *)v6 = *PoolWithQuotaTag;
              *(_DWORD *)(v6 + 4) ^= (PoolWithQuotaTag[1] ^ *(_DWORD *)(v6 + 4)) & 1;
              v86 = *(_DWORD *)(v6 + 4) ^ (PoolWithQuotaTag[1] ^ *(_DWORD *)(v6 + 4)) & 2;
              *(_DWORD *)(v6 + 4) = v86;
              *(_DWORD *)(v6 + 4) = v86 ^ (PoolWithQuotaTag[1] ^ v86) & 4;
            }
LABEL_479:
            ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
          }
          else
          {
            SystemBasicInformation = -1073741670;
          }
          goto LABEL_637;
        case 0x7Bu:
          if ( v12 != 32 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_QWORD *)&v152 = MmGetAvailablePages();
          *((_QWORD *)&v152 + 1) = MmGetTotalCommittedPages();
          *(_QWORD *)&v153 = MmGetTotalCommitLimit();
          PeakCommitment = MmGetPeakCommitment();
          if ( PeakCommitment < v23 )
            PeakCommitment = v23;
          *((_QWORD *)&v153 + 1) = PeakCommitment;
          *(_OWORD *)v6 = v152;
          *(_OWORD *)(v6 + 16) = v153;
          goto LABEL_574;
        case 0x7Cu:
          Size = 12;
          if ( v12 < 4 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_350;
          }
          v149 = *(_DWORD *)v6;
          if ( v149 == 1 )
          {
            Size = 12;
            if ( v12 >= 0xC )
            {
              *(_DWORD *)(v6 + 8) = 0;
              *(_DWORD *)(v6 + 4) = 0;
              *(_DWORD *)(v6 + 8) = 1;
              *(_DWORD *)(v6 + 4) = 1;
              if ( MEMORY[0xFFFFF780000003C6] )
                *(_DWORD *)(v6 + 4) &= ~1u;
            }
            else
            {
              SystemBasicInformation = -1073741820;
            }
          }
          else
          {
            SystemBasicInformation = -1073741637;
          }
          goto LABEL_637;
        case 0x7Du:
          if ( v12 < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v111[0] = *(_DWORD *)v6;
          v168 = *(_QWORD *)(v6 + 8);
          v56 = *(_DWORD *)(v6 + 4);
          v145 = v56;
          if ( (v168 & 7) != 0 )
            return -2147483646;
          if ( (unsigned int)ExIsRestrictedCaller(v10) )
            return -1073741790;
          SystemBasicInformation = ExGetSessionBigPoolInformation(v168, v56, &Size, v111);
          goto LABEL_637;
        case 0x7Eu:
          Size = 32;
          if ( v12 == 32 )
          {
            SystemBasicInformation = BgkQueryBootGraphicsInformation(0LL, v170);
            if ( SystemBasicInformation >= 0 )
            {
              v87 = v170[0];
              if ( Size_4 )
                v87 = 0LL;
              v170[0] = v87;
              memmove((void *)v6, v170, Size);
            }
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x80u:
          if ( (_DWORD)a3 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_350;
          }
          v90 = MmEnumerateBadPages(&v131);
          v91 = v131;
          if ( v131 )
            Size = 8 * *(_DWORD *)v131;
          else
            Size = 0;
          if ( v12 < Size )
            v90 = -1073741820;
          SystemBasicInformation = v90;
          if ( v131 )
          {
            if ( v90 >= 0 )
              memmove((void *)v6, (char *)v131 + 8, Size);
            ExFreePoolWithTag(v91, 0);
          }
          goto LABEL_637;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v10) )
            return -1073741727;
          SystemFirmwareTableInformation = ExpGetSystemPlatformBinary(v6, v12, Size_4);
          goto LABEL_350;
        case 0x86u:
          Size = 32;
          if ( v12 == 32 )
            SystemFirmwareTableInformation = sub_140452868(v20, v6);
          else
            SystemFirmwareTableInformation = -1073741820;
          goto LABEL_350;
        case 0x87u:
          Size = 8;
          if ( v12 < 8 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_350;
          }
          if ( (unsigned int)HvlQueryActiveProcessors(&v122, 0LL) )
          {
            SystemBasicInformation = -1073741637;
          }
          else
          {
            SystemBasicInformation = HvlQueryProcessorTopologyCount(0LL, &v125);
            if ( SystemBasicInformation )
            {
              SystemBasicInformation = -1073741637;
            }
            else
            {
              *(_DWORD *)v6 = v122;
              *(_DWORD *)(v6 + 4) = v125;
            }
          }
          goto LABEL_637;
        case 0x88u:
        case 0x89u:
          if ( v12 == 48 )
            return ExpGetDeviceDataInformation(a1, v6, 48LL);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x8Au:
          SystemFirmwareTableInformation = ExpQueryMemoryTopologyInformation((void *)v6);
          goto LABEL_350;
        case 0x8Bu:
          SystemFirmwareTableInformation = ExpQueryChannelInformation((void *)v6);
          goto LABEL_350;
        case 0x8Cu:
          if ( a6 || v12 >= 8 )
          {
            SystemBasicInformation = BgkQueryBootGraphicsInformation(2LL, &Size);
            if ( SystemBasicInformation >= 0 )
            {
              if ( Size )
              {
                if ( v12 >= Size )
                {
                  SystemBasicInformation = BgkQueryBootGraphicsInformation(1LL, &P);
                  if ( SystemBasicInformation >= 0 )
                  {
                    v88 = P;
                    if ( P )
                    {
                      memmove((void *)v6, P, Size);
                      ExFreePoolWithTag(v88, 0x4B494742u);
                    }
                    else
                    {
                      SystemBasicInformation = -1073741670;
                    }
                  }
                }
                else
                {
LABEL_522:
                  SystemBasicInformation = -1073741789;
                }
              }
              else
              {
                SystemBasicInformation = -1073741670;
              }
            }
          }
          else
          {
            SystemBasicInformation = -1073741811;
          }
          goto LABEL_637;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
          SystemFirmwareTableInformation = SeSecureBootQueryInformation(a1, v6, v12, &Size);
          goto LABEL_350;
        case 0x93u:
          SystemFirmwareTableInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(v6, v12, &Size);
          goto LABEL_350;
        case 0x95u:
          if ( v12 >= 3 )
          {
            *(_BYTE *)v6 = KdpBootedNodebug == 0;
            *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(v6 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            Size = 3;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 0x96u:
          if ( !ExBootLoaderMetadata )
          {
            Size = 0;
            goto LABEL_637;
          }
          v89 = *(_DWORD *)ExBootLoaderMetadata;
          Size = *(_DWORD *)ExBootLoaderMetadata;
          if ( !v6 )
            goto LABEL_637;
          if ( v12 < v89 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_350;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v10) )
            return -1073741727;
          memmove((void *)v6, (const void *)(ExBootLoaderMetadata + 4), Size);
          goto LABEL_637;
        case 0x97u:
          Size = 4;
          if ( v12 >= 4 )
          {
            *(_DWORD *)v6 = ExSoftRebootFlags;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x99u:
          if ( (_DWORD)a3 )
          {
            SystemFirmwareTableInformation = -1073741820;
LABEL_350:
            SystemBasicInformation = SystemFirmwareTableInformation;
          }
          else
          {
            Size = 32;
            if ( v12 < 0x20 )
            {
              if ( v12 < 0xC )
              {
                SystemBasicInformation = -1073741820;
              }
              else
              {
                Size = 12;
                v163 = v6;
                *(_QWORD *)v6 = PoOffCrashConfigTable;
                *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
              }
            }
            else
            {
              v166 = v6;
              *(_QWORD *)v6 = PoOffCrashConfigTable;
              *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
              *(_QWORD *)(v6 + 16) = xmmword_14032FA30;
              *(_DWORD *)(v6 + 24) = DWORD2(xmmword_14032FA30);
            }
          }
          goto LABEL_637;
        case 0x9Au:
          if ( v12 < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemProcessorFeaturesInformation(v6);
LABEL_574:
          v83 = 32;
LABEL_575:
          Size = v83;
          goto LABEL_637;
        case 0x9Cu:
          Size = 128;
          if ( v12 == 128 )
          {
            SystemBasicInformation = BgkQueryBootGraphicsInformation(3LL, v172);
            if ( SystemBasicInformation >= 0 )
              memmove((void *)v6, v172, Size);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x9Du:
          Size = WORD1(qword_1403254A8) + 24;
          if ( v12 >= Size )
          {
            v92 = (void *)(v6 + 24);
            *(_QWORD *)v6 = 0LL;
            *(_QWORD *)(v6 + 8) = 0LL;
            *(_QWORD *)(v6 + 16) = 0LL;
            *(_DWORD *)v6 = ExpManufacturingInformation;
            *(_DWORD *)(v6 + 8) = qword_1403254A8;
            if ( (_WORD)qword_1403254A8 )
            {
              *(_QWORD *)(v6 + 16) = v92;
              memmove(v92, qword_1403254B0, WORD1(qword_1403254A8));
            }
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x9Eu:
          Size = 1;
          if ( v12 )
          {
            *(_BYTE *)v6 = PoEnergyEstimationEnabled();
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_121;
        case 0x9Fu:
          SystemFirmwareTableInformation = HvlQueryDetailInfo(v6, v12, a3, &Size);
          goto LABEL_350;
        case 0xA0u:
          Size = (_DWORD)v17 << 6;
          if ( v12 < 0x40 )
            goto LABEL_522;
          if ( v12 < (_DWORD)v17 << 6 )
          {
            LODWORD(v17) = v12 >> 6;
            v110 = v12 >> 6;
            SystemBasicInformation = -1073741820;
          }
          v133 = v6;
          for ( k = 0; ; ++k )
          {
            v104 = k;
            if ( k >= (unsigned int)v17 )
              break;
            v105 = v18;
            v106 = k;
            v107 = 0;
            if ( v18 || (_BYTE)k )
            {
              if ( v18 >= (unsigned __int16)KiMaximumGroups || (unsigned __int8)k >= 0x40u )
              {
                v94 = 0xFFFFFFFFLL;
              }
              else
              {
                v94 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v18 + (unsigned __int8)k];
                if ( !(_DWORD)v94 )
                  v94 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v94 = 0LL;
            }
            v95 = KiProcessorBlock[v94];
            v96 = 0;
            v120 = 0;
            while ( v96 < 4 )
            {
              v97 = 0;
              v123 = 0;
              while ( v97 < 2 )
              {
                v6 = v133;
                *(_QWORD *)(v133 + 8 * (v97 + 2LL * v96)) = *(_QWORD *)(v95 + 8 * (v97 + 2LL * v96) + 23552);
                v123 = ++v97;
                v18 = v108;
                k = v104;
              }
              v120 = ++v96;
            }
            v6 += 64LL;
            v133 = v6;
            LODWORD(v17) = v110;
          }
          goto LABEL_637;
        case 0xA2u:
          SystemFirmwareTableInformation = SeQueryTrustedPlatformModuleInformation((_DWORD *)v6, v12, &Size);
          goto LABEL_350;
        case 0xA3u:
          if ( v12 )
          {
            *(_BYTE *)v6 = KdIgnoreUmExceptions;
            Size = 1;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 1;
          return -1073741820;
        case 0xA4u:
        case 0xACu:
          if ( qword_14032C1A8 )
            SystemFirmwareTableInformation = qword_14032C1A8(a1, v6, v12, &Size);
          else
            SystemFirmwareTableInformation = -1073741823;
          goto LABEL_350;
        case 0xA5u:
          Size = 16;
          if ( v12 == 16 )
          {
            v118 = 0uLL;
            if ( VslIsSecureKernelRunning() )
            {
              v98 = v118 | 1;
              LOBYTE(v118) = v118 | 1;
              NestedPageProtectionFlags = HvlGetNestedPageProtectionFlags();
              if ( (NestedPageProtectionFlags & 2) != 0 )
              {
                v98 |= 2u;
                LOBYTE(v118) = v98;
              }
              if ( (NestedPageProtectionFlags & 0x20) != 0 )
              {
                v98 |= 4u;
                LOBYTE(v118) = v98;
              }
              if ( (NestedPageProtectionFlags & 0x10) != 0 )
                LOBYTE(v118) = v98 | 8;
              if ( v119 )
              {
                v151 = 0uLL;
                v150 = 1LL;
                v100 = VslRetrieveMailbox(v119, &v151, 0x80u, (__int64)v115, &v150);
                if ( v100 >= 0 )
                  BYTE1(v118) |= 1u;
                if ( v100 == -1073741772 )
                  v100 = 0;
                SystemBasicInformation = v100;
              }
            }
            *(_OWORD *)v6 = v118;
          }
          else
          {
            if ( a6 )
              *a6 = 16;
LABEL_121:
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_637;
        case 0xA6u:
          SystemFirmwareTableInformation = SeQueryHSTIResults(v6, v12, &Size);
          goto LABEL_350;
        case 0xA7u:
          SystemBasicInformation = ExpQuerySingleModuleInformation(v6, v12, v10, &Size);
          goto LABEL_637;
        case 0xA9u:
          SystemFirmwareTableInformation = HvlQueryDmaProtectionInfo(v6, v12, &Size);
          goto LABEL_350;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(v10);
          if ( result < 0 )
            return result;
          Size = 168;
          if ( v12 == 168 )
            SystemFirmwareTableInformation = KeGetAffinitizedInterruptsInfo((_DWORD *)v6);
          else
            SystemFirmwareTableInformation = -1073741820;
          goto LABEL_350;
        case 0xAEu:
          SystemFirmwareTableInformation = PsRootSiloInformation((_DWORD *)v6, v12, (int *)&Size);
          goto LABEL_350;
        case 0xAFu:
          if ( Handle )
          {
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v10, &Object, 0LL);
            v9 = Object;
            Process = (PEPROCESS)Object;
            if ( result < 0 )
              return result;
          }
          else
          {
            Process = 0LL;
          }
          SystemBasicInformation = KeQueryCpuSetInformation((void *)v6);
          if ( v9 )
            ObfDereferenceObject(v9);
LABEL_637:
          if ( a6 )
            *a6 = Size;
          result = SystemBasicInformation;
          break;
        case 0xC4u:
          SystemFirmwareTableInformation = KeQueryKvaShadowInformation(v6, v12, &Size);
          goto LABEL_350;
        case 0xC9u:
          SystemFirmwareTableInformation = KeQuerySpeculationControlInformation(v6, v12, &Size);
          goto LABEL_350;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
      if ( (_DWORD)a3 != 8 )
        return -1073741811;
      Handle = *(HANDLE *)a2;
      goto LABEL_57;
    default:
      goto LABEL_57;
  }
}
