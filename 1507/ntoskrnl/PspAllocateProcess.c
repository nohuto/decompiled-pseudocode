/*
 * XREFs of PspAllocateProcess @ 0x140468798
 * Callers:
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x1400166E8 (KeQuerySystemTimePrecise.c)
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     KeQueryMaximumGroupCount @ 0x140021220 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimeUnsafe @ 0x140021258 (KeQuerySystemTimeUnsafe.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     MmGetDefaultPagePriority @ 0x140043E3C (MmGetDefaultPagePriority.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KeQueryAffinityProcess @ 0x1400F07A0 (KeQueryAffinityProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeSecureProcess @ 0x1401FF820 (KeSecureProcess.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PspSetProcessPriorityClass @ 0x14041BFC8 (PspSetProcessPriorityClass.c)
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046567C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404658B4 (PspPrepareSystemDllInitBlock.c)
 *     MmMapApiSetView @ 0x140465A3C (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x140465AC4 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1404668C8 (PspWritePebAffinityInfo.c)
 *     ObInitProcess @ 0x140467784 (ObInitProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 *     SmProcessCreateNotification @ 0x140469E2C (SmProcessCreateNotification.c)
 *     PspApplyMitigationOptions @ 0x140469EBC (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x14046A180 (PspInheritMitigationOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x14046A1C8 (PspReadIFEOMitigationOptions.c)
 *     PspComputeQuantumAndPriority @ 0x14046A228 (PspComputeQuantumAndPriority.c)
 *     PspInitializeProcessSecurity @ 0x14046A2E8 (PspInitializeProcessSecurity.c)
 *     KeInitializeProcess @ 0x14046A3F4 (KeInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14046A53C (MmGetSessionSchedulingGroupByProcess.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     PspUpdateCreateInfo @ 0x14050AE10 (PspUpdateCreateInfo.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
 *     PspAttachSession @ 0x14051C288 (PspAttachSession.c)
 *     PspDetachSession @ 0x14051C2DC (PspDetachSession.c)
 *     MmSecureVirtualMemory @ 0x14052FA34 (MmSecureVirtualMemory.c)
 *     SeQuerySessionIdToken @ 0x14052FB1C (SeQuerySessionIdToken.c)
 *     RtlpOpenImageFileOptionsKey @ 0x14053FEAC (RtlpOpenImageFileOptionsKey.c)
 *     PspAssignProcessQuotaBlock @ 0x140543A18 (PspAssignProcessQuotaBlock.c)
 *     SeIsTokenAssignableToProcess @ 0x140545528 (SeIsTokenAssignableToProcess.c)
 *     PspDetectComplusILImage @ 0x140545C14 (PspDetectComplusILImage.c)
 *     PspReadIFEOPerfOptions @ 0x140545CE0 (PspReadIFEOPerfOptions.c)
 *     PspReadIFEONodeOptions @ 0x140545DA8 (PspReadIFEONodeOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140545DF4 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1405484C0 (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x14054BD68 (PspSelectNodeForProcess.c)
 *     PspInheritQuota @ 0x140550A44 (PspInheritQuota.c)
 *     RtlReleasePrivilege @ 0x1405538A8 (RtlReleasePrivilege.c)
 *     PspHardenMitigationOptions @ 0x14055669C (PspHardenMitigationOptions.c)
 *     PspApplyIFEOPerfOptions @ 0x1405573CC (PspApplyIFEOPerfOptions.c)
 *     MmIsSessionLeaderProcess @ 0x14057AC40 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1405BFD3C (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405C008C (MmInitializeHandBuiltProcess2.c)
 *     MmGetSectionStrongImageReference @ 0x1406AA510 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x1406C0654 (PspSetProcessAffinitySafe.c)
 */

