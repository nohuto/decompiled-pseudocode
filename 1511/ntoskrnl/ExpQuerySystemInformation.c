/*
 * XREFs of ExpQuerySystemInformation @ 0x140472CC0
 * Callers:
 *     NtQuerySystemInformation @ 0x140472BA0 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x1404AD8C0 (NtQuerySystemInformationEx.c)
 * Callees:
 *     MmGetPeakCommitment @ 0x1400144D8 (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x1400144EC (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x140014500 (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x140014514 (MmGetAvailablePages.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140015C24 (MmQuerySystemWorkingSetInformation.c)
 *     PoEnergyEstimationEnabled @ 0x14002D424 (PoEnergyEstimationEnabled.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14009393C (KeQueryLogicalProcessorRelationship.c)
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     KeQueryGroupAffinity @ 0x14009B2D4 (KeQueryGroupAffinity.c)
 *     PoGetIdleTimes @ 0x14009D63C (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     ExpGetSystemBasicInformation @ 0x14009DC58 (ExpGetSystemBasicInformation.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1400CCCB4 (KeGetRecommendedSharedDataAlignment.c)
 *     ExpGetSystemProcessorInformation @ 0x1400E6D6C (ExpGetSystemProcessorInformation.c)
 *     KeQueryBootTimeValues @ 0x1400E85D4 (KeQueryBootTimeValues.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1400E9BC0 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1400EEEB8 (ExpGetSystemEmulationProcessorInformation.c)
 *     KeQueryActiveGroupCount @ 0x1400F9548 (KeQueryActiveGroupCount.c)
 *     MmQueryMemoryListInformation @ 0x1400FCAC0 (MmQueryMemoryListInformation.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14010579C (ExCpuSetResourceManagerAccessCheck.c)
 *     HvlGetNestedPageProtectionFlags @ 0x140126EC8 (HvlGetNestedPageProtectionFlags.c)
 *     PsQueryCpuQuotaInformation @ 0x140142930 (PsQueryCpuQuotaInformation.c)
 *     VslIsSecureKernelRunning @ 0x1401429E8 (VslIsSecureKernelRunning.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1401AE990 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1401AEB78 (HvlQueryProcessorTopologyCount.c)
 *     HvlQuerySecureKernelProfileInformation @ 0x1401B3250 (HvlQuerySecureKernelProfileInformation.c)
 *     VslIsTrustletRunning @ 0x1401B3CBC (VslIsTrustletRunning.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401CA838 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x1401E608C (MmEnumerateBadPages.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1401F11AC (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x1401F1398 (PpmCapturePerformanceDistribution.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140200D54 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExGetBigPoolInfo @ 0x140212B18 (ExGetBigPoolInfo.c)
 *     ExpGetLookasideInformation @ 0x140213404 (ExpGetLookasideInformation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpQueryModuleInformation @ 0x1403B7F90 (ExpQueryModuleInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsQueryFullProcessImageName @ 0x14041F760 (PsQueryFullProcessImageName.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x1404713F0 (ExAcquireTimeRefreshLock.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14048434C (ExpGetSystemFirmwareTableInformation.c)
 *     MmGetPageFileInformation @ 0x1404A6778 (MmGetPageFileInformation.c)
 *     ExGetPoolTagInfo @ 0x1404A7774 (ExGetPoolTagInfo.c)
 *     ExGetSessionPoolTagInformation @ 0x1404AC20C (ExGetSessionPoolTagInformation.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1404AD5FC (KeBuildLogicalProcessorSystemInformation.c)
 *     sub_1404AE668 @ 0x1404AE668 (sub_1404AE668.c)
 *     PfSnQueryPrefetcherInformation @ 0x1404B3698 (PfSnQueryPrefetcherInformation.c)
 *     SeSecureBootQueryInformation @ 0x1404C039C (SeSecureBootQueryInformation.c)
 *     ExpReadComPlusPackage @ 0x1404C61BC (ExpReadComPlusPackage.c)
 *     ExIsRestrictedCaller @ 0x1404C69D4 (ExIsRestrictedCaller.c)
 *     ExpQueryNumaProcessorMap @ 0x1404D117C (ExpQueryNumaProcessorMap.c)
 *     PsLookupProcessByProcessId @ 0x1404D42D0 (PsLookupProcessByProcessId.c)
 *     IoQuerySystemDeviceName @ 0x140506488 (IoQuerySystemDeviceName.c)
 *     CmQueryRegistryQuotaInformation @ 0x140517508 (CmQueryRegistryQuotaInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14051820C (ExpQueryNumaAvailableMemory.c)
 *     ExQueryBootEntropyInformation @ 0x14052F634 (ExQueryBootEntropyInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1405341E0 (ExpQueryModuleInformationEx.c)
 *     ExpQueryMemoryTopologyInformation @ 0x14054417C (ExpQueryMemoryTopologyInformation.c)
 *     SmQueryStoreInformation @ 0x140545A48 (SmQueryStoreInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1405482D8 (ExpGetSystemPlatformBinary.c)
 *     HvlQueryEnlightenmentInfo @ 0x14054A9B8 (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x14054AAF4 (IoQueryVhdBootInformation.c)
 *     SeQueryHSTIResults @ 0x14054B894 (SeQueryHSTIResults.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 *     HvlQueryDetailInfo @ 0x1405F6610 (HvlQueryDetailInfo.c)
 *     HvlQueryDmaProtectionInfo @ 0x1405F6724 (HvlQueryDmaProtectionInfo.c)
 *     IoQueryLowPriorityIoInformation @ 0x1405F9F34 (IoQueryLowPriorityIoInformation.c)
 *     KeQueryCpuSetInformation @ 0x14061ACFC (KeQueryCpuSetInformation.c)
 *     KeQueryKvaShadowInformation @ 0x14061AF44 (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x14061B034 (KeQuerySpeculationControlInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x1406213A0 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x14062F2A8 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x14063FBD4 (PsRootSiloInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14066A9A8 (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x14066ABBC (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x14066AD94 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14066AE00 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14066AE6C (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14066AED8 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x14066AF54 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpQueryChannelInformation @ 0x14066B0B8 (ExpQueryChannelInformation.c)
 *     ExpQueryLegacyDriverInformation @ 0x14066B4AC (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaProximityNode @ 0x14066B594 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14066B6E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x14066B8F0 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x140674878 (ExpCovQueryInformation.c)
 *     VfGetVerifierInformation @ 0x1406D4D60 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x1406D4E08 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x1406DB260 (BgkQueryBootGraphicsInformation.c)
 */

