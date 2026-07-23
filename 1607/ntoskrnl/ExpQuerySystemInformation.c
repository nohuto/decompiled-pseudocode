/*
 * XREFs of ExpQuerySystemInformation @ 0x1404144E0
 * Callers:
 *     NtQuerySystemInformation @ 0x1404143A0 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x1404B30E0 (NtQuerySystemInformationEx.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140005088 (KeQueryActiveGroupCount.c)
 *     PoGetIdleTimes @ 0x14000D734 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x14000D810 (KeGetProcessorIndexFromNumber.c)
 *     ExpGetSystemBasicInformation @ 0x14000EEC4 (ExpGetSystemBasicInformation.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MmGetAvailablePages @ 0x14006D13C (MmGetAvailablePages.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14007D310 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14008777C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x1400877CC (ExpGetSystemProcessorInformation.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x14009CF00 (KeGetRecommendedSharedDataAlignment.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1400A7798 (ExpGetSystemEmulationBasicInformation.c)
 *     MmGetTotalCommittedPages @ 0x1400A9660 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1400A9674 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x1400A9688 (MmGetPeakCommitment.c)
 *     MmGetResidentAvailablePages @ 0x1400A969C (MmGetResidentAvailablePages.c)
 *     KeQueryBootTimeValues @ 0x1400AB77C (KeQueryBootTimeValues.c)
 *     MmGetSharedCommit @ 0x1400ABE54 (MmGetSharedCommit.c)
 *     VslIsSecureKernelRunning @ 0x1400B3DC0 (VslIsSecureKernelRunning.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400BE230 (MmQuerySystemWorkingSetInformation.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     PoEnergyEstimationEnabled @ 0x1400EFEA4 (PoEnergyEstimationEnabled.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400F4FB0 (PsWow64GetSupportedArchitectures.c)
 *     KeQueryGroupAffinity @ 0x1400F8D14 (KeQueryGroupAffinity.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140110550 (ExCpuSetResourceManagerAccessCheck.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D6B0 (VslGetNestedPageProtectionFlags.c)
 *     PsQueryCpuQuotaInformation @ 0x14014CE1C (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1401BAD8C (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1401BAF24 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x1401C2A0C (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401C2C90 (VslQuerySecureKernelProfileInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401DA294 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x1401FE774 (MmEnumerateBadPages.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A0E4 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x14020A2E4 (PpmCapturePerformanceDistribution.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14021A610 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x14022C318 (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x14022CBB0 (ExGetBigPoolInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SmQueryStoreInformation @ 0x1403E4980 (SmQueryStoreInformation.c)
 *     ExpQueryNumaProcessorMap @ 0x1403E5F6C (ExpQueryNumaProcessorMap.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EBEE0 (ExAcquireTimeRefreshLock.c)
 *     ExpQueryModuleInformation @ 0x1403F6080 (ExpQueryModuleInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x140499B84 (ExGetSessionPoolTagInformation.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1404AA364 (ExpGetSystemFirmwareTableInformation.c)
 *     ExGetPoolTagInfo @ 0x1404AF594 (ExGetPoolTagInfo.c)
 *     MmGetPageFileInformation @ 0x1404B2420 (MmGetPageFileInformation.c)
 *     ExHandleSPCall2 @ 0x1404B35D4 (ExHandleSPCall2.c)
 *     PsQueryFullProcessImageName @ 0x1404B43B0 (PsQueryFullProcessImageName.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1404B70E4 (KeBuildLogicalProcessorSystemInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x1404BBF24 (PfSnQueryPrefetcherInformation.c)
 *     SeSecureBootQueryInformation @ 0x1404CEEBC (SeSecureBootQueryInformation.c)
 *     ExpReadComPlusPackage @ 0x1404D312C (ExpReadComPlusPackage.c)
 *     ExIsRestrictedCaller @ 0x1404D3730 (ExIsRestrictedCaller.c)
 *     IoQuerySystemDeviceName @ 0x14054235C (IoQuerySystemDeviceName.c)
 *     IopRetrieveSystemDeviceName @ 0x14054239C (IopRetrieveSystemDeviceName.c)
 *     CmQueryRegistryQuotaInformation @ 0x14054C39C (CmQueryRegistryQuotaInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14054C624 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryModuleInformationEx @ 0x1405643D0 (ExpQueryModuleInformationEx.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140577474 (ExpQueryMemoryTopologyInformation.c)
 *     KeQueryCpuSetInformation @ 0x140578C68 (KeQueryCpuSetInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     ExpQueryInterruptSteeringInformation @ 0x14057D704 (ExpQueryInterruptSteeringInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x140580740 (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x140580878 (IoQueryVhdBootInformation.c)
 *     ExQueryBootEntropyInformation @ 0x1405813E8 (ExQueryBootEntropyInformation.c)
 *     SeQueryHSTIResults @ 0x140581B14 (SeQueryHSTIResults.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 *     HvlQueryDetailInfo @ 0x140620274 (HvlQueryDetailInfo.c)
 *     HvlQueryDmaProtectionInfo @ 0x140620388 (HvlQueryDmaProtectionInfo.c)
 *     IoQueryLowPriorityIoInformation @ 0x140623960 (IoQueryLowPriorityIoInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140650010 (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x140650154 (KeQuerySpeculationControlInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x140657328 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x14066746C (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x14067E15C (PsRootSiloInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB16C (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x1406AB380 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x1406AB564 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1406AB5D0 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1406AB63C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1406AB6A8 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1406AB724 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpQueryChannelInformation @ 0x1406AB888 (ExpQueryChannelInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1406AB9A4 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1406ABE5C (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaProximityNode @ 0x1406ABF44 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406AC090 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x1406AC2A0 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x1406B72F0 (ExpCovQueryInformation.c)
 *     VfGetVerifierInformation @ 0x140720F40 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x140721000 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x140726E70 (BgkQueryBootGraphicsInformation.c)
 */