__int64 __fastcall PspAllocateProcess(
        ULONG_PTR a1,
        KPROCESSOR_MODE a2,
        volatile signed __int32 *a3,
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
  int v14; // r15d
  __int64 v16; // r13
  unsigned int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // esi
  int MaximumGroupCount; // eax
  int v21; // ecx
  int v22; // r9d
  __int64 result; // rax
  char *v24; // r15
  int v25; // r9d
  __int16 v26; // r10
  __int64 v27; // rax
  unsigned __int64 Blink; // rax
  ULONG_PTR v29; // rsi
  int v30; // eax
  int v31; // edx
  int DefaultPagePriority; // r8d
  PVOID v33; // r12
  __int16 v34; // di
  int SectionInformation; // esi
  unsigned int v36; // ebx
  unsigned __int16 v37; // di
  int v38; // eax
  HANDLE *v39; // rsi
  int v40; // eax
  bool v41; // zf
  unsigned int v42; // edi
  int v43; // eax
  ULONG v44; // edi
  KPROCESSOR_MODE v45; // al
  __int16 v46; // si
  ULONG_PTR v47; // rdi
  ULONG v48; // edi
  struct _KPROCESS *v49; // rdx
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  unsigned __int16 v54; // di
  __int64 SessionSchedulingGroupByProcess; // rax
  char v56; // dl
  int v57; // ecx
  ULONG_PTR v58; // rdi
  __int64 v59; // r9
  int v60; // r8d
  int inited; // eax
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rax
  __int64 v65; // r8
  int v66; // edi
  unsigned int v67; // edi
  int v68; // edi
  int v69; // edi
  __int64 v70; // r9
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rax
  ULONG_PTR v74; // rax
  struct _KTHREAD *v75; // r12
  unsigned __int64 *v76; // r15
  __int64 v77; // rax
  __int64 v78; // r9
  __int64 v79; // rsi
  LARGE_INTEGER *v80; // r13
  __int64 v81; // rax
  _QWORD *v82; // rcx
  PACCESS_TOKEN v83; // rdi
  int v84; // eax
  int ImageFileKeyOption; // eax
  bool v86; // sf
  int v87; // eax
  unsigned __int16 v88; // cx
  __int64 v89; // rdx
  _QWORD *v90; // rdi
  unsigned __int64 v91; // rtt
  unsigned __int64 v92; // rtt
  ULONG_PTR v93; // rdi
  SIZE_T v94; // rdi
  PVOID PoolWithTag; // rax
  size_t v96; // r8
  ULONG_PTR v97; // rdi
  _OWORD *v99; // r12
  __int64 v100; // rcx
  int v101; // edi
  unsigned __int64 *v102; // r12
  __int16 v103; // ax
  __int16 v104; // ax
  unsigned __int8 PreviousModea; // [rsp+50h] [rbp-378h]
  char v107[3]; // [rsp+51h] [rbp-377h] BYREF
  unsigned int v108; // [rsp+54h] [rbp-374h]
  int v109; // [rsp+58h] [rbp-370h]
  int v110; // [rsp+5Ch] [rbp-36Ch]
  int v111; // [rsp+60h] [rbp-368h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-360h]
  char v113[8]; // [rsp+70h] [rbp-358h] BYREF
  PVOID Object; // [rsp+78h] [rbp-350h] BYREF
  int v115; // [rsp+80h] [rbp-348h]
  unsigned __int64 v116; // [rsp+88h] [rbp-340h] BYREF
  PVOID TokenInformation; // [rsp+90h] [rbp-338h] BYREF
  __int64 v118; // [rsp+98h] [rbp-330h] BYREF
  volatile signed __int32 *v119; // [rsp+A0h] [rbp-328h]
  volatile signed __int32 *v120; // [rsp+A8h] [rbp-320h]
  __int16 v121; // [rsp+B0h] [rbp-318h]
  ULONG SessionId; // [rsp+B4h] [rbp-314h] BYREF
  struct _KPROCESS *Process; // [rsp+B8h] [rbp-310h]
  char v124; // [rsp+C0h] [rbp-308h]
  PVOID v125; // [rsp+C8h] [rbp-300h]
  PVOID v126; // [rsp+D0h] [rbp-2F8h]
  __int64 v127; // [rsp+D8h] [rbp-2F0h] BYREF
  __int64 v128; // [rsp+E0h] [rbp-2E8h]
  int v129; // [rsp+E8h] [rbp-2E0h]
  PACCESS_TOKEN Token; // [rsp+F0h] [rbp-2D8h]
  char *v131; // [rsp+F8h] [rbp-2D0h]
  unsigned __int64 v132; // [rsp+100h] [rbp-2C8h]
  __int64 v133; // [rsp+108h] [rbp-2C0h]
  __int64 v134; // [rsp+110h] [rbp-2B8h]
  PVOID ReturnedState; // [rsp+120h] [rbp-2A8h] BYREF
  __int128 v136; // [rsp+128h] [rbp-2A0h] BYREF
  __int64 v137; // [rsp+138h] [rbp-290h] BYREF
  __int64 v138; // [rsp+140h] [rbp-288h] BYREF
  _QWORD *v139; // [rsp+148h] [rbp-280h]
  HANDLE Handle; // [rsp+150h] [rbp-278h] BYREF
  HANDLE KeyHandle; // [rsp+158h] [rbp-270h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+160h] [rbp-268h]
  ULONG_PTR v143; // [rsp+168h] [rbp-260h]
  __int64 v144; // [rsp+170h] [rbp-258h]
  _BYTE *v145; // [rsp+178h] [rbp-250h]
  _QWORD *v146; // [rsp+180h] [rbp-248h]
  __int64 v147; // [rsp+188h] [rbp-240h] BYREF
  char v148[8]; // [rsp+190h] [rbp-238h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+198h] [rbp-230h] BYREF
  OBJECT_ATTRIBUTES v150; // [rsp+1C8h] [rbp-200h] BYREF
  char v151[46]; // [rsp+200h] [rbp-1C8h] BYREF
  __int16 v152; // [rsp+22Eh] [rbp-19Ah]
  char v153; // [rsp+233h] [rbp-195h]
  _QWORD v154[4]; // [rsp+240h] [rbp-188h] BYREF
  _BYTE v155[48]; // [rsp+260h] [rbp-168h] BYREF
  _WORD v156[88]; // [rsp+290h] [rbp-138h] BYREF
  ULONG Privilege[6]; // [rsp+340h] [rbp-88h] BYREF
  _WORD v158[20]; // [rsp+358h] [rbp-70h] BYREF

  v14 = (int)a3;
  v120 = a3;
  BugCheckParameter1 = a1;
  v143 = a1;
  v125 = a7;
  Token = a8;
  v16 = a10;
  v134 = a10;
  v144 = a12;
  v146 = a13;
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v118 = 0LL;
  v111 = 0;
  v110 = 0;
  v126 = 0LL;
  v109 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v17 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v17 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v17 = 197632;
    }
  }
  v18 = 0LL;
  if ( (a9 & 0x100) != 0 )
    v18 = a1;
  v133 = v18;
  if ( a10 && (*(_DWORD *)(a10 + 4) & 0x2000) != 0 )
  {
    if ( v18 )
      return 3221225520LL;
    v118 = KeNodeBlock[*(unsigned __int16 *)(a10 + 242)];
  }
  else if ( a1 && (*(_DWORD *)(a1 + 768) & 0x200000) != 0 )
  {
    v133 = a1;
    v110 = 0x200000;
  }
  if ( a10 && (*(_DWORD *)(a10 + 4) & 0x40000) != 0 )
    v17 |= 0x1000u;
  memset(v154, 0, sizeof(v154));
  ReturnedState = 0LL;
  v19 = 1968;
  LODWORD(v131) = 0;
  LODWORD(v119) = 0;
  if ( !PsDisableDiskCounters )
  {
    LODWORD(v131) = 1968;
    v19 = 2008;
    v17 |= 0x200u;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    LODWORD(v119) = (v19 + 7) & 0xFFFFFFF8;
    v19 = (_DWORD)v119 + 144;
    v17 |= 0x2000u;
    v14 = (int)v120;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v120) = MaximumGroupCount;
  v108 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v108 = (v19 + 7) & 0xFFFFFFF8;
    v19 = 16 * (unsigned __int16)MaximumGroupCount + v108;
  }
  LOBYTE(v22) = a2;
  LOBYTE(v21) = a2;
  result = ObCreateObject(v21, (_DWORD)PsProcessType, v14, v22, 0, v19, 0, v19, (__int64)&Object);
  if ( (int)result >= 0 )
  {
    v24 = (char *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(v24, 0x746C6644u);
    memset(v24, 0, v19);
    memset(v24 + 1592, 0, 0x20uLL);
    *((_QWORD *)v24 + 199) = 0LL;
    *((_QWORD *)v24 + 201) = v24 + 1600;
    *((_QWORD *)v24 + 200) = v24 + 1600;
    *((_QWORD *)v24 + 92) = 0LL;
    *((_QWORD *)v24 + 91) = 0LL;
    *((_QWORD *)v24 + 145) = v24 + 1152;
    *((_QWORD *)v24 + 144) = v24 + 1152;
    *((_QWORD *)v24 + 220) = v24 + 1752;
    *((_QWORD *)v24 + 219) = v24 + 1752;
    v145 = v24 + 1714;
    v24[1714] = a4;
    v24[1712] = a5;
    v24[1713] = a6;
    v25 = (v17 >> 10) & 1;
    if ( v25 )
      *((_DWORD *)v24 + 429) |= 1u;
    v26 = v109;
    if ( (v109 & 0x8000) != 0 )
      *((_DWORD *)v24 + 429) |= 0x80u;
    v27 = v108;
    if ( v108 )
    {
      *((_DWORD *)v24 + 429) |= 0x200u;
      *((_QWORD *)v24 + 242) = &v24[v27];
      *((_QWORD *)v24 + 243) = &v24[8 * (unsigned int)v120 + v27];
    }
    Blink = (unsigned __int64)Process[1].Header.WaitListHead.Blink;
    if ( (v26 & 0x200) == 0 )
      Blink |= 2uLL;
    *((_QWORD *)v24 + 126) = Blink;
    if ( (v17 & 0x200) != 0 )
      *((_QWORD *)v24 + 222) = &v24[(unsigned int)v131];
    if ( (v17 & 0x2000) != 0 )
      *((_QWORD *)v24 + 227) = &v24[(unsigned int)v119];
    if ( v16 && (*(_DWORD *)(v16 + 4) & 0x200) != 0 )
    {
      v30 = *(_DWORD *)(v16 + 308);
      v29 = BugCheckParameter1;
    }
    else
    {
      v29 = BugCheckParameter1;
      if ( BugCheckParameter1 )
        v30 = *(_DWORD *)(BugCheckParameter1 + 1176);
      else
        v30 = 5;
    }
    v131 = v24 + 1176;
    *((_DWORD *)v24 + 294) = v30;
    *((_DWORD *)v24 + 389) = 259;
    if ( v29 )
    {
      v31 = (*(_DWORD *)(v29 + 772) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v29 + 768) >> 12) & 7;
      *((_QWORD *)v24 + 124) = *(_QWORD *)(v29 + 744);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    v119 = (volatile signed __int32 *)(v24 + 772);
    *((_DWORD *)v24 + 193) = *((_DWORD *)v24 + 193) & 0xC7FFFFFF | (v31 << 27);
    v120 = (volatile signed __int32 *)(v24 + 768);
    *((_DWORD *)v24 + 192) = (DefaultPagePriority << 12) | *((_DWORD *)v24 + 192) & 0xFFFF8FFF;
    v33 = v125;
    if ( !v25 )
    {
      v126 = v125;
      if ( v125 )
      {
        if ( (v26 & 0x1000) == 0 )
        {
          ObfReferenceObject(v125);
          goto LABEL_41;
        }
LABEL_274:
        SectionInformation = -1073741776;
        goto LABEL_255;
      }
      if ( v29 )
      {
        if ( a11 )
          goto LABEL_274;
        if ( (PEPROCESS)v29 == PsInitialSystemProcess )
        {
          SectionInformation = -1073741811;
          goto LABEL_255;
        }
        v90 = (_QWORD *)(v29 + 736);
        _m_prefetchw((const void *)(v29 + 736));
        v91 = *(_QWORD *)(v29 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v91 == _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 736), v91 + 2, v91)
          || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v29 + 736)) )
        {
          v33 = *(PVOID *)(v29 + 952);
          v125 = v33;
          if ( v33 )
            ObfReferenceObject(v33);
          _m_prefetchw(v90);
          v92 = *v90 & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v92 != _InterlockedCompareExchange64(v90, v92 - 2, v92) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v29 + 736));
        }
        if ( !v33 )
        {
          SectionInformation = -1073741558;
LABEL_278:
          v24 = (char *)Object;
          goto LABEL_255;
        }
        if ( *(_QWORD *)(v29 + 1064) )
          v17 |= 0x4000u;
        v24 = (char *)Object;
        if ( (*(_DWORD *)(v29 + 772) & 0x20000) != 0 )
        {
          v109 = a9 | 8;
          a9 |= 8u;
        }
        else
        {
          v109 = a9;
        }
      }
    }