int __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        LOGICAL_PROCESSOR_RELATIONSHIP *a2,
        unsigned int a3,
        unsigned __int64 a4,
        UINT Length,
        unsigned int *a6)
{
  __int64 v7; // r9
  LOGICAL_PROCESSOR_RELATIONSHIP *v8; // r8
  unsigned int v9; // r11d
  unsigned int v10; // esi
  PVOID v11; // rbx
  unsigned __int8 v12; // r10
  int v13; // eax
  unsigned __int64 v14; // rdx
  ULONG64 v15; // rcx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rcx
  ULONG ActiveProcessorCount; // r13d
  unsigned __int16 v19; // r15
  __int64 v20; // rdx
  USHORT v21; // cx
  int result; // eax
  void *v23; // r8
  unsigned __int64 PeakCommitment; // rax
  unsigned __int64 v25; // rcx
  unsigned int v26; // ecx
  ULONG v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // rcx
  _DWORD *v30; // rdx
  unsigned __int64 v31; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *PoolWithQuotaTag; // rbx
  ULONG v34; // edx
  __int64 v35; // rsi
  int v36; // ebx
  char v37; // si
  char *v38; // rdx
  struct _KTHREAD *v39; // rsi
  NTSTATUS v40; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v42; // rcx
  int v43; // eax
  struct _KTHREAD *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ecx
  int v47; // ecx
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // edi
  int v51; // ecx
  int v52; // edx
  __int64 *v53; // r12
  __int64 v54; // r8
  __int64 *v55; // r12
  __int64 v56; // rdx
  ULONG v57; // esi
  _DWORD *v58; // rdx
  _OWORD *v59; // rcx
  __int64 v60; // rax
  int SystemFirmwareTableInformation; // eax
  __int64 *v62; // r12
  __int64 v63; // rcx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  unsigned int v66; // eax
  int v67; // eax
  int v68; // ecx
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  UINT v72; // ecx
  int v73; // r15d
  _DWORD *v74; // r12
  void *v75; // rcx
  void *v76; // rcx
  __int64 v77; // r11
  unsigned int v78; // r10d
  unsigned int v79; // r9d
  char v80; // bl
  char NestedPageProtectionFlags; // al
  _DWORD *v82; // rax
  int SystemBasicInformation; // [rsp+30h] [rbp-398h]
  UINT Size; // [rsp+34h] [rbp-394h] BYREF
  _PROCESSOR_NUMBER Size_4; // [rsp+38h] [rbp-390h] BYREF
  unsigned int i; // [rsp+3Ch] [rbp-38Ch]
  unsigned __int8 v87; // [rsp+40h] [rbp-388h]
  char v88[3]; // [rsp+41h] [rbp-387h] BYREF
  USHORT v89; // [rsp+44h] [rbp-384h]
  unsigned __int16 v90; // [rsp+48h] [rbp-380h]
  unsigned int *v91; // [rsp+50h] [rbp-378h]
  _DWORD v92[13]; // [rsp+9Ch] [rbp-32Ch] BYREF
  SIZE_T NumberOfBytes; // [rsp+D0h] [rbp-2F8h] BYREF
  _DWORD *v94; // [rsp+D8h] [rbp-2F0h]
  unsigned int v95; // [rsp+E0h] [rbp-2E8h]
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+E4h] [rbp-2E4h]
  __int64 v97; // [rsp+E8h] [rbp-2E0h]
  unsigned int v98; // [rsp+F0h] [rbp-2D8h] BYREF
  __int64 v99; // [rsp+F8h] [rbp-2D0h]
  __int128 v100; // [rsp+100h] [rbp-2C8h]
  unsigned int v101; // [rsp+110h] [rbp-2B8h]
  int v102; // [rsp+114h] [rbp-2B4h] BYREF
  unsigned int v103; // [rsp+118h] [rbp-2B0h] BYREF
  unsigned int v104; // [rsp+11Ch] [rbp-2ACh]
  PEPROCESS Process; // [rsp+120h] [rbp-2A8h] BYREF
  HANDLE ProcessId[2]; // [rsp+128h] [rbp-2A0h]
  char *v107; // [rsp+138h] [rbp-290h]
  __int64 v108; // [rsp+140h] [rbp-288h]
  _DWORD *v109; // [rsp+148h] [rbp-280h] BYREF
  _QWORD *v110; // [rsp+150h] [rbp-278h]
  _QWORD v111[2]; // [rsp+158h] [rbp-270h] BYREF
  unsigned __int64 v112; // [rsp+168h] [rbp-260h]
  void *v113; // [rsp+170h] [rbp-258h] BYREF
  HANDLE Handle; // [rsp+178h] [rbp-250h]
  LARGE_INTEGER Src; // [rsp+180h] [rbp-248h] BYREF
  __int64 v116; // [rsp+188h] [rbp-240h] BYREF
  __int64 v117; // [rsp+190h] [rbp-238h]
  __int64 v118; // [rsp+198h] [rbp-230h]
  __int64 v119; // [rsp+1A0h] [rbp-228h] BYREF
  __int64 v120; // [rsp+1A8h] [rbp-220h]
  unsigned __int64 v121; // [rsp+1B0h] [rbp-218h] BYREF
  unsigned int v122; // [rsp+1BCh] [rbp-20Ch]
  int v123; // [rsp+1C4h] [rbp-204h]
  unsigned __int64 v124; // [rsp+1C8h] [rbp-200h]
  unsigned __int64 v125; // [rsp+1D0h] [rbp-1F8h]
  int v126; // [rsp+1D8h] [rbp-1F0h]
  UINT v127; // [rsp+1DCh] [rbp-1ECh]
  int v128; // [rsp+1E0h] [rbp-1E8h]
  PVOID Object; // [rsp+1E8h] [rbp-1E0h] BYREF
  __int128 v130; // [rsp+1F0h] [rbp-1D8h]
  __int128 v131; // [rsp+200h] [rbp-1C8h]
  __int64 v132[2]; // [rsp+210h] [rbp-1B8h] BYREF
  int v133; // [rsp+220h] [rbp-1A8h]
  __int64 v134; // [rsp+228h] [rbp-1A0h]
  __int64 v135; // [rsp+230h] [rbp-198h]
  __int64 v136; // [rsp+238h] [rbp-190h]
  __int64 v137; // [rsp+240h] [rbp-188h]
  int v138; // [rsp+248h] [rbp-180h]
  int v139; // [rsp+24Ch] [rbp-17Ch]
  int v140; // [rsp+250h] [rbp-178h] BYREF
  char v141; // [rsp+258h] [rbp-170h]
  char v142; // [rsp+25Ch] [rbp-16Ch]
  char v143; // [rsp+260h] [rbp-168h]
  char v144; // [rsp+26Ch] [rbp-15Ch]
  __int64 v145; // [rsp+270h] [rbp-158h]
  unsigned __int64 v146; // [rsp+278h] [rbp-150h]
  unsigned __int64 v147; // [rsp+280h] [rbp-148h]
  __int64 v148; // [rsp+288h] [rbp-140h]
  volatile void *v149; // [rsp+290h] [rbp-138h]
  __int64 v150; // [rsp+298h] [rbp-130h]
  _DWORD v151[4]; // [rsp+2A0h] [rbp-128h] BYREF
  _QWORD v152[4]; // [rsp+2B0h] [rbp-118h] BYREF
  _OWORD v153[3]; // [rsp+2D0h] [rbp-F8h] BYREF
  _BYTE v154[128]; // [rsp+300h] [rbp-C8h] BYREF

  v7 = a3;
  LODWORD(v94) = a3;
  v8 = a2;
  v97 = (__int64)a2;
  v9 = a1;
  v95 = a1;
  v10 = Length;
  v91 = a6;
  v11 = 0LL;
  Size = 0;
  SystemBasicInformation = 0;
  v12 = KeGetCurrentThread()->gap0[10];
  v87 = v12;
  if ( v12 )
  {
    v13 = 4;
    if ( a1 != 35 )
    {
      if ( a1 == 12 )
      {
        v13 = 8;
LABEL_20:
        if ( Length )
        {
          v14 = a4;
          if ( ((v13 - 1) & (unsigned int)a4) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = a4 + Length - 1LL;
          if ( a4 > v15 || v15 >= MmUserProbeAddress )
          {
            if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
              ExRaiseAccessViolation();
          }
          else
          {
            v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              *(_BYTE *)v14 = *(_BYTE *)v14;
              v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            }
            while ( v14 != v16 );
          }
        }
        if ( a6 )
        {
          v17 = a6;
          if ( (unsigned __int64)a6 >= MmUserProbeAddress )
            v17 = (_DWORD *)MmUserProbeAddress;
          *v17 = *v17;
        }
        v8 = (LOGICAL_PROCESSOR_RELATIONSHIP *)v97;
        goto LABEL_35;
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
    v13 = 1;
    goto LABEL_20;
  }
LABEL_35:
  Size = 0;
  RelationshipType = RelationAll;
  ActiveProcessorCount = 0;
  v19 = 0;
  v89 = 0;
  v20 = 0LL;
  v90 = 0;
  v99 = 0LL;
  Handle = 0LL;
  v108 = 0LL;
  switch ( v9 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v19 = -1;
      v89 = -1;
      v21 = -1;
      goto LABEL_54;
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x22u:
    case 0x23u:
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
    case 0x29u:
    case 0x2Bu:
    case 0x2Cu:
    case 0x2Du:
    case 0x2Eu:
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
    case 0x3Eu:
    case 0x3Fu:
    case 0x40u:
    case 0x42u:
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
    case 0x58u:
    case 0x59u:
    case 0x5Au:
    case 0x5Bu:
    case 0x5Cu:
    case 0x5Du:
    case 0x5Eu:
    case 0x5Fu:
    case 0x60u:
    case 0x61u:
    case 0x62u:
    case 0x63u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Du:
    case 0x6Eu:
    case 0x6Fu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x74u:
    case 0x75u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x7Eu:
    case 0x7Fu:
    case 0x80u:
    case 0x81u:
    case 0x82u:
    case 0x83u:
    case 0x84u:
    case 0x85u:
    case 0x86u:
    case 0x87u:
    case 0x88u:
    case 0x89u:
    case 0x8Au:
    case 0x8Bu:
    case 0x8Cu:
    case 0x8Eu:
    case 0x8Fu:
    case 0x90u:
    case 0x91u:
    case 0x92u:
    case 0x93u:
    case 0x94u:
    case 0x95u:
    case 0x96u:
    case 0x97u:
    case 0x98u:
    case 0x99u:
    case 0x9Au:
    case 0x9Bu:
    case 0x9Cu:
    case 0x9Du:
    case 0x9Eu:
    case 0x9Fu:
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
    case 0xA4u:
    case 0xA6u:
    case 0xA7u:
    case 0xA8u:
    case 0xA9u:
    case 0xAAu:
    case 0xABu:
    case 0xACu:
    case 0xADu:
    case 0xAEu:
    case 0xB0u:
    case 0xB1u:
      goto LABEL_55;
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
      if ( (unsigned int)v7 < 2 )
        return -1073741811;
      v89 = *(_WORD *)v8;
      v19 = v89;
      if ( v89 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v21 = v89;
LABEL_54:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v21);
      v12 = v87;
      v9 = v95;
      v20 = v90;
      v7 = (unsigned int)v94;
      goto LABEL_55;
    case 0x6Bu:
      if ( (unsigned int)v7 < 4 )
        return -1073741811;
      RelationshipType = *v8;
      goto LABEL_55;
    case 0x79u:
      if ( (unsigned int)v7 < 2 )
        return -1073741811;
      v90 = *(_WORD *)v8;
      v20 = v90;
      if ( v90 >= (unsigned __int16)KeNumberNodes )
        return -1073741811;
      goto LABEL_55;
    case 0xA5u:
      v99 = 0LL;
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 8 )
          return -1073741811;
        v99 = *(_QWORD *)v8;
      }
      else
      {
        v99 = 0LL;
      }
LABEL_55:
      v23 = 0LL;
LABEL_56:
      switch ( v9 )
      {
        case 0u:
        case 0x72u:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(a4);
            goto LABEL_62;
          }
          if ( a6 )
            *a6 = 64;
          goto LABEL_60;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
            goto LABEL_71;
          }
          if ( a6 )
            *a6 = 12;
          goto LABEL_60;
        case 2u:
          if ( Length < 0x138 )
          {
            if ( a6 )
              *a6 = 344;
            goto LABEL_60;
          }
          if ( Length > 0x158 )
            v10 = 344;
          ExpQuerySystemPerformanceInformation(ActiveProcessorCount, (void *)a4, v10);
          goto LABEL_88;
        case 3u:
          if ( Length > 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            goto LABEL_60;
          }
          Src.QuadPart = 0LL;
          v116 = 0LL;
          v117 = 0LL;
          v118 = 0LL;
          v119 = 0LL;
          v120 = 0LL;
          KeQueryBootTimeValues(&v116, &Src, &v119);
          v117 = ExpTimeZoneBias;
          LODWORD(v118) = ExpCurrentTimeZoneId;
          v120 = MEMORY[0xFFFFF780000003B0];
          memmove((void *)a4, &Src, Length);
