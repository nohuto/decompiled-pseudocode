/*
 * XREFs of PspAllocateProcess @ 0x14046DF00
 * Callers:
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140005088 (KeQueryActiveGroupCount.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeQueryAffinityProcess @ 0x14009C45C (KeQueryAffinityProcess.c)
 *     KeFirstGroupAffinityEx @ 0x1400AA560 (KeFirstGroupAffinityEx.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     KeQuerySystemTimeUnsafe @ 0x1400EFE70 (KeQuerySystemTimeUnsafe.c)
 *     KeQueryMaximumGroupCount @ 0x1400EFE9C (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x1400EFEA4 (PoEnergyEstimationEnabled.c)
 *     KeQuerySystemTimePrecise @ 0x1400EFF50 (KeQuerySystemTimePrecise.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeSecureProcess @ 0x1401D204C (KeSecureProcess.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SmpKeyedStoreCreate @ 0x1403E4B74 (SmpKeyedStoreCreate.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReleaseObjectSecurity @ 0x14041F568 (ObReleaseObjectSecurity.c)
 *     MmSecureVirtualMemory @ 0x14042985C (MmSecureVirtualMemory.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     PspUpdateCreateInfo @ 0x14045B498 (PspUpdateCreateInfo.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x14045E3D4 (ObInitProcess.c)
 *     MmMapApiSetView @ 0x14046AC1C (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x14046AF88 (MmCreatePeb.c)
 *     PspSelectNodeForProcess @ 0x14046C1C8 (PspSelectNodeForProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14046DD24 (MmGetSessionSchedulingGroupByProcess.c)
 *     KeInitializeProcess @ 0x14046DD48 (KeInitializeProcess.c)
 *     PspInheritMitigationOptions @ 0x14046FB54 (PspInheritMitigationOptions.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     MmGetSectionInformation @ 0x140470AD8 (MmGetSectionInformation.c)
 *     PsQueryProcessAttributes @ 0x140470C90 (PsQueryProcessAttributes.c)
 *     PspApplyMitigationOptions @ 0x140470CE8 (PspApplyMitigationOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x140471080 (PspReadIFEOMitigationOptions.c)
 *     PspComputeQuantumAndPriority @ 0x1404710E0 (PspComputeQuantumAndPriority.c)
 *     PspInitializeProcessSecurity @ 0x1404711C8 (PspInitializeProcessSecurity.c)
 *     PspReadIFEOPerfOptions @ 0x1404720CC (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 *     PspReadIFEONodeOptions @ 0x140472344 (PspReadIFEONodeOptions.c)
 *     SeIsTokenAssignableToProcess @ 0x1404753D4 (SeIsTokenAssignableToProcess.c)
 *     SeQuerySessionIdToken @ 0x1404B1528 (SeQuerySessionIdToken.c)
 *     PspInitializeFullProcessImageName @ 0x1404B5B34 (PspInitializeFullProcessImageName.c)
 *     RtlpOpenImageFileOptionsKey @ 0x1404B6BF4 (RtlpOpenImageFileOptionsKey.c)
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 *     SeQueryMandatoryLabel @ 0x1404BC628 (SeQueryMandatoryLabel.c)
 *     RtlAcquirePrivilege @ 0x1404BF554 (RtlAcquirePrivilege.c)
 *     PspSetupReservedUserMappings @ 0x1404C2878 (PspSetupReservedUserMappings.c)
 *     PspDetectComplusILImage @ 0x1404C4B2C (PspDetectComplusILImage.c)
 *     PspInheritQuota @ 0x1404C4C78 (PspInheritQuota.c)
 *     RtlReleasePrivilege @ 0x1404C801C (RtlReleasePrivilege.c)
 *     PspSetProcessPriorityClass @ 0x1404C9A88 (PspSetProcessPriorityClass.c)
 *     PspApplyIFEOPerfOptions @ 0x1404CB58C (PspApplyIFEOPerfOptions.c)
 *     PspAttachSession @ 0x1404CC854 (PspAttachSession.c)
 *     PspHardenMitigationOptions @ 0x1404CE2A0 (PspHardenMitigationOptions.c)
 *     PspDetachSession @ 0x1404CE648 (PspDetachSession.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ExCreateHandleEx @ 0x1404F0B70 (ExCreateHandleEx.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404FDC24 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64GetSharedInformation @ 0x1404FE07C (PspWow64GetSharedInformation.c)
 *     PspWritePebAffinityInfo @ 0x1404FE0C0 (PspWritePebAffinityInfo.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MmIsSessionLeaderProcess @ 0x1405372D8 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x14057D568 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x14057F1E4 (MmInitializeHandBuiltProcess2.c)
 *     MmGetSectionStrongImageReference @ 0x140663080 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x14067DD40 (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspAllocateProcess(
        _DWORD *a1,
        KPROCESSOR_MODE a2,
        volatile signed __int32 *a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        void *a8,
        unsigned int a9,
        __int64 a10,
        int a11,
        __int64 a12,
        _QWORD *a13)
{
  int v14; // r15d
  __int64 v15; // r13
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 result; // rax
  unsigned int v19; // esi
  int MaximumGroupCount; // eax
  int v21; // ecx
  int v22; // r9d
  unsigned int v23; // r12d
  char *v24; // r15
  int v25; // r9d
  __int16 v26; // r10
  char *v27; // rcx
  unsigned __int64 Blink; // rax
  int v29; // eax
  ULONG_PTR v30; // r12
  int v31; // edx
  int DefaultPagePriority; // r8d
  __int64 v33; // rdi
  int SectionInformation; // edi
  void *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // ebx
  unsigned __int16 v39; // si
  int v40; // eax
  int v41; // ecx
  int v42; // r9d
  int v43; // eax
  int v44; // eax
  HANDLE *v45; // rdi
  void *v46; // rcx
  int ImageFileKeyOption; // eax
  int v48; // eax
  _WORD *PoolWithTag; // rax
  ULONG v50; // edi
  KPROCESSOR_MODE v51; // al
  __int16 v52; // cx
  int IsSessionLeaderProcess; // eax
  bool v54; // sf
  ULONG v55; // edi
  char v56; // r12
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  struct _KPROCESS *v60; // rdx
  int v61; // r8d
  int v62; // r9d
  unsigned __int16 v63; // di
  __int64 SessionSchedulingGroupByProcess; // rax
  char v65; // dl
  __int64 v66; // rcx
  _BYTE *v67; // r9
  unsigned int v68; // r8d
  int inited; // eax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rsi
  int v75; // r12d
  unsigned int v76; // r12d
  int v77; // eax
  int v78; // r12d
  unsigned int v79; // r12d
  __int64 v80; // rcx
  int v81; // r12d
  ULONG_PTR v82; // rdx
  unsigned int v83; // esi
  PVOID v84; // rax
  size_t v85; // r8
  ULONG_PTR v86; // rsi
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rax
  char v90; // r12
  ULONG_PTR v91; // rax
  _OWORD *v92; // rsi
  PVOID *v93; // rax
  _QWORD *v94; // rsi
  __int64 v95; // r12
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v99; // rcx
  unsigned int v101; // [rsp+54h] [rbp-394h]
  char v102[4]; // [rsp+58h] [rbp-390h] BYREF
  __int16 v103; // [rsp+5Ch] [rbp-38Ch]
  BOOLEAN MemoryAllocated[8]; // [rsp+60h] [rbp-388h] BYREF
  ULONG_PTR v105; // [rsp+68h] [rbp-380h]
  int v106; // [rsp+70h] [rbp-378h]
  int v107; // [rsp+74h] [rbp-374h]
  int v108; // [rsp+78h] [rbp-370h]
  char v109; // [rsp+7Ch] [rbp-36Ch] BYREF
  char v110[3]; // [rsp+7Dh] [rbp-36Bh] BYREF
  unsigned int v111; // [rsp+80h] [rbp-368h]
  unsigned __int64 v112; // [rsp+88h] [rbp-360h] BYREF
  int v113; // [rsp+90h] [rbp-358h]
  int v114; // [rsp+94h] [rbp-354h]
  PVOID Object; // [rsp+98h] [rbp-350h] BYREF
  ULONG SessionId; // [rsp+A0h] [rbp-348h] BYREF
  __int64 v117; // [rsp+A8h] [rbp-340h] BYREF
  volatile signed __int32 *v118; // [rsp+B0h] [rbp-338h]
  __int16 v119; // [rsp+B8h] [rbp-330h]
  _BYTE TokenInformation[12]; // [rsp+BCh] [rbp-32Ch] BYREF
  struct _KPROCESS *Process; // [rsp+C8h] [rbp-320h]
  __int64 v122; // [rsp+D0h] [rbp-318h]
  int v123; // [rsp+D8h] [rbp-310h]
  int v124; // [rsp+DCh] [rbp-30Ch]
  int v125; // [rsp+E0h] [rbp-308h]
  volatile signed __int32 *v126; // [rsp+E8h] [rbp-300h]
  PACCESS_TOKEN Token; // [rsp+F0h] [rbp-2F8h]
  __int64 v128; // [rsp+F8h] [rbp-2F0h]
  unsigned __int64 v129; // [rsp+100h] [rbp-2E8h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-2E0h]
  __int64 v131; // [rsp+110h] [rbp-2D8h] BYREF
  __int64 v132; // [rsp+118h] [rbp-2D0h]
  PVOID ReturnedState; // [rsp+120h] [rbp-2C8h] BYREF
  __int64 v134; // [rsp+128h] [rbp-2C0h] BYREF
  _DWORD *v135; // [rsp+130h] [rbp-2B8h]
  __int64 v136; // [rsp+138h] [rbp-2B0h] BYREF
  __int128 v137; // [rsp+140h] [rbp-2A8h] BYREF
  HANDLE Handle; // [rsp+150h] [rbp-298h] BYREF
  __int64 v139; // [rsp+158h] [rbp-290h]
  PSECURITY_DESCRIPTOR SecurityDescriptor[6]; // [rsp+160h] [rbp-288h] BYREF
  __int64 v141; // [rsp+190h] [rbp-258h]
  _QWORD *v142; // [rsp+198h] [rbp-250h]
  _BYTE *v143; // [rsp+1A0h] [rbp-248h]
  __int64 v144; // [rsp+1A8h] [rbp-240h] BYREF
  _QWORD *v145; // [rsp+1B0h] [rbp-238h]
  char v146[8]; // [rsp+1B8h] [rbp-230h] BYREF
  OBJECT_ATTRIBUTES v147; // [rsp+1F0h] [rbp-1F8h] BYREF
  char v148[46]; // [rsp+220h] [rbp-1C8h] BYREF
  __int16 v149; // [rsp+24Eh] [rbp-19Ah]
  char v150; // [rsp+253h] [rbp-195h]
  _QWORD v151[4]; // [rsp+260h] [rbp-188h] BYREF
  _BYTE v152[48]; // [rsp+280h] [rbp-168h] BYREF
  _OWORD v153[11]; // [rsp+2B0h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+360h] [rbp-88h] BYREF
  _WORD v155[20]; // [rsp+378h] [rbp-70h] BYREF

  v14 = (int)a3;
  v118 = a3;
  v105 = (ULONG_PTR)a1;
  SecurityDescriptor[1] = a1;
  *(_QWORD *)&TokenInformation[4] = a7;
  Token = a8;
  v15 = a10;
  SecurityDescriptor[2] = (PSECURITY_DESCRIPTOR)a10;
  v141 = a12;
  v145 = a13;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v128 = 0LL;
  v117 = 0LL;
  v106 = 0;
  v107 = 0;
  v122 = 0LL;
  v108 = 0;
  v103 = 0;
  v114 = 0;
  v125 = 0;
  v139 = 0LL;
  v124 = 0;
  v101 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v16 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v16 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v16 = 197632;
    }
  }
  v17 = 0LL;
  if ( (a9 & 0x100) != 0 )
    v17 = (__int64)a1;
  v135 = (_DWORD *)v17;
  if ( a10 && (*(_DWORD *)(a10 + 4) & 0x2000) != 0 )
  {
    if ( v17 )
      return 3221225520LL;
    v128 = KeNodeBlock[*(unsigned __int16 *)(a10 + 242)];
    v117 = v128;
  }
  else if ( a1 && (a1[192] & 0x200000) != 0 )
  {
    v135 = a1;
    v107 = 0x200000;
  }
  if ( a10 && (*(_DWORD *)(a10 + 4) & 0x40000) != 0 )
    v16 |= 0x1000u;
  memset(v151, 0, sizeof(v151));
  ReturnedState = 0LL;
  v19 = 2000;
  v111 = 0;
  LODWORD(v126) = 0;
  if ( !PsDisableDiskCounters )
  {
    v111 = 2000;
    v19 = 2040;
    v16 |= 0x200u;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    LODWORD(v126) = (v19 + 7) & 0xFFFFFFF8;
    v19 = (_DWORD)v126 + 144;
    v16 |= 0x2000u;
    v14 = (int)v118;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v118) = MaximumGroupCount;
  v23 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v23 = (v19 + 7) & 0xFFFFFFF8;
    v19 = 16 * (unsigned __int16)MaximumGroupCount + v23;
  }
  LOBYTE(v22) = a2;
  LOBYTE(v21) = a2;
  result = ObCreateObject(v21, (_DWORD)PsProcessType, v14, v22, 0, v19, 0, v19, (__int64)&Object);
  if ( (int)result < 0 )
    return result;
  v24 = (char *)Object;
  ObfReferenceObjectWithTag(Object, 0x72437350u);
  ObfDereferenceObjectWithTag(v24, 0x746C6644u);
  memset(v24, 0, v19);
  memset(v24 + 1616, 0, 0x20uLL);
  *((_QWORD *)v24 + 202) = 0LL;
  *((_QWORD *)v24 + 204) = v24 + 1624;
  *((_QWORD *)v24 + 203) = v24 + 1624;
  *((_QWORD *)v24 + 92) = 0LL;
  *((_QWORD *)v24 + 91) = 0LL;
  *((_QWORD *)v24 + 146) = v24 + 1160;
  *((_QWORD *)v24 + 145) = v24 + 1160;
  *((_QWORD *)v24 + 223) = v24 + 1776;
  *((_QWORD *)v24 + 222) = v24 + 1776;
  v143 = v24 + 1738;
  v24[1738] = a4;
  v24[1736] = a5;
  v24[1737] = a6;
  v25 = (v16 >> 10) & 1;
  if ( v25 )
    *((_DWORD *)v24 + 435) |= 1u;
  v26 = v101;
  if ( (v101 & 0x8000) != 0 )
    *((_DWORD *)v24 + 435) |= 0x80u;
  if ( v23 )
  {
    *((_DWORD *)v24 + 435) |= 0x200u;
    v27 = &v24[v23];
    *((_QWORD *)v24 + 242) = v27;
    *((_QWORD *)v24 + 243) = &v27[8 * (unsigned int)v118];
  }
  Blink = (unsigned __int64)Process[1].Header.WaitListHead.Blink;
  if ( (v101 & 0x200) == 0 )
    Blink |= 2uLL;
  *((_QWORD *)v24 + 126) = Blink;
  if ( (v16 & 0x200) != 0 )
    *((_QWORD *)v24 + 225) = &v24[v111];
  if ( (v16 & 0x2000) != 0 )
    *((_QWORD *)v24 + 230) = &v24[(unsigned int)v126];
  if ( v15 && (*(_DWORD *)(v15 + 4) & 0x200) != 0 )
  {
    v29 = *(_DWORD *)(v15 + 308);
    v30 = v105;
  }
  else
  {
    v30 = v105;
    if ( v105 )
      v29 = *(_DWORD *)(v105 + 1184);
    else
      v29 = 5;
  }
  SecurityDescriptor[5] = v24 + 1184;
  *((_DWORD *)v24 + 296) = v29;
  *((_DWORD *)v24 + 395) = 259;
  if ( v30 )
  {
    v31 = (*(_DWORD *)(v30 + 772) >> 27) & 7;
    DefaultPagePriority = (*(_DWORD *)(v30 + 768) >> 12) & 7;
    *((_QWORD *)v24 + 124) = *(_QWORD *)(v30 + 744);
  }
  else
  {
    DefaultPagePriority = MmGetDefaultPagePriority();
  }
  v126 = (volatile signed __int32 *)(v24 + 772);
  *((_DWORD *)v24 + 193) = *((_DWORD *)v24 + 193) & 0xC7FFFFFF | (v31 << 27);
  v118 = (volatile signed __int32 *)(v24 + 768);
  *((_DWORD *)v24 + 192) = (DefaultPagePriority << 12) | *((_DWORD *)v24 + 192) & 0xFFFF8FFF;
  v33 = *(_QWORD *)&TokenInformation[4];
  if ( !v25 )
  {
    v122 = *(_QWORD *)&TokenInformation[4];
    if ( *(_QWORD *)&TokenInformation[4] )
    {
      if ( (v26 & 0x1000) != 0 )
      {
LABEL_49:
        SectionInformation = -1073741776;
LABEL_333:
        PspRundownSingleProcess((ULONG_PTR)v24, 0);
        ObfDereferenceObjectWithTag(v24, 0x72437350u);
        return (unsigned int)SectionInformation;
      }
      ObfReferenceObject(*(PVOID *)&TokenInformation[4]);
    }
    else if ( v30 )
    {
      if ( a11 )
        goto LABEL_49;
      if ( (PEPROCESS)v30 == PsInitialSystemProcess )
      {
        SectionInformation = -1073741811;
        goto LABEL_333;
      }
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v30 + 736)) )
      {
        v35 = *(void **)(v30 + 952);
        *(_QWORD *)&TokenInformation[4] = v35;
        if ( v35 )
          ObfReferenceObject(v35);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v30 + 736));
      }
      v33 = *(_QWORD *)&TokenInformation[4];
      if ( !*(_QWORD *)&TokenInformation[4] )
      {
        SectionInformation = -1073741558;
        goto LABEL_333;
      }
      v36 = *(_QWORD *)(v30 + 1064);
      if ( v36 )
      {
        v16 |= 0x4000u;
        v108 = *(unsigned __int16 *)(v36 + 8);
        v103 = v108;
      }
      if ( (*(_DWORD *)(v30 + 772) & 0x20000) != 0 )
      {
        v101 |= 8u;
        a9 = v101;
      }
    }
  }
  v142 = v24 + 952;
  *((_QWORD *)v24 + 119) = v33;
  LOWORD(v111) = 0;
  if ( v15 )
  {
    SectionInformation = MmGetSectionInformation(v33, 1LL, v15 + 48);
    if ( SectionInformation < 0 )
      goto LABEL_333;
    v37 = *(unsigned __int8 *)(v15 + 99);
    v38 = v16 & 0xFFFFFE7F | (32 * (*(_BYTE *)(v15 + 99) & 4 | (4 * (*(_BYTE *)(v15 + 99) & 2))));
    v39 = *(_WORD *)(v15 + 96);
    if ( (v38 & 0x100) == 0 || v39 != 332 || (v40 = 1, (v37 & 1) == 0) )
      v40 = 0;
    v16 = (v38 ^ (v40 << 15)) & 0x8000 ^ v38;
    if ( v39 == 14948 )
      v39 = 332;
    if ( (*(_WORD *)(v15 + 92) & *(_WORD *)(v15 + 10)) != 0 )
    {
      SectionInformation = -1073741701;
LABEL_75:
      v41 = 3;
LABEL_76:
      PspUpdateCreateInfo(v41, v15, 0LL);
      goto LABEL_333;
    }
    if ( (v16 & 0x8000) == 0 )
    {
      if ( (unsigned int)PspWow64GetSharedInformation(v39, 6LL) )
      {
        v16 |= 0x4000u;
        v108 = v39;
        v103 = v39;
      }
      if ( (v16 & v42) == 0
        && (v39 < MEMORY[0xFFFFF7800000002C] || v39 > MEMORY[0xFFFFF7800000002E])
        && (v16 & 0x4000) == 0 )
      {
        SectionInformation = -1073741701;
        v41 = 4;
        goto LABEL_76;
      }
    }
    if ( v122 )
    {
      LOWORD(v111) = *(_WORD *)(v15 + 94);
      v43 = RtlpOpenImageFileOptionsKey(v15 + 224, v37, v15 + 184);
      if ( v43 < 0 )
      {
        if ( v43 == -1073741772 )
          *(_BYTE *)(v15 + 8) |= 0x40u;
        *(_QWORD *)(v15 + 184) = 0LL;
      }
      ObfReferenceObjectWithTag(*(PVOID *)(v15 + 168), 0x72437350u);
      *((_QWORD *)v24 + 137) = *(_QWORD *)(v15 + 168);
      if ( (v16 & 0x4000) == 0 )
      {
        SectionInformation = PspDetectComplusILImage(v15, &a9);
        if ( SectionInformation < 0 )
          goto LABEL_333;
        if ( v39 == 332 )
        {
          LOWORD(v101) = a9;
          if ( (a9 & 8) == 0 )
          {
            v16 |= 0x4000u;
            if ( (unsigned int)PspWow64GetSharedInformation(332LL, 6LL) )
              v44 = 332;
            else
              v44 = 452;
            v108 = v44;
            v103 = v44;
          }
        }
        else
        {
          LOWORD(v101) = a9;
        }
      }
      v45 = (HANDLE *)(v15 + 184);
      v46 = *(void **)(v15 + 184);
      if ( v46 )
      {
        if ( *(char *)(v15 + 8) >= 0 )
        {
          ImageFileKeyOption = RtlQueryImageFileKeyOption(v46, 2, (__int64)&v136);
          if ( ImageFileKeyOption == -2147483643 || ImageFileKeyOption >= 0 && (_DWORD)v136 == 2 && v119 )
          {
            SectionInformation = -1073741767;
            v41 = 5;
            goto LABEL_76;
          }
        }
        v113 = 0;
        RtlQueryImageFileKeyOption(*v45, 4, 0LL);
        if ( !v135 )
        {
          PspReadIFEONodeOptions(v24, *v45, &v117);
          v128 = v117;
        }
        v123 = 0;
        if ( (int)RtlQueryImageFileKeyOption(*v45, 4, 0LL) >= 0 && v123 )
          v107 |= 0x40u;
        v147.Length = 48;
        v147.RootDirectory = *v45;
        v147.Attributes = 576;
        v147.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
        *(_OWORD *)&v147.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 1u, &v147) >= 0 )
        {
          PspReadIFEOPerfOptions(Handle);
          ObCloseHandle(Handle, 0);
        }
      }
    }
    v30 = v105;
  }
  else if ( v33 )
  {
    SectionInformation = MmGetSectionInformation(v33, 1LL, v148);
    if ( SectionInformation < 0 )
      goto LABEL_333;
    v16 = v16 & 0xFFFFFE7F | (32 * (v150 & 4 | (4 * (v150 & 2))));
    LOWORD(v111) = v149;
    if ( !v122 )
    {
      v48 = 8;
      v106 = 8;
      v16 |= 0x800u;
      goto LABEL_120;
    }
  }
  v48 = 0;
LABEL_120:
  if ( (v101 & 8) != 0 )
    v106 = v48 | 0x20000;
  if ( (v16 & 0x4000) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
    *((_QWORD *)v24 + 133) = PoolWithTag;
    if ( !PoolWithTag )
    {
      SectionInformation = -1073741801;
      goto LABEL_333;
    }
    PoolWithTag[4] = v108;
    **((_QWORD **)v24 + 133) = 1LL;
  }
  SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)TokenInformation);
  if ( SectionInformation < 0 )
    goto LABEL_333;
  if ( (v111 & 0x1000) != 0 && !*(_DWORD *)TokenInformation )
  {
    SectionInformation = -1073741790;
    if ( !v15 )
      goto LABEL_333;
    goto LABEL_75;
  }
  v50 = 0;
  v51 = a2;
  if ( a2 )
  {
    if ( v15 && (*(_DWORD *)(v15 + 4) & 0x100) != 0 && *(_BYTE *)(v15 + 240) == 4 )
    {
      Privilege[0] = 14;
      v50 = 1;
    }
    if ( a11 )
      Privilege[v50++] = 3;
    v52 = v101;
    if ( (v101 & 0x30) != 0 )
      Privilege[v50++] = 4;
    if ( (v101 & 0x80u) != 0 )
    {
      IsSessionLeaderProcess = MmIsSessionLeaderProcess(Process);
      v52 = v101;
      if ( !IsSessionLeaderProcess )
        Privilege[v50++] = 10;
    }
    if ( (v52 & 0x8400) != 0 )
      Privilege[v50++] = 7;
    if ( v50 )
    {
      v54 = RtlAcquirePrivilege(Privilege, v50, a11 != 0, &ReturnedState) < 0;
      v51 = a2;
      if ( !v54 )
        v16 |= 0x10u;
    }
    else
    {
      v51 = a2;
    }
  }
  if ( (v101 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v51) )
    goto LABEL_151;
  *v126 |= v106;
  *v118 |= v107;
  if ( v30 )
  {
    v134 = 0LL;
    v55 = 0;
    SessionId = 0;
    v16 &= ~1u;
    v56 = 0;
    v102[0] = 0;
    if ( (*(_DWORD *)(v105 + 1740) & 0x80000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v24 + 435, 0x80000u);
      LOBYTE(v101) = a9;
      v128 = v117;
      v24 = (char *)Object;
      v55 = SessionId;
      v56 = v102[0];
    }
    if ( a11 )
    {
      if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
        v16 |= 4u;
      else
        v16 &= ~4u;
      SectionInformation = SeIsTokenAssignableToProcess(Token, v102);
      if ( SectionInformation < 0 )
        goto LABEL_331;
      v56 = v102[0];
      if ( !v102[0] && (v16 & 4) == 0 )
        goto LABEL_151;
      SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
      if ( SectionInformation < 0 )
        goto LABEL_331;
      v57 = MmGetSessionIdEx(Process);
      v55 = SessionId;
      if ( SessionId != v57 )
      {
        if ( (v16 & 4) == 0 )
        {
LABEL_151:
          SectionInformation = -1073741727;
          goto LABEL_331;
        }
        if ( (v101 & 0x80u) != 0 )
        {
          SectionInformation = -1073741811;
          goto LABEL_331;
        }
        v16 |= 1u;
      }
    }
    else if ( !v122 )
    {
      v55 = MmGetSessionIdEx((struct _KPROCESS *)v105);
      SessionId = v55;
      v16 ^= (v16 ^ (v55 != (unsigned int)MmGetSessionIdEx(Process))) & 1;
    }
    if ( (v16 & 1) != 0 )
    {
      SectionInformation = PspAttachSession(v55, v152, &v134);
      if ( SectionInformation < 0 )
      {
        LOBYTE(v16) = v16 & 0xFE;
        goto LABEL_331;
      }
      *v118 |= 0x80u;
    }
    if ( !a11 || v56 )
    {
      v60 = (struct _KPROCESS *)v105;
      if ( v56 )
        v60 = Process;
      PspInheritQuota(v24, v60);
    }
    else
    {
      SectionInformation = PspAssignProcessQuotaBlock(0LL, v24, Token);
      if ( SectionInformation < 0 )
      {
        if ( (v16 & 1) != 0 )
          PspDetachSession(v134, v152);
        goto LABEL_331;
      }
    }
    if ( (v151[0] & 0x100000000LL) != 0 )
    {
      v61 = v151[3];
      v62 = 1;
    }
    else
    {
      v61 = PspMaximumWorkingSet;
      v62 = 0;
    }
    v16 ^= ((unsigned __int8)v16 ^ (unsigned __int8)(32 * MmCreateProcessAddressSpace(v59, v58, v61, v62, (__int64)v24))) & 0x20;
    if ( (v16 & 1) != 0 )
      PspDetachSession(v134, v152);
    if ( (v16 & 0x20) == 0 )
      goto LABEL_188;
    v30 = v105;
  }
  else
  {
    PspInheritQuota(v24, 0LL);
    v24[703] = 1;
    SectionInformation = MmInitializeHandBuiltProcess();
    if ( SectionInformation < 0 )
      goto LABEL_331;
  }
  if ( v135 )
  {
    KeQueryAffinityProcess((__int64)v135, v153, 0LL, (__int64)v155);
    KeFirstGroupAffinityEx(&v131, v153);
    v117 = KeNodeBlock[(unsigned __int16)v155[(unsigned __int16)v132]];
  }
  else
  {
    if ( v128 )
    {
      v63 = *(_WORD *)(v128 + 144);
    }
    else if ( v30 )
    {
      if ( (*(_DWORD *)(v30 + 768) & 0x100000) != 0 )
      {
        _InterlockedOr(v118, 0x100000u);
        v117 = KeNodeBlock[*(unsigned __int16 *)(v30 + 568)];
        v63 = *(_WORD *)(v117 + 144);
      }
      else
      {
        v117 = PspSelectNodeForProcess();
        v63 = *(_WORD *)(v117 + 144);
        if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v63 )
        {
          v117 = 0LL;
          v63 = 1;
        }
      }
    }
    else
    {
      v63 = 0;
    }
    v132 = v63;
    v131 = qword_1403AA618[v63];
  }
  _InterlockedOr(v126, 0x40000u);
  v24 = (char *)Object;
  SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess((struct _KPROCESS *)Object);
  SectionInformation = KeInitializeProcess(v66, 8, &v131, v117, SessionSchedulingGroupByProcess, v65);
  if ( SectionInformation < 0 )
    goto LABEL_331;
  if ( v15 )
  {
    v114 = *(_DWORD *)(v15 + 392);
    v125 = *(_DWORD *)(v15 + 400);
    v139 = *(_QWORD *)(v15 + 408);
    v124 = *(_DWORD *)(v15 + 416);
  }
  SectionInformation = PspInitializeProcessSecurity((PEPROCESS)v30, v114, (v16 >> 11) & 1, v125, v139, v124, v141);
  if ( SectionInformation < 0 )
    goto LABEL_331;
  v24[1119] = 2;
  if ( v30 )
  {
    if ( ((*(_BYTE *)(v30 + 1119) - 1) & 0xFB) == 0 )
      v24[1119] = *(_BYTE *)(v30 + 1119);
    v67 = v15 ? *(_BYTE **)(v15 + 288) : 0LL;
    v68 = v15 ? *(_DWORD *)(v15 + 284) : 0;
    inited = ObInitProcess((struct _EX_RUNDOWN_REF *)(v30 & -(__int64)((a9 & 4) != 0)), (_KPROCESS *)v24, v68, v67);
  }
  else
  {
    *((_QWORD *)v24 + 131) = Process[1].ActiveProcessors.Bitmap[5];
    inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v24);
  }
  SectionInformation = inited;
  if ( inited < 0 )
    goto LABEL_331;
  if ( (v151[0] & 7) != 0 )
  {
    LOBYTE(v71) = a2;
    PspApplyIFEOPerfOptions(v24, v151, v71);
  }
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 4) & 0x100) != 0 )
    {
      LOBYTE(v72) = a2;
      LOBYTE(v70) = *(_BYTE *)(v15 + 240);
      SectionInformation = PspSetProcessPriorityClass(v24, v70, 0LL, v72);
      if ( SectionInformation < 0 )
        goto LABEL_331;
    }
  }
  v24[444] = PspComputeQuantumAndPriority((_DWORD)v24, 0, (unsigned int)&v109, 0, 0LL);
  v24[445] = v109;
  SectionInformation = 0;
  v114 = 0;
  v112 = 0LL;
  PspReadIFEOMitigationOptions(v15, &v112);
  v73 = PspInheritMitigationOptions(PspSystemMitigationOptions, v112);
  v74 = v73;
  v112 = v73;
  v75 = (HIWORD(v73) & 3) << 16;
  if ( v15 && (*(_DWORD *)(v15 + 4) & 0x10000) != 0 )
  {
    v74 = PspInheritMitigationOptions(v73, *(_QWORD *)(v15 + 352));
    v112 = v74;
  }
  v76 = v75 & 0xFFFF00FF;
  if ( *(_DWORD *)TokenInformation )
    v76 |= 4u;
  if ( (v76 & 0xFF00) != 0 )
    goto LABEL_235;
  if ( (v76 & 4) != 0 )
    v76 = v76 & 0xFFFF00FF | 0x100;
  if ( (v76 & 0xFF00) != 0 )
  {
LABEL_235:
    v77 = PspHardenMitigationOptions(&v112);
    SectionInformation = v77;
    if ( v15 && (*(_DWORD *)(v15 + 4) & 0x10000) != 0 )
    {
      if ( v77 < 0 )
        goto LABEL_333;
      v74 = v112;
    }
    else
    {
      v74 = v112;
      if ( !v112 )
        v74 = 1118993LL;
      v112 = v74;
      SectionInformation = 0;
    }
  }
  v78 = (((unsigned __int8)v76 ^ ((v16 & 0x180) != 0)) & 1 ^ (unsigned __int8)v76 ^ (unsigned __int8)(2 * ((v111 & 0x20) != 0))) & 2 ^ (v76 ^ ((v16 & 0x180) != 0)) & 1 ^ v76;
  v79 = ((unsigned __int8)v78 ^ (unsigned __int8)(8 * ((v111 & 0x4000) != 0))) & 8 ^ v78;
  if ( (v16 & 0x400) != 0 )
  {
    v74 = v74 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
    v112 = v74;
  }
  if ( v15 )
  {
    v80 = *(_QWORD *)(v15 + 168);
    if ( v80 )
    {
      MemoryAllocated[0] = 0;
      SectionInformation = ObpGetObjectSecurity(v80, SecurityDescriptor, MemoryAllocated, 0);
      if ( SectionInformation >= 0 )
      {
        if ( (unsigned int)SeQueryMandatoryLabel(SecurityDescriptor[0]) <= 0x1000 )
          v112 = v74 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
        ObReleaseObjectSecurity(SecurityDescriptor[0], MemoryAllocated[0]);
      }
    }
  }
  PspApplyMitigationOptions(v24, v105, &v112, v79);
  if ( v15 )
  {
    if ( (*(_DWORD *)(v15 + 396) & 1) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v24 + 435, 0x8000u);
      v24 = (char *)Object;
    }
    if ( (*(_DWORD *)(v15 + 396) & 2) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)v24 + 435, 0x10000u);
      v24 = (char *)Object;
    }
    *(_QWORD *)(v15 + 352) = v112;
  }
  PsQueryProcessAttributes(v24, 0LL, v110);
  v81 = *(_DWORD *)TokenInformation;
  v16 ^= ((v16 ^ ((*(_DWORD *)TokenInformation != 0) << 18)) & 0x40000 ^ v16 ^ ((v16 ^ ((*(_DWORD *)TokenInformation != 0) << 18)) & 0x40000 ^ v16 | ((HIWORD(a9) & 1) << 18))) & 0x40000 ^ (v16 ^ ((*(_DWORD *)TokenInformation != 0) << 18)) & 0x40000;
  v107 = v16;
  if ( (dword_1403BF148 & 0xC) != 0 && !*((_WORD *)v24 + 722) && (v16 & 0x40000) != 0 )
    SmpKeyedStoreCreate((ULONG_PTR)qword_1403BF150, (__int64)&SmGlobals, (__int64)v24);
  if ( (a9 & 0x80u) != 0
    && !(unsigned int)MmIsSessionLeaderProcess(Process)
    && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
  {
    goto LABEL_151;
  }
  if ( ((v16 >> 10) & 1) != 0 || v122 )
  {
    SectionInformation = PspInitializeFullProcessImageName(v15, v24);
    if ( SectionInformation < 0 )
      goto LABEL_331;
    v87 = (v16 & 0x10000) != 0
        ? MmInitializeProcessAddressSpace((ULONG_PTR)v24, v105, 0LL, &a9, (v16 & 0x20000) != 0)
        : MmInitializeProcessAddressSpace((ULONG_PTR)v24, 0LL, *(__int64 *)&TokenInformation[4], &a9, 0);
    SectionInformation = v87;
    if ( v87 < 0 )
      goto LABEL_331;
    if ( v15 )
    {
      v88 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea(*(__int64 *)&TokenInformation[4]) + 32LL);
      v89 = *((_QWORD *)v24 + 120);
      if ( v88 != v89 )
        *(_QWORD *)(v15 + 48) += v89 - v88;
    }
    v114 = SectionInformation;
    if ( ((v16 >> 10) & 1) == 0 )
      v16 |= 2u;
    v16 = (((unsigned __int8)v16 | 8) ^ (((a9 & 0x10) != 0) << 6)) & 0x40 ^ (v16 | 8);
    v107 = v16;
    goto LABEL_283;
  }
  v82 = v105;
  if ( !v105 )
    goto LABEL_283;
  *((_QWORD *)v24 + 120) = *(_QWORD *)(v105 + 960);
  SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v24, v82, 0LL, &a9, (v16 & 0x800) != 0);
  if ( SectionInformation < 0 )
  {
LABEL_331:
    if ( (v16 & 0x10) != 0 )
      RtlReleasePrivilege(ReturnedState);
    goto LABEL_333;
  }
  v16 = (((unsigned __int8)v16 | 2) ^ (((a9 & 0x10) != 0) << 6)) & 0x40 ^ (v16 | 2);
  v107 = v16;
  v83 = *(unsigned __int16 *)(*(_QWORD *)(v105 + 1128) + 2LL) + 16;
  v84 = ExAllocatePoolWithTag(NonPagedPoolNx, v83, 0x61506553u);
  *((_QWORD *)v24 + 141) = v84;
  if ( !v84 )
  {
LABEL_188:
    SectionInformation = -1073741670;
    goto LABEL_331;
  }
  v85 = v83;
  v86 = v105;
  memmove(v84, *(const void **)(v105 + 1128), v85);
  *(_QWORD *)(*((_QWORD *)v24 + 141) + 8LL) = *((_QWORD *)v24 + 141) + 16LL;
  *((_DWORD *)v24 + 242) = *(_DWORD *)(v86 + 968);
  if ( (*(_DWORD *)(v86 + 1740) & 0x4000000) != 0 )
    *((_DWORD *)v24 + 435) |= 0x4000000u;
  if ( (a9 & 0x1000) != 0 )
  {
    *v142 = 0LL;
    ObfDereferenceObject(*(PVOID *)&TokenInformation[4]);
  }
LABEL_283:
  if ( (v16 & 0x10) != 0 )
    RtlReleasePrivilege(ReturnedState);
  if ( *((_QWORD *)v24 + 133) )
    *((_DWORD *)v24 + 110) |= 1u;
  if ( (v16 & 8) != 0 )
  {
    if ( v15 )
    {
      SectionInformation = PspSetupReservedUserMappings(v24, v152, v15);
      if ( SectionInformation < 0 )
        goto LABEL_333;
    }
  }
  if ( (v16 & 2) == 0 )
  {
LABEL_306:
    v91 = v105;
    goto LABEL_307;
  }
  *(_QWORD *)&v137 = 0LL;
  *((_QWORD *)&v137 + 1) = -1LL;
  v90 = ((((v16 & 0x40) != 0) ^ (2 * ((*v143 & 7) != 0))) & 2 ^ ((v16 & 0x40) != 0)) & 0x8B | (4
                                                                                             * ((16 * ((*v143 & 7) == 1)) | ((v16 & 0x80) != 0))) & 0xCF | (16 * (v110[0] & 1 | (2 * (v81 != 0))));
  BYTE3(v137) = v90;
  if ( v122 )
  {
    SectionInformation = MmCreatePeb((_KPROCESS *)v24, (char *)&v137, (_QWORD *)v24 + 127, &v131);
    if ( SectionInformation < 0 )
    {
      *((_QWORD *)v24 + 127) = 0LL;
      goto LABEL_333;
    }
    if ( v131 )
    {
      _InterlockedAnd(v118, 0xFFCFFFFF);
      v24 = (char *)Object;
      PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v131, (__int64)v146);
    }
    goto LABEL_306;
  }
  v91 = v105;
  v92 = *(_OWORD **)(v105 + 1016);
  *((_QWORD *)v24 + 127) = v92;
  if ( (v16 & 0x800) == 0 )
  {
    LOBYTE(v137) = 1;
    KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)v152);
    if ( MmSecureVirtualMemory(v92, 0x7A0uLL, 4u) )
      *v92 = v137;
    else
      SectionInformation = -1073741503;
    if ( SectionInformation >= 0 )
    {
      v93 = (PVOID *)*((_QWORD *)v24 + 133);
      if ( v93 )
      {
        v94 = *v93;
        if ( MmSecureVirtualMemory(*v93, 0x460uLL, 4u) )
        {
          v129 = 0xFFFFFFFF00000001uLL;
          BYTE3(v129) = v90;
          *v94 = v129;
        }
        else
        {
          SectionInformation = -1073741503;
        }
      }
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v152, 0);
    if ( SectionInformation < 0 )
      goto LABEL_333;
    goto LABEL_306;
  }
LABEL_307:
  if ( ((v16 >> 3) & 1) != 0 && v15 )
  {
    SectionInformation = PspSetupUserProcessAddressSpace(v91, v24, v152, v15);
  }
  else if ( (v16 & 2) != 0 && (v16 & 0x800) == 0 )
  {
    SectionInformation = 0;
    KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)v152);
    v95 = (__int64)CurrentThread;
    PspWritePebAffinityInfo(CurrentThread, v24);
    if ( ((v16 >> 3) & 1) != 0 )
    {
      SectionInformation = MmMapApiSetView((__int64)v24);
      if ( SectionInformation >= 0 )
      {
        SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL);
        if ( SectionInformation >= 0 )
        {
          if ( *((_QWORD *)v24 + 133) )
            SectionInformation = PspPrepareSystemDllInitBlock((unsigned int)((_WORD)v108 == 452) + 1, 0LL);
        }
      }
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v152, 0);
    goto LABEL_319;
  }
  v95 = (__int64)CurrentThread;
LABEL_319:
  if ( SectionInformation < 0 )
    goto LABEL_333;
  PspLockProcessExclusive((__int64)v24, v95);
  v96 = ExCreateHandleEx(PspCidTable, (_DWORD)v24, 0, 0, 0LL);
  *((_QWORD *)v24 + 93) = v96;
  if ( !v96 )
  {
    PspUnlockProcessExclusive((__int64)v24, v95);
    SectionInformation = -1073741670;
    goto LABEL_333;
  }
  if ( (v16 & 0x1000) != 0 )
  {
    *((_QWORD *)v24 + 227) = **(_QWORD **)(v15 + 368);
    SectionInformation = MmGetSectionStrongImageReference(0LL, *((_QWORD *)v24 + 119), &v144);
    v97 = (__int64)v24;
    if ( SectionInformation < 0 )
    {
LABEL_324:
      PspUnlockProcessExclusive(v97, v95);
      goto LABEL_333;
    }
    SectionInformation = KeSecureProcess(
                           (_KPROCESS *)v24,
                           *((_QWORD *)v24 + 227),
                           *((_QWORD *)v24 + 127),
                           *((_QWORD *)v24 + 93),
                           v144,
                           *((_QWORD *)v24 + 120),
                           *(_QWORD *)(v15 + 368),
                           *(unsigned int *)(v15 + 384));
    if ( SectionInformation < 0 )
    {
      v97 = (__int64)v24;
      goto LABEL_324;
    }
  }
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((LARGE_INTEGER *)v24 + 97);
  }
  else
  {
    v24 = (char *)Object;
    *((_QWORD *)Object + 97) = MEMORY[0xFFFFF78000000014];
  }
  *((_QWORD *)v24 + 233) = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v99 = Object;
  *((_QWORD *)Object + 234) = UnbiasedInterruptTime;
  v99[236] = *((_QWORD *)v24 + 233);
  *v145 = v99;
  return (unsigned int)v114;
}
