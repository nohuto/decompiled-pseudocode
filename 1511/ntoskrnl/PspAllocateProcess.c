/*
 * XREFs of PspAllocateProcess @ 0x14044C768
 * Callers:
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1404C3BAC (PspCreateProcess.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 * Callees:
 *     KeQueryAffinityProcess @ 0x140028660 (KeQueryAffinityProcess.c)
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     KeQuerySystemTimeUnsafe @ 0x14002D3F0 (KeQuerySystemTimeUnsafe.c)
 *     KeQueryMaximumGroupCount @ 0x14002D41C (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x14002D424 (PoEnergyEstimationEnabled.c)
 *     KeQuerySystemTimePrecise @ 0x14002D4D0 (KeQuerySystemTimePrecise.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     MmGetDefaultPagePriority @ 0x14007A034 (MmGetDefaultPagePriority.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeFirstGroupAffinityEx @ 0x1400EB098 (KeFirstGroupAffinityEx.c)
 *     KeQueryActiveGroupCount @ 0x1400F9548 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeSecureProcess @ 0x1401C38F4 (KeSecureProcess.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PspAssignProcessQuotaBlock @ 0x1403BD170 (PspAssignProcessQuotaBlock.c)
 *     SeIsTokenAssignableToProcess @ 0x1403C2698 (SeIsTokenAssignableToProcess.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     ObInitProcess @ 0x1403E3544 (ObInitProcess.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     ExCreateHandleEx @ 0x140424F50 (ExCreateHandleEx.c)
 *     PspUpdateCreateInfo @ 0x140448110 (PspUpdateCreateInfo.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14044C744 (MmGetSessionSchedulingGroupByProcess.c)
 *     PspInheritMitigationOptions @ 0x14044DF0C (PspInheritMitigationOptions.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     MmGetSectionInformation @ 0x14044F1E4 (MmGetSectionInformation.c)
 *     SmProcessCreateNotification @ 0x14044F374 (SmProcessCreateNotification.c)
 *     PspApplyMitigationOptions @ 0x14044F404 (PspApplyMitigationOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x14044F73C (PspReadIFEOMitigationOptions.c)
 *     PspComputeQuantumAndPriority @ 0x14044F79C (PspComputeQuantumAndPriority.c)
 *     PspInitializeProcessSecurity @ 0x14044F884 (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x14044F998 (KeInitializeProcess.c)
 *     PspSetProcessPriorityClass @ 0x1404523AC (PspSetProcessPriorityClass.c)
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046390C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x140463B1C (PspPrepareSystemDllInitBlock.c)
 *     MmMapApiSetView @ 0x140463CA4 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x140463D38 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1404645DC (PspWritePebAffinityInfo.c)
 *     PsQueryProcessAttributesByToken @ 0x14046F8E0 (PsQueryProcessAttributesByToken.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     MmSecureVirtualMemory @ 0x1404A6550 (MmSecureVirtualMemory.c)
 *     SeQuerySessionIdToken @ 0x1404A6B4C (SeQuerySessionIdToken.c)
 *     PspInitializeFullProcessImageName @ 0x1404ABF8C (PspInitializeFullProcessImageName.c)
 *     RtlpOpenImageFileOptionsKey @ 0x1404ADEF0 (RtlpOpenImageFileOptionsKey.c)
 *     PspDetectComplusILImage @ 0x1404B321C (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x1404B32E8 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1404B3334 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1404B33FC (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1404B404C (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x1404B5B48 (PspSelectNodeForProcess.c)
 *     PspSetupReservedUserMappings @ 0x1404B7C1C (PspSetupReservedUserMappings.c)
 *     PspInheritQuota @ 0x1404BA02C (PspInheritQuota.c)
 *     RtlReleasePrivilege @ 0x1404BB858 (RtlReleasePrivilege.c)
 *     PspHardenMitigationOptions @ 0x1404BDF9C (PspHardenMitigationOptions.c)
 *     PspAttachSession @ 0x1404BF4E0 (PspAttachSession.c)
 *     PspApplyIFEOPerfOptions @ 0x1404C0014 (PspApplyIFEOPerfOptions.c)
 *     PspDetachSession @ 0x1404C0930 (PspDetachSession.c)
 *     MmIsSessionLeaderProcess @ 0x1405001DC (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x140548C5C (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140549A5C (MmInitializeHandBuiltProcess2.c)
 *     MmGetSectionStrongImageReference @ 0x14062CA98 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x14063F50C (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspAllocateProcess(
        ULONG_PTR a1,
        KPROCESSOR_MODE a2,
        _QWORD *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        unsigned int a9,
        __int64 a10,
        int a11,
        __int64 a12,
        _QWORD *a13)
{
  __int64 v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // esi
  unsigned int v18; // r12d
  int MaximumGroupCount; // eax
  int v20; // ecx
  int v21; // r9d
  __int64 result; // rax
  char *v23; // r15
  int v24; // r9d
  __int16 v25; // r10
  __int64 v26; // rax
  unsigned __int64 Blink; // rax
  ULONG_PTR v28; // r12
  int v29; // eax
  int v30; // edx
  int DefaultPagePriority; // r8d
  PVOID v32; // rdi
  int SectionInformation; // edi
  char v34; // dl
  unsigned int v35; // ebx
  unsigned __int16 v36; // cx
  int v37; // eax
  HANDLE *v38; // rdi
  int v39; // eax
  int v40; // eax
  ULONG v41; // edi
  KPROCESSOR_MODE v42; // al
  __int16 v43; // cx
  ULONG v44; // edi
  char v45; // r12
  struct _KPROCESS *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // r8
  char v50; // r9
  unsigned __int16 v51; // di
  __int64 SessionSchedulingGroupByProcess; // rax
  char v53; // dl
  int v54; // ecx
  int v55; // eax
  _BYTE *v56; // r9
  unsigned int v57; // r8d
  int inited; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  int v64; // esi
  unsigned int v65; // esi
  int v66; // esi
  int v67; // esi
  int v68; // ebx
  PVOID v69; // r12
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rax
  unsigned __int8 v73; // r12
  ULONG_PTR v74; // rax
  __int64 v75; // r12
  __int64 Handle; // rax
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v78; // rcx
  int v79; // eax
  bool v80; // sf
  int ImageFileKeyOption; // eax
  int v82; // eax
  _WORD *PoolWithTag; // rax
  void *v84; // rax
  __int64 v85; // rax
  ULONG_PTR v86; // r12
  unsigned int v87; // esi
  PVOID v88; // rax
  _OWORD *v89; // rsi
  int IsSessionLeaderProcess; // eax
  PVOID *v91; // rax
  int v92; // ecx
  _QWORD *v93; // rsi
  __int64 v94; // rcx
  unsigned int v96; // [rsp+54h] [rbp-374h]
  char v97[8]; // [rsp+58h] [rbp-370h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-368h]
  int v99; // [rsp+68h] [rbp-360h]
  int v100; // [rsp+6Ch] [rbp-35Ch]
  unsigned int v101; // [rsp+70h] [rbp-358h]
  unsigned int v102; // [rsp+74h] [rbp-354h]
  char v103; // [rsp+78h] [rbp-350h] BYREF
  char v104; // [rsp+79h] [rbp-34Fh] BYREF
  int v105; // [rsp+7Ch] [rbp-34Ch]
  unsigned __int64 v106; // [rsp+80h] [rbp-348h] BYREF
  unsigned int v107; // [rsp+88h] [rbp-340h]
  _BYTE TokenInformation[12]; // [rsp+8Ch] [rbp-33Ch] BYREF
  struct _KPROCESS *Process; // [rsp+98h] [rbp-330h]
  __int16 v110; // [rsp+A0h] [rbp-328h]
  PVOID v111; // [rsp+A8h] [rbp-320h]
  ULONG SessionId; // [rsp+B0h] [rbp-318h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-310h] BYREF
  PACCESS_TOKEN Token; // [rsp+C0h] [rbp-308h]
  volatile signed __int32 *v115; // [rsp+C8h] [rbp-300h]
  PVOID v116; // [rsp+D0h] [rbp-2F8h]
  int v117; // [rsp+D8h] [rbp-2F0h]
  __int64 v118; // [rsp+E0h] [rbp-2E8h] BYREF
  __int64 v119; // [rsp+E8h] [rbp-2E0h]
  unsigned __int64 v120; // [rsp+F0h] [rbp-2D8h]
  __int64 v121; // [rsp+F8h] [rbp-2D0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-2C8h]
  PVOID ReturnedState; // [rsp+108h] [rbp-2C0h] BYREF
  __int64 v124; // [rsp+110h] [rbp-2B8h]
  __int64 v125; // [rsp+118h] [rbp-2B0h] BYREF
  __int128 v126; // [rsp+120h] [rbp-2A8h] BYREF
  _QWORD *v127; // [rsp+130h] [rbp-298h]
  __int64 v128; // [rsp+138h] [rbp-290h]
  __int64 v129; // [rsp+150h] [rbp-278h]
  ULONG_PTR v130; // [rsp+160h] [rbp-268h]
  HANDLE KeyHandle; // [rsp+170h] [rbp-258h] BYREF
  char v132[8]; // [rsp+178h] [rbp-250h] BYREF
  _BYTE *v133; // [rsp+180h] [rbp-248h]
  __int64 v134; // [rsp+188h] [rbp-240h] BYREF
  _QWORD *v135; // [rsp+190h] [rbp-238h]
  __int64 v136; // [rsp+198h] [rbp-230h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1D0h] [rbp-1F8h] BYREF
  char v138[46]; // [rsp+200h] [rbp-1C8h] BYREF
  __int16 v139; // [rsp+22Eh] [rbp-19Ah]
  char v140; // [rsp+233h] [rbp-195h]
  _QWORD v141[4]; // [rsp+240h] [rbp-188h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v142; // [rsp+260h] [rbp-168h] BYREF
  _OWORD v143[11]; // [rsp+290h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+340h] [rbp-88h] BYREF
  _WORD v145[20]; // [rsp+358h] [rbp-70h] BYREF

  v127 = a3;
  BugCheckParameter1 = a1;
  v130 = a1;
  v111 = a7;
  Token = a8;
  v14 = a10;
  v129 = a10;
  v136 = a12;
  v135 = a13;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v128 = 0LL;
  *(_QWORD *)&TokenInformation[4] = 0LL;
  v99 = 0;
  v100 = 0;
  v116 = 0LL;
  LOWORD(v102) = 0;
  v96 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v15 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v15 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v15 = 197632;
    }
  }
  v16 = 0LL;
  if ( (a9 & 0x100) != 0 )
    v16 = a1;
  v124 = v16;
  if ( a10 && (*(_DWORD *)(a10 + 4) & 0x2000) != 0 )
  {
    if ( v16 )
      return 3221225520LL;
    v128 = KeNodeBlock[*(unsigned __int16 *)(a10 + 242)];
    *(_QWORD *)&TokenInformation[4] = v128;
  }
  else if ( a1 && (*(_DWORD *)(a1 + 768) & 0x200000) != 0 )
  {
    v124 = a1;
    v100 = 0x200000;
  }
  if ( a10 && (*(_DWORD *)(a10 + 4) & 0x40000) != 0 )
    v15 |= 0x1000u;
  memset(v141, 0, sizeof(v141));
  ReturnedState = 0LL;
  v17 = 1944;
  v101 = 0;
  v18 = 0;
  if ( !PsDisableDiskCounters )
  {
    v101 = 1944;
    v17 = 1984;
    v15 |= 0x200u;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    v18 = (v17 + 7) & 0xFFFFFFF8;
    v17 = v18 + 144;
    v15 |= 0x2000u;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v115) = MaximumGroupCount;
  v107 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v107 = (v17 + 7) & 0xFFFFFFF8;
    v17 = 16 * (unsigned __int16)MaximumGroupCount + v107;
  }
  LOBYTE(v21) = a2;
  LOBYTE(v20) = a2;
  result = ObCreateObject(v20, (_DWORD)PsProcessType, (_DWORD)v127, v21, 0, v17, 0, v17, (__int64)&Object);
  if ( (int)result >= 0 )
  {
    v23 = (char *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(v23, 0x746C6644u);
    memset(v23, 0, v17);
    memset(v23 + 1600, 0, 0x20uLL);
    *((_QWORD *)v23 + 200) = 0LL;
    *((_QWORD *)v23 + 202) = v23 + 1608;
    *((_QWORD *)v23 + 201) = v23 + 1608;
    *((_QWORD *)v23 + 92) = 0LL;
    *((_QWORD *)v23 + 91) = 0LL;
    *((_QWORD *)v23 + 146) = v23 + 1160;
    *((_QWORD *)v23 + 145) = v23 + 1160;
    *((_QWORD *)v23 + 221) = v23 + 1760;
    *((_QWORD *)v23 + 220) = v23 + 1760;
    v133 = v23 + 1722;
    v23[1722] = a4;
    v23[1720] = a5;
    v23[1721] = a6;
    v24 = (v15 >> 10) & 1;
    if ( v24 )
      *((_DWORD *)v23 + 431) |= 1u;
    v25 = v96;
    if ( (v96 & 0x8000) != 0 )
      *((_DWORD *)v23 + 431) |= 0x80u;
    v26 = v107;
    if ( v107 )
    {
      *((_DWORD *)v23 + 431) |= 0x200u;
      *((_QWORD *)v23 + 240) = &v23[v26];
      *((_QWORD *)v23 + 241) = &v23[8 * (unsigned int)v115 + v26];
    }
    Blink = (unsigned __int64)Process[1].Header.WaitListHead.Blink;
    if ( (v96 & 0x200) == 0 )
      Blink |= 2uLL;
    *((_QWORD *)v23 + 126) = Blink;
    if ( (v15 & 0x200) != 0 )
      *((_QWORD *)v23 + 223) = &v23[v101];
    if ( (v15 & 0x2000) != 0 )
      *((_QWORD *)v23 + 228) = &v23[v18];
    if ( v14 && (*(_DWORD *)(v14 + 4) & 0x200) != 0 )
    {
      v29 = *(_DWORD *)(v14 + 308);
      v28 = BugCheckParameter1;
    }
    else
    {
      v28 = BugCheckParameter1;
      if ( BugCheckParameter1 )
        v29 = *(_DWORD *)(BugCheckParameter1 + 1184);
      else
        v29 = 5;
    }
    *((_DWORD *)v23 + 296) = v29;
    *((_DWORD *)v23 + 391) = 259;
    if ( v28 )
    {
      v30 = (*(_DWORD *)(v28 + 772) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v28 + 768) >> 12) & 7;
      *((_QWORD *)v23 + 124) = *(_QWORD *)(v28 + 744);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v23 + 193) = *((_DWORD *)v23 + 193) & 0xC7FFFFFF | (v30 << 27);
    v115 = (volatile signed __int32 *)(v23 + 768);
    *((_DWORD *)v23 + 192) = *((_DWORD *)v23 + 192) & 0xFFFF8FFF | (DefaultPagePriority << 12);
    v32 = v111;
    if ( !v24 )
    {
      v116 = v111;
      if ( v111 )
      {
        if ( (v25 & 0x1000) == 0 )
        {
          ObfReferenceObject(v111);
          goto LABEL_41;
        }
LABEL_284:
        SectionInformation = -1073741776;
        goto LABEL_253;
      }
      if ( v28 )
      {
        if ( a11 )
          goto LABEL_284;
        if ( (PEPROCESS)v28 == PsInitialSystemProcess )
        {
          SectionInformation = -1073741811;
          goto LABEL_253;
        }
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v28 + 736)) )
        {
          v84 = *(void **)(v28 + 952);
          v111 = v84;
          if ( v84 )
            ObfReferenceObject(v84);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v28 + 736));
        }
        v32 = v111;
        if ( !v111 )
        {
          SectionInformation = -1073741558;
          goto LABEL_253;
        }
        v85 = *(_QWORD *)(v28 + 1064);
        if ( v85 )
        {
          v15 |= 0x4000u;
          v102 = *(unsigned __int16 *)(v85 + 8);
        }
        if ( (*(_DWORD *)(v28 + 772) & 0x20000) != 0 )
        {
          v96 |= 8u;
          a9 = v96;
        }
      }
    }
LABEL_41:
    v127 = v23 + 952;
    *((_QWORD *)v23 + 119) = v32;
    LOWORD(v101) = 0;
    if ( v14 )
    {
      SectionInformation = MmGetSectionInformation(v32, 1LL, v14 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_253;
      v34 = *(_BYTE *)(v14 + 99);
      v35 = v15 & 0xFFFFFE7F | (32 * (v34 & 4 | (4 * (v34 & 2))));
      v36 = *(_WORD *)(v14 + 96);
      LOWORD(v107) = v36;
      if ( (v35 & 0x100) == 0 || v36 != 332 || (v37 = 1, (v34 & 1) == 0) )
        v37 = 0;
      v15 = (v35 ^ (v37 << 15)) & 0x8000 ^ v35;
      if ( (*(_WORD *)(v14 + 92) & *(_WORD *)(v14 + 10)) != 0 )
      {
        SectionInformation = -1073741701;
LABEL_288:
        v92 = 3;
        goto LABEL_290;
      }
      if ( (v15 & 0x8000) == 0 )
      {
        if ( v36 == 332 )
        {
          v15 |= 0x4000u;
          v102 = 332;
        }
        if ( (v15 & 0x8000) == 0
          && (v36 < MEMORY[0xFFFFF7800000002C] || v36 > MEMORY[0xFFFFF7800000002E])
          && (v15 & 0x4000) == 0 )
        {
          SectionInformation = -1073741701;
          v92 = 4;
LABEL_290:
          PspUpdateCreateInfo(v92, v14, 0LL);
          goto LABEL_253;
        }
      }
      if ( v116 )
      {
        LOWORD(v101) = *(_WORD *)(v14 + 94);
        v38 = (HANDLE *)(v14 + 184);
        v39 = RtlpOpenImageFileOptionsKey(v14 + 224, 0x8000LL, v14 + 184);
        if ( v39 < 0 )
        {
          if ( v39 == -1073741772 )
            *(_BYTE *)(v14 + 8) |= 0x40u;
          *v38 = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v14 + 168), 0x72437350u);
        *((_QWORD *)v23 + 137) = *(_QWORD *)(v14 + 168);
        if ( (v15 & 0x4000) == 0 )
        {
          SectionInformation = PspDetectComplusILImage(v14, &a9);
          if ( SectionInformation < 0 )
            goto LABEL_253;
          v38 = (HANDLE *)(v14 + 184);
          if ( (_WORD)v107 == 332 )
          {
            LOWORD(v96) = a9;
            if ( (a9 & 8) == 0 )
            {
              v15 |= 0x4000u;
              LOWORD(v102) = 332;
            }
          }
          else
          {
            LOWORD(v96) = a9;
          }
        }
        if ( *v38 )
        {
          if ( *(char *)(v14 + 8) >= 0 )
          {
            ImageFileKeyOption = RtlQueryImageFileKeyOption(*v38, 2, (__int64)&v125);
            if ( ImageFileKeyOption == -2147483643 || ImageFileKeyOption >= 0 && (_DWORD)v125 == 2 && v110 )
            {
              SectionInformation = -1073741767;
              v92 = 5;
              goto LABEL_290;
            }
          }
          v105 = 0;
          RtlQueryImageFileKeyOption(*v38, 4, 0LL);
          if ( !v124 )
          {
            PspReadIFEONodeOptions(v23, *v38, &TokenInformation[4]);
            v128 = *(_QWORD *)&TokenInformation[4];
          }
          v117 = 0;
          if ( (int)RtlQueryImageFileKeyOption(*v38, 4, 0LL) >= 0 && v117 )
            v100 |= 0x40u;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = *v38;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            PspReadIFEOPerfOptions(KeyHandle);
            ObCloseHandle(KeyHandle, 0);
          }
        }
      }
      v28 = BugCheckParameter1;
    }
    else if ( v32 )
    {
      SectionInformation = MmGetSectionInformation(v32, 1LL, v138);
      if ( SectionInformation < 0 )
        goto LABEL_253;
      v15 = v15 & 0xFFFFFE7F | (32 * (v140 & 4 | (4 * (v140 & 2))));
      LOWORD(v101) = v139;
      if ( !v116 )
      {
        v40 = 8;
        v99 = 8;
        v15 |= 0x800u;
LABEL_64:
        if ( (v96 & 8) != 0 )
          v99 = v40 | 0x20000;
        if ( (v15 & 0x4000) != 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
          *((_QWORD *)v23 + 133) = PoolWithTag;
          if ( !PoolWithTag )
          {
            SectionInformation = -1073741801;
            goto LABEL_253;
          }
          PoolWithTag[4] = v102;
          **((_QWORD **)v23 + 133) = 1LL;
        }
        SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, (PVOID *)TokenInformation);
        if ( SectionInformation < 0 )
          goto LABEL_253;
        if ( (v101 & 0x1000) != 0 && !*(_DWORD *)TokenInformation )
        {
          SectionInformation = -1073741790;
          if ( !v14 )
            goto LABEL_253;
          goto LABEL_288;
        }
        v41 = 0;
        v42 = a2;
        if ( a2 )
        {
          if ( v14 && (*(_DWORD *)(v14 + 4) & 0x100) != 0 && *(_BYTE *)(v14 + 240) == 4 )
          {
            Privilege[0] = 14;
            v41 = 1;
          }
          if ( a11 )
            Privilege[v41++] = 3;
          v43 = v96;
          if ( (v96 & 0x30) != 0 )
            Privilege[v41++] = 4;
          if ( (v96 & 0x80u) != 0 )
          {
            IsSessionLeaderProcess = MmIsSessionLeaderProcess(Process);
            v43 = v96;
            if ( !IsSessionLeaderProcess )
              Privilege[v41++] = 10;
          }
          if ( (v43 & 0x8400) != 0 )
            Privilege[v41++] = 7;
          if ( v41 )
          {
            v80 = RtlAcquirePrivilege(Privilege, v41, a11 != 0, &ReturnedState) < 0;
            v42 = a2;
            if ( !v80 )
              v15 |= 0x10u;
          }
          else
          {
            v42 = a2;
          }
        }
        if ( (v96 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v42) )
          goto LABEL_250;
        *((_DWORD *)v23 + 193) |= v99;
        *v115 |= v100;
        if ( v28 )
        {
          v121 = 0LL;
          v44 = 0;
          SessionId = 0;
          v15 &= ~1u;
          v45 = 0;
          v97[0] = 0;
          if ( a11 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v15 |= 4u;
            else
              v15 &= ~4u;
            SectionInformation = SeIsTokenAssignableToProcess((__int64)Token, v97);
            if ( SectionInformation < 0 )
              goto LABEL_251;
            v45 = v97[0];
            if ( !v97[0] && (v15 & 4) == 0 )
              goto LABEL_250;
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_251;
            v79 = MmGetSessionIdEx(Process);
            v44 = SessionId;
            if ( SessionId != v79 )
            {
              if ( (v15 & 4) == 0 )
              {
LABEL_250:
                SectionInformation = -1073741727;
                goto LABEL_251;
              }
              if ( (v96 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_251;
              }
              v15 |= 1u;
            }
          }
          else if ( !v116 )
          {
            v44 = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
            SessionId = v44;
            v15 ^= (v15 ^ (v44 != (unsigned int)MmGetSessionIdEx(Process))) & 1;
          }
          if ( (v15 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v44, &v142, &v121);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v15) = v15 & 0xFE;
              goto LABEL_251;
            }
            *v115 |= 0x80u;
          }
          if ( !a11 || v45 )
          {
            v46 = (struct _KPROCESS *)BugCheckParameter1;
            if ( v45 )
              v46 = Process;
            PspInheritQuota(v23, v46);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, (__int64)v23, (__int64)Token);
            if ( SectionInformation < 0 )
            {
              if ( (v15 & 1) != 0 )
                PspDetachSession(v121, &v142);
              goto LABEL_251;
            }
          }
          if ( (v141[0] & 0x100000000LL) != 0 )
          {
            v49 = v141[3];
            v50 = 1;
          }
          else
          {
            v49 = PspMaximumWorkingSet;
            v50 = 0;
          }
          v15 ^= ((unsigned __int8)v15 ^ (unsigned __int8)(32
                                                         * MmCreateProcessAddressSpace(v48, v47, v49, v50, (__int64)v23))) & 0x20;
          if ( (v15 & 1) != 0 )
            PspDetachSession(v121, &v142);
          if ( (v15 & 0x20) == 0 )
            goto LABEL_304;
          v28 = BugCheckParameter1;
        }
        else
        {
          PspInheritQuota(v23, 0LL);
          v23[640] = 1;
          SectionInformation = MmInitializeHandBuiltProcess();
          if ( SectionInformation < 0 )
          {
LABEL_251:
            if ( (v15 & 0x10) != 0 )
              RtlReleasePrivilege(ReturnedState);
            goto LABEL_253;
          }
        }
        if ( v124 )
        {
          KeQueryAffinityProcess(v124, v143, 0LL, (__int64)v145);
          KeFirstGroupAffinityEx(&v118, v143);
          *(_QWORD *)&TokenInformation[4] = KeNodeBlock[(unsigned __int16)v145[(unsigned __int16)v119]];
        }
        else
        {
          if ( v128 )
          {
            v51 = *(_WORD *)(v128 + 144);
          }
          else if ( v28 )
          {
            if ( (*(_DWORD *)(v28 + 768) & 0x100000) != 0 )
            {
              _InterlockedOr(v115, 0x100000u);
              *(_QWORD *)&TokenInformation[4] = KeNodeBlock[*(unsigned __int16 *)(v28 + 568)];
              v51 = *(_WORD *)(*(_QWORD *)&TokenInformation[4] + 144LL);
            }
            else
            {
              *(_QWORD *)&TokenInformation[4] = PspSelectNodeForProcess();
              v51 = *(_WORD *)(*(_QWORD *)&TokenInformation[4] + 144LL);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v51 )
              {
                *(_QWORD *)&TokenInformation[4] = 0LL;
                v51 = 1;
              }
            }
          }
          else
          {
            v51 = 0;
          }
          v119 = v51;
          v118 = qword_1403825B8[v51];
        }
        _InterlockedOr((volatile signed __int32 *)v23 + 193, 0x40000u);
        v23 = (char *)Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess((struct _KPROCESS *)Object);
        SectionInformation = KeInitializeProcess(
                               v54,
                               8,
                               (unsigned int)&v118,
                               *(_DWORD *)&TokenInformation[4],
                               SessionSchedulingGroupByProcess,
                               v53);
        if ( SectionInformation < 0 )
          goto LABEL_251;
        v55 = v14 ? *(_DWORD *)(v14 + 392) : 0;
        SectionInformation = PspInitializeProcessSecurity(v28, (_DWORD)v23, (_DWORD)Token, a11, v55, v136);
        if ( SectionInformation < 0 )
          goto LABEL_251;
        v23[1119] = 2;
        if ( v28 )
        {
          if ( ((*(_BYTE *)(v28 + 1119) - 1) & 0xFB) == 0 )
            v23[1119] = *(_BYTE *)(v28 + 1119);
          v56 = v14 ? *(_BYTE **)(v14 + 288) : 0LL;
          v57 = v14 ? *(_DWORD *)(v14 + 284) : 0;
          inited = ObInitProcess(
                     (struct _EX_RUNDOWN_REF *)(v28 & -(__int64)((a9 & 4) != 0)),
                     (struct _KPROCESS *)v23,
                     v57,
                     v56);
        }
        else
        {
          *((_QWORD *)v23 + 131) = Process[1].ActiveProcessors.Bitmap[5];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v23);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_251;
        if ( (v141[0] & 7) != 0 )
        {
          LOBYTE(v60) = a2;
          PspApplyIFEOPerfOptions(v23, v141, v60);
        }
        if ( v14 )
        {
          if ( (*(_DWORD *)(v14 + 4) & 0x100) != 0 )
          {
            LOBYTE(v61) = a2;
            LOBYTE(v59) = *(_BYTE *)(v14 + 240);
            SectionInformation = PspSetProcessPriorityClass(v23, v59, 0LL, v61);
            if ( SectionInformation < 0 )
              goto LABEL_251;
          }
        }
        v23[444] = PspComputeQuantumAndPriority((_DWORD)v23, 0, (unsigned int)&v104, 0, 0LL);
        v23[445] = v104;
        SectionInformation = 0;
        v102 = 0;
        v106 = 0LL;
        PspReadIFEOMitigationOptions(v14, &v106);
        v62 = PspInheritMitigationOptions(PspSystemMitigationOptions, v106);
        v63 = v62;
        v106 = v62;
        v64 = (HIWORD(v62) & 3) << 16;
        if ( v14 && (*(_DWORD *)(v14 + 4) & 0x10000) != 0 )
        {
          v63 = PspInheritMitigationOptions(v62, *(_QWORD *)(v14 + 352));
          v106 = v63;
        }
        v65 = v64 & 0xFFFF00FF;
        if ( *(_DWORD *)TokenInformation )
          v65 |= 4u;
        if ( (v65 & 0xFF00) == 0 && (v65 & 4) != 0 )
          v65 = v65 & 0xFFFF00FF | 0x100;
        if ( (v65 & 0xFF00) != 0 )
        {
          v82 = PspHardenMitigationOptions(&v106, 65280LL, v63);
          SectionInformation = v82;
          if ( v14 && (*(_DWORD *)(v14 + 4) & 0x10000) != 0 )
          {
            if ( v82 < 0 )
              goto LABEL_253;
            v63 = v106;
          }
          else
          {
            v63 = v106;
            if ( !v106 )
              v63 = 1118993LL;
            v106 = v63;
            SectionInformation = 0;
          }
        }
        if ( (v15 & 0x400) != 0 )
          v106 = v63 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
        v66 = (v65 ^ ((v15 & 0x180) != 0)) & 1 ^ v65;
        v67 = ((unsigned __int8)v66 ^ (unsigned __int8)(2 * ((v101 & 0x20) != 0))) & 2 ^ v66;
        PspApplyMitigationOptions(
          v23,
          BugCheckParameter1,
          &v106,
          v67 ^ ((unsigned __int8)v67 ^ (unsigned __int8)(8 * ((v101 & 0x4000) != 0))) & 8u);
        if ( v14 )
          *(_QWORD *)(v14 + 352) = v106;
        PsQueryProcessAttributesByToken(Token, 0LL, &v103);
        v68 = (v15 ^ ((*(_DWORD *)TokenInformation != 0) << 18)) & 0x40000 ^ v15;
        v15 = (v68 ^ (v68 | ((HIWORD(a9) & 1) << 18))) & 0x40000 ^ v68;
        v100 = v15;
        SmProcessCreateNotification(v23, (v15 >> 18) & 1);
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(Process)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_250;
        }
        if ( ((v15 >> 10) & 1) != 0 || v116 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v14, v23);
          if ( SectionInformation < 0 )
            goto LABEL_251;
          if ( (v15 & 0x10000) != 0 )
          {
            v70 = MmInitializeProcessAddressSpace((ULONG_PTR)v23, BugCheckParameter1, (v15 >> 17) & 1);
            v69 = v111;
          }
          else
          {
            v69 = v111;
            v70 = MmInitializeProcessAddressSpace((ULONG_PTR)v23, 0LL, 0);
          }
          SectionInformation = v70;
          if ( v70 < 0 )
            goto LABEL_251;
          if ( v14 )
          {
            v71 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v69) + 32LL);
            v72 = *((_QWORD *)v23 + 120);
            if ( v71 != v72 )
              *(_QWORD *)(v14 + 48) += v72 - v71;
          }
          v102 = SectionInformation;
          if ( ((v15 >> 10) & 1) == 0 )
            v15 |= 2u;
          v15 = (((unsigned __int8)v15 | 8) ^ (((a9 & 0x10) != 0) << 6)) & 0x40 ^ (v15 | 8);
          v100 = v15;
LABEL_145:
          if ( (v15 & 0x10) != 0 )
            RtlReleasePrivilege(ReturnedState);
          if ( *((_QWORD *)v23 + 133) )
            *((_DWORD *)v23 + 110) |= 1u;
          if ( (v15 & 8) != 0 )
          {
            if ( v14 )
            {
              SectionInformation = PspSetupReservedUserMappings(v23, &v142, v14);
              if ( SectionInformation < 0 )
                goto LABEL_253;
            }
          }
          if ( (v15 & 2) != 0 )
          {
            *(_QWORD *)&v126 = 0LL;
            *((_QWORD *)&v126 + 1) = -1LL;
            v73 = ((((v15 & 0x40) != 0) ^ (2 * ((*v133 & 7) != 0))) & 2 ^ ((v15 & 0x40) != 0)) & 0x8B | (4 * ((16 * ((*v133 & 7) == 1)) | ((v15 & 0x80) != 0))) & 0xCF | (16 * (v103 & 1 | (2 * (*(_DWORD *)TokenInformation != 0))));
            *(_DWORD *)((char *)&v126 + 3) = v73;
            if ( v116 )
            {
              SectionInformation = MmCreatePeb(v23, &v126, v23 + 1016, &v118);
              if ( SectionInformation < 0 )
              {
                *((_QWORD *)v23 + 127) = 0LL;
                goto LABEL_253;
              }
              if ( v118 )
              {
                _InterlockedAnd(v115, 0xFFCFFFFF);
                v23 = (char *)Object;
                PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v118, (__int64)v132);
              }
            }
            else
            {
              v74 = BugCheckParameter1;
              v89 = *(_OWORD **)(BugCheckParameter1 + 1016);
              *((_QWORD *)v23 + 127) = v89;
              if ( (v15 & 0x800) != 0 )
                goto LABEL_158;
              LOBYTE(v126) = 1;
              KiStackAttachProcess((_KPROCESS *)v23, 0LL, (__int64)&v142);
              if ( MmSecureVirtualMemory(v89, 0x7A0uLL, 4u) )
                *v89 = v126;
              else
                SectionInformation = -1073741503;
              if ( SectionInformation >= 0 )
              {
                v91 = (PVOID *)*((_QWORD *)v23 + 133);
                if ( v91 )
                {
                  v93 = *v91;
                  if ( MmSecureVirtualMemory(*v91, 0x460uLL, 4u) )
                  {
                    v120 = 0xFFFFFFFF00000001uLL;
                    BYTE3(v120) = v73;
                    *v93 = v120;
                  }
                  else
                  {
                    SectionInformation = -1073741503;
                  }
                }
              }
              KiUnstackDetachProcess(&v142, 0LL);
              if ( SectionInformation < 0 )
                goto LABEL_253;
            }
          }
          v74 = BugCheckParameter1;
LABEL_158:
          if ( ((v15 >> 3) & 1) != 0 && v14 )
          {
            SectionInformation = PspSetupUserProcessAddressSpace(v74, v23, &v142, v14);
          }
          else if ( (v15 & 0x802) == 2 )
          {
            SectionInformation = 0;
            KiStackAttachProcess((_KPROCESS *)v23, 0LL, (__int64)&v142);
            v75 = (__int64)CurrentThread;
            PspWritePebAffinityInfo(CurrentThread, v23);
            if ( ((v15 >> 3) & 1) != 0 )
            {
              SectionInformation = MmMapApiSetView(v23);
              if ( SectionInformation >= 0 )
              {
                SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL);
                if ( SectionInformation >= 0 )
                {
                  if ( *((_QWORD *)v23 + 133) )
                    SectionInformation = PspPrepareSystemDllInitBlock(1LL, 0LL);
                }
              }
            }
            KiUnstackDetachProcess(&v142, 0LL);
LABEL_162:
            if ( SectionInformation >= 0 )
            {
              PspLockProcessExclusive((__int64)v23, v75);
              Handle = ExCreateHandleEx(PspCidTable, (__int64)v23, 0, 0, 0);
              *((_QWORD *)v23 + 93) = Handle;
              if ( !Handle )
              {
                PspUnlockProcessExclusive((__int64)v23, v75);
                SectionInformation = -1073741670;
                goto LABEL_253;
              }
              if ( (v15 & 0x1000) == 0 )
                goto LABEL_165;
              *((_QWORD *)v23 + 225) = **(_QWORD **)(v14 + 368);
              SectionInformation = MmGetSectionStrongImageReference(0LL, *((_QWORD *)v23 + 119), &v134);
              v94 = (__int64)v23;
              if ( SectionInformation >= 0 )
              {
                SectionInformation = KeSecureProcess(
                                       (_KPROCESS *)v23,
                                       *((_QWORD *)v23 + 225),
                                       *((_QWORD *)v23 + 127),
                                       *((_QWORD *)v23 + 93),
                                       v134,
                                       *((_QWORD *)v23 + 120),
                                       *(_QWORD *)(v14 + 368),
                                       *(unsigned int *)(v14 + 384));
                if ( SectionInformation >= 0 )
                {
LABEL_165:
                  if ( KeQuerySystemTimeUnsafe() )
                  {
                    KeQuerySystemTimePrecise((LARGE_INTEGER *)v23 + 97);
                  }
                  else
                  {
                    v23 = (char *)Object;
                    *((_QWORD *)Object + 97) = MEMORY[0xFFFFF78000000014];
                  }
                  *((_QWORD *)v23 + 231) = MEMORY[0xFFFFF78000000008];
                  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
                  v78 = Object;
                  *((_QWORD *)Object + 232) = UnbiasedInterruptTime;
                  v78[234] = *((_QWORD *)v23 + 231);
                  *v135 = v78;
                  return v102;
                }
                v94 = (__int64)v23;
              }
              PspUnlockProcessExclusive(v94, v75);
            }
LABEL_253:
            PspRundownSingleProcess((ULONG_PTR)v23, 0);
            ObfDereferenceObjectWithTag(v23, 0x72437350u);
            return (unsigned int)SectionInformation;
          }
          v75 = (__int64)CurrentThread;
          goto LABEL_162;
        }
        v86 = BugCheckParameter1;
        if ( !BugCheckParameter1 )
          goto LABEL_145;
        *((_QWORD *)v23 + 120) = *(_QWORD *)(BugCheckParameter1 + 960);
        SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v23, v86, (v15 >> 11) & 1);
        if ( SectionInformation < 0 )
          goto LABEL_251;
        v15 = (((unsigned __int8)v15 | 2) ^ (((a9 & 0x10) != 0) << 6)) & 0x40 ^ (v15 | 2);
        v100 = v15;
        v87 = *(unsigned __int16 *)(*(_QWORD *)(v86 + 1128) + 2LL) + 16;
        v88 = ExAllocatePoolWithTag(NonPagedPoolNx, v87, 0x61506553u);
        *((_QWORD *)v23 + 141) = v88;
        if ( v88 )
        {
          memmove(v88, *(const void **)(v86 + 1128), v87);
          *(_QWORD *)(*((_QWORD *)v23 + 141) + 8LL) = *((_QWORD *)v23 + 141) + 16LL;
          *((_DWORD *)v23 + 242) = *(_DWORD *)(v86 + 968);
          if ( (a9 & 0x1000) != 0 )
          {
            *v127 = 0LL;
            ObfDereferenceObject(v111);
          }
          goto LABEL_145;
        }
LABEL_304:
        SectionInformation = -1073741670;
        goto LABEL_251;
      }
    }
    v40 = 0;
    goto LABEL_64;
  }
  return result;
}