LABEL_88:
          Size = v10;
          goto LABEL_567;
        case 4u:
        case 0xAu:
        case 0x19u:
        case 0x1Du:
        case 0x60u:
          return -1073741822;
        case 5u:
        case 0x39u:
        case 0x94u:
          SystemBasicInformation = ExpGetProcessInformation(a4, Length, &Size, 0LL, v9);
          goto LABEL_567;
        case 6u:
        case 0x48u:
          return -1073741637;
        case 7u:
          if ( Length == 24 )
          {
            *(_DWORD *)a4 = dword_1406FB7A0;
            *(_DWORD *)(a4 + 4) = dword_1406FB7A4;
            *(_DWORD *)(a4 + 8) = dword_1406FB7A8;
            *(_DWORD *)(a4 + 12) = dword_1406FB7AC;
            *(_DWORD *)(a4 + 16) = dword_1406FB7B4;
            *(_DWORD *)(a4 + 20) = dword_1406FB7B8;
            Size = 24;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 24;
          goto LABEL_60;
        case 8u:
        case 0x8Du:
          v26 = 72;
          if ( v9 == 8 )
            v26 = 48;
          LODWORD(v91) = v26;
          if ( Length && !(Length % v26) )
          {
            LODWORD(v94) = 0;
            v27 = 0;
            i = 0;
            while ( v27 < ActiveProcessorCount )
            {
              Size_4.Group = v19;
              *(_WORD *)&Size_4.Number = (unsigned __int8)v27;
              v97 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
              v28 = (unsigned int)v94;
              if ( Length < (int)v94 + (int)v91 )
                goto LABEL_100;
              LODWORD(v94) = (_DWORD)v94 + (_DWORD)v91;
              PoGetIdleTimes(&Size_4, 0LL, (__int64)v151);
              v29 = KeMaximumIncrement;
              v30 = (_DWORD *)v97;
              *(_QWORD *)(a4 + 16) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(v97 + 23304);
              *(_QWORD *)(a4 + 8) = v29 * v151[1];
              *(_QWORD *)(a4 + 24) = v29 * (unsigned int)v30[5827];
              *(_QWORD *)(a4 + 32) = v29 * (unsigned int)v30[5828];
              *(_QWORD *)a4 = v29 * v151[0];
              *(_DWORD *)(a4 + 40) = v30[5824];
              if ( v95 == 141 )
              {
                *(_QWORD *)(a4 + 48) = v29 * (unsigned int)v30[5836];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              a4 += (unsigned int)v91;
              v27 = ++i;
            }
            v28 = (unsigned int)v94;
LABEL_100:
            Size = v28;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = ActiveProcessorCount * v26;
LABEL_60:
          result = -1073741820;
          break;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag;
            goto LABEL_164;
          }
          if ( a6 )
            *a6 = 4;
          goto LABEL_60;
        case 0xBu:
          if ( (unsigned int)ExIsRestrictedCaller(v12) )
            return -1073741790;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          v43 = ExpQueryModuleInformation(v42, (_DWORD *)a4, Length, &Size);
          goto LABEL_168;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            goto LABEL_60;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v12) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(a4, Length, &Size);
          goto LABEL_567;
        case 0xDu:
          if ( Length >= 0x128 )
            goto LABEL_180;
          if ( a6 )
            *a6 = 296;
          goto LABEL_60;
        case 0xEu:
        case 0xFu:
        case 0x13u:
LABEL_180:
          SystemBasicInformation = -1073741822;
          goto LABEL_567;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            goto LABEL_60;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v12) )
          {
            SystemBasicInformation = ExpGetHandleInformation(a4, Length, &Size);
            goto LABEL_567;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            goto LABEL_60;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v12) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(a4, Length, &Size);
          goto LABEL_567;
        case 0x12u:
        case 0x90u:
          v46 = 40;
          if ( v9 == 18 )
            v46 = 32;
          Size = v46;
          if ( Length >= v46 )
          {
            Size = 0;
            LOBYTE(v11) = v9 == 144;
            SystemBasicInformation = MmGetPageFileInformation(a4, Length, (unsigned int)v11, &Size);
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = v46;
          goto LABEL_60;
        case 0x15u:
        case 0x51u:
        case 0x77u:
        case 0x78u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            goto LABEL_60;
          }
          v47 = 2;
          if ( v9 == 119 )
          {
            v48 = 3;
          }
          else
          {
            if ( v9 == 120 )
              v47 = 4;
            v48 = v47;
          }
          MmQuerySystemWorkingSetInformation(v48, v132);
          *(_QWORD *)a4 = v132[0];
          *(_QWORD *)(a4 + 8) = v132[1];
          *(_DWORD *)(a4 + 16) = v133;
          i = 64;
          *(_QWORD *)(a4 + 24) = v134;
          *(_QWORD *)(a4 + 32) = v135;
          *(_QWORD *)(a4 + 40) = v136;
          *(_QWORD *)(a4 + 48) = v137;
          *(_DWORD *)(a4 + 56) = v138;
          *(_DWORD *)(a4 + 60) = v139;