LABEL_41:
    v139 = v24 + 952;
    *((_QWORD *)v24 + 119) = v33;
    v34 = 0;
    LOWORD(v108) = 0;
    if ( v16 )
    {
      SectionInformation = MmGetSectionInformation(v33, 1LL, v16 + 48);
      if ( SectionInformation >= 0 )
      {
        v36 = v17 & 0xFFFFFE7F | (32 * (*(_BYTE *)(v16 + 99) & 4 | (4 * (*(_BYTE *)(v16 + 99) & 2))));
        v37 = *(_WORD *)(v16 + 96);
        if ( (v36 & 0x100) == 0 || v37 != 332 || (v38 = 1, (*(_BYTE *)(v16 + 99) & 1) == 0) )
          v38 = 0;
        v17 = (v36 ^ (v38 << 15)) & 0x8000 ^ v36;
        if ( (*(_WORD *)(v16 + 92) & *(_WORD *)(v16 + 10)) != 0 )
        {
          SectionInformation = -1073741701;
LABEL_282:
          v100 = 3LL;
          goto LABEL_284;
        }
        if ( (v17 & 0x8000) == 0 )
        {
          if ( v37 == 332 )
            v17 |= 0x4000u;
          if ( (v17 & 0x8000) == 0
            && (v37 < MEMORY[0xFFFFF7800000002C] || v37 > MEMORY[0xFFFFF7800000002E])
            && (v17 & 0x4000) == 0 )
          {
            SectionInformation = -1073741701;
            v100 = 4LL;
LABEL_284:
            PspUpdateCreateInfo(v100, v16, 0LL);
            goto LABEL_255;
          }
        }
        if ( !v126 )
          goto LABEL_61;
        LOWORD(v108) = *(_WORD *)(v16 + 94);
        v39 = (HANDLE *)(v16 + 184);
        v40 = RtlpOpenImageFileOptionsKey(v16 + 224, (unsigned __int16)v108, v16 + 184);
        if ( v40 < 0 )
        {
          if ( v40 == -1073741772 )
            *(_BYTE *)(v16 + 8) |= 0x40u;
          *v39 = 0LL;
        }
        if ( (v17 & 0x4000) != 0 )
        {
          v42 = v109;
          goto LABEL_60;
        }
        SectionInformation = PspDetectComplusILImage(v16, &a9);
        if ( SectionInformation >= 0 )
        {
          v41 = v37 == 332;
          v42 = a9;
          v109 = a9;
          v39 = (HANDLE *)(v16 + 184);
          if ( v41 && (a9 & 8) == 0 )
            v17 |= 0x4000u;
LABEL_60:
          if ( *v39 )
          {
            if ( *(char *)(v16 + 8) >= 0 )
            {
              ImageFileKeyOption = RtlQueryImageFileKeyOption(*v39, 2, (__int64)&v138);
              if ( ImageFileKeyOption == -2147483643 || ImageFileKeyOption >= 0 && (_DWORD)v138 == 2 && v121 )
              {
                SectionInformation = -1073741767;
                v100 = 5LL;
                goto LABEL_284;
              }
            }
            v115 = 0;
            if ( (int)RtlQueryImageFileKeyOption(*v39, 4, 0LL) >= 0 )
            {
              if ( v115 )
              {
                v101 = v42 | 0x10;
                v109 = v101;
                a9 = v101;
                if ( (v17 & 0x4000) == 0 )
                {
                  v150.Length = 48;
                  v150.RootDirectory = *v39;
                  v150.Attributes = 576;
                  v150.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                  *(_OWORD *)&v150.SecurityDescriptor = 0LL;
                  if ( ZwOpenKey(&Handle, 1u, &v150) >= 0 )
                  {
                    v115 = 0;
                    if ( (int)RtlQueryImageFileKeyOption(Handle, 4, 0LL) >= 0 && v115 )
                    {
                      v109 = v101 | 0x20;
                      a9 = v101 | 0x20;
                    }
                    ObCloseHandle(Handle, 0);
                  }
                }
              }
            }
            if ( !v133 )
              PspReadIFEONodeOptions(v24, *v39, &v118);
            v129 = 0;
            if ( (int)RtlQueryImageFileKeyOption(*v39, 4, 0LL) >= 0 && v129 )
              v110 |= 0x40u;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = *v39;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
            {
              PspReadIFEOPerfOptions(KeyHandle);
              ObCloseHandle(KeyHandle, 0);
            }
          }
LABEL_61:
          v34 = v108;
          goto LABEL_62;
        }
      }
    }
    else
    {
      if ( !v33 )
        goto LABEL_62;
      SectionInformation = MmGetSectionInformation(v125, 1LL, v151);
      if ( SectionInformation >= 0 )
      {
        v17 = v17 & 0xFFFFFE7F | (32 * (v153 & 4 | (4 * (v153 & 2))));
        v34 = v152;
        LOWORD(v108) = v152;
        if ( !v126 )
        {
          v43 = 8;
          v111 = 8;
          v17 |= 0x800u;
LABEL_63:
          if ( (v109 & 8) != 0 )
            v111 = v43 | 0x20000;
          if ( (v17 & 0x4000) != 0 )
            *((_QWORD *)v24 + 133) = 1LL;
          SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
          if ( SectionInformation < 0 )
            goto LABEL_255;
          if ( (v34 & 0x1000) != 0 && !(_DWORD)TokenInformation )
          {
            SectionInformation = -1073741790;
            if ( !v16 )
              goto LABEL_255;
            goto LABEL_282;
          }
          v44 = 0;
          v45 = a2;
          if ( a2 )
          {
            if ( v16 && (*(_DWORD *)(v16 + 4) & 0x100) != 0 && *(_BYTE *)(v16 + 240) == 4 )
            {
              Privilege[0] = 14;
              v44 = 1;
            }
            if ( a11 )
              Privilege[v44++] = 3;
            v46 = v109;
            if ( (v109 & 0x30) != 0 )
              Privilege[v44++] = 4;
            if ( (v46 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(Process) )
              Privilege[v44++] = 10;
            if ( (v46 & 0x8400) != 0 )
              Privilege[v44++] = 7;
            if ( v44 )
            {
              v86 = RtlAcquirePrivilege(Privilege, v44, a11 != 0, &ReturnedState) < 0;
              v45 = a2;
              if ( !v86 )
                v17 |= 0x10u;
            }
            else
            {
              v45 = a2;
            }
          }
          else
          {
            v46 = v109;
          }
          if ( (v46 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v45) )
            goto LABEL_252;
          *v119 |= v111;
          *v120 |= v110;
          v47 = BugCheckParameter1;
          if ( BugCheckParameter1 )
          {
            v137 = 0LL;
            v48 = 0;
            SessionId = 0;
            v17 &= ~1u;
            v107[0] = 0;
            if ( a11 )
            {
              if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
                v17 |= 4u;
              else
                v17 &= ~4u;
              v83 = Token;
              SectionInformation = SeIsTokenAssignableToProcess(Token, v107);
              if ( SectionInformation < 0 )
                goto LABEL_253;
              if ( !v107[0] && (v17 & 4) == 0 )
                goto LABEL_252;
              SectionInformation = SeQuerySessionIdToken(v83, &SessionId);
              if ( SectionInformation < 0 )
                goto LABEL_253;
              v84 = MmGetSessionIdEx(Process);
              v48 = SessionId;
              if ( SessionId != v84 )
              {
                if ( (v17 & 4) == 0 )
                {
LABEL_252:
                  SectionInformation = -1073741727;
                  goto LABEL_253;
                }
                if ( (v109 & 0x80u) != 0 )
                {
                  SectionInformation = -1073741811;
                  goto LABEL_253;
                }
                v17 |= 1u;
              }
            }
            else if ( !v126 )
            {
              v48 = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
              SessionId = v48;
              v17 ^= (v17 ^ (v48 != (unsigned int)MmGetSessionIdEx(Process))) & 1;
            }
            if ( (v17 & 1) != 0 )
            {
              SectionInformation = PspAttachSession(v48, v155, &v137);
              if ( SectionInformation < 0 )
              {
                LOBYTE(v17) = v17 & 0xFE;
                goto LABEL_253;
              }
              *v120 |= 0x80u;
            }
            if ( !a11 || v107[0] )
            {
              v47 = BugCheckParameter1;
              v49 = (struct _KPROCESS *)BugCheckParameter1;
              if ( v107[0] )
                v49 = Process;
              PspInheritQuota(v24, v49);
            }
            else
            {
              SectionInformation = PspAssignProcessQuotaBlock(0LL, v24, Token);
              if ( SectionInformation < 0 )
              {
                if ( (v17 & 1) != 0 )
                  PspDetachSession(v137, v155);
                goto LABEL_253;
              }
              v47 = BugCheckParameter1;
            }
            if ( (v154[0] & 0x100000000LL) != 0 )
            {
              v52 = v154[3];
              v53 = 1;
            }
            else
            {
              v52 = PspMaximumWorkingSet;
              v53 = 0;
            }
            v17 ^= ((unsigned __int8)v17 ^ (unsigned __int8)(32
                                                           * MmCreateProcessAddressSpace(
                                                               v51,
                                                               v50,
                                                               v52,
                                                               v53,
                                                               (__int64)v24))) & 0x20;
            if ( (v17 & 1) != 0 )
              PspDetachSession(v137, v155);
            if ( (v17 & 0x20) == 0 )
              goto LABEL_304;
          }
          else
          {
            PspInheritQuota(v24, 0LL);
            v24[640] = 1;
            SectionInformation = MmInitializeHandBuiltProcess();
            if ( SectionInformation < 0 )
            {
LABEL_253:
              if ( (v17 & 0x10) != 0 )
                RtlReleasePrivilege(ReturnedState);
              goto LABEL_255;
            }
          }
          if ( v133 )
          {
            KeQueryAffinityProcess(v133, (__int64)v156, 0LL, (__int64)v158);
            v88 = 0;
            if ( v156[0] )
            {
              while ( 1 )
              {
                v89 = *(_QWORD *)&v156[4 * v88 + 4];
                if ( v89 )
                  break;
                if ( ++v88 >= v156[0] )
                  goto LABEL_220;
              }
              v128 = v88;
              v127 = v89;
            }
LABEL_220:
            v118 = KeNodeBlock[(unsigned __int16)v158[(unsigned __int16)v128]];
          }
          else
          {
            if ( v118 )
            {
              v54 = *(_WORD *)(v118 + 144);
            }
            else if ( v47 )
            {
              if ( (*(_DWORD *)(v47 + 768) & 0x100000) != 0 )
              {
                _InterlockedOr(v120, 0x100000u);
                v118 = KeNodeBlock[*(unsigned __int16 *)(v47 + 568)];
                v54 = *(_WORD *)(v118 + 144);
              }
              else
              {
                v118 = PspSelectNodeForProcess();
                v54 = *(_WORD *)(v118 + 144);
                if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v54 )
                {
                  v118 = 0LL;
                  v54 = 1;
                }
              }
            }
            else
            {
              v54 = 0;
            }
            v128 = v54;
            v127 = qword_1403D15E8[v54];
          }
          _InterlockedOr(v119, 0x40000u);
          v24 = (char *)Object;
          SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(Object);
          SectionInformation = KeInitializeProcess(
                                 v57,
                                 8,
                                 (unsigned int)&v127,
                                 v118,
                                 SessionSchedulingGroupByProcess,
                                 v56);
          if ( SectionInformation < 0 )
            goto LABEL_253;
          v58 = BugCheckParameter1;
          SectionInformation = PspInitializeProcessSecurity(BugCheckParameter1, (_DWORD)v24, (_DWORD)Token, a11, v144);
          if ( SectionInformation < 0 )
            goto LABEL_253;
          v24[1111] = 2;
          if ( v58 )
          {
            if ( ((*(_BYTE *)(v58 + 1111) - 1) & 0xFB) == 0 )
              v24[1111] = *(_BYTE *)(v58 + 1111);
            if ( v16 )
              v59 = *(_QWORD *)(v16 + 288);
            else
              LODWORD(v59) = 0;
            v60 = v16 ? *(_DWORD *)(v16 + 284) : 0;
            inited = ObInitProcess((struct _EX_RUNDOWN_REF *)(v58 & -(__int64)((a9 & 4) != 0)), (__int64)v24, v60, v59);
          }
          else
          {
            *((_QWORD *)v24 + 131) = Process[1].ActiveProcessors.Bitmap[5];
            inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v24);
          }
          SectionInformation = inited;
          if ( inited < 0 )
            goto LABEL_253;
          if ( (v154[0] & 7) != 0 )
          {
            LOBYTE(v62) = a2;
            PspApplyIFEOPerfOptions(v24, v154, v62);
          }
          if ( v16 )
          {
            if ( (*(_DWORD *)(v16 + 4) & 0x100) != 0 )
            {
              LOBYTE(v63) = a2;
              SectionInformation = PspSetProcessPriorityClass((__int64)v24, *(_BYTE *)(v16 + 240), 0LL, v63);
              if ( SectionInformation < 0 )
                goto LABEL_253;
            }
          }
          v24[444] = PspComputeQuantumAndPriority(v24, 0LL, v113, 0LL);
          v24[445] = v113[0];
          SectionInformation = 0;
          LODWORD(v119) = 0;
          v116 = 0LL;
          PspReadIFEOMitigationOptions(v16, &v116);
          v64 = PspInheritMitigationOptions(PspSystemMitigationOptions, v116);
          v65 = v64;
          v116 = v64;
          v66 = (HIWORD(v64) & 3) << 16;
          if ( v16 && (*(_DWORD *)(v16 + 4) & 0x10000) != 0 )
          {
            v65 = PspInheritMitigationOptions(v64, *(_QWORD *)(v16 + 352));
            v116 = v65;
          }
          v67 = v66 & 0xFFFF00FF;
          if ( (_DWORD)TokenInformation )
            v67 |= 4u;
          if ( (v67 & 0xFF00) == 0 && (v67 & 4) != 0 )
            v67 = v67 & 0xFFFF00FF | 0x100;
          if ( (v67 & 0xFF00) != 0 )
          {
            v87 = PspHardenMitigationOptions(&v116, 65280LL, v65);
            SectionInformation = v87;
            if ( v16 && (*(_DWORD *)(v16 + 4) & 0x10000) != 0 )
            {
              if ( v87 < 0 )
                goto LABEL_255;
              v65 = v116;
            }
            else
            {
              v65 = v116;
              if ( !v116 )
                v65 = 1118993LL;
              v116 = v65;
              SectionInformation = 0;
            }
          }
          if ( (v17 & 0x400) != 0 )
            v116 = v65 & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          v68 = (v67 ^ ((v17 & 0x180) != 0)) & 1 ^ v67;
          v69 = ((unsigned __int8)v68 ^ (unsigned __int8)(2 * ((v108 & 0x20) != 0))) & 2 ^ v68;
          PspApplyMitigationOptions(
            v24,
            BugCheckParameter1,
            &v116,
            v69 ^ ((unsigned __int8)v69 ^ (unsigned __int8)(8 * ((v108 & 0x4000) != 0))) & 8u);
          if ( v16 )
            *(_QWORD *)(v16 + 352) = v116;
          LOBYTE(v108) = SeSecurityAttributePresent(Token, &PspPackagedAppClaim);
          v124 = v108;
          v17 ^= ((v17 ^ (((_DWORD)TokenInformation != 0) << 18)) & 0x40000 ^ v17 ^ ((v17 ^ (((_DWORD)TokenInformation != 0) << 18)) & 0x40000 ^ v17 | ((HIWORD(a9) & 1) << 18))) & 0x40000 ^ (v17 ^ (((_DWORD)TokenInformation != 0) << 18)) & 0x40000;
          v110 = v17;
          SmProcessCreateNotification(v24, (v17 >> 18) & 1);
          if ( (a9 & 0x80u) != 0
            && !(unsigned int)MmIsSessionLeaderProcess(Process)
            && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
          {
            goto LABEL_252;
          }
          if ( ((v17 >> 10) & 1) != 0 || v126 )
          {
            if ( (v17 & 0x10000) != 0 )
              v71 = MmInitializeProcessAddressSpace((__int64)v24, BugCheckParameter1, 0LL, &a9, (v17 >> 17) & 1);
            else
              v71 = MmInitializeProcessAddressSpace((__int64)v24, 0LL, (__int64)v125, &a9, 0);
            SectionInformation = v71;
            if ( v71 < 0 )
              goto LABEL_253;
            if ( v16 )
            {
              v72 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)v125) + 32LL);
              v73 = *((_QWORD *)v24 + 120);
              if ( v72 != v73 )
                *(_QWORD *)(v16 + 48) += v73 - v72;
            }
            LODWORD(v119) = SectionInformation;
            if ( ((v17 >> 10) & 1) == 0 )
              v17 |= 2u;
            v17 = (((unsigned __int8)v17 | 8) ^ (((a9 & 0x10) != 0) << 6)) & 0x40 ^ (v17 | 8);
            v110 = v17;
LABEL_141:
            if ( (v17 & 0x10) != 0 )
              RtlReleasePrivilege(ReturnedState);
            if ( *((_QWORD *)v24 + 133) )
              *((_DWORD *)v24 + 110) |= 1u;
            if ( (v17 & 2) != 0 )
            {
              *(_QWORD *)&v136 = 0LL;
              *((_QWORD *)&v136 + 1) = -1LL;
              PreviousModea = ((((v17 & 0x40) != 0) ^ (2 * ((*v145 & 7) != 0))) & 2 ^ ((v17 & 0x40) != 0)) & 0x8B | (4 * ((16 * ((*v145 & 7) == 1)) | ((v17 & 0x80) != 0))) & 0xCF | (16 * (v108 & 1 | (2 * ((_DWORD)TokenInformation != 0))));
              *(_DWORD *)((char *)&v136 + 3) = PreviousModea;
              if ( v126 )
              {
                SectionInformation = MmCreatePeb((_KPROCESS *)v24, (char *)&v136, (__int64 *)v24 + 127, &v127);
                if ( SectionInformation < 0 )
                {
                  *((_QWORD *)v24 + 127) = 0LL;
                  goto LABEL_255;
                }
                if ( v127 )
                {
                  _InterlockedAnd(v120, 0xFFCFFFFF);
                  v24 = (char *)Object;
                  PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v127, (__int64)v148);
                }
              }
              else
              {
                v74 = BugCheckParameter1;
                v99 = *(_OWORD **)(BugCheckParameter1 + 1016);
                *((_QWORD *)v24 + 127) = v99;
                if ( (v17 & 0x800) != 0 )
                {
LABEL_151:
                  if ( ((v17 >> 3) & 1) != 0 && v16 )
                  {
                    SectionInformation = PspSetupUserProcessAddressSpace(
                                           v74,
                                           (_KPROCESS *)v24,
                                           (struct _KTHREAD *)v155,
                                           v16);
                  }
                  else if ( (v17 & 0x802) == 2 )
                  {
                    SectionInformation = 0;
                    KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)v155);
                    PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)v24);
                    if ( ((v17 >> 3) & 1) != 0 )
                    {
                      SectionInformation = MmMapApiSetView((__int64)v24);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL);
                        if ( SectionInformation >= 0 )
                        {
                          if ( *((_QWORD *)v24 + 133) )
                            SectionInformation = PspPrepareSystemDllInitBlock(1LL, 0LL);
                        }
                      }
                    }
                    KiUnstackDetachProcess((struct _KTHREAD *)v155, 0);
                  }
                  if ( SectionInformation < 0 )
                    goto LABEL_255;
                  v75 = CurrentThread;
                  --CurrentThread->KernelApcDisable;
                  v76 = (unsigned __int64 *)(v24 + 728);
                  v77 = KeAbPreAcquire((ULONG_PTR)v76, 0LL, 0LL, v70);
                  v79 = v77;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)v76, 0LL) )
                    ExfAcquirePushLockExclusiveEx(v76, v77, (ULONG_PTR)v76, v78);
                  if ( v79 )
                    *(_BYTE *)(v79 + 26) |= 1u;
                  v80 = (LARGE_INTEGER *)Object;
                  v81 = ExCreateHandleEx(PspCidTable, (__int64)Object, 0, 0, 0);
                  v80[93].QuadPart = v81;
                  if ( !v81 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v76, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)v76);
                    KeAbPostRelease((ULONG_PTR)v76);
                    v103 = v75->KernelApcDisable + 1;
                    v75->KernelApcDisable = v103;
                    if ( !v103
                      && ($CD287064E7C9F7953DE243E927CFCB99 *)v75->ApcState.ApcListHead[0].Flink != &v75->152
                      && !v75->SpecialApcDisable )
                    {
                      KiCheckForKernelApcDelivery();
                    }
                    SectionInformation = -1073741670;
                    goto LABEL_278;
                  }
                  if ( (v17 & 0x1000) != 0 )
                  {
                    v80[224] = *(LARGE_INTEGER *)(v134 + 368);
                    SectionInformation = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmGetSectionStrongImageReference)(
                                           0LL,
                                           (LARGE_INTEGER)v80[119].QuadPart,
                                           &v147);
                    if ( SectionInformation < 0
                      || (SectionInformation = KeSecureProcess(
                                                 (_KPROCESS *)v80,
                                                 v80[224].QuadPart,
                                                 v80[127].QuadPart,
                                                 v80[93].QuadPart,
                                                 v147,
                                                 v80[120].QuadPart),
                          SectionInformation < 0) )
                    {
                      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v76, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                        ExfTryToWakePushLock((volatile signed __int64 *)v76);
                      KeAbPostRelease((ULONG_PTR)v76);
                      v104 = v75->KernelApcDisable + 1;
                      v75->KernelApcDisable = v104;
                      if ( !v104
                        && ($CD287064E7C9F7953DE243E927CFCB99 *)v75->ApcState.ApcListHead[0].Flink != &v75->152
                        && !v75->SpecialApcDisable )
                      {
                        KiCheckForKernelApcDelivery();
                      }
                      goto LABEL_278;
                    }
                  }
                  if ( KeQuerySystemTimeUnsafe() )
                  {
                    KeQuerySystemTimePrecise(v80 + 97);
                  }
                  else
                  {
                    v80 = (LARGE_INTEGER *)Object;
                    *((_QWORD *)Object + 97) = MEMORY[0xFFFFF78000000014];
                  }
                  v80[233].QuadPart = MEMORY[0xFFFFF78000000008];
                  v82 = Object;
                  *((_QWORD *)Object + 234) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
                  v82[236] = v80[233].QuadPart;
                  *v146 = v82;
                  return (unsigned int)v119;
                }
                LOBYTE(v136) = 1;
                KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)v155);
                if ( MmSecureVirtualMemory(v99, 0x388uLL, 4u) )
                  *v99 = v136;
                else
                  SectionInformation = -1073741503;
                if ( SectionInformation >= 0 )
                {
                  v102 = (unsigned __int64 *)*((_QWORD *)v24 + 133);
                  if ( v102 )
                  {
                    if ( MmSecureVirtualMemory(*((PVOID *)v24 + 133), 0x250uLL, 4u) )
                    {
                      v132 = 0xFFFFFFFF00000001uLL;
                      BYTE3(v132) = PreviousModea;
                      *v102 = v132;
                    }
                    else
                    {
                      SectionInformation = -1073741503;
                    }
                  }
                }
                KiUnstackDetachProcess((struct _KTHREAD *)v155, 0);
                if ( SectionInformation < 0 )
                  goto LABEL_255;
              }
            }
            v74 = BugCheckParameter1;
            goto LABEL_151;
          }
          v93 = BugCheckParameter1;
          if ( !BugCheckParameter1 )
            goto LABEL_141;
          *((_QWORD *)v24 + 120) = *(_QWORD *)(BugCheckParameter1 + 960);
          SectionInformation = MmInitializeProcessAddressSpace((__int64)v24, v93, 0LL, &a9, (v17 >> 11) & 1);
          if ( SectionInformation < 0 )
            goto LABEL_253;
          v17 = (((unsigned __int8)v17 | 2) ^ (((a9 & 0x10) != 0) << 6)) & 0x40 ^ (v17 | 2);
          v110 = v17;
          v94 = (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v93 + 1120) + 2LL) + 16;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v94, 0x61506553u);
          *((_QWORD *)v24 + 140) = PoolWithTag;
          if ( PoolWithTag )
          {
            v96 = (unsigned int)v94;
            v97 = BugCheckParameter1;
            memmove(PoolWithTag, *(const void **)(BugCheckParameter1 + 1120), v96);
            *(_QWORD *)(*((_QWORD *)v24 + 140) + 8LL) = *((_QWORD *)v24 + 140) + 16LL;
            *((_DWORD *)v24 + 242) = *(_DWORD *)(v97 + 968);
            if ( (a9 & 0x1000) != 0 )
            {
              *v139 = 0LL;
              ObfDereferenceObject(v125);
            }
            goto LABEL_141;
          }
LABEL_304:
          SectionInformation = -1073741670;
          goto LABEL_253;
        }
LABEL_62:
        v43 = 0;
        goto LABEL_63;
      }
    }
LABEL_255:
    PspRundownSingleProcess((ULONG_PTR)v24);
    ObfDereferenceObjectWithTag(v24, 0x72437350u);
    return (unsigned int)SectionInformation;
  }
  return result;
}