int __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        LOGICAL_PROCESSOR_RELATIONSHIP *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  __int64 v6; // rdi
  unsigned int v7; // r11d
  unsigned int v9; // r14d
  PVOID v10; // rbx
  unsigned __int8 v11; // r10
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int16 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r8
  USHORT v21; // cx
  ULONG ActiveProcessorCount; // eax
  int result; // eax
  int SystemBasicInformation; // eax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  int LogicalProcessorRelationship; // esi
  unsigned __int64 PeakCommitment; // rax
  unsigned __int64 v32; // rcx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // esi
  int v36; // r8d
  __int64 v37; // rcx
  _DWORD *v38; // rdx
  unsigned __int64 v39; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v41; // rbx
  __int64 v42; // rsi
  int v43; // ebx
  char v44; // si
  unsigned __int64 v45; // rdx
  struct _KTHREAD *v46; // r14
  __int64 v47; // rdx
  NTSTATUS v48; // ebx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v55; // rcx
  int ModuleInformation; // eax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  struct _KTHREAD *v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // ecx
  int v63; // ecx
  int v64; // eax
  __int64 v65; // rdx
  unsigned int v66; // edi
  int v67; // ecx
  int v68; // edx
  __int64 *v69; // r13
  __int64 v70; // r8
  __int64 *v71; // r13
  __int64 v72; // rdx
  unsigned int i; // esi
  _DWORD *v74; // rdx
  _OWORD *v75; // rcx
  __int64 v76; // rax
  __int64 *v77; // r13
  __int64 v78; // rcx
  unsigned int v79; // r14d
  __int64 v80; // rcx
  _QWORD *v81; // rax
  unsigned int v82; // eax
  struct _KPROCESS *PoolWithQuotaTag; // rbx
  int v84; // eax
  int v85; // ecx
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  PVOID v89; // rbx
  unsigned int v90; // ecx
  PVOID v91; // r12
  void *v92; // rcx
  __int64 v93; // r11
  unsigned int v94; // r10d
  unsigned int v95; // r9d
  unsigned __int8 v96; // bl
  char v97; // bl
  char NestedPageProtectionFlags; // al
  int CpuSetInformation; // eax
  struct _KPROCESS *v100; // rax
  __int64 v101; // rax
  size_t Size; // [rsp+30h] [rbp-358h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-350h] BYREF
  unsigned __int8 v104; // [rsp+3Ch] [rbp-34Ch]
  _BYTE v105[3]; // [rsp+3Dh] [rbp-34Bh] BYREF
  ULONG v106; // [rsp+40h] [rbp-348h]
  unsigned int v107; // [rsp+44h] [rbp-344h]
  int v108; // [rsp+48h] [rbp-340h] BYREF
  unsigned __int16 v109; // [rsp+4Ch] [rbp-33Ch]
  USHORT v110; // [rsp+50h] [rbp-338h]
  unsigned int *v111; // [rsp+58h] [rbp-330h]
  LOGICAL_PROCESSOR_RELATIONSHIP *v112; // [rsp+60h] [rbp-328h]
  unsigned int NumberOfBytes; // [rsp+68h] [rbp-320h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+6Ch] [rbp-31Ch]
  int v115; // [rsp+70h] [rbp-318h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+74h] [rbp-314h]
  __int128 v117; // [rsp+78h] [rbp-310h]
  PVOID v118; // [rsp+88h] [rbp-300h] BYREF
  unsigned int v119; // [rsp+90h] [rbp-2F8h]
  unsigned int v120; // [rsp+94h] [rbp-2F4h] BYREF
  int v121; // [rsp+98h] [rbp-2F0h] BYREF
  unsigned int v122; // [rsp+9Ch] [rbp-2ECh]
  unsigned int v123; // [rsp+A0h] [rbp-2E8h]
  PEPROCESS Process; // [rsp+A8h] [rbp-2E0h] BYREF
  __int64 v125; // [rsp+B0h] [rbp-2D8h]
  HANDLE Handle; // [rsp+B8h] [rbp-2D0h]
  HANDLE ProcessId[2]; // [rsp+C0h] [rbp-2C8h]
  unsigned __int64 v128; // [rsp+D0h] [rbp-2B8h]
  _QWORD *v129; // [rsp+D8h] [rbp-2B0h]
  PVOID P; // [rsp+E0h] [rbp-2A8h] BYREF
  __int64 v131; // [rsp+E8h] [rbp-2A0h]
  __int64 v132; // [rsp+F0h] [rbp-298h]
  _QWORD v133[2]; // [rsp+F8h] [rbp-290h] BYREF
  LARGE_INTEGER Src; // [rsp+108h] [rbp-280h] BYREF
  __int64 v135; // [rsp+110h] [rbp-278h] BYREF
  __int64 v136; // [rsp+118h] [rbp-270h]
  __int64 v137; // [rsp+120h] [rbp-268h]
  __int64 v138; // [rsp+128h] [rbp-260h] BYREF
  __int64 v139; // [rsp+130h] [rbp-258h]
  unsigned int v140; // [rsp+138h] [rbp-250h]
  int v141; // [rsp+13Ch] [rbp-24Ch]
  unsigned __int64 v142; // [rsp+148h] [rbp-240h] BYREF
  unsigned int v143; // [rsp+150h] [rbp-238h]
  PVOID Object; // [rsp+158h] [rbp-230h] BYREF
  PVOID v145; // [rsp+160h] [rbp-228h] BYREF
  int v146; // [rsp+168h] [rbp-220h]
  __int128 v147; // [rsp+170h] [rbp-218h]
  __int128 v148; // [rsp+180h] [rbp-208h]
  __int128 v149; // [rsp+190h] [rbp-1F8h]
  unsigned __int64 v150; // [rsp+1A0h] [rbp-1E8h]
  __int128 v151; // [rsp+1A8h] [rbp-1E0h]
  __int128 v152; // [rsp+1B8h] [rbp-1D0h]
  int v153; // [rsp+1C8h] [rbp-1C0h] BYREF
  char v154; // [rsp+1D0h] [rbp-1B8h]
  char v155; // [rsp+1D4h] [rbp-1B4h]
  char v156; // [rsp+1D8h] [rbp-1B0h]
  char v157; // [rsp+1E4h] [rbp-1A4h]
  __int64 v158[2]; // [rsp+1F0h] [rbp-198h] BYREF
  int v159; // [rsp+200h] [rbp-188h]
  __int64 v160; // [rsp+208h] [rbp-180h]
  __int64 v161; // [rsp+210h] [rbp-178h]
  __int64 v162; // [rsp+218h] [rbp-170h]
  __int64 v163; // [rsp+220h] [rbp-168h]
  int v164; // [rsp+228h] [rbp-160h]
  int v165; // [rsp+22Ch] [rbp-15Ch]
  __int64 v166; // [rsp+230h] [rbp-158h]
  volatile void *v167; // [rsp+238h] [rbp-150h]
  __int64 v168; // [rsp+240h] [rbp-148h]
  __int64 v169; // [rsp+248h] [rbp-140h]
  __int64 v170; // [rsp+258h] [rbp-130h]
  _DWORD v171[4]; // [rsp+260h] [rbp-128h] BYREF
  _QWORD v172[4]; // [rsp+270h] [rbp-118h] BYREF
  _OWORD v173[3]; // [rsp+290h] [rbp-F8h] BYREF
  _BYTE v174[128]; // [rsp+2C0h] [rbp-C8h] BYREF

  v6 = a4;
  v7 = a3;
  NumberOfBytes_4 = a3;
  v112 = a2;
  v119 = a1;
  v9 = Length;
  v111 = a6;
  v10 = 0LL;
  Size = 0LL;
  v11 = KeGetCurrentThread()->gap0[10];
  v104 = v11;
  if ( v11 )
  {
    v12 = 4;
    if ( a1 != 35 )
    {
      if ( a1 == 12 )
      {
        v12 = 8;
LABEL_20:
        if ( Length )
        {
          v13 = a4;
          if ( ((v12 - 1) & (unsigned int)a4) != 0 )
            ExRaiseDatatypeMisalignment();
          v14 = a4 + Length - 1LL;
          if ( a4 > v14 || v14 >= 0x7FFFFFFF0000LL )
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
          v16 = (__int64)a6;
          if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
            v16 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v16 = *(_DWORD *)v16;
        }
        goto LABEL_34;
      }
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
    }
    v12 = 1;
    goto LABEL_20;
  }