LABEL_62:
          Size = 64;
          goto LABEL_567;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(a4, Length, &Size, v7);
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 48;
          goto LABEL_60;
        case 0x17u:
          Size = 24 * ActiveProcessorCount;
          if ( Length >= 24 * ActiveProcessorCount )
          {
            v57 = 0;
            i = 0;
            while ( v57 < ActiveProcessorCount )
            {
              Size_4.Group = v19;
              *(_WORD *)&Size_4.Number = (unsigned __int8)v57;
              v58 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
              v123 = v58[2863];
              *(_DWORD *)a4 = v123;
              *(_DWORD *)(a4 + 4) = v58[2919];
              *(_DWORD *)(a4 + 8) = v58[2935];
              *(_DWORD *)(a4 + 12) = KeTimeIncrement;
              *(_DWORD *)(a4 + 16) = 0;
              *(_DWORD *)(a4 + 20) = 0;
              a4 += 24LL;
              i = ++v57;
            }
            goto LABEL_284;
          }
          if ( a6 )
            *a6 = 24 * ActiveProcessorCount;
          goto LABEL_60;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
            goto LABEL_273;
          }
          if ( a6 )
            *a6 = 20;
          goto LABEL_60;
        case 0x1Cu:
          if ( Length != 12 )
          {
            if ( a6 )
              *a6 = 12;
            goto LABEL_60;
          }
          ExAcquireTimeRefreshLock(1u);
          v36 = KeTimeAdjustment;
          v37 = KeTimeSynchronization;
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          KeLeaveCriticalRegion();
          *(_DWORD *)a4 = v36;
          *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
          *(_BYTE *)(a4 + 8) = v37;
LABEL_71:
          Size = 12;
          goto LABEL_567;
        case 0x1Fu:
          SystemFirmwareTableInformation = EtwQueryPerformanceTraceInformation(a4, Length, v12, &Size);
          goto LABEL_300;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_60;
          }
          Size = 16;
          v51 = 0;
          v52 = 0;
          i = 0;
          if ( ActiveProcessorCount )
          {
            v53 = KiProcessorBlock;
            v54 = ActiveProcessorCount;
            i = ActiveProcessorCount;
            do
            {
              v51 += *(_DWORD *)(*v53 + 24316);
              v52 += *(_DWORD *)(*v53++ + 23348);
              --v54;
            }
            while ( v54 );
          }
          *(_DWORD *)a4 = v51;
          *(_DWORD *)(a4 + 4) = v52;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = 0;
          goto LABEL_567;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            Size = 2;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 2;
          goto LABEL_60;
        case 0x24u:
          if ( Length < 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            goto LABEL_60;
          }
          i = 0;
          if ( ActiveProcessorCount )
          {
            v55 = KiProcessorBlock;
            v56 = ActiveProcessorCount;
            i = ActiveProcessorCount;
            do
            {
              LODWORD(v11) = *(_DWORD *)(*v55++ + 11452) + (_DWORD)v11;
              --v56;
            }
            while ( v56 );
          }
          *(_DWORD *)a4 = (_DWORD)v11;
          *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(a4 + 8) = dword_1402E8868;
          *(_DWORD *)(a4 + 12) = dword_1402E8864;
          *(_DWORD *)(a4 + 16) = dword_1402E886C;
          *(_DWORD *)(a4 + 20) = dword_1402E8870;
          *(_DWORD *)(a4 + 24) = dword_1402E8878;
          *(_DWORD *)(a4 + 28) = dword_1402E8874;
          *(_DWORD *)(a4 + 32) = dword_1402E887C;
          *(_DWORD *)(a4 + 36) = dword_1402E8880;
          *(_DWORD *)(a4 + 40) = dword_1402E8884;
          *(_DWORD *)(a4 + 44) = dword_1402E8888;
          Size = 48;
          goto LABEL_567;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(a4, v20, v23, v7);
            Size = 16;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 16;
          goto LABEL_60;
        case 0x2Au:
          Size = 48 * ActiveProcessorCount;
          if ( Length < 48 * ActiveProcessorCount )
            goto LABEL_112;
          while ( 1 )
          {
            i = (unsigned int)v11;
            if ( (unsigned int)v11 >= ActiveProcessorCount )
              break;
            Size_4.Group = v19;
            *(_WORD *)&Size_4.Number = (unsigned __int8)v11;
            PoGetIdleTimes(&Size_4, (__int64)v153, 0LL);
            *(_OWORD *)a4 = v153[0];
            *(_OWORD *)(a4 + 16) = v153[1];
            *(_OWORD *)(a4 + 32) = v153[2];
            a4 += 48LL;
            LODWORD(v11) = (_DWORD)v11 + 1;
          }
          goto LABEL_567;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            Size = Length;
            SystemFirmwareTableInformation = ExpQueryLegacyDriverInformation(a4, &Size, v23, v7);
            goto LABEL_300;
          }
          if ( a6 )
            *a6 = 24;
          goto LABEL_60;
        case 0x2Cu:
          if ( Length < 0xAC )
          {
            if ( a6 )
              *a6 = 172;
            goto LABEL_60;
          }
          ExAcquireTimeRefreshLock(1u);
          *(_OWORD *)a4 = ExpTimeZoneInformation;
          *(_OWORD *)(a4 + 16) = *((_OWORD *)&ExpTimeZoneInformation + 1);
          *(_OWORD *)(a4 + 32) = *((_OWORD *)&ExpTimeZoneInformation + 2);
          *(_OWORD *)(a4 + 48) = *((_OWORD *)&ExpTimeZoneInformation + 3);
          *(_OWORD *)(a4 + 64) = *((_OWORD *)&ExpTimeZoneInformation + 4);
          *(_OWORD *)(a4 + 80) = *((_OWORD *)&ExpTimeZoneInformation + 5);
          *(_OWORD *)(a4 + 96) = *((_OWORD *)&ExpTimeZoneInformation + 6);
          *(_OWORD *)(a4 + 112) = *((_OWORD *)&ExpTimeZoneInformation + 7);
          *(_OWORD *)(a4 + 128) = *((_OWORD *)&ExpTimeZoneInformation + 8);
          *(_OWORD *)(a4 + 144) = *((_OWORD *)&ExpTimeZoneInformation + 9);
          *(_QWORD *)(a4 + 160) = *((_QWORD *)&ExpTimeZoneInformation + 20);
          *(_DWORD *)(a4 + 168) = *((_DWORD *)&ExpTimeZoneInformation + 42);
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          KeLeaveCriticalRegion();
          Size = 172;
