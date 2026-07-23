/*
 * XREFs of NtQueryInformationProcess @ 0x14041D530
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeQueryAffinityProcess @ 0x140028660 (KeQueryAffinityProcess.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeQueryGroupMaskProcess @ 0x14009B4A0 (KeQueryGroupMaskProcess.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MmQueryWorkingSetInformation @ 0x1400E2C20 (MmQueryWorkingSetInformation.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     PsQueryProcessCommandLine @ 0x1400F1FB4 (PsQueryProcessCommandLine.c)
 *     xKdEnumerateDebuggingDevices @ 0x140142AF0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x140152CA0 (ZwQueryInformationJobObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x1401C855C (KeQueryCpuSetsProcess.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140213938 (ExQueryHandleExceptionsPermanency.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1403B4B54 (PsQueryTotalCycleTimeProcess.c)
 *     ObGetProcessHandleCount @ 0x1403E94CC (ObGetProcessHandleCount.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObQueryDeviceMapInformation @ 0x14041D1A0 (ObQueryDeviceMapInformation.c)
 *     PsQueryFullProcessImageName @ 0x14041F760 (PsQueryFullProcessImageName.c)
 *     MmGetSectionInformation @ 0x14044F1E4 (MmGetSectionInformation.c)
 *     PsQueryProcessAttributes @ 0x14046DFC4 (PsQueryProcessAttributes.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 *     PspQueryQuotaLimits @ 0x1404A6FA8 (PspQueryQuotaLimits.c)
 *     PsReferenceProcessFilePointer @ 0x1404A995C (PsReferenceProcessFilePointer.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     PsQueryProcessQuotaCounters @ 0x1404AE9C8 (PsQueryProcessQuotaCounters.c)
 *     KeGetExecuteOptions @ 0x1404B46E8 (KeGetExecuteOptions.c)
 *     ExReferenceHandleDebugInfo @ 0x1404C6520 (ExReferenceHandleDebugInfo.c)
 *     ExIsRestrictedCaller @ 0x1404C69D4 (ExIsRestrictedCaller.c)
 *     IoQueryFileDosDeviceName @ 0x1404D7F30 (IoQueryFileDosDeviceName.c)
 *     ExQueryProcessHandleInformation @ 0x140517158 (ExQueryProcessHandleInformation.c)
 *     DbgkOpenProcessDebugPort @ 0x1405EE178 (DbgkOpenProcessDebugPort.c)
 *     HvlGetSecurePebAddress @ 0x1405F6B80 (HvlGetSecurePebAddress.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14063ED5C (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspQueryPooledQuotaLimits @ 0x14063F118 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14063F290 (PspQueryWorkingSetWatch.c)
 *     ExDereferenceHandleDebugInfo @ 0x14066C7D4 (ExDereferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r14
  _OBJECT_NAME_INFORMATION *v6; // rsi
  unsigned __int8 v9; // di
  int v10; // eax
  ULONG64 v11; // rax
  PULONG v12; // rcx
  char *v13; // r15
  NTSTATUS result; // eax
  NTSTATUS DeviceMapInformation; // edi
  NTSTATUS ProcessCommandLine; // r15d
  volatile signed __int32 *p_Lock; // r10
  int v18; // eax
  struct _KTHREAD *v19; // r13
  unsigned __int64 *v20; // r14
  __int64 v21; // rbx
  unsigned int v22; // ebx
  unsigned int v23; // edi
  _QWORD *i; // rcx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  signed int ExecuteOptions; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // r13d
  _KPROCESS *v32; // r14
  char v33; // di
  __int64 v34; // rdx
  struct _KTHREAD *v35; // rbx
  __int64 v36; // rdx
  unsigned __int64 Group; // r8
  _DWORD *v38; // rbx
  _DWORD *v39; // rcx
  struct _EX_RUNDOWN_REF *v40; // r14
  void *Ptr; // rbx
  int v42; // r13d
  __int64 v43; // r15
  __int64 *v44; // rax
  int v45; // ebx
  int SessionId; // ebx
  PVOID v47; // rcx
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v51; // rax
  void *Process; // r10
  void *v53; // r10
  __int64 v54; // rbx
  char *v55; // r15
  struct _EX_RUNDOWN_REF *v56; // rbx
  struct _FILE_OBJECT *v57; // r13
  POBJECT_NAME_INFORMATION v58; // rdi
  ULONG v59; // r13d
  unsigned __int16 MaximumLength; // ax
  int v61; // ecx
  __int64 v62; // r15
  PVOID v63; // rbx
  __int64 *v64; // rax
  int *v65; // rax
  ULONG64 v66; // rcx
  unsigned __int16 v67; // r15
  int *v68; // rcx
  _QWORD *v69; // rax
  NTSTATUS v70; // edi
  ULONG v71; // eax
  __int64 v72; // rdx
  unsigned __int8 v73; // al
  BOOL v74; // edi
  PVOID v75; // rbx
  _DWORD *v76; // rcx
  BOOL v77; // edi
  char *v78; // r14
  unsigned int v79; // r15d
  struct _EX_RUNDOWN_REF *v80; // rbx
  struct _MDL *v81; // rax
  struct _MDL *v82; // r13
  __int64 v83; // rax
  __int64 v84; // r8
  void *v85; // rbx
  NTSTATUS ProcessHandleInformation; // edi
  PVOID v87; // rcx
  PVOID v88; // rdi
  int ProcessHandleCount; // edi
  NTSTATUS v90; // ebx
  PVOID v91; // rdi
  __int64 v92; // rbx
  struct _EX_RUNDOWN_REF *v93; // r15
  __int64 v94; // rax
  int v95; // ebx
  struct _EX_RUNDOWN_REF *v96; // rbx
  __int64 v97; // rax
  HANDLE v98; // rdx
  NTSTATUS v99; // ebx
  PVOID v100; // r8
  NTSTATUS v101; // ebx
  int v102; // ebx
  __int64 v103; // rdx
  _OWORD *v104; // rax
  __int64 v105; // r9
  int v106; // ecx
  int v107; // r15d
  __int64 v108; // rdx
  __int64 v109; // rcx
  ULONG v110; // r15d
  unsigned int v111; // eax
  unsigned int v112; // edx
  __int64 v113; // rax
  _DWORD *v114; // rcx
  int v115; // r15d
  __int64 v116; // rax
  int v117; // r15d
  __int64 v118; // rax
  unsigned int v119; // r15d
  int v120; // r8d
  ULONG v121; // ebx
  PVOID Object; // [rsp+40h] [rbp-688h] BYREF
  NTSTATUS v123; // [rsp+48h] [rbp-680h]
  unsigned __int8 v124; // [rsp+4Ch] [rbp-67Ch]
  unsigned __int16 v125; // [rsp+50h] [rbp-678h] BYREF
  unsigned int GroupMaskProcess; // [rsp+54h] [rbp-674h] BYREF
  char v127[2]; // [rsp+58h] [rbp-670h] BYREF
  char v128[2]; // [rsp+5Ah] [rbp-66Eh] BYREF
  int v129; // [rsp+5Ch] [rbp-66Ch]
  HANDLE v130; // [rsp+60h] [rbp-668h]
  int v131; // [rsp+68h] [rbp-660h]
  ULONG v132; // [rsp+6Ch] [rbp-65Ch] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+70h] [rbp-658h] BYREF
  int v134; // [rsp+78h] [rbp-650h]
  HANDLE Handle; // [rsp+80h] [rbp-648h] BYREF
  _DWORD *v136; // [rsp+88h] [rbp-640h]
  __int64 v137; // [rsp+90h] [rbp-638h]
  int v138[4]; // [rsp+A0h] [rbp-628h]
  PVOID v139; // [rsp+B0h] [rbp-618h] BYREF
  int v140; // [rsp+B8h] [rbp-610h]
  __int64 v141; // [rsp+C0h] [rbp-608h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-600h]
  struct _MDL *v143[3]; // [rsp+D0h] [rbp-5F8h] BYREF
  ULONG v144; // [rsp+E8h] [rbp-5E0h]
  int v145; // [rsp+ECh] [rbp-5DCh] BYREF
  int v146; // [rsp+F0h] [rbp-5D8h]
  int v147; // [rsp+F4h] [rbp-5D4h] BYREF
  _OBJECT_NAME_INFORMATION v148; // [rsp+F8h] [rbp-5D0h]
  unsigned int v149; // [rsp+108h] [rbp-5C0h]
  int v150; // [rsp+10Ch] [rbp-5BCh] BYREF
  __int64 v151; // [rsp+110h] [rbp-5B8h] BYREF
  __int64 v152; // [rsp+118h] [rbp-5B0h]
  _OBJECT_NAME_INFORMATION v153; // [rsp+120h] [rbp-5A8h]
  _OBJECT_NAME_INFORMATION v154; // [rsp+130h] [rbp-598h]
  _OBJECT_NAME_INFORMATION v155; // [rsp+140h] [rbp-588h]
  PVOID v156; // [rsp+150h] [rbp-578h] BYREF
  __int64 v157; // [rsp+158h] [rbp-570h] BYREF
  PVOID v158; // [rsp+160h] [rbp-568h] BYREF
  int v159; // [rsp+168h] [rbp-560h]
  wchar_t *v160; // [rsp+178h] [rbp-550h]
  int v161; // [rsp+180h] [rbp-548h] BYREF
  __int64 v162; // [rsp+188h] [rbp-540h] BYREF
  PVOID v163; // [rsp+190h] [rbp-538h] BYREF
  __int64 v164; // [rsp+198h] [rbp-530h]
  __int128 v165; // [rsp+1A0h] [rbp-528h]
  _QWORD Src[14]; // [rsp+1B0h] [rbp-518h] BYREF
  _QWORD v167[3]; // [rsp+220h] [rbp-4A8h] BYREF
  _QWORD v168[3]; // [rsp+238h] [rbp-490h] BYREF
  __int64 v169[4]; // [rsp+250h] [rbp-478h] BYREF
  _OBJECT_NAME_INFORMATION v170; // [rsp+270h] [rbp-458h]
  _OBJECT_NAME_INFORMATION v171; // [rsp+280h] [rbp-448h]
  _OBJECT_NAME_INFORMATION v172; // [rsp+290h] [rbp-438h]
  __int128 v173; // [rsp+2A0h] [rbp-428h]
  __int128 v174; // [rsp+2B0h] [rbp-418h]
  __int128 v175; // [rsp+2C0h] [rbp-408h]
  __int128 v176; // [rsp+2D0h] [rbp-3F8h]
  __int128 v177; // [rsp+2E0h] [rbp-3E8h]
  __int128 v178; // [rsp+2F0h] [rbp-3D8h]
  __int128 v179; // [rsp+300h] [rbp-3C8h]
  __int128 v180; // [rsp+310h] [rbp-3B8h]
  __int128 v181; // [rsp+320h] [rbp-3A8h]
  __int128 v182; // [rsp+330h] [rbp-398h]
  char v183; // [rsp+340h] [rbp-388h] BYREF
  _QWORD JobInformation[5]; // [rsp+350h] [rbp-378h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v185; // [rsp+378h] [rbp-350h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v186; // [rsp+3A8h] [rbp-320h] BYREF
  char v187[16]; // [rsp+3E0h] [rbp-2E8h] BYREF
  int v188; // [rsp+3F0h] [rbp-2D8h]
  wchar_t *v189; // [rsp+458h] [rbp-270h]
  __int64 v190; // [rsp+470h] [rbp-258h]
  _OWORD v191[11]; // [rsp+480h] [rbp-248h] BYREF
  _OWORD v192[11]; // [rsp+530h] [rbp-198h] BYREF
  _QWORD v193[20]; // [rsp+5E0h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (_OBJECT_NAME_INFORMATION *)ProcessInformation;
  v130 = ProcessHandle;
  v143[1] = (struct _MDL *)ProcessInformation;
  LODWORD(v137) = ProcessInformationLength;
  v143[2] = (struct _MDL *)ReturnLength;
  v9 = KeGetCurrentThread()->gap0[10];
  v124 = v9;
  CurrentThread = KeGetCurrentThread();
  if ( !v9 )
    goto LABEL_21;
  switch ( ProcessInformationClass )
  {
    case ProcessProtectionInformation:
      v10 = 1;
      v129 = 1;
      break;
    case ProcessCommitReleaseInformation:
      v10 = 8;
      goto LABEL_6;
    case ProcessInPrivate:
      v10 = 1;
      v129 = 1;
      break;
    default:
      v10 = 4;
LABEL_6:
      v129 = v10;
      break;
  }
  if ( ProcessInformationLength )
  {
    if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)ProcessInformation + ProcessInformationLength <= MmUserProbeAddress
      && (char *)ProcessInformation + ProcessInformationLength >= ProcessInformation )
    {
      goto LABEL_11;
    }
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = MmUserProbeAddress;
LABEL_11:
  if ( ReturnLength )
  {
    v12 = ReturnLength;
    if ( (unsigned __int64)ReturnLength >= v11 )
      v12 = (PULONG)v11;
    *v12 = *v12;
  }
LABEL_21:
  if ( ProcessInformationClass != ProcessCookie )
  {
    if ( ProcessInformationClass != ProcessTimes )
    {
      if ( ProcessInformationClass == ProcessImageFileName )
      {
        v13 = 0LL;
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x1000u,
                   (POBJECT_TYPE)PsProcessType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
        {
          if ( (unsigned int)v5 < 0x10 )
          {
            v132 = 0;
            v6 = (_OBJECT_NAME_INFORMATION *)&v183;
          }
          else
          {
            v132 = v5 - 16;
            v13 = (char *)&v6[1];
          }
          DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, v13, &v132);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( DeviceMapInformation >= 0 && !v13 )
            DeviceMapInformation = -1073741820;
          if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
            *ReturnLength = v132 + 16;
          return DeviceMapInformation;
        }
      }
      else
      {
        switch ( ProcessInformationClass )
        {
          case ProcessBasicInformation:
            if ( ProcessInformationLength == 64 )
            {
              v136 = ProcessInformation;
              v30 = 64;
              v137 = 64LL;
              *(_QWORD *)ProcessInformation = 64LL;
              v6 = (_OBJECT_NAME_INFORMATION *)((char *)ProcessInformation + 8);
            }
            else
            {
              if ( ProcessInformationLength != 48 )
                return -1073741820;
              v136 = 0LL;
              v30 = 48;
              v137 = 48LL;
            }
            v129 = v30;
            ObjectNameInformation = v6;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            v31 = result;
            v123 = result;
            if ( result < 0 )
              return result;
            v32 = (_KPROCESS *)Object;
            *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 391);
            v6->Name.Buffer = (wchar_t *)v32[1].ActiveProcessors.Bitmap[1];
            v33 = 1;
            if ( v32->SecurePid )
              HvlGetSecurePebAddress(v32);
            if ( v31 < 0 )
            {
              ObfDereferenceObjectWithTag(v32, 0x79517350u);
              return v31;
            }
            GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v32);
            v35 = CurrentThread;
            if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && v32 != CurrentThread->Process )
              goto LABEL_83;
            KeQueryAffinityProcess((__int64)v32, v192, (int *)&GroupMaskProcess, 0LL);
            v36 = GroupMaskProcess;
            if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
            {
              if ( v32 != v35->Process )
                goto LABEL_367;
              Group = v35->UserAffinity.Group;
              if ( !_bittest64(&v36, Group) )
                goto LABEL_367;
            }
            else
            {
              _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
            }
            if ( (_DWORD)Group != 20 )
            {
              v34 = *((_QWORD *)v192 + Group + 1);
              goto LABEL_83;
            }
LABEL_367:
            v34 = 0LL;
LABEL_83:
            *(_QWORD *)&v6[1].Name.Length = v34;
            LODWORD(v6[1].Name.Buffer) = v32->BasePriority;
            *(_QWORD *)&v6[2].Name.Length = v32[1].Header.WaitListHead.Blink;
            v6[2].Name.Buffer = (wchar_t *)v32[1].SwapListEntry.Next;
            v38 = v136;
            if ( v136 )
            {
              v136[14] = 0;
              if ( (BYTE2(v32[2].SwapListEntry.Next) & 7) != 0 )
                v38[14] = 1;
              if ( v32[1].ActiveProcessors.Bitmap[7] )
                v38[14] |= 2u;
              v39 = (_DWORD *)&v32[1].DirectoryTableBase + 1;
              if ( (v32[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
                v38[14] |= 4u;
              v32 = (_KPROCESS *)Object;
              v38[14] ^= (v38[14] ^ (8 * (*((unsigned __int8 *)Object + 768) >> 7))) & 8;
              if ( v32->FreezeCount + ((*(_DWORD *)&v32->0 >> 3) & 1) )
                v38[14] |= 0x10u;
              v38[14] ^= (v38[14] ^ (32 * ((*v39 & 0x100000) != 0))) & 0x20;
              PsQueryProcessAttributes(v32, v128);
              if ( v128[0] )
                v38[14] |= 0x40u;
              if ( !v32->SecurePid )
                v33 = 0;
              if ( v33 )
                v38[14] |= 0x80u;
              v31 = v123;
            }
            if ( ReturnLength )
              *ReturnLength = v137;
            ObfDereferenceObjectWithTag(v32, 0x79517350u);
            return v31;
          case ProcessQuotaLimits:
            return PspQueryQuotaLimits(ProcessHandle, (__int64)ReturnLength, v9);
          case ProcessIoCounters:
            if ( ProcessInformationLength != 48 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            DeviceMapInformation = result;
            if ( result >= 0 )
            {
              PsQueryStatisticsProcess((__int64)Object, v169);
              v153 = v170;
              v154 = v171;
              v155 = v172;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *v6 = v153;
              v6[1] = v154;
              v6[2] = v155;
              if ( ReturnLength )
                *ReturnLength = 48;
              return DeviceMapInformation;
            }
            return result;
          case ProcessVmCounters:
            if ( ProcessInformationLength != 88 && ProcessInformationLength != 96 && ProcessInformationLength != 112 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              memset(Src, 0, sizeof(Src));
              v48 = Object;
              Src[0] = *((_QWORD *)Object + 102);
              Src[1] = *((_QWORD *)Object + 103);
              LODWORD(Src[2]) = *((_DWORD *)Object + 369);
              KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v185);
              v123 = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], v167, v168, &v161);
              KiUnstackDetachProcess(&v185, 0LL);
              PsQueryProcessQuotaCounters(v48, 1LL, &Src[6], &Src[5]);
              PsQueryProcessQuotaCounters(v48, 0LL, &Src[8], &Src[7]);
              Src[9] = v48[158] << 12;
              Src[10] = *((_QWORD *)Object + 159) << 12;
              Src[13] = *((_QWORD *)Object + 236) << 12;
              Src[11] = Src[9];
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              result = v123;
              if ( v123 >= 0 )
              {
                memmove(v6, Src, v5);
                if ( ReturnLength )
                  *ReturnLength = v5;
                return 0;
              }
            }
            return result;
          case ProcessDebugPort:
            if ( ProcessInformationLength != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              if ( *((_QWORD *)Object + 132) )
                Handle = (HANDLE)-1LL;
              else
                Handle = 0LL;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_QWORD *)&v6->Name.Length = Handle;
              if ( ReturnLength )
                *ReturnLength = 8;
              return 0;
            }
            return result;
          case ProcessLdtInformation:
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x410u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              v101 = xKdEnumerateDebuggingDevices();
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v101;
            }
            return result;
          case ProcessDefaultHardErrorMode:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              v29 = *((_DWORD *)Object + 296);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)&v6->Name.Length = v29;
              if ( ReturnLength )
                *ReturnLength = 4;
              return 0;
            }
            return result;
          case ProcessPooledUsageAndLimits:
            return PspQueryPooledQuotaLimits(
                     (int)ProcessHandle,
                     (int)ProcessInformation,
                     ProcessInformationLength,
                     (int)ReturnLength,
                     v9);
          case ProcessWorkingSetWatch:
          case ProcessWorkingSetWatchEx:
            return PspQueryWorkingSetWatch(ProcessHandle, (__int64)ReturnLength, v9);
          case ProcessPriorityClass:
            if ( ProcessInformationLength != 2 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              LOBYTE(v125) = 0;
              HIBYTE(v125) = *((_BYTE *)Object + 1119);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->Name.Length = v125;
              if ( ReturnLength )
                *ReturnLength = 2;
              return 0;
            }
            return result;
          case ProcessWx86Information:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result >= 0 )
            {
              v74 = (*((_DWORD *)Object + 193) & 0x1000000) != 0;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)&v6->Name.Length = v74;
              if ( ReturnLength )
                *ReturnLength = 4;
              goto LABEL_162;
            }
            return result;
          case ProcessHandleCount:
            if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &v147);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)&v6->Name.Length = ProcessHandleCount;
              if ( (_DWORD)v5 != 4 )
                *(_DWORD *)(&v6->Name.MaximumLength + 1) = v147;
              if ( ReturnLength )
                *ReturnLength = 4;
              return 0;
            }
            return result;
          case ProcessAffinityMask:
            if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            DeviceMapInformation = result;
            if ( result >= 0 )
            {
              v80 = (struct _EX_RUNDOWN_REF *)Object;
              GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
              if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
                || (KeQueryAffinityProcess((__int64)v80, v191, (int *)&GroupMaskProcess, 0LL),
                    ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
              {
                DeviceMapInformation = -1073741811;
              }
              else
              {
                _BitScanForward((unsigned int *)&v108, GroupMaskProcess);
                v109 = *((_QWORD *)v191 + v108 + 1);
                if ( (_DWORD)v5 == 16 )
                  LOWORD(v6->Name.Buffer) = v108;
                *(_QWORD *)&v6->Name.Length = v109;
                if ( ReturnLength )
                  *ReturnLength = v5;
              }
              goto LABEL_317;
            }
            return result;
          case ProcessPriorityBoost:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            DeviceMapInformation = result;
            if ( result >= 0 )
            {
              v102 = (unsigned __int8)(*((_BYTE *)Object + 440) & 2) >> 1;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)&v6->Name.Length = v102;
              if ( ReturnLength )
                *ReturnLength = 4;
              return DeviceMapInformation;
            }
            return result;
          case ProcessDeviceMap:
            if ( ProcessInformationLength < 0x24 )
              return -1073741820;
            if ( ProcessInformationLength == 48 )
            {
              v131 = *((_DWORD *)ProcessInformation + 10);
              v28 = v131;
              if ( (v131 & 0xFFFFFFFE) != 0 )
                return -1073741811;
            }
            else
            {
              if ( ProcessInformationLength != 36 )
                return -1073741820;
              v28 = 0;
            }
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, (__int64)v6, v28);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              if ( DeviceMapInformation >= 0 && ReturnLength )
                *ReturnLength = v5;
              return DeviceMapInformation;
            }
            return result;
          case ProcessSessionInformation:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              SessionId = MmGetSessionId((struct _KPROCESS *)Object);
              ObfDereferenceObjectWithTag(v47, 0x79517350u);
              *(_DWORD *)&v6->Name.Length = SessionId;
              if ( ReturnLength )
                *ReturnLength = 4;
              return 0;
            }
            return result;
          case ProcessWow64Information:
            if ( ProcessInformationLength != 8 )
              return -1073741820;
            v43 = 0LL;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result >= 0 )
            {
              v44 = (__int64 *)*((_QWORD *)Object + 133);
              if ( v44 )
                v43 = *v44;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_QWORD *)&v6->Name.Length = v43;
              if ( ReturnLength )
                *ReturnLength = 8;
              return 0;
            }
            return result;
          case ProcessLUIDDeviceMapsEnabled:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            *(_DWORD *)ProcessInformation = 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ProcessBreakOnTermination:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v77 = (*((_DWORD *)Object + 193) & 0x2000) != 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = v77;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ProcessDebugObjectHandle:
            if ( ProcessInformationLength != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v9, &Handle);
            v98 = Handle;
            if ( DeviceMapInformation < 0 )
              v98 = 0LL;
            Handle = v98;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)&v6->Name.Length = Handle;
            if ( ReturnLength )
              *ReturnLength = 8;
            return DeviceMapInformation;
          case ProcessDebugFlags:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            v99 = result;
            if ( result >= 0 )
            {
              v100 = Object;
              *(_DWORD *)&v6->Name.Length = ((unsigned __int8)~*((_BYTE *)Object + 772) >> 1) & 1;
              if ( ReturnLength )
                *ReturnLength = 4;
              ObfDereferenceObjectWithTag(v100, 0x79517350u);
              return v99;
            }
            return result;
          case ProcessHandleTracing:
            if ( ProcessInformationLength < 0x10 )
              return -1073741820;
            if ( (unsigned int)ExIsRestrictedCaller(v9) )
              return -1073741790;
            ObjectNameInformation = (POBJECT_NAME_INFORMATION)((unsigned int)(v5 - 16) / 0xA0uLL);
            v78 = (char *)&v6[1];
            v79 = 0;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            DeviceMapInformation = result;
            if ( result < 0 )
              return result;
            v80 = (struct _EX_RUNDOWN_REF *)Object;
            v81 = (struct _MDL *)ObReferenceProcessHandleTable(Object);
            v82 = v81;
            v143[0] = v81;
            if ( v81 )
            {
              v83 = ExReferenceHandleDebugInfo(v81);
              v84 = v83;
              v141 = v83;
              if ( v83 )
              {
                LODWORD(v6->Name.Buffer) = 0;
                v103 = (unsigned int)(*(_DWORD *)(v83 + 72) % *(_DWORD *)(v83 + 4));
                v140 = v103;
                while ( 1 )
                {
                  v149 = v79;
                  if ( v79 >= *(_DWORD *)(v84 + 4) )
                    break;
                  v104 = (_OWORD *)(v84 + 160 * v103);
                  v173 = v104[5];
                  v174 = v104[6];
                  v175 = v104[7];
                  v176 = v104[8];
                  v177 = v104[9];
                  v178 = v104[10];
                  v179 = v104[11];
                  v180 = v104[12];
                  v181 = v104[13];
                  v182 = v104[14];
                  v105 = v174;
                  if ( *(_QWORD *)&v6->Name.Length == (_QWORD)v174 || !*(_QWORD *)&v6->Name.Length )
                  {
                    v106 = DWORD2(v174);
                    if ( DWORD2(v174) )
                    {
                      ++LODWORD(v6->Name.Buffer);
                      if ( (_DWORD)ObjectNameInformation )
                      {
                        ObjectNameInformation = (POBJECT_NAME_INFORMATION)(unsigned int)((_DWORD)ObjectNameInformation
                                                                                       - 1);
                        v159 = (int)ObjectNameInformation;
                        *(_QWORD *)v78 = v105;
                        *(_OWORD *)(v78 + 8) = v173;
                        *((_DWORD *)v78 + 6) = v106;
                        *((_OWORD *)v78 + 2) = v175;
                        *((_OWORD *)v78 + 3) = v176;
                        *((_OWORD *)v78 + 4) = v177;
                        *((_OWORD *)v78 + 5) = v178;
                        *((_OWORD *)v78 + 6) = v179;
                        *((_OWORD *)v78 + 7) = v180;
                        *((_OWORD *)v78 + 8) = v181;
                        *((_OWORD *)v78 + 9) = v182;
                        v78 += 160;
                        v167[1] = v78;
                      }
                      else
                      {
                        DeviceMapInformation = -1073741820;
                        v123 = -1073741820;
                      }
                    }
                  }
                  if ( !(_DWORD)v103 )
                    LODWORD(v103) = *(_DWORD *)(v84 + 4);
                  v103 = (unsigned int)(v103 - 1);
                  v140 = v103;
                  ++v79;
                }
                if ( ReturnLength )
                  *ReturnLength = (_DWORD)v78 - (_DWORD)v6;
                ExDereferenceHandleDebugInfo(v82, v84);
                v80 = (struct _EX_RUNDOWN_REF *)Object;
              }
              else
              {
                DeviceMapInformation = -1073741811;
              }
LABEL_316:
              ExReleaseRundownProtection_0(v80 + 92);
            }
            else
            {
LABEL_359:
              DeviceMapInformation = -1073741558;
            }
LABEL_317:
            ObfDereferenceObjectWithTag(v80, 0x79517350u);
            return DeviceMapInformation;
          case ProcessIoPriority:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            v123 = result;
            if ( result < 0 )
              return result;
            v26 = Object;
            *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 193) >> 27) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_56;
          case ProcessExecuteFlags:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            if ( ProcessHandle == (HANDLE)-1LL )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
            }
            else
            {
              result = ObReferenceObjectByHandleWithTag(
                         ProcessHandle,
                         0x400u,
                         (POBJECT_TYPE)PsProcessType,
                         v9,
                         0x79517350u,
                         &Object,
                         0LL);
              if ( result < 0 )
                return result;
              Process = Object;
            }
            ExecuteOptions = KeGetExecuteOptions(Process, &v145);
            if ( ProcessHandle != (HANDLE)-1LL )
              ObfDereferenceObjectWithTag(v53, 0x79517350u);
            if ( ExecuteOptions >= 0 )
            {
              *(_DWORD *)&v6->Name.Length = v145;
              if ( ReturnLength )
                *ReturnLength = 4;
            }
            goto LABEL_162;
          case ProcessImageInformation:
            if ( ProcessInformationLength != 64 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            DeviceMapInformation = result;
            if ( result < 0 )
              return result;
            v40 = (struct _EX_RUNDOWN_REF *)Object;
            if ( Object == CurrentThread->Process )
            {
              Ptr = (void *)*((_QWORD *)Object + 119);
              if ( !Ptr )
                DeviceMapInformation = -1073741558;
              v42 = 0;
            }
            else
            {
              v42 = 1;
              if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
              {
                Ptr = v40[119].Ptr;
                if ( Ptr )
                  ObfReferenceObject(v40[119].Ptr);
                else
                  DeviceMapInformation = -1073741811;
                ExReleaseRundownProtection_0(v40 + 92);
              }
              else
              {
                DeviceMapInformation = -1073741558;
                Ptr = 0LL;
              }
            }
            ObfDereferenceObjectWithTag(v40, 0x79517350u);
            if ( DeviceMapInformation >= 0 )
            {
              DeviceMapInformation = MmGetSectionInformation(Ptr, 1LL, v6);
              if ( v42 )
                ObfDereferenceObject(Ptr);
              if ( DeviceMapInformation >= 0 && ReturnLength )
                *ReturnLength = 64;
            }
            return DeviceMapInformation;
          case ProcessCycleTime:
            if ( ProcessInformationLength != 16 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            v90 = result;
            if ( result >= 0 )
            {
              v91 = Object;
              *(_QWORD *)&v6->Name.Length = PsQueryTotalCycleTimeProcess((__int64)Object);
              v6->Name.Buffer = v160;
              if ( ReturnLength )
                *ReturnLength = 16;
              ObfDereferenceObjectWithTag(v91, 0x79517350u);
              return v90;
            }
            return result;
          case ProcessPagePriority:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v26 = Object;
            *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 192) >> 12) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_56;
          case ProcessImageFileNameWin32:
            v55 = 0LL;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            DeviceMapInformation = result;
            if ( result < 0 )
              return result;
            v56 = (struct _EX_RUNDOWN_REF *)Object;
            v57 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 137);
            v139 = v57;
            if ( v57 )
            {
              if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
              {
                ObfReferenceObject(v57);
                ExReleaseRundownProtection_0(v56 + 92);
              }
              else
              {
                DeviceMapInformation = -1073741558;
              }
            }
            else
            {
              DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v139);
              v57 = (struct _FILE_OBJECT *)v139;
            }
            ObfDereferenceObjectWithTag(v56, 0x79517350u);
            if ( DeviceMapInformation < 0 )
              return DeviceMapInformation;
            ExecuteOptions = IoQueryFileDosDeviceName(v57, &ObjectNameInformation);
            ObfDereferenceObject(v57);
            if ( ExecuteOptions >= 0 )
            {
              v58 = ObjectNameInformation;
              v59 = ObjectNameInformation->Name.MaximumLength + 16;
              if ( v59 > (unsigned int)v5 )
              {
                ExecuteOptions = -1073741820;
                v123 = -1073741820;
              }
              else
              {
                v6->Name.Length = ObjectNameInformation->Name.Length;
                v6->Name.MaximumLength = v58->Name.MaximumLength;
                MaximumLength = v58->Name.MaximumLength;
                if ( MaximumLength )
                {
                  v55 = (char *)&v6[1];
                  memmove(&v6[1], v58->Name.Buffer, MaximumLength);
                }
                v6->Name.Buffer = (wchar_t *)v55;
              }
              if ( ReturnLength )
                *ReturnLength = v59;
              ExFreePoolWithTag(v58, 0);
            }
            goto LABEL_162;
          case ProcessImageFileMapping:
            if ( ProcessInformationLength != 8 )
              return -1073741820;
            v85 = *(void **)ProcessInformation;
            v167[2] = *(_QWORD *)ProcessInformation;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            ExecuteOptions = ObReferenceObjectByHandleWithTag(
                               v85,
                               0x100020u,
                               (POBJECT_TYPE)IoFileObjectType,
                               v9,
                               0x79517350u,
                               &v139,
                               0LL);
            v26 = Object;
            if ( ExecuteOptions < 0 )
              goto LABEL_56;
            ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &v156);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v87 = v139;
            if ( ProcessHandleInformation < 0 )
              goto LABEL_350;
            v88 = v156;
            if ( *((_QWORD *)v139 + 5) == *((_QWORD *)v156 + 5) )
              ExecuteOptions = 0;
            else
              ExecuteOptions = -1073741823;
            ObfDereferenceObject(v139);
            ObfDereferenceObject(v88);
            if ( ExecuteOptions >= 0 && ReturnLength )
              *ReturnLength = 0;
            goto LABEL_162;
          case ProcessAffinityUpdateMode:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v131 = *((_DWORD *)Object + 192);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v107 = (v131 & 0x80000) != 0;
            if ( (v131 & 0x40000) != 0 )
              v107 |= 2u;
            *(_DWORD *)&v6->Name.Length = v107;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ProcessMemoryAllocationMode:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v131 = *((_DWORD *)Object + 193);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)&v6->Name.Length = (v131 & 0x200000) != 0;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ProcessGroupInformation:
            if ( !ReturnLength || (ProcessInformationLength & 1) != 0 )
              return -1073741811;
            v110 = 0;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v111 = KeQueryGroupMaskProcess((__int64)Object);
            GroupMaskProcess = v111;
            do
            {
              _BitScanForward(&v112, v111);
              v110 += 2;
              v132 = v110;
              if ( v110 <= (unsigned int)v5 )
              {
                v6->Name.Length = v112;
                v6 = (_OBJECT_NAME_INFORMATION *)((char *)v6 + 2);
                v168[1] = v6;
              }
              _bittestandreset((signed __int32 *)&GroupMaskProcess, v112);
              v111 = GroupMaskProcess;
            }
            while ( GroupMaskProcess );
            *ReturnLength = v110;
            ExecuteOptions = (unsigned int)v5 < v110 ? 0xC0000023 : 0;
            v123 = ExecuteOptions;
            goto LABEL_56;
          case ProcessConsoleHostProcess:
            if ( ProcessInformationLength != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v54 = *((_QWORD *)Object + 126);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)&v6->Name.Length = v54;
            if ( ReturnLength )
              *ReturnLength = 8;
            return 0;
          case ProcessWindowInformation:
            v62 = 0LL;
            v134 = 0;
            LOWORD(v138[0]) = 0;
            *(_QWORD *)((char *)v138 + 2) = 0LL;
            *(int *)((char *)&v138[2] + 2) = 0;
            HIWORD(v138[3]) = 0;
            if ( v9 != 1 )
              return -1073741823;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       1,
                       0x79517350u,
                       &Object,
                       0LL);
            v123 = result;
            if ( result >= 0 )
            {
              v63 = Object;
              if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
              {
                KiStackAttachProcess((_KPROCESS *)v63, 0LL, (__int64)&v186);
                v64 = (__int64 *)*((_QWORD *)v63 + 133);
                if ( v64 )
                  v62 = *v64;
                if ( v62 )
                {
                  v164 = *(unsigned int *)(v62 + 16);
                  v68 = (int *)(v164 + 104);
                  if ( v164 + 104 >= MmUserProbeAddress )
                    v68 = (int *)MmUserProbeAddress;
                  v134 = *v68;
                  v69 = (_QWORD *)(v164 + 112);
                  if ( v164 + 112 >= MmUserProbeAddress )
                    v69 = (_QWORD *)MmUserProbeAddress;
                  v136 = (_DWORD *)*v69;
                  v67 = (unsigned __int16)v136;
                  v138[0] = (int)v136;
                  *(_QWORD *)&v138[2] = HIDWORD(v136);
                }
                else
                {
                  v141 = *(_QWORD *)(*((_QWORD *)v63 + 127) + 32LL);
                  v65 = (int *)(v141 + 164);
                  if ( v141 + 164 >= MmUserProbeAddress )
                    v65 = (int *)MmUserProbeAddress;
                  v134 = *v65;
                  v66 = v141 + 176;
                  if ( v141 + 176 >= MmUserProbeAddress )
                    v66 = MmUserProbeAddress;
                  LODWORD(v165) = *(_DWORD *)v66;
                  *((_QWORD *)&v165 + 1) = *(_QWORD *)(v66 + 8);
                  *(_OWORD *)v138 = v165;
                  v67 = v165;
                }
                v70 = v123;
                KiUnstackDetachProcess(&v186, 0LL);
                if ( v70 < 0 )
                  goto LABEL_441;
                v71 = v67 + 6;
                if ( ReturnLength )
                  *ReturnLength = v71;
                if ( (unsigned int)v5 < v71 )
                {
                  v70 = -1073741820;
                  v123 = -1073741820;
                }
                else
                {
                  *(_DWORD *)&v6->Name.Length = v134;
                  *(&v6->Name.MaximumLength + 1) = v67;
                }
                if ( v70 >= 0 && v67 )
                {
                  v63 = Object;
                  v70 = MmCopyVirtualMemory(
                          (int)Object,
                          v138[2],
                          (int)KeGetCurrentThread()->ApcState.Process,
                          (int)v6 + 6,
                          LOWORD(v138[0]),
                          1,
                          (__int64)&v157);
                }
                else
                {
LABEL_441:
                  v63 = Object;
                }
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v63 + 92);
              }
              else
              {
                v70 = -1073741558;
              }
              ObfDereferenceObjectWithTag(v63, 0x79517350u);
              return v70;
            }
            return result;
          case ProcessHandleInformation:
            if ( ProcessInformationLength < 0x10 )
            {
              if ( ReturnLength )
                *ReturnLength = 16;
              return -1073741820;
            }
            result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v9, &v158, 0LL);
            if ( result >= 0 )
            {
              v92 = (__int64)CurrentThread;
              --CurrentThread->KernelApcDisable;
              v93 = (struct _EX_RUNDOWN_REF *)v158;
              v94 = ObReferenceProcessHandleTable(v158);
              if ( v94 )
              {
                ProcessHandleInformation = ExQueryProcessHandleInformation(v94, v6, (unsigned int)v5, ReturnLength);
                ExReleaseRundownProtection_0(v93 + 92);
              }
              else
              {
                ProcessHandleInformation = -1073741558;
              }
              KiLeaveCriticalRegionUnsafe(v92);
              v87 = v93;
LABEL_350:
              ObfDereferenceObject(v87);
              return ProcessHandleInformation;
            }
            return result;
          case ProcessMitigationPolicy:
            if ( ProcessInformationLength != 8 )
              return -1073741820;
            v45 = *(_DWORD *)ProcessInformation;
            v146 = *(_DWORD *)ProcessInformation;
            if ( ProcessHandle == (HANDLE)-1LL )
            {
              Object = KeGetCurrentThread()->ApcState.Process;
              v45 = v146;
            }
            else
            {
              result = ObReferenceObjectByHandleWithTag(
                         ProcessHandle,
                         0x400u,
                         (POBJECT_TYPE)PsProcessType,
                         v9,
                         0x79517350u,
                         &Object,
                         0LL);
              if ( result < 0 )
                return result;
            }
            if ( v45 == 7 )
            {
              v123 = 0;
              *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
              if ( (*((_DWORD *)Object + 193) & 0x10) != 0 )
                *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            }
            else
            {
              switch ( v45 )
              {
                case 1:
                  v123 = 0;
                  *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
                  v76 = Object;
                  if ( (*((_DWORD *)Object + 192) & 0x20000) == 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
                  if ( (v76[192] & 0x8000000) != 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
                  if ( (v76[192] & 0x2000000) != 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
                  if ( (v76[192] & 0x1000000) != 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 8u;
                  break;
                case 2:
                  v123 = 0;
                  *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
                  if ( (*((_DWORD *)Object + 192) & 0x400) != 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
                  break;
                case 3:
                  v123 = 0;
                  v113 = ObReferenceProcessHandleTable(Object);
                  if ( v113 )
                  {
                    ExQueryHandleExceptionsPermanency(v113, v127, (bool *)&v125);
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
                    if ( v127[0] )
                      *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
                    if ( (_BYTE)v125 )
                      *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 92);
                  }
                  else
                  {
                    v123 = -1073741558;
                  }
                  break;
                case 4:
                  v123 = 0;
                  *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
                  if ( *((int *)Object + 192) < 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
                  break;
                case 6:
                  v123 = 0;
                  *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
                  if ( (*((_DWORD *)Object + 192) & 0x4000000) != 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
                  break;
                case 8:
                  v123 = 0;
                  PsQueryProcessSignatureMitigationPolicy(Object, &v150);
                  *(_DWORD *)(&v6->Name.MaximumLength + 1) = v150;
                  break;
                case 9:
                  v123 = 0;
                  *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
                  v61 = *((_DWORD *)Object + 431);
                  if ( (v61 & 4) != 0 )
                  {
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
                  }
                  else if ( (v61 & 8) != 0 )
                  {
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
                  }
                  break;
                case 10:
                  v123 = 0;
                  *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
                  v114 = Object;
                  if ( (*((_DWORD *)Object + 431) & 0x800) != 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
                  if ( (v114[431] & 0x1000) != 0 )
                    *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
                  break;
                default:
                  v123 = -1073741637;
                  break;
              }
            }
            if ( ProcessHandle != (HANDLE)-1LL )
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v123;
          case ProcessHandleCheckingMode:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            v115 = 0;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            DeviceMapInformation = result;
            v123 = result;
            if ( result < 0 )
              return result;
            v80 = (struct _EX_RUNDOWN_REF *)Object;
            v116 = ObReferenceProcessHandleTable(Object);
            if ( !v116 )
              goto LABEL_359;
            LOBYTE(v115) = (*(_BYTE *)(v116 + 44) & 2) != 0;
            *(_DWORD *)&v6->Name.Length = v115;
            goto LABEL_316;
          case ProcessKeepAliveCount:
            if ( ProcessInformationLength != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v26 = Object;
            *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 452) & 0x7FFFFFFF;
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = v26[453];
            goto LABEL_56;
          case ProcessHandleTable:
            if ( ProcessInformationLength < 4 )
              return -1073741820;
            result = ExLockUserBuffer(
                       ProcessInformation,
                       ProcessInformationLength,
                       (unsigned __int8)KeGetCurrentThread()->gap0[10],
                       1LL,
                       &v162,
                       v143);
            if ( result < 0 )
              return result;
            ProcessCommandLine = 0;
            v95 = ObReferenceObjectByHandleWithTag(
                    ProcessHandle,
                    0x440u,
                    (POBJECT_TYPE)PsProcessType,
                    v9,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v95 < 0 )
            {
              ExUnlockUserBuffer(v143[0]);
              return v95;
            }
            v151 = 0LL;
            v152 = 0LL;
            v96 = (struct _EX_RUNDOWN_REF *)Object;
            v97 = ObReferenceProcessHandleTable(Object);
            if ( v97 )
            {
              v151 = v162;
              v152 = (unsigned int)v5 >> 2;
              ExEnumHandleTable(v97, PspHandleTableWalker, &v151, 0LL);
              ExReleaseRundownProtection_0(v96 + 92);
            }
            else
            {
              ProcessCommandLine = -1073741558;
            }
            ObfDereferenceObjectWithTag(v96, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = 4 * HIDWORD(v152);
            ExUnlockUserBuffer(v143[0]);
            return ProcessCommandLine;
          case ProcessCheckStackExtentsMode:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x400u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v26 = Object;
            *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 110) >> 5) & 1;
            goto LABEL_56;
          case ProcessCommandLineInformation:
            ProcessCommandLine = ObReferenceObjectByHandleWithTag(
                                   ProcessHandle,
                                   0x1000u,
                                   (POBJECT_TYPE)PsProcessType,
                                   v9,
                                   0x79517350u,
                                   &Object,
                                   0LL);
            if ( ProcessCommandLine < 0 )
              return ProcessCommandLine;
            v75 = Object;
            ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, (__int64)v6, v5, v9, ReturnLength);
            if ( !v75 )
              return ProcessCommandLine;
            goto LABEL_250;
          case ProcessProtectionInformation:
            ExecuteOptions = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v9,
                               0x79517350u,
                               &Object,
                               0LL);
            if ( ExecuteOptions < 0 )
              goto LABEL_162;
            if ( !(_DWORD)v5 )
            {
              ExecuteOptions = -1073741820;
              v26 = Object;
              goto LABEL_236;
            }
            v26 = Object;
            LOBYTE(v6->Name.Length) = *((_BYTE *)Object + 1722);
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_235;
          case ProcessTelemetryIdInformation:
            ProcessCommandLine = ObReferenceObjectByHandleWithTag(
                                   ProcessHandle,
                                   0x1000u,
                                   (POBJECT_TYPE)PsProcessType,
                                   v9,
                                   0x79517350u,
                                   &Object,
                                   0LL);
            if ( ProcessCommandLine < 0 )
              return ProcessCommandLine;
            v75 = Object;
            ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                                   (ULONG_PTR)Object,
                                   v6,
                                   (unsigned int)v5,
                                   (__int64)ReturnLength);
            if ( !v75 )
              return ProcessCommandLine;
LABEL_250:
            ObfDereferenceObjectWithTag(v75, 0x79517350u);
            return ProcessCommandLine;
          case ProcessCommitReleaseInformation:
            v26 = 0LL;
            Object = 0LL;
            if ( ProcessInformationLength == 16 )
            {
              v148 = *(_OBJECT_NAME_INFORMATION *)ProcessInformation;
              if ( *(_DWORD *)&v148.Name.Length == 2 )
              {
                if ( (*(_DWORD *)(&v148.Name.MaximumLength + 1) & 0xFFFFFFFE) != 0 || v148.Name.Buffer )
                {
                  ExecuteOptions = -1073741811;
                }
                else
                {
                  ExecuteOptions = ObReferenceObjectByHandleWithTag(
                                     ProcessHandle,
                                     0x1000u,
                                     (POBJECT_TYPE)PsProcessType,
                                     v9,
                                     0x79517350u,
                                     &Object,
                                     0LL);
                  v26 = Object;
                  if ( ExecuteOptions >= 0 )
                  {
                    v72 = *((_QWORD *)Object + 188);
                    v73 = (unsigned __int8)HIBYTE(*((_DWORD *)Object + 374)) >> 6;
                    if ( v73 < 2u )
                      v72 = 0LL;
                    *(_DWORD *)(&v148.Name.MaximumLength + 1) ^= (*((_BYTE *)&v148.Name.MaximumLength + 2) ^ (v73 != 0)) & 1;
                    v148.Name.Buffer = (wchar_t *)(v72 << 12);
                    *v6 = v148;
LABEL_235:
                    ExecuteOptions = 0;
                  }
                }
              }
              else
              {
                ExecuteOptions = -1073741735;
              }
            }
            else
            {
              ExecuteOptions = -1073741820;
            }
LABEL_236:
            if ( v26 )
              goto LABEL_56;
LABEL_162:
            result = ExecuteOptions;
            break;
          case ProcessDefaultCpuSetsInformation:
          case ProcessAllowedCpuSetsInformation:
            if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
              return -1073741820;
            v119 = 0;
            v31 = ObReferenceObjectByHandleWithTag(
                    ProcessHandle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v9,
                    0x79517350u,
                    &Object,
                    0LL);
            v123 = v31;
            if ( v31 >= 0 )
            {
              LOBYTE(v119) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
              v121 = 8 * KeQueryCpuSetsProcess((__int64)Object, v193, v120, v119);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v144 = v121;
              if ( ReturnLength )
                *ReturnLength = v121;
              if ( v121 >= (unsigned int)v5 )
                v121 = v5;
              v144 = v121;
              memmove(v6, v193, v121);
            }
            return v31;
          case ProcessJobMemoryInformation:
            if ( ProcessInformationLength != 40 )
              return -1073741820;
            ProcessCommandLine = 0;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v153 = (_OBJECT_NAME_INFORMATION)0LL;
            v154 = (_OBJECT_NAME_INFORMATION)0LL;
            *(_QWORD *)&v155.Name.Length = 0LL;
            if ( *((_QWORD *)Object + 118) )
            {
              KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v185);
              ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
              ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v187, 0x98u, 0LL);
              KiUnstackDetachProcess(&v185, 0LL);
              v153.Name.Buffer = (wchar_t *)JobInformation[0];
              *(_QWORD *)&v154.Name.Length = JobInformation[1];
              *(_QWORD *)&v153.Name.Length = JobInformation[2];
              if ( (v188 & 0x200000) != 0 )
                *(_QWORD *)&v155.Name.Length = v190;
              if ( (v188 & 0x200) != 0 )
                v154.Name.Buffer = v189;
              *v6 = v153;
              v6[1] = v154;
              *(_QWORD *)&v6[2].Name.Length = *(_QWORD *)&v155.Name.Length;
              if ( ReturnLength )
                *ReturnLength = 40;
            }
            else
            {
              ProcessCommandLine = -1073741394;
            }
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return ProcessCommandLine;
          case ProcessInPrivate:
            if ( ProcessInformationLength != 1 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            ExecuteOptions = result;
            if ( result < 0 )
              return result;
            v26 = Object;
            LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 431) & 0x400) != 0;
            goto LABEL_56;
          case ProcessRaiseUMExceptionOnInvalidHandleClose:
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            v117 = 0;
            result = ObReferenceObjectByHandleWithTag(
                       ProcessHandle,
                       0x1000u,
                       (POBJECT_TYPE)PsProcessType,
                       v9,
                       0x79517350u,
                       &Object,
                       0LL);
            DeviceMapInformation = result;
            v123 = result;
            if ( result < 0 )
              return result;
            v80 = (struct _EX_RUNDOWN_REF *)Object;
            v118 = ObReferenceProcessHandleTable(Object);
            if ( !v118 )
              goto LABEL_359;
            LOBYTE(v117) = (*(_BYTE *)(v118 + 44) & 0x10) != 0;
            *(_DWORD *)&v6->Name.Length = v117;
            goto LABEL_316;
          default:
            return -1073741821;
        }
      }
      return result;
    }
    if ( ProcessInformationLength == 32 )
    {
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v123 = result;
      if ( result >= 0 )
      {
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        v20 = (unsigned __int64 *)((char *)Object + 1696);
        v21 = KeAbPreAcquire((ULONG_PTR)Object + 1696, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v20, v21, (ULONG_PTR)v20);
        if ( v21 )
          *(_BYTE *)(v21 + 26) |= 1u;
        v22 = *((_DWORD *)Object + 155);
        v23 = *((_DWORD *)Object + 156);
        for ( i = (_QWORD *)*((_QWORD *)Object + 145); i != (_QWORD *)((char *)Object + 1160); i = (_QWORD *)*i )
        {
          v22 += *((_DWORD *)i - 257);
          v23 += *((_DWORD *)i - 237);
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v20);
        KeAbPostRelease((ULONG_PTR)v20);
        KeLeaveCriticalRegionThread((__int64)v19);
        v25 = KeMaximumIncrement;
        *(_QWORD *)&v6[1].Name.Length = KeMaximumIncrement * (unsigned __int64)v22;
        v6[1].Name.Buffer = (wchar_t *)(v25 * v23);
        v26 = Object;
        *(_QWORD *)&v6->Name.Length = *((_QWORD *)Object + 97);
        v6->Name.Buffer = (wchar_t *)*((_QWORD *)v26 + 208);
        if ( ReturnLength )
          *ReturnLength = 32;
        ExecuteOptions = v123;
LABEL_56:
        ObfDereferenceObjectWithTag(v26, 0x79517350u);
        return ExecuteOptions;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ProcessInformationLength != 4 )
    return -1073741820;
  ProcessCommandLine = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
    Object = (PVOID)p_Lock;
  }
  else
  {
    result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v9, &v163, 0LL);
    p_Lock = (volatile signed __int32 *)v163;
    Object = v163;
    if ( result < 0 )
      return result;
  }
  v123 = 0;
  while ( 1 )
  {
    v18 = *((_DWORD *)p_Lock + 242);
    if ( v18 )
      break;
    v49 = MEMORY[0xFFFFF78000000014];
    CurrentPrcb = KeGetCurrentPrcb();
    v51 = __rdtsc();
    _InterlockedCompareExchange(
      p_Lock + 242,
      v49 ^ CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->MmPageFaultCount ^ HIDWORD(v49) ^ v51,
      0);
    ProcessCommandLine = v123;
    p_Lock = (volatile signed __int32 *)Object;
  }
  *(_DWORD *)&v6->Name.Length = v18;
  if ( ReturnLength )
    *ReturnLength = 4;
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObject((PVOID)p_Lock);
  return ProcessCommandLine;
}