LABEL_34:
  LODWORD(Size) = 0;
  RelationshipType = RelationAll;
  v17 = 0LL;
  v106 = 0;
  v18 = 0;
  v110 = 0;
  v19 = 0LL;
  v109 = 0;
  v125 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  v132 = 0LL;
  switch ( a1 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v18 = -1;
      v110 = -1;
      v21 = -1;
      goto LABEL_36;
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
      if ( v7 < 2 )
        return -1073741811;
      v110 = *(_WORD *)v112;
      v18 = v110;
      if ( v110 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v21 = v110;
LABEL_36:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v21);
      v17 = ActiveProcessorCount;
      v106 = ActiveProcessorCount;
      v11 = v104;
      v19 = v109;
      v7 = NumberOfBytes_4;
      v20 = 0LL;
      goto LABEL_53;
    case 0x6Bu:
      if ( v7 < 4 )
        return -1073741811;
      RelationshipType = *v112;
      goto LABEL_53;
    case 0x79u:
      if ( v7 < 2 )
        return -1073741811;
      v109 = *(_WORD *)v112;
      v19 = v109;
      if ( v109 >= (unsigned __int16)KeNumberNodes )
        return -1073741811;
      goto LABEL_53;
    case 0xA5u:
      if ( v7 )
      {
        if ( v7 != 8 )
          return -1073741811;
        v125 = *(_QWORD *)v112;
      }
      else
      {
        v125 = 0LL;
      }
LABEL_53:
      switch ( a1 )
      {
        case 0u:
        case 0x72u:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(v6);
            goto LABEL_583;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(v6);
            LODWORD(Size) = 12;
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 2u:
          if ( Length < 0x138 )
          {
            if ( a6 )
              *a6 = 344;
            return -1073741820;
          }
          if ( Length > 0x158 )
            v9 = 344;
          ExpQuerySystemPerformanceInformation(v17, (void *)v6, v9);
          goto LABEL_94;
        case 3u:
          if ( Length > 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            return -1073741820;
          }
          Src.QuadPart = 0LL;
          v135 = 0LL;
          v136 = 0LL;
          v137 = 0LL;
          v138 = 0LL;
          v139 = 0LL;
          KeQueryBootTimeValues(&v135, &Src, &v138);
          v136 = ExpTimeZoneBias;
          LODWORD(v137) = ExpCurrentTimeZoneId;
          v139 = MEMORY[0xFFFFF780000003B0];
          memmove((void *)v6, &Src, Length);
LABEL_94:
          LODWORD(Size) = v9;
          LogicalProcessorRelationship = HIDWORD(Size);
          goto LABEL_585;
        case 4u:
        case 0xAu:
        case 0x19u:
        case 0x1Du:
        case 0x60u:
          return -1073741822;
        case 5u:
        case 0x39u:
        case 0x94u:
          SystemBasicInformation = ExpGetProcessInformation(v6, Length, (unsigned int)&Size, 0, a1);
          goto LABEL_584;
        case 6u:
        case 0x48u:
          return -1073741637;
        case 7u:
          if ( Length == 24 )
          {
            *(_DWORD *)v6 = dword_140747810;
            *(_DWORD *)(v6 + 4) = dword_140747814;
            *(_DWORD *)(v6 + 8) = dword_140747818;
            *(_DWORD *)(v6 + 12) = dword_14074781C;
            *(_DWORD *)(v6 + 16) = dword_140747824;
            *(_DWORD *)(v6 + 20) = dword_140747828;
            LODWORD(Size) = 24;
            LogicalProcessorRelationship = HIDWORD(Size);
            goto LABEL_585;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8u:
        case 0x8Du:
          v33 = 72;
          if ( a1 == 8 )
            v33 = 48;
          NumberOfBytes_4 = v33;
          if ( Length && !(Length % v33) )
          {
            v108 = 0;
            v34 = 0;
            v107 = 0;
            v35 = v119;
            while ( v34 < (unsigned int)v17 )
            {
              ProcNumber.Group = v18;
              ProcNumber.Number = v34;
              ProcNumber.Reserved = 0;
              v118 = (PVOID)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v36 = v108;
              if ( Length < v108 + NumberOfBytes_4 )
                goto LABEL_106;
              v108 += NumberOfBytes_4;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)v171);
              v37 = KeMaximumIncrement;
              v38 = v118;
              *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)v118 + 5826);
              *(_QWORD *)(v6 + 8) = v37 * v171[1];
              *(_QWORD *)(v6 + 24) = v37 * (unsigned int)v38[5827];
              *(_QWORD *)(v6 + 32) = v37 * (unsigned int)v38[5828];
              *(_QWORD *)v6 = v37 * v171[0];
              *(_DWORD *)(v6 + 40) = v38[5824];
              if ( v35 == 141 )
              {
                *(_QWORD *)(v6 + 48) = v37 * (unsigned int)v38[5836];
                *(_DWORD *)(v6 + 44) = 0;
                *(_QWORD *)(v6 + 56) = 0LL;
                *(_QWORD *)(v6 + 64) = 0LL;
              }
              v6 += NumberOfBytes_4;
              v34 = ++v107;
              LODWORD(v17) = v106;
            }
            v36 = v108;
LABEL_106:
            LODWORD(Size) = v36;
            LogicalProcessorRelationship = HIDWORD(Size);
            goto LABEL_585;
          }
          if ( a6 )
            *a6 = v17 * v33;
          return -1073741820;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)v6 = NtGlobalFlag;
            goto LABEL_169;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( (unsigned int)ExIsRestrictedCaller(v11, v19, v20, v17) )
            return -1073741790;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformation(v55, (_DWORD *)v6, Length, (unsigned int *)&Size);
          goto LABEL_173;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v11, v19, v20, v17) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(v6, Length, &Size);
          goto LABEL_584;
        case 0xDu:
          if ( Length >= 0x128 )
            goto LABEL_185;
          if ( a6 )
            *a6 = 296;
          return -1073741820;
        case 0xEu:
        case 0xFu:
        case 0x13u:
LABEL_185:
          LogicalProcessorRelationship = -1073741822;
          goto LABEL_585;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (v6 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v11, v19, v20, v17) )
          {
            SystemBasicInformation = ExpGetHandleInformation(v6, Length, &Size);
            goto LABEL_584;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v11, v19, v20, v17) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(v6, Length, &Size);
          goto LABEL_584;
        case 0x12u:
        case 0x90u:
          v62 = 40;
          if ( a1 == 18 )
            v62 = 32;
          LODWORD(Size) = v62;
          if ( Length >= v62 )
          {
            LODWORD(Size) = 0;
            LOBYTE(v10) = a1 == 144;
            SystemBasicInformation = MmGetPageFileInformation(v6, Length, (unsigned int)v10, &Size);
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = v62;
          return -1073741820;
        case 0x15u:
        case 0x51u:
        case 0x77u:
        case 0x78u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          v63 = 2;
          if ( a1 == 119 )
          {
            v64 = 3;
          }
          else
          {
            if ( a1 == 120 )
              v63 = 4;
            v64 = v63;
          }
          MmQuerySystemWorkingSetInformation(v64, v158);
          *(_QWORD *)v6 = v158[0];
          *(_QWORD *)(v6 + 8) = v158[1];
          *(_DWORD *)(v6 + 16) = v159;
          *(_QWORD *)(v6 + 24) = v160;
          *(_QWORD *)(v6 + 32) = v161;
          *(_QWORD *)(v6 + 40) = v162;
          *(_QWORD *)(v6 + 48) = v163;
          *(_DWORD *)(v6 + 56) = v164;
          *(_DWORD *)(v6 + 60) = v165;
          LODWORD(Size) = 64;
          goto LABEL_81;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(v6, Length, &Size, v17);
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x17u:
          LODWORD(Size) = 24 * v17;
          if ( Length >= 24 * (int)v17 )
          {
            for ( i = 0; i < (unsigned int)v17; ++i )
            {
              ProcNumber.Group = v18;
              ProcNumber.Number = i;
              ProcNumber.Reserved = 0;
              v74 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              *(_DWORD *)v6 = v74[2863];
              *(_DWORD *)(v6 + 4) = v74[2919];
              *(_DWORD *)(v6 + 8) = v74[2935];
              *(_DWORD *)(v6 + 12) = KeTimeIncrement;
              *(_DWORD *)(v6 + 16) = 0;
              *(_DWORD *)(v6 + 20) = 0;
              v6 += 24LL;
              LODWORD(v17) = v106;
            }
            goto LABEL_289;
          }
          if ( a6 )
            *a6 = 24 * v17;
          return -1073741820;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(v6 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(v6 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(v6 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(v6 + 16) = KiIdealDpcRate;
            goto LABEL_278;
          }
          if ( a6 )
            *a6 = 20;
          return -1073741820;
        case 0x1Cu:
          if ( Length == 12 )
          {
            ExAcquireTimeRefreshLock(1u);
            v43 = KeTimeAdjustment;
            v44 = KeTimeSynchronization;
            ExReleaseResourceLite(&ExpTimeRefreshLock);
            KeLeaveCriticalRegion();
            *(_DWORD *)v6 = v43;
            *(_DWORD *)(v6 + 4) = KeMaximumIncrement;
            *(_BYTE *)(v6 + 8) = v44;
            LODWORD(Size) = 12;
            LogicalProcessorRelationship = HIDWORD(Size);
            goto LABEL_585;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 0x1Fu:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(v6, Length, v11, &Size);
          goto LABEL_584;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          LODWORD(Size) = 16;
          v67 = 0;
          v68 = 0;
          if ( (_DWORD)v17 )
          {
            v69 = KiProcessorBlock;
            v70 = (unsigned int)v17;
            do
            {
              v67 += *(_DWORD *)(*v69 + 24316);
              v68 += *(_DWORD *)(*v69++ + 23348);
              --v70;
            }
            while ( v70 );
          }
          *(_DWORD *)v6 = v67;
          *(_DWORD *)(v6 + 4) = v68;
          *(_DWORD *)(v6 + 8) = 0;
          *(_DWORD *)(v6 + 12) = 0;
          goto LABEL_81;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)v6 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerNotPresent;
            LODWORD(Size) = 2;
            goto LABEL_81;
          }
          if ( a6 )
            *a6 = 2;
          return -1073741820;
        case 0x24u:
          if ( Length < 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            return -1073741820;
          }
          if ( (_DWORD)v17 )
          {
            v71 = KiProcessorBlock;
            v72 = (unsigned int)v17;
            do
            {
              LODWORD(v10) = *(_DWORD *)(*v71++ + 11452) + (_DWORD)v10;
              --v72;
            }
            while ( v72 );
          }
          *(_DWORD *)v6 = (_DWORD)v10;
          *(_DWORD *)(v6 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(v6 + 8) = dword_14030E288;
          *(_DWORD *)(v6 + 12) = dword_14030E284;
          *(_DWORD *)(v6 + 16) = dword_14030E28C;
          *(_DWORD *)(v6 + 20) = dword_14030E290;
          *(_DWORD *)(v6 + 24) = dword_14030E298;
          *(_DWORD *)(v6 + 28) = dword_14030E294;
          *(_DWORD *)(v6 + 32) = dword_14030E29C;
          *(_DWORD *)(v6 + 36) = dword_14030E2A0;
          *(_DWORD *)(v6 + 40) = dword_14030E2A4;
          *(_DWORD *)(v6 + 44) = dword_14030E2A8;
          LODWORD(Size) = 48;
          goto LABEL_81;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(v6, v19, v20, v17);
            LODWORD(Size) = 16;
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x2Au:
          LODWORD(Size) = 48 * v17;
          if ( Length < 48 * (int)v17 )
            goto LABEL_118;
          while ( (unsigned int)v10 < (unsigned int)v17 )
          {
            ProcNumber.Group = v18;
            ProcNumber.Number = (unsigned __int8)v10;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)v173, 0LL);
            *(_OWORD *)v6 = v173[0];
            *(_OWORD *)(v6 + 16) = v173[1];
            *(_OWORD *)(v6 + 32) = v173[2];
            v6 += 48LL;
            LODWORD(v10) = (_DWORD)v10 + 1;
            LODWORD(v17) = v106;
          }
          goto LABEL_81;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            LODWORD(Size) = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(v6, &Size, v20, v17);
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 0x2Cu:
          if ( Length < 0xAC )
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
          KeLeaveCriticalRegion();
          LODWORD(Size) = 172;
LABEL_289:
          LogicalProcessorRelationship = 0;
          goto LABEL_585;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(v6, Length, &Size);
          goto LABEL_584;
        case 0x32u:
          if ( Length == 8 )
          {
            *(_QWORD *)v6 = 0xFFFF800000000000uLL;
            LODWORD(Size) = 8;
            goto LABEL_81;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0x33u:
          if ( Length >= 0x80 )
            goto LABEL_304;
          if ( a6 )
            *a6 = 128;
          return -1073741820;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v108 = *(_DWORD *)v6;
            v167 = *(volatile void **)(v6 + 8);
            v140 = *(_DWORD *)(v6 + 4);
            ProbeForWrite(v167, v140, 4u);
            SystemBasicInformation = ExpGetProcessInformation(
                                       (_DWORD)v167,
                                       v140,
                                       (unsigned int)&Size,
                                       (unsigned int)&v108,
                                       5);
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemBasicInformation = ExpQueryNumaProcessorMap((_DWORD *)v6, Length, &Size);
          goto LABEL_584;
        case 0x38u:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(0x140000000uLL, v6, Length, v11, &Size);
          goto LABEL_584;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)v6 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_169;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x3Bu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( MEMORY[0xFFFFF780000002E0] == -1 )
          {
            MEMORY[0xFFFFF780000002E0] = 0;
            result = ExpReadComPlusPackage(0x140000000uLL, v19, v20, v17);
            LogicalProcessorRelationship = result;
            if ( result < 0 )
              return result;
          }
          else
          {
            LogicalProcessorRelationship = HIDWORD(Size);
          }
          *(_DWORD *)v6 = MEMORY[0xFFFFF780000002E0];
          LODWORD(Size) = 4;
          goto LABEL_585;
        case 0x3Cu:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(v6, Length, &Size, v17);
          goto LABEL_584;
        case 0x3Du:
          LODWORD(Size) = 80 * v17;
          if ( Length < 80 * (int)v17 )
            goto LABEL_118;
          while ( (unsigned int)v10 < (unsigned int)v17 )
          {
            ProcNumber.Group = v18;
            ProcNumber.Number = (unsigned __int8)v10;
            ProcNumber.Reserved = 0;
            v42 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            PoGetPerfStateAndParkingInfo(&ProcNumber, &v153, 0LL, &v142);
            memset((void *)v6, 0, 0x50uLL);
            *(_QWORD *)(v6 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v42 + 23300) + *(_DWORD *)(v42 + 23304));
            *(_QWORD *)(v6 + 48) = KeMaximumIncrement
                                 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v42 + 24) + 652LL);
            if ( v157 )
            {
              *(_BYTE *)v6 = v154;
              *(_BYTE *)(v6 + 7) = v155;
              *(_BYTE *)(v6 + 8) = v156;
              *(_DWORD *)(v6 + 12) = 1;
            }
            *(_QWORD *)(v6 + 72) = v142;
            v6 += 80LL;
            v166 = v6;
            LODWORD(v10) = (_DWORD)v10 + 1;
            LODWORD(v17) = v106;
          }
          goto LABEL_81;
        case 0x3Eu:
          if ( Length != 64 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemEmulationBasicInformation(v6);
LABEL_583:
          LODWORD(Size) = 64;
          goto LABEL_584;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(v6);
            LODWORD(Size) = 12;
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 0x40u:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (v6 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v11, v19, v20, v17) )
          {
            SystemBasicInformation = ExpGetHandleInformationEx(v6, Length, &Size);
            goto LABEL_584;
          }
          return -1073741790;
        case 0x41u:
          if ( Length < 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( (_DWORD)v17 )
          {
            v77 = KiProcessorBlock;
            v78 = (unsigned int)v17;
            do
            {
              LODWORD(v10) = *(_DWORD *)(*v77++ + 23740) + (_DWORD)v10;
              --v78;
            }
            while ( v78 );
          }
          *(_DWORD *)v6 = (_DWORD)v10;
          goto LABEL_169;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v11, v19, v20, v17) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)v6, Length, 1, (unsigned int *)&Size);
          goto LABEL_584;
        case 0x43u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v108 = *(_DWORD *)v6;
          v168 = *(_QWORD *)(v6 + 8);
          v65 = *(unsigned int *)(v6 + 4);
          v141 = *(_DWORD *)(v6 + 4);
          if ( (v168 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation(v168, v65, &Size, &v108);
          goto LABEL_584;
        case 0x44u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          v108 = *(_DWORD *)(v6 + 8);
          if ( (v6 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(v6, Length, &Size, &v108);
          goto LABEL_584;
        case 0x45u:
          goto LABEL_409;
        case 0x46u:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          *(_DWORD *)v6 = ObpObjectSecurityMode;
LABEL_169:
          LODWORD(Size) = 4;
          LogicalProcessorRelationship = HIDWORD(Size);
          goto LABEL_585;
        case 0x49u:
          LogicalProcessorRelationship = KeBuildLogicalProcessorSystemInformation(v18, v6, Length, &Size);
          HIDWORD(Size) = LogicalProcessorRelationship;
          goto LABEL_585;
        case 0x4Cu:
          SystemBasicInformation = ExpGetSystemFirmwareTableInformation((void *)v6);
          goto LABEL_584;
        case 0x4Du:
          if ( (unsigned int)ExIsRestrictedCaller(v11, v19, v20, v17) )
            return -1073741790;
          v60 = KeGetCurrentThread();
          --v60->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformationEx(v61, v6, Length, &Size);
LABEL_173:
          HIDWORD(Size) = ModuleInformation;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v57, v58, v59);
          LogicalProcessorRelationship = HIDWORD(Size);
          goto LABEL_585;
        case 0x4Fu:
          SystemBasicInformation = PfQuerySuperfetchInformation(0x40000000u, v6, Length, v11, (__int64)&Size);
          goto LABEL_584;
        case 0x50u:
          SystemBasicInformation = MmQueryMemoryListInformation((_OWORD *)v6, Length, v20, &Size);
          goto LABEL_584;
        case 0x53u:
          LODWORD(Size) = 8 * v17;
          if ( Length < 8 )
            goto LABEL_463;
          if ( Length >= 8 * (int)v17 )
          {
            LogicalProcessorRelationship = HIDWORD(Size);
            v79 = v106;
          }
          else
          {
            v79 = Length >> 3;
            LogicalProcessorRelationship = -1073741820;
            HIDWORD(Size) = -1073741820;
          }
          v129 = (_QWORD *)v6;
          KeFlushProcessWriteBuffers(1);
          while ( 1 )
          {
            v107 = (unsigned int)v10;
            if ( (unsigned int)v10 >= v79 )
              break;
            ProcNumber.Group = v18;
            ProcNumber.Number = (unsigned __int8)v10;
            ProcNumber.Reserved = 0;
            v80 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v81 = v129;
            *v129 = v80;
            v129 = v81 + 1;
            LODWORD(v10) = v107 + 1;
            LogicalProcessorRelationship = HIDWORD(Size);
            v18 = v110;
          }
          goto LABEL_585;
        case 0x56u:
          SystemBasicInformation = ObQueryRefTraceInformation((void *)v6, Length);
          goto LABEL_584;
        case 0x57u:
          LODWORD(Size) = 8;
          if ( Length == 8 )
          {
            *(_DWORD *)v6 = MmSpecialPoolTag;
            LOBYTE(v10) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(v6 + 4) = (_DWORD)v10;
            LogicalProcessorRelationship = HIDWORD(Size);
          }
          else
          {
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0x58u:
          LODWORD(Size) = 24;
          if ( Length != 24 )
          {
            LogicalProcessorRelationship = -1073741820;
            goto LABEL_585;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)v6;
          v128 = *(_QWORD *)(v6 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v11 && WORD1(ProcessId[1]) )
          {
            if ( (v128 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v45 = v128 + WORD1(ProcessId[1]);
            if ( v45 > 0x7FFFFFFF0000LL || v45 < v128 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v46 = KeGetCurrentThread();
          v115 = WORD1(ProcessId[1]);
          --v46->KernelApcDisable;
          v48 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v48 < 0 )
          {
            KiLeaveCriticalRegionUnsafe((__int64)v46, v47, v49, v50);
            return v48;
          }
          LogicalProcessorRelationship = PsQueryFullProcessImageName(Process, v6 + 8, v128, &v115);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KiLeaveCriticalRegionUnsafe((__int64)v46, v51, v52, v53);
          if ( LogicalProcessorRelationship == -1073741820 )
            *(_WORD *)(v6 + 10) = v115;
          goto LABEL_585;
        case 0x5Au:
          LODWORD(Size) = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)v6 = ExpBootEnvironmentInformation;
          *(_DWORD *)(v6 + 16) = dword_1402FD030;
          if ( Length < 0x20 )
LABEL_278:
            LODWORD(Size) = 20;
          else
            *(_QWORD *)(v6 + 24) = qword_1402FD038;
          goto LABEL_81;
        case 0x5Bu:
          SystemBasicInformation = HvlQueryEnlightenmentInfo(v6, Length, v11, &Size);
          goto LABEL_584;
        case 0x5Cu:
          if ( Length != 40 )
          {
            if ( a6 )
              *a6 = 40;
            return -1073741820;
          }
          SystemBasicInformation = VfGetVerifierInformationEx(v6, v19, v20, v17);
          if ( SystemBasicInformation >= 0 )
            LODWORD(v10) = 40;
          LODWORD(Size) = (_DWORD)v10;
          goto LABEL_584;
        case 0x5Fu:
          if ( !v11 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v11) )
            return -1073741790;
          if ( Length >= 0x40 )
          {
            SystemBasicInformation = ExpCovQueryInformation(v6, Length, &Size);
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x62u:
          SystemBasicInformation = IoQuerySystemDeviceName(98LL, v6, Length, &Size);
          goto LABEL_584;
        case 0x63u:
          LogicalProcessorRelationship = IopRetrieveSystemDeviceName(SyspartDirectGetSystemDisk, v6, Length, &Size);
          if ( LogicalProcessorRelationship == -1073740718 && IopAmbiguousSystemDisk )
            LogicalProcessorRelationship = -1073740719;
          goto LABEL_585;
        case 0x64u:
          v133[1] = v18;
          v133[0] = KeQueryGroupAffinity(v18);
          v39 = (0x101010101010101LL
               * ((((v133[0] - ((v133[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v133[0] - ((v133[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                 + ((((v133[0] - ((v133[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v133[0] - ((v133[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          LogicalProcessorRelationship = PpmCapturePerformanceDistribution(
                                           0LL,
                                           0,
                                           (unsigned int)((0x101010101010101LL
                                                         * ((((v133[0] - ((v133[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                           + (((v133[0] - ((v133[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                                                           + ((((v133[0] - ((v133[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                             + (((v133[0] - ((v133[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                           (__int64)v133,
                                           &NumberOfBytes);
          SystemBasicInformation = -1073741820;
          if ( LogicalProcessorRelationship != -1073741820 )
            goto LABEL_585;
          if ( NumberOfBytes > Length )
          {
            LODWORD(Size) = NumberOfBytes;
            goto LABEL_584;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x744D5050u);
          v41 = PoolWithTag;
          v112 = (LOGICAL_PROCESSOR_RELATIONSHIP *)PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, NumberOfBytes);
            LogicalProcessorRelationship = PpmCapturePerformanceDistribution(
                                             v41,
                                             NumberOfBytes,
                                             v39,
                                             (__int64)v133,
                                             &Size);
            if ( LogicalProcessorRelationship >= 0 )
              memmove((void *)v6, v41, (unsigned int)Size);
            ExFreePoolWithTag(v41, 0x744D5050u);
          }
          else
          {
            LogicalProcessorRelationship = -1073741670;
          }
          goto LABEL_585;
        case 0x65u:
          SystemBasicInformation = ExpQueryNumaProximityNode(v6, Length, &Size, v17);
          goto LABEL_584;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            ExAcquireTimeRefreshLock(1u);
            v75 = &ExpTimeZoneInformation;
            v76 = 3LL;
            do
            {
              *(_OWORD *)v6 = *v75;
              *(_OWORD *)(v6 + 16) = v75[1];
              *(_OWORD *)(v6 + 32) = v75[2];
              *(_OWORD *)(v6 + 48) = v75[3];
              *(_OWORD *)(v6 + 64) = v75[4];
              *(_OWORD *)(v6 + 80) = v75[5];
              *(_OWORD *)(v6 + 96) = v75[6];
              v6 += 128LL;
              *(_OWORD *)(v6 - 16) = v75[7];
              v75 += 8;
              --v76;
            }
            while ( v76 );
            *(_OWORD *)v6 = *v75;
            *(_OWORD *)(v6 + 16) = v75[1];
            *(_OWORD *)(v6 + 32) = v75[2];
            ExReleaseResourceLite(&ExpTimeRefreshLock);
            KeLeaveCriticalRegion();
            LODWORD(Size) = 432;
            LogicalProcessorRelationship = 0;
            goto LABEL_585;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          if ( !qword_140301138 )
          {
            LogicalProcessorRelationship = -1073741823;
            goto LABEL_585;
          }
          LOBYTE(v20) = SeILSigningPolicy != 0;
          SystemBasicInformation = qword_140301138(v6, Length, v20, &Size);
          goto LABEL_584;
        case 0x69u:
          LogicalProcessorRelationship = off_1402F37E8();
          if ( LogicalProcessorRelationship != -1073741820 )
          {
LABEL_409:
            LogicalProcessorRelationship = -1073741637;
            goto LABEL_585;
          }
          v82 = NumberOfBytes;
          if ( Length < NumberOfBytes || !v6 )
            goto LABEL_516;
          if ( v104 )
          {
            PoolWithQuotaTag = (struct _KPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x6F666E49u);
            v112 = (LOGICAL_PROCESSOR_RELATIONSHIP *)PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              LogicalProcessorRelationship = -1073741670;
              goto LABEL_585;
            }
          }
          else
          {
            PoolWithQuotaTag = (struct _KPROCESS *)v6;
            v112 = (LOGICAL_PROCESSOR_RELATIONSHIP *)v6;
          }
          v84 = off_1402F37E8();
          LogicalProcessorRelationship = v84;
          if ( !v104 )
            goto LABEL_585;
          if ( v84 >= 0 )
            goto LABEL_419;
          goto LABEL_420;
        case 0x6Au:
          LogicalProcessorRelationship = -1073741821;
          goto LABEL_585;
        case 0x6Bu:
          LODWORD(Size) = Length;
          LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                           0LL,
                                           RelationshipType,
                                           (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)v6,
                                           (PULONG)&Size);
          HIDWORD(Size) = LogicalProcessorRelationship;
          goto LABEL_585;
        case 0x6Cu:
          LODWORD(Size) = 8 * v17;
          if ( Length < 8 )
            goto LABEL_463;
          if ( Length >= 8 * (int)v17 )
          {
            LogicalProcessorRelationship = HIDWORD(Size);
          }
          else
          {
            LODWORD(v17) = Length >> 3;
            v106 = Length >> 3;
            LogicalProcessorRelationship = -1073741820;
          }
          while ( (unsigned int)v10 < (unsigned int)v17 )
          {
            ProcNumber.Group = v18;
            ProcNumber.Number = (unsigned __int8)v10;
            ProcNumber.Reserved = 0;
            *(_QWORD *)v6 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 23544);
            v6 += 8LL;
            v169 = v6;
            LODWORD(v10) = (_DWORD)v10 + 1;
            LODWORD(v17) = v106;
          }
          goto LABEL_585;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(0x140000000LL, v6, Length, v11, (__int64)&Size);
          goto LABEL_584;
        case 0x70u:
          SystemBasicInformation = IoQueryVhdBootInformation(0x140000000uLL, v6, Length, &Size);
          goto LABEL_584;
        case 0x71u:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)v6, Length, v11, &Size);
          goto LABEL_584;
        case 0x73u:
          if ( v7 )
          {
            LogicalProcessorRelationship = -1073741820;
          }
          else
          {
            LODWORD(Size) = 8;
            if ( Length >= 8 )
            {
              *(_DWORD *)v6 = DbgkErrorPortStartTimeout;
              *(_DWORD *)(v6 + 4) = DbgkErrorPortCommTimeout;
              LogicalProcessorRelationship = HIDWORD(Size);
            }
            else
            {
              LogicalProcessorRelationship = -1073741820;
            }
          }
          goto LABEL_585;
        case 0x74u:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(0x140000000uLL, v6, Length, &Size);
          goto LABEL_584;
        case 0x75u:
          LODWORD(Size) = 888;
          if ( Length != 888 )
          {
            LogicalProcessorRelationship = -1073741820;
            goto LABEL_585;
          }
          if ( v11 )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(v6, v19, v20, v17);
          goto LABEL_584;
        case 0x76u:
          if ( Length >= 0x108 )
          {
LABEL_304:
            SystemBasicInformation = VfGetVerifierInformation((void *)v6);
            goto LABEL_584;
          }
          if ( a6 )
            *a6 = 264;
          return -1073741820;
        case 0x79u:
          LODWORD(Size) = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length < (unsigned int)Size )
          {
            LogicalProcessorRelationship = -1073741820;
            goto LABEL_585;
          }
          v107 = 0;
          while ( (unsigned int)v10 < (unsigned __int16)KeNumberNodes )
          {
            *(_DWORD *)(v6 + 4LL * (unsigned int)v10) = *((_DWORD *)KeNodeDistance
                                                        + (unsigned int)v10
                                                        + (unsigned __int16)v19 * (unsigned __int16)KeNumberNodes);
            LODWORD(v10) = (_DWORD)v10 + 1;
            v107 = (unsigned int)v10;
            LOWORD(v19) = v109;
          }
          goto LABEL_81;
        case 0x7Au:
          LODWORD(Size) = 8;
          if ( Length != 8 || !v6 )
            goto LABEL_118;
          PoolWithQuotaTag = (struct _KPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
          Process = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            LogicalProcessorRelationship = -1073741670;
            goto LABEL_585;
          }
          LogicalProcessorRelationship = off_1402F37E8();
          if ( LogicalProcessorRelationship >= 0 )
          {
            *(_DWORD *)v6 = PoolWithQuotaTag->Header.LockNV;
            *(_DWORD *)(v6 + 4) ^= (*(_DWORD *)(v6 + 4) ^ PoolWithQuotaTag->Header.SignalState) & 1;
            v85 = *(_DWORD *)(v6 + 4) ^ (*(_DWORD *)(v6 + 4) ^ PoolWithQuotaTag->Header.SignalState) & 2;
            *(_DWORD *)(v6 + 4) = v85;
            *(_DWORD *)(v6 + 4) = v85 ^ ((unsigned __int8)v85 ^ (unsigned __int8)PoolWithQuotaTag->Header.SignalState) & 4;
          }
          goto LABEL_420;
        case 0x7Bu:
          if ( Length != 32 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_QWORD *)&v151 = MmGetAvailablePages();
          *((_QWORD *)&v151 + 1) = MmGetTotalCommittedPages();
          *(_QWORD *)&v152 = MmGetTotalCommitLimit();
          PeakCommitment = MmGetPeakCommitment();
          if ( PeakCommitment < v32 )
            PeakCommitment = v32;
          *((_QWORD *)&v152 + 1) = PeakCommitment;
          *(_OWORD *)v6 = v151;
          *(_OWORD *)(v6 + 16) = v152;
          LODWORD(Size) = 32;
          LogicalProcessorRelationship = HIDWORD(Size);
          goto LABEL_585;
        case 0x7Cu:
          LODWORD(Size) = 12;
          if ( Length >= 4 )
          {
            v146 = *(_DWORD *)v6;
            if ( v146 == 1 )
            {
              LODWORD(Size) = 12;
              if ( Length >= 0xC )
              {
                *(_DWORD *)(v6 + 8) = 0;
                *(_DWORD *)(v6 + 4) = 0;
                *(_DWORD *)(v6 + 8) = 1;
                *(_DWORD *)(v6 + 4) = 1;
                if ( MEMORY[0xFFFFF780000003C6] )
                  *(_DWORD *)(v6 + 4) &= ~1u;
                LogicalProcessorRelationship = HIDWORD(Size);
              }
              else
              {
                LogicalProcessorRelationship = -1073741820;
              }
            }
            else
            {
              LogicalProcessorRelationship = -1073741637;
            }
          }
          else
          {
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0x7Du:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v108 = *(_DWORD *)v6;
          v170 = *(_QWORD *)(v6 + 8);
          v66 = *(_DWORD *)(v6 + 4);
          v143 = v66;
          if ( (v170 & 7) != 0 )
            return -2147483646;
          if ( (unsigned int)ExIsRestrictedCaller(v11, v19, v20, v17) )
            return -1073741790;
          SystemBasicInformation = ExGetSessionBigPoolInformation(v170, v66, &Size, &v108);
          goto LABEL_584;
        case 0x7Eu:
          LODWORD(Size) = 32;
          if ( Length == 32 )
          {
            LogicalProcessorRelationship = BgkQueryBootGraphicsInformation(0LL, v172, v20, v17);
            if ( LogicalProcessorRelationship >= 0 )
            {
              v86 = v172[0];
              if ( v104 )
                v86 = 0LL;
              v172[0] = v86;
              memmove((void *)v6, v172, (unsigned int)Size);
            }
          }
          else
          {
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0x80u:
          if ( v7 )
          {
            LogicalProcessorRelationship = -1073741820;
          }
          else
          {
            LogicalProcessorRelationship = MmEnumerateBadPages(&v118);
            v91 = v118;
            if ( v118 )
              LODWORD(Size) = 8 * *(_DWORD *)v118;
            else
              LODWORD(Size) = 0;
            if ( Length < (unsigned int)Size )
              LogicalProcessorRelationship = -1073741820;
            if ( v118 )
            {
              if ( LogicalProcessorRelationship >= 0 )
                memmove((void *)v6, (char *)v118 + 8, (unsigned int)Size);
              ExFreePoolWithTag(v91, 0);
            }
          }
          goto LABEL_585;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v11) )
            return -1073741727;
          SystemBasicInformation = ExpGetSystemPlatformBinary(v6, Length, v104);
          goto LABEL_584;
        case 0x86u:
          LODWORD(Size) = 32;
          if ( Length != 32 )
          {
            LogicalProcessorRelationship = -1073741820;
            goto LABEL_585;
          }
          SystemBasicInformation = ExHandleSPCall2(0x140000000uLL, v6, v20, v17);
          goto LABEL_584;
        case 0x87u:
          LODWORD(Size) = 8;
          if ( Length >= 8 )
          {
            if ( (unsigned int)HvlQueryActiveProcessors(&v120, 0LL) )
            {
              LogicalProcessorRelationship = -1073741637;
            }
            else
            {
              LogicalProcessorRelationship = HvlQueryProcessorTopologyCount(0LL, &v121);
              if ( LogicalProcessorRelationship )
              {
                LogicalProcessorRelationship = -1073741637;
              }
              else
              {
                *(_DWORD *)v6 = v120;
                *(_DWORD *)(v6 + 4) = v121;
              }
            }
          }
          else
          {
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0x88u:
        case 0x89u:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation(a1, v6, 48LL, v17);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x8Au:
          SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)v6);
          goto LABEL_584;
        case 0x8Bu:
          SystemBasicInformation = ExpQueryChannelInformation((void *)v6);
          goto LABEL_584;
        case 0x8Cu:
          if ( a6 || Length >= 8 )
          {
            LogicalProcessorRelationship = BgkQueryBootGraphicsInformation(2LL, &Size, v20, v17);
            if ( LogicalProcessorRelationship >= 0 )
            {
              if ( (_DWORD)Size )
              {
                if ( Length >= (unsigned int)Size )
                {
                  LogicalProcessorRelationship = BgkQueryBootGraphicsInformation(1LL, &P, v87, v88);
                  if ( LogicalProcessorRelationship >= 0 )
                  {
                    v89 = P;
                    if ( P )
                    {
                      memmove((void *)v6, P, (unsigned int)Size);
                      ExFreePoolWithTag(v89, 0x4B494742u);
                    }
                    else
                    {
                      LogicalProcessorRelationship = -1073741670;
                    }
                  }
                }
                else
                {
LABEL_463:
                  LogicalProcessorRelationship = -1073741789;
                }
              }
              else
              {
                LogicalProcessorRelationship = -1073741670;
              }
            }
          }
          else
          {
            LogicalProcessorRelationship = -1073741811;
          }
          goto LABEL_585;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
        case 0xB3u:
          SystemBasicInformation = SeSecureBootQueryInformation(a1, v6, Length, &Size);
          goto LABEL_584;
        case 0x93u:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(v6, Length, &Size, v17);
          goto LABEL_584;
        case 0x95u:
          if ( Length >= 3 )
          {
            *(_BYTE *)v6 = KdpBootedNodebug == 0;
            *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(v6 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            LODWORD(Size) = 3;
            goto LABEL_81;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 0x96u:
          if ( !ExBootLoaderMetadata )
          {
            LODWORD(Size) = 0;
            goto LABEL_81;
          }
          v90 = *(_DWORD *)ExBootLoaderMetadata;
          LODWORD(Size) = *(_DWORD *)ExBootLoaderMetadata;
          if ( !v6 )
            goto LABEL_81;
          if ( Length < v90 )
          {
            LogicalProcessorRelationship = -1073741820;
            goto LABEL_585;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v11) )
            return -1073741727;
          memmove((void *)v6, (const void *)(ExBootLoaderMetadata + 4), (unsigned int)Size);
          LogicalProcessorRelationship = HIDWORD(Size);
          goto LABEL_585;
        case 0x97u:
          LODWORD(Size) = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)v6 = ExSoftRebootFlags;
            LogicalProcessorRelationship = HIDWORD(Size);
            goto LABEL_585;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x99u:
          if ( v7 )
          {
            LogicalProcessorRelationship = -1073741820;
            goto LABEL_585;
          }
          LODWORD(Size) = 32;
          if ( Length >= 0x20 )
          {
            *(_QWORD *)v6 = PoOffCrashConfigTable;
            *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
            *(_QWORD *)(v6 + 16) = xmmword_140304D10;
            *(_DWORD *)(v6 + 24) = DWORD2(xmmword_140304D10);
LABEL_510:
            LogicalProcessorRelationship = HIDWORD(Size);
            goto LABEL_585;
          }
          if ( Length >= 0xC )
          {
            LODWORD(Size) = 12;
            *(_QWORD *)v6 = PoOffCrashConfigTable;
            *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
            goto LABEL_510;
          }
          LogicalProcessorRelationship = -1073741820;
          HIDWORD(Size) = -1073741820;
LABEL_585:
          if ( a6 )
            *a6 = Size;
          result = LogicalProcessorRelationship;
          break;
        case 0x9Au:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          LogicalProcessorRelationship = ExpGetSystemProcessorFeaturesInformation(v6, v19, v20, v17);
          v82 = 32;
LABEL_516:
          LODWORD(Size) = v82;
          goto LABEL_585;
        case 0x9Cu:
          LODWORD(Size) = 128;
          if ( Length == 128 )
          {
            LogicalProcessorRelationship = BgkQueryBootGraphicsInformation(3LL, v174, v20, v17);
            if ( LogicalProcessorRelationship >= 0 )
              memmove((void *)v6, v174, (unsigned int)Size);
          }
          else
          {
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0x9Du:
          LODWORD(Size) = WORD1(qword_1402FD048) + 24;
          if ( Length >= (unsigned int)Size )
          {
            v92 = (void *)(v6 + 24);
            *(_QWORD *)v6 = 0LL;
            *(_QWORD *)(v6 + 8) = 0LL;
            *(_QWORD *)(v6 + 16) = 0LL;
            *(_DWORD *)v6 = ExpManufacturingInformation;
            *(_DWORD *)(v6 + 8) = qword_1402FD048;
            if ( (_WORD)qword_1402FD048 )
            {
              *(_QWORD *)(v6 + 16) = v92;
              memmove(v92, qword_1402FD050, WORD1(qword_1402FD048));
            }
            LogicalProcessorRelationship = HIDWORD(Size);
          }
          else
          {
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0x9Eu:
          LODWORD(Size) = 1;
          if ( Length )
          {
            *(_BYTE *)v6 = PoEnergyEstimationEnabled();
            goto LABEL_81;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_118;
        case 0x9Fu:
          SystemBasicInformation = HvlQueryDetailInfo(v6, Length, v20, &Size);
          goto LABEL_584;
        case 0xA0u:
          LODWORD(Size) = (_DWORD)v17 << 6;
          if ( Length < 0x40 )
            goto LABEL_463;
          if ( Length >= (_DWORD)v17 << 6 )
          {
            LogicalProcessorRelationship = HIDWORD(Size);
          }
          else
          {
            LODWORD(v17) = Length >> 6;
            v106 = Length >> 6;
            LogicalProcessorRelationship = -1073741820;
            HIDWORD(Size) = -1073741820;
          }
          v131 = v6;
          v107 = 0;
          while ( v107 < (unsigned int)v17 )
          {
            ProcNumber.Group = v18;
            ProcNumber.Number = v107;
            ProcNumber.Reserved = 0;
            v93 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            v94 = 0;
            v123 = 0;
            while ( v94 < 4 )
            {
              v95 = 0;
              v122 = 0;
              while ( v95 < 2 )
              {
                v6 = v131;
                *(_QWORD *)(v131 + 8 * (v95 + 2LL * v94)) = *(_QWORD *)(v93 + 8 * (v95 + 2LL * v94) + 23552);
                v122 = ++v95;
                LogicalProcessorRelationship = HIDWORD(Size);
                v18 = v110;
              }
              v123 = ++v94;
            }
            v6 += 64LL;
            v131 = v6;
            ++v107;
            LODWORD(v17) = v106;
          }
          goto LABEL_585;
        case 0xA2u:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((_DWORD *)v6, Length, &Size);
          goto LABEL_584;
        case 0xA3u:
          if ( Length )
          {
            *(_BYTE *)v6 = KdIgnoreUmExceptions;
            LODWORD(Size) = 1;
            goto LABEL_81;
          }
          if ( a6 )
            *a6 = 1;
          return -1073741820;
        case 0xA4u:
        case 0xACu:
          if ( !qword_1403011A8 )
          {
            LogicalProcessorRelationship = -1073741823;
            goto LABEL_585;
          }
          SystemBasicInformation = qword_1403011A8(a1, v6, Length, &Size);
          goto LABEL_584;
        case 0xA5u:
          LODWORD(Size) = 16;
          if ( Length == 16 )
          {
            v96 = (16 * ExpFirmwarePageProtectionSupported) & 0x10;
            v117 = v96;
            if ( !VslIsSecureKernelRunning() )
              goto LABEL_552;
            v105[0] = 0;
            v97 = v96 | 1;
            LOBYTE(v117) = v97;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v97 |= 2u;
              LOBYTE(v117) = v97;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v97 |= 4u;
              LOBYTE(v117) = v97;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(v117) = v97 | 8;
            if ( v125 )
            {
              LogicalProcessorRelationship = VslIsTrustletRunning(v125, v105);
              BYTE1(v117) ^= (v105[0] ^ BYTE1(v117)) & 1;
            }
            else
            {
LABEL_552:
              LogicalProcessorRelationship = HIDWORD(Size);
            }
            *(_OWORD *)v6 = v117;
          }
          else
          {
            if ( a6 )
              *a6 = 16;
LABEL_118:
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0xA6u:
          SystemBasicInformation = SeQueryHSTIResults(v6, Length, &Size, v17);
          goto LABEL_584;
        case 0xA7u:
          SystemBasicInformation = ExpQuerySingleModuleInformation(v6, Length, v11, &Size);
          goto LABEL_584;
        case 0xA9u:
          SystemBasicInformation = HvlQueryDmaProtectionInfo(v6, Length, &Size, v17);
          goto LABEL_584;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(v11);
          if ( result < 0 )
            return result;
          LODWORD(Size) = 168;
          if ( Length == 168 )
          {
            SystemBasicInformation = KeGetAffinitizedInterruptsInfo((_WORD *)v6);
LABEL_584:
            LogicalProcessorRelationship = SystemBasicInformation;
          }
          else
          {
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0xAEu:
          SystemBasicInformation = PsRootSiloInformation(v6, Length, &Size, v17);
          goto LABEL_584;
        case 0xAFu:
          if ( v20 )
          {
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v11, &Object, 0LL);
            v10 = Object;
            if ( result < 0 )
              return result;
          }
          CpuSetInformation = KeQueryCpuSetInformation((void *)v6);
          goto LABEL_564;
        case 0xB2u:
          if ( Length )
          {
            if ( v11 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v11) )
              return -1073741727;
            v100 = (struct _KPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
            PoolWithQuotaTag = v100;
            v112 = (LOGICAL_PROCESSOR_RELATIONSHIP *)v100;
            if ( v100 )
            {
              memset(v100, 0, Length);
              LogicalProcessorRelationship = VslQuerySecureKernelProfileInformation(
                                               v132,
                                               (__int64)PoolWithQuotaTag,
                                               Length,
                                               &Size);
              if ( LogicalProcessorRelationship >= 0 )
LABEL_419:
                memmove((void *)v6, PoolWithQuotaTag, (unsigned int)Size);
LABEL_420:
              ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
            }
            else
            {
              LogicalProcessorRelationship = -1073741670;
            }
          }
          else
          {
            LogicalProcessorRelationship = -1073741789;
          }
          goto LABEL_585;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation((_DWORD)v112, v7, v6, Length, (__int64)&Size);
          goto LABEL_584;
        case 0xB5u:
          if ( v20 )
          {
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v11, &v145, 0LL);
            v10 = v145;
            if ( result < 0 )
              return result;
          }
          CpuSetInformation = PsWow64GetSupportedArchitectures((_DWORD *)v6, Length);
LABEL_564:
          LogicalProcessorRelationship = CpuSetInformation;
          if ( v10 )
            ObfDereferenceObject(v10);
          goto LABEL_585;
        case 0xB6u:
          if ( Length != 56 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          *((_QWORD *)&v147 + 1) = MmGetAvailablePages() << 12;
          *(_QWORD *)&v148 = MmGetResidentAvailablePages() << 12;
          *((_QWORD *)&v148 + 1) = MmGetTotalCommittedPages() << 12;
          MmGetTotalCommitLimit();
          MmGetPeakCommitment();
          *(_QWORD *)&v149 = MmGetSharedCommit() << 12;
          if ( v29 < v27 )
            v29 = v27;
          *(_QWORD *)&v147 = v29;
          if ( v26 < v28 )
            v26 = v28;
          *((_QWORD *)&v149 + 1) = v26;
          if ( v25 < v28 )
            v25 = v28;
          v150 = v25;
          *(_OWORD *)v6 = v147;
          *(_OWORD *)(v6 + 16) = v148;
          *(_OWORD *)(v6 + 32) = v149;
          *(_QWORD *)(v6 + 48) = v150;
          LODWORD(Size) = 56;
LABEL_81:
          LogicalProcessorRelationship = HIDWORD(Size);
          goto LABEL_585;
        case 0xB7u:
          if ( Length != 8 )
            return -1073741820;
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(*(_QWORD *)v6, v19, v20, v17);
          goto LABEL_584;
        case 0xB8u:
          LODWORD(Size) = 8;
          if ( Length >= 8 )
          {
            v101 = qword_1403269D8;
            *(_QWORD *)v6 = 0LL;
            *(_QWORD *)v6 = v101;
            LogicalProcessorRelationship = HIDWORD(Size);
          }
          else
          {
            LogicalProcessorRelationship = -1073741820;
          }
          goto LABEL_585;
        case 0xC4u:
          SystemBasicInformation = KeQueryKvaShadowInformation(v6, Length, &Size, v17);
          goto LABEL_584;
        case 0xC9u:
          SystemBasicInformation = KeQuerySpeculationControlInformation(v6, Length, &Size, v17);
          goto LABEL_584;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
    case 0xB5u:
      if ( v7 != 8 )
        return -1073741811;
      v20 = *(_QWORD *)v112;
      Handle = *(HANDLE *)v112;
      goto LABEL_53;
    case 0xB2u:
      if ( v7 != 8 )
        return -1073741811;
      v132 = *(_QWORD *)v112;
      goto LABEL_53;
    default:
      goto LABEL_53;
  }
}