LABEL_284:
          SystemBasicInformation = 0;
          goto LABEL_567;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &Size);
          goto LABEL_567;
        case 0x32u:
          if ( Length == 8 )
          {
            *(_QWORD *)a4 = MmSystemRangeStart;
            Size = 8;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 8;
          goto LABEL_60;
        case 0x33u:
          if ( Length >= 0x80 )
            goto LABEL_299;
          if ( a6 )
            *a6 = 128;
          goto LABEL_60;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v92[0] = *(_DWORD *)a4;
            v149 = *(volatile void **)(a4 + 8);
            v127 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v149, v127, 4u);
            SystemBasicInformation = ExpGetProcessInformation((__int64)v149, v127, &Size, v92, 5);
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 16;
          goto LABEL_60;
        case 0x37u:
          SystemFirmwareTableInformation = ExpQueryNumaProcessorMap(a4, Length, &Size, v7);
          goto LABEL_300;
        case 0x38u:
          SystemFirmwareTableInformation = PfSnQueryPrefetcherInformation(0x140000000uLL, a4, Length, v12, &Size);
          goto LABEL_300;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_164;
          }
          if ( a6 )
            *a6 = 4;
          goto LABEL_60;
        case 0x3Bu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            goto LABEL_60;
          }
          if ( MEMORY[0xFFFFF780000002E0] != -1
            || (MEMORY[0xFFFFF780000002E0] = 0,
                result = ExpReadComPlusPackage(0x140000000uLL, v20, v23, v7),
                SystemBasicInformation = result,
                result >= 0) )
          {
            *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
            goto LABEL_164;
          }
          return result;
        case 0x3Cu:
          SystemFirmwareTableInformation = ExpQueryNumaAvailableMemory(a4, Length, &Size, v7);
          goto LABEL_300;
        case 0x3Du:
          Size = 80 * ActiveProcessorCount;
          if ( Length < 80 * ActiveProcessorCount )
            goto LABEL_112;
          v124 = a4;
          while ( 1 )
          {
            i = (unsigned int)v11;
            if ( (unsigned int)v11 >= ActiveProcessorCount )
              break;
            Size_4.Group = v19;
            *(_WORD *)&Size_4.Number = (unsigned __int8)v11;
            v35 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
            PoGetPerfStateAndParkingInfo(&Size_4, &v140, 0LL, &v121);
            memset((void *)a4, 0, 0x50uLL);
            *(_QWORD *)(a4 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v35 + 23300) + *(_DWORD *)(v35 + 23304));
            *(_QWORD *)(a4 + 48) = KeMaximumIncrement
                                 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v35 + 24) + 652LL);
            if ( v144 )
            {
              *(_BYTE *)a4 = v141;
              *(_BYTE *)(a4 + 7) = v142;
              *(_BYTE *)(a4 + 8) = v143;
              *(_DWORD *)(a4 + 12) = 1;
            }
            *(_QWORD *)(a4 + 72) = v121;
            a4 += 80LL;
            v124 = a4;
            LODWORD(v11) = (_DWORD)v11 + 1;
          }
          goto LABEL_567;
        case 0x3Eu:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
            Size = 64;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 64;
          goto LABEL_60;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
            Size = 12;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 12;
          goto LABEL_60;
        case 0x40u:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            goto LABEL_60;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v12) )
          {
            SystemBasicInformation = ExpGetHandleInformationEx(a4, Length, &Size);
            goto LABEL_567;
          }
          return -1073741790;
        case 0x41u:
          if ( Length < 4 )
          {
            if ( a6 )
              *a6 = 4;
            goto LABEL_60;
          }
          i = 0;
          if ( ActiveProcessorCount )
          {
            v62 = KiProcessorBlock;
            v63 = ActiveProcessorCount;
            i = ActiveProcessorCount;
            do
            {
              LODWORD(v11) = *(_DWORD *)(*v62++ + 23740) + (_DWORD)v11;
              --v63;
            }
            while ( v63 );
          }
          *(_DWORD *)a4 = (_DWORD)v11;
          Size = 4;
          goto LABEL_567;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            goto LABEL_60;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v12) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)a4, Length, 1, &Size);
          goto LABEL_567;
        case 0x43u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_60;
          }
          v92[0] = *(_DWORD *)a4;
          v145 = *(_QWORD *)(a4 + 8);
          v49 = *(unsigned int *)(a4 + 4);
          v126 = *(_DWORD *)(a4 + 4);
          if ( (v145 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation(v145, v49, &Size, v92);
          goto LABEL_567;
        case 0x44u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            goto LABEL_60;
          }
          v92[0] = *(_DWORD *)(a4 + 8);
          if ( (a4 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(a4, Length, &Size, v92);
          goto LABEL_567;
        case 0x45u:
          goto LABEL_399;
        case 0x46u:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            goto LABEL_60;
          }
          *(_DWORD *)a4 = ObpObjectSecurityMode;
LABEL_164:
          Size = 4;
          goto LABEL_567;
        case 0x49u:
          SystemBasicInformation = KeBuildLogicalProcessorSystemInformation(v19, a4, Length, &Size);
          goto LABEL_567;
        case 0x4Cu:
          SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((void *)a4);
          goto LABEL_300;
        case 0x4Du:
          if ( (unsigned int)ExIsRestrictedCaller(v12) )
            return -1073741790;
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          v43 = ExpQueryModuleInformationEx(v45, a4, Length, &Size);
LABEL_168:
          SystemBasicInformation = v43;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_567;
        case 0x4Fu:
          SystemFirmwareTableInformation = PfQuerySuperfetchInformation(0x40000000u, a4, Length, v12, (__int64)&Size);
          goto LABEL_300;
        case 0x50u:
          SystemFirmwareTableInformation = MmQueryMemoryListInformation((_OWORD *)a4, Length, (__int64)v23, &Size);
          goto LABEL_300;
        case 0x53u:
          Size = 8 * ActiveProcessorCount;
          if ( Length < 8 )
            goto LABEL_454;
          if ( Length < 8 * ActiveProcessorCount )
          {
            ActiveProcessorCount = Length >> 3;
            SystemBasicInformation = -1073741820;
          }
          v110 = (_QWORD *)a4;
          KeFlushProcessWriteBuffers(1);
          while ( 1 )
          {
            i = (unsigned int)v11;
            if ( (unsigned int)v11 >= ActiveProcessorCount )
              break;
            Size_4.Group = v19;
            *(_WORD *)&Size_4.Number = (unsigned __int8)v11;
            v64 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)] + 24) + 72LL);
            v65 = v110;
            *v110 = v64;
            v110 = v65 + 1;
            LODWORD(v11) = i + 1;
            v19 = v89;
          }
          goto LABEL_567;
        case 0x56u:
          SystemFirmwareTableInformation = ObQueryRefTraceInformation((void *)a4, Length);
          goto LABEL_300;
        case 0x57u:
          Size = 8;
          if ( Length == 8 )
          {
            *(_DWORD *)a4 = MmSpecialPoolTag;
            LOBYTE(v11) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(a4 + 4) = (_DWORD)v11;
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_567;
        case 0x58u:
          Size = 24;
          if ( Length != 24 )
          {
            SystemBasicInformation = -1073741820;
            goto LABEL_567;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)a4;
          v107 = *(char **)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v12 && WORD1(ProcessId[1]) )
          {
            if ( ((unsigned __int8)v107 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v38 = &v107[WORD1(ProcessId[1])];
            if ( (unsigned __int64)v38 > MmUserProbeAddress || v38 < v107 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
          v39 = KeGetCurrentThread();
          v98 = WORD1(ProcessId[1]);
          --v39->KernelApcDisable;
          v40 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v40 < 0 )
          {
            KiLeaveCriticalRegionUnsafe((__int64)v39);
            return v40;
          }
          SystemBasicInformation = PsQueryFullProcessImageName((__int64)Process, (_OWORD *)(a4 + 8), v107, &v98);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KiLeaveCriticalRegionUnsafe((__int64)v39);
          if ( SystemBasicInformation == -1073741820 )
            *(_WORD *)(a4 + 10) = v98;
          goto LABEL_567;
        case 0x5Au:
          Size = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            goto LABEL_60;
          }
          *(_OWORD *)a4 = ExpBootEnvironmentInformation;
          *(_DWORD *)(a4 + 16) = dword_1402D6390;
          if ( Length < 0x20 )
LABEL_273:
            Size = 20;
          else
            *(_QWORD *)(a4 + 24) = qword_1402D6398;
          goto LABEL_567;
        case 0x5Bu:
          SystemFirmwareTableInformation = HvlQueryEnlightenmentInfo(a4, Length, v12, &Size);
          goto LABEL_300;
        case 0x5Cu:
          if ( Length != 40 )
          {
            if ( a6 )
              *a6 = 40;
            goto LABEL_60;
          }
          SystemBasicInformation = VfGetVerifierInformationEx(a4, v20, v23, v7);
          if ( SystemBasicInformation >= 0 )
            LODWORD(v11) = 40;
          Size = (unsigned int)v11;
          goto LABEL_567;
        case 0x5Fu:
          if ( !v12 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v12) )
            return -1073741790;
          if ( Length >= 0x40 )
          {
            SystemFirmwareTableInformation = ExpCovQueryInformation(a4, Length, &Size);
            goto LABEL_300;
          }
          if ( a6 )
            *a6 = 64;
          goto LABEL_60;
        case 0x62u:
          SystemFirmwareTableInformation = IoQuerySystemDeviceName(98LL, a4, Length, &Size);
          goto LABEL_300;
        case 0x63u:
          SystemFirmwareTableInformation = IoQuerySystemDeviceName(99LL, a4, Length, &Size);
          goto LABEL_300;
        case 0x64u:
          v111[1] = v19;
          v111[0] = KeQueryGroupAffinity(v19);
          v31 = (0x101010101010101LL
               * ((((v111[0] - ((v111[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v111[0] - ((v111[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                 + ((((v111[0] - ((v111[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v111[0] - ((v111[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          SystemBasicInformation = PpmCapturePerformanceDistribution(
                                     0LL,
                                     0,
                                     (unsigned int)((0x101010101010101LL
                                                   * ((((v111[0] - ((v111[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v111[0] - ((v111[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)
                                                     + ((((v111[0] - ((v111[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + (((v111[0] - ((v111[0] >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                     (__int64)v111,
                                     &NumberOfBytes);
          if ( SystemBasicInformation != -1073741820 )
            goto LABEL_567;
          if ( (unsigned int)NumberOfBytes > Length )
          {
            SystemBasicInformation = -1073741820;
            Size = NumberOfBytes;
            goto LABEL_567;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x744D5050u);
          PoolWithQuotaTag = PoolWithTag;
          v94 = PoolWithTag;
          if ( !PoolWithTag )
          {
            SystemBasicInformation = -1073741670;
            goto LABEL_567;
          }
          memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
          SystemBasicInformation = PpmCapturePerformanceDistribution(
                                     PoolWithQuotaTag,
                                     NumberOfBytes,
                                     v31,
                                     (__int64)v111,
                                     &Size);
          if ( SystemBasicInformation >= 0 )
            memmove((void *)a4, PoolWithQuotaTag, Size);
          v34 = 1951223888;
          goto LABEL_565;
        case 0x65u:
          SystemFirmwareTableInformation = ExpQueryNumaProximityNode(a4, Length, &Size, v7);
          goto LABEL_300;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            ExAcquireTimeRefreshLock(1u);
            v59 = &ExpTimeZoneInformation;
            v60 = 3LL;
            do
            {
              *(_OWORD *)a4 = *v59;
              *(_OWORD *)(a4 + 16) = v59[1];
              *(_OWORD *)(a4 + 32) = v59[2];
              *(_OWORD *)(a4 + 48) = v59[3];
              *(_OWORD *)(a4 + 64) = v59[4];
              *(_OWORD *)(a4 + 80) = v59[5];
              *(_OWORD *)(a4 + 96) = v59[6];
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = v59[7];
              v59 += 8;
              --v60;
            }
            while ( v60 );
            *(_OWORD *)a4 = *v59;
            *(_OWORD *)(a4 + 16) = v59[1];
            *(_OWORD *)(a4 + 32) = v59[2];
            ExReleaseResourceLite(&ExpTimeRefreshLock);
            KeLeaveCriticalRegion();
            Size = 432;
            SystemBasicInformation = 0;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 432;
          goto LABEL_60;
        case 0x67u:
          if ( qword_1402DBDD8 )
          {
            LOBYTE(v23) = SeILSigningPolicy != 0;
            SystemFirmwareTableInformation = qword_1402DBDD8(a4, Length, v23, &Size);
          }
          else
          {
            SystemFirmwareTableInformation = -1073741823;
          }
          goto LABEL_300;
        case 0x69u:
          SystemBasicInformation = off_1402D29C8();
          if ( SystemBasicInformation != -1073741820 )
          {
LABEL_399:
            SystemBasicInformation = -1073741637;
            goto LABEL_567;
          }
          v66 = NumberOfBytes;
          if ( Length < (unsigned int)NumberOfBytes || !a4 )
            goto LABEL_507;
          if ( v87 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)NumberOfBytes, 0x6F666E49u);
            v94 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              SystemBasicInformation = -1073741670;
              goto LABEL_567;
            }
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)a4;
            v94 = (_DWORD *)a4;
          }
          v67 = off_1402D29C8();
          SystemBasicInformation = v67;
          if ( !v87 )
            goto LABEL_567;
          if ( v67 >= 0 )
            memmove((void *)a4, PoolWithQuotaTag, Size);
          goto LABEL_564;
        case 0x6Au:
          SystemBasicInformation = -1073741821;
          goto LABEL_567;
        case 0x6Bu:
          Size = Length;
          SystemBasicInformation = KeQueryLogicalProcessorRelationship(
                                     0LL,
                                     RelationshipType,
                                     (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a4,
                                     &Size);
          goto LABEL_567;
        case 0x6Cu:
          Size = 8 * ActiveProcessorCount;
          if ( Length < 8 )
            goto LABEL_454;
          if ( Length < 8 * ActiveProcessorCount )
          {
            ActiveProcessorCount = Length >> 3;
            SystemBasicInformation = -1073741820;
          }
          v125 = a4;
          while ( 1 )
          {
            i = (unsigned int)v11;
            if ( (unsigned int)v11 >= ActiveProcessorCount )
              break;
            Size_4.Group = v19;
            *(_WORD *)&Size_4.Number = (unsigned __int8)v11;
            v148 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)] + 23544);
            *(_QWORD *)a4 = v148;
            a4 += 8LL;
            v125 = a4;
            LODWORD(v11) = (_DWORD)v11 + 1;
          }
          goto LABEL_567;
        case 0x6Du:
          SystemFirmwareTableInformation = SmQueryStoreInformation(0x140000000uLL, a4, Length, v12, &Size);
          goto LABEL_300;
        case 0x70u:
          SystemFirmwareTableInformation = IoQueryVhdBootInformation(0x140000000uLL, a4, Length, &Size);
          goto LABEL_300;
        case 0x71u:
          SystemFirmwareTableInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, v12, &Size);
          goto LABEL_300;
        case 0x73u:
          if ( (_DWORD)v7 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_300;
          }
          Size = 8;
          if ( Length < 8 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_300;
          }
          *(_DWORD *)a4 = DbgkErrorPortStartTimeout;
          *(_DWORD *)(a4 + 4) = DbgkErrorPortCommTimeout;
          goto LABEL_567;
        case 0x74u:
          SystemFirmwareTableInformation = IoQueryLowPriorityIoInformation(0x140000000uLL, a4, Length, &Size);
          goto LABEL_300;
        case 0x75u:
          Size = 888;
          if ( Length != 888 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_300;
          }
          if ( v12 )
            return -1073741790;
          SystemFirmwareTableInformation = ExQueryBootEntropyInformation(a4, v20, v23, v7);
          goto LABEL_300;
        case 0x76u:
          if ( Length >= 0x100 )
          {
LABEL_299:
            SystemFirmwareTableInformation = VfGetVerifierInformation((void *)a4);
            goto LABEL_300;
          }
          if ( a6 )
            *a6 = 256;
          goto LABEL_60;
        case 0x79u:
          Size = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length < Size )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_300;
          }
          i = 0;
          while ( (unsigned int)v11 < (unsigned __int16)KeNumberNodes )
          {
            *(_DWORD *)(a4 + 4LL * (unsigned int)v11) = *((_DWORD *)KeNodeDistance
                                                        + (unsigned int)v11
                                                        + (unsigned __int16)v20 * (unsigned __int16)KeNumberNodes);
            LODWORD(v11) = (_DWORD)v11 + 1;
            i = (unsigned int)v11;
            LOWORD(v20) = v90;
          }
          goto LABEL_567;
        case 0x7Au:
          Size = 8;
          if ( Length != 8 || !a4 )
            goto LABEL_112;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
          v97 = (__int64)PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            SystemBasicInformation = -1073741670;
            goto LABEL_567;
          }
          SystemBasicInformation = off_1402D29C8();
          if ( SystemBasicInformation >= 0 )
          {
            *(_DWORD *)a4 = *PoolWithQuotaTag;
            *(_DWORD *)(a4 + 4) ^= (PoolWithQuotaTag[1] ^ *(_DWORD *)(a4 + 4)) & 1;
            v68 = *(_DWORD *)(a4 + 4) ^ (PoolWithQuotaTag[1] ^ *(_DWORD *)(a4 + 4)) & 2;
            *(_DWORD *)(a4 + 4) = v68;
            *(_DWORD *)(a4 + 4) = v68 ^ ((unsigned __int8)v68 ^ (unsigned __int8)PoolWithQuotaTag[1]) & 4;
          }
          goto LABEL_564;
        case 0x7Bu:
          if ( Length != 32 )
          {
            if ( a6 )
              *a6 = 32;
            goto LABEL_60;
          }
          *(_QWORD *)&v130 = MmGetAvailablePages();
          *((_QWORD *)&v130 + 1) = MmGetTotalCommittedPages();
          *(_QWORD *)&v131 = MmGetTotalCommitLimit();
          PeakCommitment = MmGetPeakCommitment();
          if ( PeakCommitment < v25 )
            PeakCommitment = v25;
          *((_QWORD *)&v131 + 1) = PeakCommitment;
          *(_OWORD *)a4 = v130;
          *(_OWORD *)(a4 + 16) = v131;
          goto LABEL_506;
        case 0x7Cu:
          Size = 12;
          if ( Length < 4 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_300;
          }
          v128 = *(_DWORD *)a4;
          if ( v128 == 1 )
          {
            Size = 12;
            if ( Length >= 0xC )
            {
              *(_DWORD *)(a4 + 8) = 0;
              *(_DWORD *)(a4 + 4) = 0;
              *(_DWORD *)(a4 + 8) = 1;
              *(_DWORD *)(a4 + 4) = 1;
              if ( MEMORY[0xFFFFF780000003C6] )
                *(_DWORD *)(a4 + 4) &= ~1u;
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
          goto LABEL_567;
        case 0x7Du:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_60;
          }
          v92[0] = *(_DWORD *)a4;
          v150 = *(_QWORD *)(a4 + 8);
          v50 = *(_DWORD *)(a4 + 4);
          v122 = v50;
          if ( (v150 & 7) != 0 )
            return -2147483646;
          if ( (unsigned int)ExIsRestrictedCaller(v12) )
            return -1073741790;
          SystemBasicInformation = ExGetSessionBigPoolInformation(v150, v50, &Size, v92);
          goto LABEL_567;
        case 0x7Eu:
          Size = 32;
          if ( Length == 32 )
          {
            SystemBasicInformation = BgkQueryBootGraphicsInformation(0LL, v152, v23, v7);
            if ( SystemBasicInformation >= 0 )
            {
              v69 = v152[0];
              if ( v87 )
                v69 = 0LL;
              v152[0] = v69;
              memmove((void *)a4, v152, Size);
            }
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_567;
        case 0x80u:
          if ( (_DWORD)v7 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_300;
          }
          v73 = MmEnumerateBadPages(&v109);
          v74 = v109;
          if ( v109 )
            Size = 8 * *v109;
          else
            Size = 0;
          if ( Length < Size )
            v73 = -1073741820;
          SystemBasicInformation = v73;
          if ( !v109 )
            goto LABEL_567;
          if ( v73 >= 0 )
            memmove((void *)a4, v109 + 2, Size);
          v34 = 0;
          v75 = v74;
          goto LABEL_566;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v12) )
            return -1073741727;
          SystemFirmwareTableInformation = ExpGetSystemPlatformBinary(a4, Length, v87);
          goto LABEL_300;
        case 0x86u:
          Size = 32;
          if ( Length == 32 )
            SystemFirmwareTableInformation = sub_1404AE668(0x140000000uLL, a4, v23, v7);
          else
            SystemFirmwareTableInformation = -1073741820;
          goto LABEL_300;
        case 0x87u:
          Size = 8;
          if ( Length < 8 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_300;
          }
          if ( (unsigned int)HvlQueryActiveProcessors(&v103, 0LL) )
          {
            SystemBasicInformation = -1073741637;
          }
          else
          {
            SystemBasicInformation = HvlQueryProcessorTopologyCount(0LL, &v102);
            if ( SystemBasicInformation )
            {
              SystemBasicInformation = -1073741637;
            }
            else
            {
              *(_DWORD *)a4 = v103;
              *(_DWORD *)(a4 + 4) = v102;
            }
          }
          goto LABEL_567;
        case 0x88u:
        case 0x89u:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation(v9, a4, 48LL, v7);
          if ( a6 )
            *a6 = 48;
          goto LABEL_60;
        case 0x8Au:
          SystemFirmwareTableInformation = ExpQueryMemoryTopologyInformation((void *)a4);
          goto LABEL_300;
        case 0x8Bu:
          SystemFirmwareTableInformation = ExpQueryChannelInformation((void *)a4);
          goto LABEL_300;
        case 0x8Cu:
          if ( !a6 && Length < 8 )
          {
            SystemBasicInformation = -1073741811;
            goto LABEL_567;
          }
          SystemBasicInformation = BgkQueryBootGraphicsInformation(2LL, &Size, v23, v7);
          if ( SystemBasicInformation < 0 )
            goto LABEL_567;
          if ( !Size )
          {
            SystemBasicInformation = -1073741670;
            goto LABEL_567;
          }
          if ( Length < Size )
          {
LABEL_454:
            SystemBasicInformation = -1073741789;
            goto LABEL_567;
          }
          SystemBasicInformation = BgkQueryBootGraphicsInformation(1LL, &v113, v70, v71);
          if ( SystemBasicInformation < 0 )
            goto LABEL_567;
          PoolWithQuotaTag = v113;
          if ( !v113 )
          {
            SystemBasicInformation = -1073741670;
            goto LABEL_567;
          }
          memmove((void *)a4, v113, Size);
          v34 = 1263093570;
          goto LABEL_565;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
          SystemFirmwareTableInformation = SeSecureBootQueryInformation(v9, a4, Length, &Size);
          goto LABEL_300;
        case 0x93u:
          SystemFirmwareTableInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(a4, Length, &Size, v7);
          goto LABEL_300;
        case 0x95u:
          if ( Length >= 3 )
          {
            *(_BYTE *)a4 = KdpBootedNodebug == 0;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            Size = 3;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 3;
          goto LABEL_60;
        case 0x96u:
          if ( !ExBootLoaderMetadata )
          {
            Size = 0;
            goto LABEL_567;
          }
          v72 = *(_DWORD *)ExBootLoaderMetadata;
          Size = *(_DWORD *)ExBootLoaderMetadata;
          if ( !a4 )
            goto LABEL_567;
          if ( Length < v72 )
          {
            SystemFirmwareTableInformation = -1073741820;
            goto LABEL_300;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v12) )
            return -1073741727;
          memmove((void *)a4, (const void *)(ExBootLoaderMetadata + 4), Size);
          goto LABEL_567;
        case 0x97u:
          Size = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = ExSoftRebootFlags;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 4;
          goto LABEL_60;
        case 0x99u:
          if ( (_DWORD)v7 )
          {
            SystemFirmwareTableInformation = -1073741820;
LABEL_300:
            SystemBasicInformation = SystemFirmwareTableInformation;
          }
          else
          {
            Size = 32;
            if ( Length < 0x20 )
            {
              if ( Length < 0xC )
              {
                SystemBasicInformation = -1073741820;
              }
              else
              {
                Size = 12;
                v147 = a4;
                *(_QWORD *)a4 = PoOffCrashConfigTable;
                *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
              }
            }
            else
            {
              v146 = a4;
              *(_QWORD *)a4 = PoOffCrashConfigTable;
              *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
              *(_QWORD *)(a4 + 16) = xmmword_1402DF790;
              *(_DWORD *)(a4 + 24) = DWORD2(xmmword_1402DF790);
            }
          }
          goto LABEL_567;
        case 0x9Au:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            goto LABEL_60;
          }
          SystemBasicInformation = ExpGetSystemProcessorFeaturesInformation(a4, v20, v23, v7);
LABEL_506:
          v66 = 32;
LABEL_507:
          Size = v66;
          goto LABEL_567;
        case 0x9Cu:
          Size = 128;
          if ( Length == 128 )
          {
            SystemBasicInformation = BgkQueryBootGraphicsInformation(3LL, v154, v23, v7);
            if ( SystemBasicInformation >= 0 )
              memmove((void *)a4, v154, Size);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_567;
        case 0x9Du:
          Size = WORD1(qword_1402D6368) + 24;
          if ( Length >= Size )
          {
            v76 = (void *)(a4 + 24);
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)(a4 + 8) = 0LL;
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)a4 = ExpManufacturingInformation;
            *(_DWORD *)(a4 + 8) = qword_1402D6368;
            if ( (_WORD)qword_1402D6368 )
            {
              *(_QWORD *)(a4 + 16) = v76;
              memmove(v76, qword_1402D6370, WORD1(qword_1402D6368));
            }
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_567;
        case 0x9Eu:
          Size = 1;
          if ( Length )
          {
            *(_BYTE *)a4 = PoEnergyEstimationEnabled();
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_112;
        case 0x9Fu:
          SystemFirmwareTableInformation = HvlQueryDetailInfo(a4, Length, v23, &Size);
          goto LABEL_300;
        case 0xA0u:
          Size = ActiveProcessorCount << 6;
          if ( Length < 0x40 )
            goto LABEL_454;
          if ( Length < ActiveProcessorCount << 6 )
          {
            ActiveProcessorCount = Length >> 6;
            SystemBasicInformation = -1073741820;
          }
          v112 = a4;
          for ( i = 0; i < ActiveProcessorCount; ++i )
          {
            Size_4.Group = v19;
            *(_WORD *)&Size_4.Number = (unsigned __int8)i;
            v77 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&Size_4)];
            v78 = 0;
            v104 = 0;
            while ( v78 < 4 )
            {
              v79 = 0;
              v101 = 0;
              while ( v79 < 2 )
              {
                a4 = v112;
                *(_QWORD *)(v112 + 8 * (v79 + 2LL * v78)) = *(_QWORD *)(v77 + 8 * (v79 + 2LL * v78) + 23552);
                v101 = ++v79;
                v19 = v89;
              }
              v104 = ++v78;
            }
            a4 += 64LL;
            v112 = a4;
          }
          goto LABEL_567;
        case 0xA2u:
          SystemFirmwareTableInformation = SeQueryTrustedPlatformModuleInformation((_DWORD *)a4, Length, &Size);
          goto LABEL_300;
        case 0xA3u:
          if ( Length )
          {
            *(_BYTE *)a4 = KdIgnoreUmExceptions;
            Size = 1;
            goto LABEL_567;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_60;
        case 0xA4u:
        case 0xACu:
          if ( qword_1402DBE48 )
            SystemFirmwareTableInformation = qword_1402DBE48(v9, a4, Length, &Size);
          else
            SystemFirmwareTableInformation = -1073741823;
          goto LABEL_300;
        case 0xA5u:
          Size = 16;
          if ( Length == 16 )
          {
            v100 = 0uLL;
            if ( VslIsSecureKernelRunning() )
            {
              v88[0] = 0;
              v80 = v100 | 1;
              LOBYTE(v100) = v100 | 1;
              NestedPageProtectionFlags = HvlGetNestedPageProtectionFlags();
              if ( (NestedPageProtectionFlags & 2) != 0 )
              {
                v80 |= 2u;
                LOBYTE(v100) = v80;
              }
              if ( (NestedPageProtectionFlags & 0x20) != 0 )
              {
                v80 |= 4u;
                LOBYTE(v100) = v80;
              }
              if ( (NestedPageProtectionFlags & 0x10) != 0 )
                LOBYTE(v100) = v80 | 8;
              if ( v99 )
              {
                SystemBasicInformation = VslIsTrustletRunning(v99, v88);
                BYTE1(v100) ^= (v88[0] ^ BYTE1(v100)) & 1;
              }
            }
            *(_OWORD *)a4 = v100;
          }
          else
          {
            if ( a6 )
              *a6 = 16;
LABEL_112:
            SystemBasicInformation = -1073741820;
          }
          goto LABEL_567;
        case 0xA6u:
          SystemFirmwareTableInformation = SeQueryHSTIResults(a4, Length, &Size, v7);
          goto LABEL_300;
        case 0xA7u:
          SystemBasicInformation = ExpQuerySingleModuleInformation(a4, Length, v12, &Size);
          goto LABEL_567;
        case 0xA9u:
          SystemFirmwareTableInformation = HvlQueryDmaProtectionInfo(a4, Length, &Size, v7);
          goto LABEL_300;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(v12);
          if ( result < 0 )
            return result;
          Size = 168;
          if ( Length == 168 )
            SystemFirmwareTableInformation = KeGetAffinitizedInterruptsInfo((_WORD *)a4);
          else
            SystemFirmwareTableInformation = -1073741820;
          goto LABEL_300;
        case 0xAEu:
          SystemFirmwareTableInformation = PsRootSiloInformation(a4, Length, &Size, v7);
          goto LABEL_300;
        case 0xAFu:
          if ( v23 )
          {
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v12, &Object, 0LL);
            v11 = Object;
            Process = (PEPROCESS)Object;
            if ( result < 0 )
              return result;
          }
          else
          {
            Process = 0LL;
          }
          SystemBasicInformation = KeQueryCpuSetInformation((void *)a4);
          if ( v11 )
            ObfDereferenceObject(v11);
          goto LABEL_567;
        case 0xB2u:
          if ( Length )
          {
            if ( v12 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v12) )
              return -1073741727;
            v82 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
            PoolWithQuotaTag = v82;
            v94 = v82;
            if ( v82 )
            {
              memset(v82, 0, Length);
              SystemBasicInformation = HvlQuerySecureKernelProfileInformation(
                                         v108,
                                         (__int64)PoolWithQuotaTag,
                                         Length,
                                         &Size);
              if ( SystemBasicInformation >= 0 )
                memmove((void *)a4, PoolWithQuotaTag, Size);
LABEL_564:
              v34 = 1868983881;
LABEL_565:
              v75 = PoolWithQuotaTag;
LABEL_566:
              ExFreePoolWithTag(v75, v34);
            }
            else
            {
              SystemBasicInformation = -1073741670;
            }
          }
          else
          {
            SystemBasicInformation = -1073741789;
          }
LABEL_567:
          if ( a6 )
            *a6 = Size;
          return SystemBasicInformation;
        case 0xC4u:
          SystemFirmwareTableInformation = KeQueryKvaShadowInformation(a4, Length, &Size, v7);
          goto LABEL_300;
        case 0xC9u:
          SystemFirmwareTableInformation = KeQuerySpeculationControlInformation((void *)a4, Length);
          goto LABEL_300;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
      if ( (_DWORD)v7 != 8 )
        return -1073741811;
      v23 = *(void **)v8;
      Handle = v23;
      goto LABEL_56;
    case 0xB2u:
      if ( (_DWORD)v7 != 8 )
        return -1073741811;
      v108 = *(_QWORD *)v8;
      goto LABEL_55;
    default:
      v23 = 0LL;
      goto LABEL_56;
  }
}
