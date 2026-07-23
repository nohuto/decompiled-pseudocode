/*
 * XREFs of NtQueryInformationProcess @ 0x14050D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KeQueryAffinityProcess @ 0x1400F07A0 (KeQueryAffinityProcess.c)
 *     KeQueryGroupMaskProcess @ 0x1400F08FC (KeQueryGroupMaskProcess.c)
 *     MmQueryWorkingSetInformation @ 0x1400F090C (MmQueryWorkingSetInformation.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     PsQueryProcessCommandLine @ 0x14012F404 (PsQueryProcessCommandLine.c)
 *     xKdEnumerateDebuggingDevices @ 0x140170968 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x140181610 (ZwQueryInformationJobObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x1402057A0 (KeQueryCpuSetsProcess.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140263298 (ExQueryHandleExceptionsPermanency.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExQueryProcessHandleInformation @ 0x140407034 (ExQueryProcessHandleInformation.c)
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     PsReferenceProcessFilePointer @ 0x1404676D0 (PsReferenceProcessFilePointer.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     ExIsRestrictedCaller @ 0x1404CA200 (ExIsRestrictedCaller.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     PsQueryStatisticsProcess @ 0x140508494 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x140508648 (ObGetProcessHandleCount.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 *     PsQueryFullProcessImageName @ 0x140510730 (PsQueryFullProcessImageName.c)
 *     ObQueryDeviceMapInformation @ 0x1405107C0 (ObQueryDeviceMapInformation.c)
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
 *     PspQueryQuotaLimits @ 0x140511084 (PspQueryQuotaLimits.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140511240 (PsQueryTotalCycleTimeProcess.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 *     KeGetExecuteOptions @ 0x1405481E4 (KeGetExecuteOptions.c)
 *     IoQueryFileDosDeviceName @ 0x140549C1C (IoQueryFileDosDeviceName.c)
 *     ExReferenceHandleDebugInfo @ 0x14055BDB0 (ExReferenceHandleDebugInfo.c)
 *     DbgkOpenProcessDebugPort @ 0x140666668 (DbgkOpenProcessDebugPort.c)
 *     HvlGetSecurePebAddress @ 0x140670A50 (HvlGetSecurePebAddress.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406BF750 (PspGetRedirectionTrustPolicy.c)
 *     PspQueryPooledQuotaLimits @ 0x1406C0224 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1406C039C (PspQueryWorkingSetWatch.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406EFF48 (ExDereferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r13
  char *v6; // r14
  unsigned __int8 v8; // di
  int v9; // eax
  ULONG64 v10; // rax
  PULONG v11; // rcx
  char *v12; // rsi
  NTSTATUS result; // eax
  NTSTATUS v14; // r14d
  char *v15; // rsi
  NTSTATUS DeviceMapInformation; // edi
  POBJECT_NAME_INFORMATION v17; // rbx
  ULONG v18; // r12d
  unsigned __int16 MaximumLength; // ax
  _DWORD *v20; // r12
  _KPROCESS *v21; // r13
  PVOID v22; // rcx
  __int64 v23; // rdx
  struct _KTHREAD *v24; // rbx
  __int64 v25; // r8
  unsigned __int64 Group; // rdx
  _DWORD *v27; // rdx
  PACCESS_TOKEN v28; // rdi
  bool v29; // bl
  int v30; // ebx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rbx
  __int64 v34; // r9
  struct _KTHREAD *v35; // r13
  unsigned __int64 *v36; // r12
  __int64 v37; // rbx
  __int64 v38; // r9
  unsigned int v39; // ebx
  unsigned int v40; // edi
  _QWORD *i; // rcx
  __int16 v42; // ax
  __int64 v43; // rcx
  _QWORD *v44; // rcx
  int v45; // ebx
  HANDLE v46; // rdx
  unsigned int v47; // ebx
  PVOID v48; // r8
  int ProcessHandleCount; // edi
  NTSTATUS v50; // ebx
  int v51; // ebx
  int v52; // ebx
  unsigned int v53; // r12d
  int SessionId; // ebx
  PVOID v55; // rcx
  __int64 v56; // rbx
  int v57; // ebx
  unsigned int v58; // r13d
  char *v59; // r12
  unsigned int v60; // esi
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rdx
  _OWORD *v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  struct _EX_RUNDOWN_REF *v69; // rcx
  unsigned __int64 v70; // rtt
  void *Process; // r10
  void *v72; // r10
  int v73; // esi
  volatile signed __int32 *p_Lock; // r10
  int v75; // eax
  __int64 v76; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v78; // rax
  PVOID v79; // rcx
  struct _EX_RUNDOWN_REF *v80; // rbx
  unsigned __int64 v81; // rtt
  void *v82; // r13
  int v83; // ebx
  unsigned __int64 v84; // rtt
  NTSTATUS v85; // ebx
  PVOID v86; // rdi
  NTSTATUS v87; // esi
  __int64 v88; // rax
  __int64 v89; // rax
  void *v90; // r14
  NTSTATUS v91; // edi
  PVOID v92; // rbx
  int v93; // esi
  NTSTATUS v94; // edi
  PVOID v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  ULONG v98; // esi
  unsigned int v99; // eax
  unsigned int v100; // ecx
  __int64 v101; // rbx
  struct _EX_RUNDOWN_REF *v102; // rcx
  unsigned __int64 v103; // rtt
  _QWORD *v104; // rbx
  __int64 v105; // rax
  int *v106; // rcx
  __int64 *v107; // rcx
  unsigned __int16 v108; // bx
  int *v109; // rcx
  ULONG64 v110; // rcx
  int v111; // edi
  ULONG v112; // eax
  struct _EX_RUNDOWN_REF *v113; // rbx
  struct _KTHREAD *v114; // rbx
  struct _EX_RUNDOWN_REF *v115; // rsi
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // rtt
  __int16 v118; // ax
  int v119; // r15d
  _DWORD *v120; // rcx
  unsigned __int64 v121; // rax
  __int64 v122; // r9
  struct _EX_RUNDOWN_REF *v123; // rcx
  unsigned __int64 v124; // rtt
  int v125; // ecx
  int RedirectionTrustPolicy; // eax
  int v127; // eax
  int v128; // esi
  unsigned __int64 v129; // rax
  int v130; // ebx
  struct _EX_RUNDOWN_REF *v131; // rbx
  unsigned __int64 v132; // rax
  unsigned __int64 v133; // rtt
  PVOID v134; // rbx
  int ProcessCommandLine; // eax
  PVOID v136; // r8
  __int64 v137; // rdx
  unsigned __int8 v138; // al
  int v139; // esi
  unsigned __int64 v140; // rax
  int v141; // esi
  int v142; // r8d
  int v143; // r12d
  ULONG v144; // ebx
  PVOID Object; // [rsp+40h] [rbp-698h] BYREF
  NTSTATUS ProcessHandleInformation; // [rsp+48h] [rbp-690h]
  unsigned __int8 v147; // [rsp+4Ch] [rbp-68Ch]
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-688h] BYREF
  char v149[4]; // [rsp+54h] [rbp-684h] BYREF
  __int16 v150; // [rsp+58h] [rbp-680h]
  bool v151; // [rsp+5Ch] [rbp-67Ch] BYREF
  HANDLE v152; // [rsp+60h] [rbp-678h]
  int v153; // [rsp+68h] [rbp-670h]
  unsigned int v154; // [rsp+6Ch] [rbp-66Ch]
  ULONG v155; // [rsp+70h] [rbp-668h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-660h] BYREF
  int v157; // [rsp+80h] [rbp-658h]
  unsigned __int64 v158; // [rsp+88h] [rbp-650h]
  HANDLE Handle; // [rsp+90h] [rbp-648h] BYREF
  __int64 v160; // [rsp+98h] [rbp-640h]
  __int64 v161; // [rsp+A0h] [rbp-638h] BYREF
  int v162[4]; // [rsp+B0h] [rbp-628h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+C0h] [rbp-618h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-610h]
  int v165; // [rsp+D0h] [rbp-608h]
  PULONG v166; // [rsp+D8h] [rbp-600h]
  __int64 v167; // [rsp+E0h] [rbp-5F8h] BYREF
  int v168; // [rsp+E8h] [rbp-5F0h]
  __int128 v169; // [rsp+F0h] [rbp-5E8h]
  __int128 v170; // [rsp+100h] [rbp-5D8h]
  __int128 v171; // [rsp+110h] [rbp-5C8h]
  int v172; // [rsp+120h] [rbp-5B8h] BYREF
  _OBJECT_NAME_INFORMATION v173; // [rsp+128h] [rbp-5B0h]
  __int64 v174; // [rsp+138h] [rbp-5A0h]
  ULONG v175; // [rsp+140h] [rbp-598h]
  int v176; // [rsp+148h] [rbp-590h] BYREF
  unsigned int v177; // [rsp+14Ch] [rbp-58Ch]
  unsigned int v178; // [rsp+150h] [rbp-588h]
  PVOID v179; // [rsp+158h] [rbp-580h] BYREF
  __int64 v180; // [rsp+160h] [rbp-578h] BYREF
  __int64 v181; // [rsp+168h] [rbp-570h]
  __int64 v182; // [rsp+170h] [rbp-568h]
  struct _MDL *v183; // [rsp+178h] [rbp-560h] BYREF
  __int64 v184; // [rsp+180h] [rbp-558h] BYREF
  int v185; // [rsp+188h] [rbp-550h] BYREF
  __int64 v186; // [rsp+190h] [rbp-548h] BYREF
  ULONG v187; // [rsp+198h] [rbp-540h]
  char *v188; // [rsp+1A0h] [rbp-538h]
  PVOID v189; // [rsp+1A8h] [rbp-530h] BYREF
  PVOID v190; // [rsp+1B0h] [rbp-528h] BYREF
  __int64 v191; // [rsp+1B8h] [rbp-520h]
  __int128 v192; // [rsp+1C0h] [rbp-518h]
  _QWORD Src[17]; // [rsp+1D0h] [rbp-508h] BYREF
  __int64 v194; // [rsp+258h] [rbp-480h] BYREF
  __int64 v195[4]; // [rsp+260h] [rbp-478h] BYREF
  __int128 v196; // [rsp+280h] [rbp-458h]
  __int128 v197; // [rsp+290h] [rbp-448h]
  __int128 v198; // [rsp+2A0h] [rbp-438h]
  __int128 v199; // [rsp+2B0h] [rbp-428h]
  __int128 v200; // [rsp+2C0h] [rbp-418h]
  __int128 v201; // [rsp+2D0h] [rbp-408h]
  __int128 v202; // [rsp+2E0h] [rbp-3F8h]
  __int128 v203; // [rsp+2F0h] [rbp-3E8h]
  __int128 v204; // [rsp+300h] [rbp-3D8h]
  __int128 v205; // [rsp+310h] [rbp-3C8h]
  __int128 v206; // [rsp+320h] [rbp-3B8h]
  __int128 v207; // [rsp+330h] [rbp-3A8h]
  __int128 v208; // [rsp+340h] [rbp-398h]
  char v209; // [rsp+350h] [rbp-388h] BYREF
  _QWORD JobInformation[5]; // [rsp+360h] [rbp-378h] BYREF
  _BYTE v211[48]; // [rsp+388h] [rbp-350h] BYREF
  _BYTE v212[56]; // [rsp+3B8h] [rbp-320h] BYREF
  char v213[16]; // [rsp+3F0h] [rbp-2E8h] BYREF
  int v214; // [rsp+400h] [rbp-2D8h]
  __int64 v215; // [rsp+468h] [rbp-270h]
  __int64 v216; // [rsp+480h] [rbp-258h]
  _BYTE v217[176]; // [rsp+490h] [rbp-248h] BYREF
  _BYTE v218[176]; // [rsp+540h] [rbp-198h] BYREF
  _QWORD v219[20]; // [rsp+5F0h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (char *)ProcessInformation;
  LODWORD(v160) = ProcessInformationClass;
  v152 = ProcessHandle;
  v158 = (unsigned __int64)ProcessInformation;
  v175 = ProcessInformationLength;
  v166 = ReturnLength;
  v8 = KeGetCurrentThread()->gap0[10];
  v147 = v8;
  CurrentThread = KeGetCurrentThread();
  if ( !v8 )
    goto LABEL_19;
  if ( ProcessInformationClass == ProcessProtectionInformation )
  {
    v9 = 1;
  }
  else if ( ProcessInformationClass == ProcessCommitReleaseInformation )
  {
    v9 = 8;
  }
  else
  {
    v9 = 4;
    if ( ProcessInformationClass == ProcessInPrivate )
      v9 = 1;
  }
  v153 = v9;
  if ( ProcessInformationLength )
  {
    if ( ((v9 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)ProcessInformation + ProcessInformationLength <= MmUserProbeAddress
      && (char *)ProcessInformation + ProcessInformationLength >= ProcessInformation )
    {
      goto LABEL_15;
    }
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v10 = MmUserProbeAddress;
LABEL_15:
  if ( ReturnLength )
  {
    v11 = ReturnLength;
    if ( (unsigned __int64)ReturnLength >= v10 )
      v11 = (PULONG)v10;
    *v11 = *v11;
  }
LABEL_19:
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      if ( ProcessInformationLength == 64 )
      {
        v20 = ProcessInformation;
        FileObject = (PFILE_OBJECT)ProcessInformation;
        v160 = 64LL;
        *(_QWORD *)ProcessInformation = 64LL;
        v6 = (char *)ProcessInformation + 8;
        v153 = 64;
      }
      else
      {
        if ( ProcessInformationLength != 48 )
          return -1073741820;
        v20 = 0LL;
        FileObject = 0LL;
        v160 = 48LL;
        v153 = 48;
      }
      ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      ProcessHandleInformation = result;
      if ( result < 0 )
        return result;
      v21 = (_KPROCESS *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 389);
      *((_QWORD *)v6 + 1) = v21[1].ActiveProcessors.Bitmap[1];
      if ( v21->SecurePid )
        HvlGetSecurePebAddress(v21);
      v22 = v21;
      if ( DeviceMapInformation < 0 )
        goto LABEL_215;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v21);
      v24 = CurrentThread;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && v21 != CurrentThread->Process )
        goto LABEL_62;
      KeQueryAffinityProcess((__int64)v21, (__int64)v217, (int *)&GroupMaskProcess, 0LL);
      v25 = GroupMaskProcess;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
      {
        if ( v21 != v24->Process )
          goto LABEL_61;
        Group = v24->UserAffinity.Group;
        if ( !_bittest64(&v25, Group) )
          goto LABEL_61;
      }
      else
      {
        _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
      }
      if ( (_DWORD)Group != 20 )
      {
        v23 = *(_QWORD *)&v217[8 * Group + 8];
        goto LABEL_62;
      }
LABEL_61:
      v23 = 0LL;
LABEL_62:
      *((_QWORD *)v6 + 2) = v23;
      *((_DWORD *)v6 + 6) = v21->BasePriority;
      *((_QWORD *)v6 + 4) = v21[1].Header.WaitListHead.Blink;
      *((_QWORD *)v6 + 5) = v21[1].SwapListEntry.Next;
      if ( v20 )
      {
        v20[14] = 0;
        if ( (BYTE2(v21[2].ReadyListHead.Blink) & 7) != 0 )
          v20[14] = 1;
        if ( v21[1].ActiveProcessors.Bitmap[7] )
          v20[14] |= 2u;
        v27 = (_DWORD *)&v21[1].DirectoryTableBase + 1;
        if ( (v21[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
          v20[14] |= 4u;
        v21 = (_KPROCESS *)Object;
        v20[14] ^= (v20[14] ^ (8 * (*((unsigned __int8 *)Object + 768) >> 7))) & 8;
        if ( v21->FreezeCount + ((*(_DWORD *)&v21->0 >> 3) & 1) )
          v20[14] |= 0x10u;
        v20[14] ^= (v20[14] ^ (32 * ((*v27 >> 20) & 1))) & 0x20;
        v28 = PsReferencePrimaryToken(v21);
        v29 = SeSecurityAttributePresent((__int64)v28, (const UNICODE_STRING *)&PspSysAppIdClaim);
        LOBYTE(v150) = v29;
        ObFastDereferenceObject((signed __int64 *)&v21[1].Affinity.Bitmap[5], (unsigned __int64)v28);
        if ( v29 )
          v20[14] |= 0x40u;
        if ( v21->SecurePid )
          v20[14] |= 0x80u;
        DeviceMapInformation = ProcessHandleInformation;
      }
      if ( ReturnLength )
        *ReturnLength = v160;
      ObfDereferenceObjectWithTag(v21, 0x79517350u);
      return DeviceMapInformation;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits(ProcessHandle, (__int64)ReturnLength, v8);
    case ProcessIoCounters:
      if ( ProcessInformationLength != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess((__int64)Object, v195, v31, v32);
        v169 = v196;
        v170 = v197;
        v171 = v198;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = v169;
        *((_OWORD *)v6 + 1) = v170;
        *((_OWORD *)v6 + 2) = v171;
        if ( ReturnLength )
          *ReturnLength = 48;
        return DeviceMapInformation;
      }
      return result;
    case ProcessVmCounters:
      if ( ((ProcessInformationLength - 88) & 0xFFFFFFE7) != 0 || ProcessInformationLength == 104 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        memset(Src, 0, 0x70uLL);
        v33 = Object;
        Src[0] = *((_QWORD *)Object + 102);
        Src[1] = *((_QWORD *)Object + 103);
        LODWORD(Src[2]) = *((_DWORD *)Object + 367);
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v211);
        ProcessHandleInformation = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], &v167, &v194, &v185);
        KiUnstackDetachProcess((struct _KTHREAD *)v211, 0);
        Src[6] = v33[99];
        Src[5] = *((_QWORD *)Object + 101);
        Src[8] = *((_QWORD *)Object + 98);
        Src[7] = *((_QWORD *)Object + 100);
        Src[9] = *((_QWORD *)Object + 157) << 12;
        Src[10] = *((_QWORD *)Object + 158) << 12;
        Src[13] = *((_QWORD *)Object + 238) << 12;
        Src[11] = Src[9];
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = ProcessHandleInformation;
        if ( ProcessHandleInformation >= 0 )
        {
          memmove(v6, Src, v5);
          if ( ReturnLength )
            *ReturnLength = v5;
          return 0;
        }
      }
      return result;
    case ProcessTimes:
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessHandleInformation = result;
      if ( result >= 0 )
      {
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = (unsigned __int64 *)((char *)Object + 1688);
        v37 = KeAbPreAcquire((ULONG_PTR)Object + 1688, 0LL, 0LL, v34);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v36, v37, (ULONG_PTR)v36, v38);
        if ( v37 )
          *(_BYTE *)(v37 + 26) |= 1u;
        v39 = *((_DWORD *)Object + 155);
        v40 = *((_DWORD *)Object + 156);
        for ( i = (_QWORD *)*((_QWORD *)Object + 144); i != (_QWORD *)((char *)Object + 1152); i = (_QWORD *)*i )
        {
          v39 += *((_DWORD *)i - 257);
          v40 += *((_DWORD *)i - 237);
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v36);
        KeAbPostRelease((ULONG_PTR)v36);
        v42 = v35->KernelApcDisable + 1;
        v35->KernelApcDisable = v42;
        if ( !v42
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
          && !v35->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v43 = KeMaximumIncrement;
        *((_QWORD *)v6 + 2) = KeMaximumIncrement * (unsigned __int64)v39;
        *((_QWORD *)v6 + 3) = v43 * v40;
        v44 = Object;
        *(_QWORD *)v6 = *((_QWORD *)Object + 97);
        *((_QWORD *)v6 + 1) = v44[207];
        if ( ReturnLength )
          *ReturnLength = 32;
        v45 = ProcessHandleInformation;
        goto LABEL_116;
      }
      return result;
    case ProcessDebugPort:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 132) >> 64);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = Handle;
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v50 = xKdEnumerateDebuggingDevices();
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v50;
      }
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v30 = *((_DWORD *)Object + 294);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v30;
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
               v8);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return PspQueryWorkingSetWatch(ProcessHandle, (__int64)ReturnLength, v8);
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        LOBYTE(v150) = 0;
        HIBYTE(v150) = *((_BYTE *)Object + 1111);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v150;
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v51 = HIBYTE(*((_DWORD *)Object + 193)) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v51;
        if ( ReturnLength )
          *ReturnLength = 4;
        return DeviceMapInformation;
      }
      return result;
    case ProcessHandleCount:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &v172);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = ProcessHandleCount;
        if ( (_DWORD)v5 != 4 )
          *((_DWORD *)v6 + 1) = v172;
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v94 = result;
      if ( result >= 0 )
      {
        v95 = Object;
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
          || (KeQueryAffinityProcess((__int64)v95, (__int64)v218, (int *)&GroupMaskProcess, 0LL),
              ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
        {
          v94 = -1073741811;
        }
        else
        {
          _BitScanForward((unsigned int *)&v96, GroupMaskProcess);
          v97 = *(_QWORD *)&v218[8 * v96 + 8];
          if ( (_DWORD)v5 == 16 )
            *((_WORD *)v6 + 4) = v96;
          *(_QWORD *)v6 = v97;
          if ( ReturnLength )
            *ReturnLength = v5;
        }
        ObfDereferenceObjectWithTag(v95, 0x79517350u);
        return v94;
      }
      return result;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v52 = (unsigned __int8)(*((_BYTE *)Object + 440) & 2) >> 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v52;
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
        v154 = *((_DWORD *)ProcessInformation + 10);
        v53 = v154;
        if ( (v154 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 36 )
          return -1073741820;
        v53 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        DeviceMapInformation = ObQueryDeviceMapInformation(Object, v6, v53);
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        SessionId = MmGetSessionId((struct _KPROCESS *)Object);
        ObfDereferenceObjectWithTag(v55, 0x79517350u);
        *(_DWORD *)v6 = SessionId;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessWow64Information:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v56 = *((_QWORD *)Object + 133);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = v56;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessImageFileName:
      v12 = 0LL;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        if ( (unsigned int)v5 >= 0x10 )
        {
          v155 = v5 - 16;
          v12 = v6 + 16;
        }
        else
        {
          v155 = 0;
          v6 = &v209;
        }
        v14 = PsQueryFullProcessImageName(Object, v6, v12, &v155);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( v14 >= 0 && !v12 )
          v14 = -1073741820;
        if ( ReturnLength && ((int)(v14 + 0x80000000) < 0 || v14 == -1073741820) )
          *ReturnLength = v155 + 16;
        return v14;
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v57 = (*((_DWORD *)Object + 193) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v57;
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v8, &Handle);
      v46 = Handle;
      if ( DeviceMapInformation < 0 )
        v46 = 0LL;
      Handle = v46;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v47 = result;
      if ( result < 0 )
        return result;
      v48 = Object;
      *(_DWORD *)v6 = ((unsigned __int8)~*((_BYTE *)Object + 772) >> 1) & 1;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_133;
    case ProcessHandleTracing:
      if ( ProcessInformationLength < 0x10 )
        return -1073741820;
      if ( ExIsRestrictedCaller(v8) )
        return -1073741790;
      v58 = ((int)v5 - 16) / 0xA0u;
      v177 = v58;
      v59 = v6 + 16;
      v188 = v6 + 16;
      v60 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessHandleInformation = result;
      if ( result < 0 )
        return result;
      v61 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      v62 = v61;
      v158 = v61;
      if ( !v61 )
        goto LABEL_213;
      v63 = ExReferenceHandleDebugInfo(v61);
      v64 = v63;
      v166 = (PULONG)v63;
      if ( v63 )
      {
        *((_DWORD *)v6 + 2) = 0;
        v65 = (unsigned int)(*(_DWORD *)(v63 + 72) % *(_DWORD *)(v63 + 4));
        v165 = v65;
        while ( 1 )
        {
          v178 = v60;
          if ( v60 >= *(_DWORD *)(v64 + 4) )
            break;
          v66 = (_OWORD *)(v64 + 160 * v65);
          v199 = v66[5];
          v200 = v66[6];
          v201 = v66[7];
          v202 = v66[8];
          v203 = v66[9];
          v204 = v66[10];
          v205 = v66[11];
          v206 = v66[12];
          v207 = v66[13];
          v208 = v66[14];
          v67 = v200;
          if ( *(_QWORD *)v6 == (_QWORD)v200 || !*(_QWORD *)v6 )
          {
            v68 = DWORD2(v200);
            if ( DWORD2(v200) )
            {
              ++*((_DWORD *)v6 + 2);
              if ( v58 )
              {
                v177 = --v58;
                *(_QWORD *)v59 = v67;
                *(_OWORD *)(v59 + 8) = v199;
                *((_DWORD *)v59 + 6) = v68;
                *((_OWORD *)v59 + 2) = v201;
                *((_OWORD *)v59 + 3) = v202;
                *((_OWORD *)v59 + 4) = v203;
                *((_OWORD *)v59 + 5) = v204;
                *((_OWORD *)v59 + 6) = v205;
                *((_OWORD *)v59 + 7) = v206;
                *((_OWORD *)v59 + 8) = v207;
                *((_OWORD *)v59 + 9) = v208;
                v59 += 160;
                v188 = v59;
              }
              else
              {
                ProcessHandleInformation = -1073741820;
              }
            }
          }
          if ( !(_DWORD)v65 )
            LODWORD(v65) = *(_DWORD *)(v64 + 4);
          v65 = (unsigned int)(v65 - 1);
          v165 = v65;
          ++v60;
        }
        if ( ReturnLength )
          *ReturnLength = (_DWORD)v59 - (_DWORD)v6;
        ExDereferenceHandleDebugInfo(v62, v64);
      }
      else
      {
        ProcessHandleInformation = -1073741811;
      }
LABEL_209:
      v69 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
      goto LABEL_210;
    case ProcessIoPriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v45 = result;
      ProcessHandleInformation = result;
      if ( result < 0 )
        return result;
      v44 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 193) >> 27) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_116;
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
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        Process = Object;
      }
      DeviceMapInformation = KeGetExecuteOptions(Process, &v176);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v72, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        *(_DWORD *)v6 = v176;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessCookie:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v73 = 0;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = (PVOID)p_Lock;
      }
      else
      {
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v8, &v189, 0LL);
        p_Lock = (volatile signed __int32 *)v189;
        Object = v189;
        if ( result < 0 )
          return result;
      }
      ProcessHandleInformation = 0;
      while ( 1 )
      {
        v75 = *((_DWORD *)p_Lock + 242);
        if ( v75 )
          break;
        v76 = MEMORY[0xFFFFF78000000014];
        CurrentPrcb = KeGetCurrentPrcb();
        v78 = __rdtsc();
        _InterlockedCompareExchange(
          p_Lock + 242,
          v76 ^ CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->MmPageFaultCount ^ HIDWORD(v76) ^ v78,
          0);
        v73 = ProcessHandleInformation;
        p_Lock = (volatile signed __int32 *)Object;
      }
      *(_DWORD *)v6 = v75;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObject((PVOID)p_Lock);
      return v73;
    case ProcessImageInformation:
      if ( ProcessInformationLength != 64 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessHandleInformation = result;
      if ( result < 0 )
        return result;
      v79 = Object;
      if ( Object == CurrentThread->Process )
      {
        v82 = (void *)*((_QWORD *)Object + 119);
        if ( !v82 )
          result = -1073741558;
        DeviceMapInformation = result;
        v83 = 0;
      }
      else
      {
        v80 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
        _m_prefetchw((char *)Object + 736);
        v81 = *((_QWORD *)Object + 92) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v81 == _InterlockedCompareExchange64((volatile signed __int64 *)v80, v81 + 2, v81)
          || ExfAcquireRundownProtection(v80) )
        {
          v82 = (void *)*((_QWORD *)Object + 119);
          if ( v82 )
            ObfReferenceObject(*((PVOID *)Object + 119));
          else
            ProcessHandleInformation = -1073741811;
          _m_prefetchw(v80);
          v84 = v80->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v84 != _InterlockedCompareExchange64((volatile signed __int64 *)v80, v84 - 2, v84) )
            ExfReleaseRundownProtection(v80);
          DeviceMapInformation = ProcessHandleInformation;
          v79 = Object;
          v83 = 1;
        }
        else
        {
          DeviceMapInformation = -1073741558;
          v82 = 0LL;
          v79 = Object;
          v83 = 1;
        }
      }
      ObfDereferenceObjectWithTag(v79, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation(v82, 1LL, v6);
        if ( v83 )
          ObfDereferenceObject(v82);
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v85 = result;
      if ( result >= 0 )
      {
        v86 = Object;
        *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, &v184);
        *((_QWORD *)v6 + 1) = v184;
        if ( ReturnLength )
          *ReturnLength = 16;
        ObfDereferenceObjectWithTag(v86, 0x79517350u);
        return v85;
      }
      return result;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v45 = result;
      if ( result < 0 )
        return result;
      v44 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 192) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_116;
    case ProcessImageFileNameWin32:
      v15 = 0LL;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (ULONG_PTR *)&FileObject);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = IoQueryFileDosDeviceName(FileObject, &ObjectNameInformation);
        ObfDereferenceObject(FileObject);
        if ( DeviceMapInformation >= 0 )
        {
          v17 = ObjectNameInformation;
          v18 = ObjectNameInformation->Name.MaximumLength + 16;
          if ( v18 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = ObjectNameInformation->Name.Length;
            *((_WORD *)v6 + 1) = v17->Name.MaximumLength;
            MaximumLength = v17->Name.MaximumLength;
            if ( MaximumLength )
            {
              v15 = v6 + 16;
              memmove(v6 + 16, v17->Name.Buffer, MaximumLength);
            }
            *((_QWORD *)v6 + 1) = v15;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            ProcessHandleInformation = -1073741820;
          }
          if ( ReturnLength )
            *ReturnLength = v18;
          ExFreePoolWithTag(v17, 0);
        }
      }
      return DeviceMapInformation;
    case ProcessImageFileMapping:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v90 = *(void **)ProcessInformation;
      Src[16] = *(_QWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v45 = ObReferenceObjectByHandleWithTag(
              v90,
              0x100020u,
              (POBJECT_TYPE)IoFileObjectType,
              v8,
              0x79517350u,
              (PVOID *)&FileObject,
              0LL);
      v44 = Object;
      if ( v45 < 0 )
        goto LABEL_116;
      v91 = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (ULONG_PTR *)&v190);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( v91 < 0 )
      {
        ObfDereferenceObject(FileObject);
        return v91;
      }
      DeviceMapInformation = -1073741823;
      v92 = v190;
      if ( FileObject->SectionObjectPointer == (PSECTION_OBJECT_POINTERS)*((_QWORD *)v190 + 5) )
        DeviceMapInformation = 0;
      ObfDereferenceObject(FileObject);
      ObfDereferenceObject(v92);
      if ( DeviceMapInformation >= 0 && ReturnLength )
        *ReturnLength = 0;
      return DeviceMapInformation;
    case ProcessAffinityUpdateMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v154 = *((_DWORD *)Object + 192);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v93 = (v154 & 0x80000) != 0;
      if ( (v154 & 0x40000) != 0 )
        v93 |= 2u;
      *(_DWORD *)v6 = v93;
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
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v154 = *((_DWORD *)Object + 193);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = (v154 & 0x200000) != 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (ProcessInformationLength & 1) != 0 )
        return -1073741811;
      v98 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v99 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v99;
        do
        {
          _BitScanForward(&v100, v99);
          v98 += 2;
          v155 = v98;
          if ( v98 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v100;
            v6 += 2;
            Src[14] = v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v100);
          v99 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *ReturnLength = v98;
        v47 = (unsigned int)v5 < v98 ? 0xC0000023 : 0;
        ProcessHandleInformation = v47;
LABEL_133:
        ObfDereferenceObjectWithTag(v48, 0x79517350u);
        return v47;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v101 = *((_QWORD *)Object + 126);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v101;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      v157 = 0;
      LOWORD(v162[0]) = 0;
      *(_QWORD *)((char *)v162 + 2) = 0LL;
      *(int *)((char *)&v162[2] + 2) = 0;
      HIWORD(v162[3]) = 0;
      if ( v8 != 1 )
        return -1073741823;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessHandleInformation = result;
      if ( result >= 0 )
      {
        v102 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
        _m_prefetchw((char *)Object + 736);
        v103 = v102->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v103 == _InterlockedCompareExchange64((volatile signed __int64 *)v102, v103 + 2, v103)
          || ExfAcquireRundownProtection(v102) )
        {
          v104 = Object;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v212);
          v105 = v104[133];
          Src[15] = v105;
          if ( v105 )
          {
            v191 = *(unsigned int *)(v105 + 16);
            v106 = (int *)(v191 + 104);
            if ( v191 + 104 >= MmUserProbeAddress )
              v106 = (int *)MmUserProbeAddress;
            v157 = *v106;
            v107 = (__int64 *)(v191 + 112);
            if ( v191 + 112 >= MmUserProbeAddress )
              v107 = (__int64 *)MmUserProbeAddress;
            v174 = *v107;
            v108 = v174;
            v162[0] = v174;
            *(_QWORD *)&v162[2] = HIDWORD(v174);
          }
          else
          {
            v182 = *(_QWORD *)(v104[127] + 32LL);
            v109 = (int *)(v182 + 164);
            if ( v182 + 164 >= MmUserProbeAddress )
              v109 = (int *)MmUserProbeAddress;
            v157 = *v109;
            v110 = v182 + 176;
            if ( v182 + 176 >= MmUserProbeAddress )
              v110 = MmUserProbeAddress;
            LODWORD(v192) = *(_DWORD *)v110;
            *((_QWORD *)&v192 + 1) = *(_QWORD *)(v110 + 8);
            *(_OWORD *)v162 = v192;
            v108 = v192;
          }
          v111 = ProcessHandleInformation;
          KiUnstackDetachProcess((struct _KTHREAD *)v212, 0);
          if ( v111 < 0 )
            goto LABEL_356;
          v112 = v108 + 6;
          v187 = v112;
          if ( ReturnLength )
            *ReturnLength = v112;
          if ( (unsigned int)v5 >= v112 )
          {
            *(_DWORD *)v6 = v157;
            *((_WORD *)v6 + 2) = v108;
          }
          else
          {
            v111 = -1073741820;
            ProcessHandleInformation = -1073741820;
          }
          if ( v111 >= 0 && v108 )
          {
            v113 = (struct _EX_RUNDOWN_REF *)Object;
            ProcessHandleInformation = MmCopyVirtualMemory(
                                         (_KPROCESS *)Object,
                                         *(char **)&v162[2],
                                         KeGetCurrentThread()->ApcState.Process,
                                         v6 + 6,
                                         LOWORD(v162[0]),
                                         1,
                                         &v161);
          }
          else
          {
LABEL_356:
            v113 = (struct _EX_RUNDOWN_REF *)Object;
          }
          v69 = v113 + 92;
LABEL_210:
          _m_prefetchw(v69);
          v70 = v69->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v70 != _InterlockedCompareExchange64((volatile signed __int64 *)v69, v70 - 2, v70) )
            ExfReleaseRundownProtection(v69);
          DeviceMapInformation = ProcessHandleInformation;
        }
        else
        {
LABEL_213:
          DeviceMapInformation = -1073741558;
        }
        v22 = Object;
LABEL_215:
        ObfDereferenceObjectWithTag(v22, 0x79517350u);
        return DeviceMapInformation;
      }
      return result;
    case ProcessHandleInformation:
      if ( ProcessInformationLength < 0x10 )
      {
        if ( ReturnLength )
          *ReturnLength = 16;
        return -1073741820;
      }
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v8, &v179, 0LL);
      if ( result < 0 )
        return result;
      v114 = CurrentThread;
      --CurrentThread->KernelApcDisable;
      v115 = (struct _EX_RUNDOWN_REF *)v179;
      v116 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v179);
      if ( v116 )
      {
        ProcessHandleInformation = ExQueryProcessHandleInformation(v116, v6, v5, (int *)ReturnLength);
        _m_prefetchw(&v115[92]);
        v117 = v115[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v117 != _InterlockedCompareExchange64((volatile signed __int64 *)&v115[92], v117 - 2, v117) )
          ExfReleaseRundownProtection(v115 + 92);
        v115 = (struct _EX_RUNDOWN_REF *)v179;
        DeviceMapInformation = ProcessHandleInformation;
      }
      else
      {
        DeviceMapInformation = -1073741558;
      }
      v118 = v114->KernelApcDisable + 1;
      v114->KernelApcDisable = v118;
      if ( !v118
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v114->ApcState.ApcListHead[0].Flink != &v114->152
        && !v114->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfDereferenceObject(v115);
      return DeviceMapInformation;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v119 = *(_DWORD *)ProcessInformation;
      v168 = *(_DWORD *)ProcessInformation;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v119 = v168;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
      }
      switch ( v119 )
      {
        case 1:
          ProcessHandleInformation = 0;
          *((_DWORD *)v6 + 1) = 0;
          v120 = Object;
          if ( (*((_DWORD *)Object + 192) & 0x20000) == 0 )
            *((_DWORD *)v6 + 1) |= 1u;
          if ( (v120[192] & 0x8000000) != 0 )
            *((_DWORD *)v6 + 1) |= 2u;
          if ( (v120[192] & 0x2000000) != 0 )
            *((_DWORD *)v6 + 1) |= 4u;
          if ( (v120[192] & 0x1000000) != 0 )
            *((_DWORD *)v6 + 1) |= 8u;
          break;
        case 2:
          ProcessHandleInformation = 0;
          *((_DWORD *)v6 + 1) = 0;
          if ( (*((_DWORD *)Object + 192) & 0x400) != 0 )
            *((_DWORD *)v6 + 1) |= 1u;
          break;
        case 3:
          ProcessHandleInformation = 0;
          v121 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v121 )
          {
            ExQueryHandleExceptionsPermanency(v121, v149, &v151, v122);
            *((_DWORD *)v6 + 1) = 0;
            if ( v149[0] )
              *((_DWORD *)v6 + 1) |= 1u;
            if ( v151 )
              *((_DWORD *)v6 + 1) |= 2u;
            v123 = (struct _EX_RUNDOWN_REF *)((char *)Object + 736);
            _m_prefetchw((char *)Object + 736);
            v124 = v123->Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v124 != _InterlockedCompareExchange64((volatile signed __int64 *)v123, v124 - 2, v124) )
              ExfReleaseRundownProtection(v123);
          }
          else
          {
            ProcessHandleInformation = -1073741558;
          }
          break;
        case 4:
          ProcessHandleInformation = 0;
          *((_DWORD *)v6 + 1) = 0;
          if ( *((int *)Object + 192) < 0 )
            *((_DWORD *)v6 + 1) |= 1u;
          break;
        case 6:
          ProcessHandleInformation = 0;
          *((_DWORD *)v6 + 1) = 0;
          if ( (*((_DWORD *)Object + 192) & 0x4000000) != 0 )
            *((_DWORD *)v6 + 1) |= 1u;
          break;
        case 7:
          ProcessHandleInformation = 0;
          *((_DWORD *)v6 + 1) = 0;
          if ( (*((_DWORD *)Object + 193) & 0x10) != 0 )
            *((_DWORD *)v6 + 1) |= 1u;
          break;
        case 8:
          ProcessHandleInformation = 0;
          *((_DWORD *)v6 + 1) = 0;
          if ( *((_BYTE *)Object + 1712) >= 8u && *((_BYTE *)Object + 1713) >= 8u )
            *((_DWORD *)v6 + 1) |= 1u;
          break;
        case 9:
          ProcessHandleInformation = 0;
          *((_DWORD *)v6 + 1) = 0;
          v125 = *((_DWORD *)Object + 429);
          if ( (v125 & 4) != 0 )
          {
            *((_DWORD *)v6 + 1) |= 1u;
          }
          else if ( (v125 & 8) != 0 )
          {
            *((_DWORD *)v6 + 1) |= 2u;
          }
          break;
        case 16:
          ProcessHandleInformation = 0;
          RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(Object);
          *((_DWORD *)v6 + 1) = 0;
          v127 = RedirectionTrustPolicy - 1;
          if ( v127 )
          {
            if ( v127 == 1 )
              *((_DWORD *)v6 + 1) |= 2u;
          }
          else
          {
            *((_DWORD *)v6 + 1) |= 1u;
          }
          break;
        default:
          ProcessHandleInformation = -1073741637;
          break;
      }
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return ProcessHandleInformation;
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v128 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessHandleInformation = result;
      if ( result < 0 )
        return result;
      v129 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v129 )
        goto LABEL_213;
      LOBYTE(v128) = (*(_BYTE *)(v129 + 44) & 2) != 0;
      *(_DWORD *)v6 = v128;
      goto LABEL_209;
    case ProcessKeepAliveCount:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v45 = result;
      if ( result < 0 )
        return result;
      v44 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 450) & 0x7FFFFFFF;
      *((_DWORD *)v6 + 1) = *((_DWORD *)v44 + 451);
      goto LABEL_116;
    case ProcessHandleTable:
      if ( ProcessInformationLength < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 ProcessInformation,
                 ProcessInformationLength,
                 (unsigned __int8)KeGetCurrentThread()->gap0[10],
                 1LL,
                 &v186,
                 &v183);
      if ( result < 0 )
        return result;
      v130 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x440u,
               (POBJECT_TYPE)PsProcessType,
               v8,
               0x79517350u,
               &Object,
               0LL);
      if ( v130 >= 0 )
      {
        v180 = 0LL;
        v181 = 0LL;
        v131 = (struct _EX_RUNDOWN_REF *)Object;
        v132 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v132 )
        {
          v180 = v186;
          v181 = (unsigned int)v5 >> 2;
          ExEnumHandleTable(v132, PspHandleTableWalker, &v180, 0LL);
          ProcessHandleInformation = 0;
          _m_prefetchw(&v131[92]);
          v133 = v131[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v133 != _InterlockedCompareExchange64((volatile signed __int64 *)&v131[92], v133 - 2, v133) )
            ExfReleaseRundownProtection(v131 + 92);
          DeviceMapInformation = ProcessHandleInformation;
          v131 = (struct _EX_RUNDOWN_REF *)Object;
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
        ObfDereferenceObjectWithTag(v131, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = 4 * HIDWORD(v181);
        ExUnlockUserBuffer(v183);
        return DeviceMapInformation;
      }
      else
      {
        ExUnlockUserBuffer(v183);
        return v130;
      }
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v45 = result;
      if ( result < 0 )
        return result;
      v44 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 110) >> 5) & 1;
      goto LABEL_116;
    case ProcessCommandLineInformation:
      v73 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v8,
              0x79517350u,
              &Object,
              0LL);
      if ( v73 < 0 )
        return v73;
      v134 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, (__int64)v6, v5, v8, ReturnLength);
      goto LABEL_446;
    case ProcessProtectionInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v8,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        if ( (_DWORD)v5 )
        {
          v22 = Object;
          *v6 = *((_BYTE *)Object + 1714);
          if ( ReturnLength )
            *ReturnLength = 1;
          DeviceMapInformation = 0;
        }
        else
        {
          DeviceMapInformation = -1073741820;
          v22 = Object;
        }
        if ( v22 )
          goto LABEL_215;
      }
      return DeviceMapInformation;
    case ProcessTelemetryIdInformation:
      v73 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v8,
              0x79517350u,
              &Object,
              0LL);
      if ( v73 < 0 )
        return v73;
      v134 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((ULONG_PTR)Object, v6, (unsigned int)v5, v8, ReturnLength);
LABEL_446:
      v73 = ProcessCommandLine;
      if ( !v134 )
        return v73;
      ObfDereferenceObjectWithTag(v134, 0x79517350u);
      return v73;
    case ProcessCommitReleaseInformation:
      v136 = 0LL;
      Object = 0LL;
      if ( ProcessInformationLength == 16 )
      {
        v173 = *(_OBJECT_NAME_INFORMATION *)v6;
        if ( *(_DWORD *)&v173.Name.Length == 2 )
        {
          if ( (*(_DWORD *)(&v173.Name.MaximumLength + 1) & 0xFFFFFFFE) != 0 || v173.Name.Buffer )
          {
            DeviceMapInformation = -1073741811;
          }
          else
          {
            DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                                     ProcessHandle,
                                     0x1000u,
                                     (POBJECT_TYPE)PsProcessType,
                                     v8,
                                     0x79517350u,
                                     &Object,
                                     0LL);
            v136 = Object;
            if ( DeviceMapInformation >= 0 )
            {
              v137 = *((_QWORD *)Object + 187);
              v138 = (unsigned __int8)HIBYTE(*((_DWORD *)Object + 372)) >> 6;
              if ( v138 < 2u )
                v137 = 0LL;
              *(_DWORD *)(&v173.Name.MaximumLength + 1) ^= (*((_BYTE *)&v173.Name.MaximumLength + 2) ^ (v138 != 0)) & 1;
              v173.Name.Buffer = (wchar_t *)(v137 << 12);
              *(_OBJECT_NAME_INFORMATION *)v6 = v173;
              DeviceMapInformation = 0;
            }
          }
        }
        else
        {
          DeviceMapInformation = -1073741735;
        }
      }
      else
      {
        DeviceMapInformation = -1073741820;
      }
      if ( !v136 )
        return DeviceMapInformation;
      v22 = v136;
      goto LABEL_215;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      v141 = 0;
      v143 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v8,
               0x79517350u,
               &Object,
               0LL);
      if ( v143 >= 0 )
      {
        LOBYTE(v141) = (_DWORD)v160 == 67;
        v144 = 8 * KeQueryCpuSetsProcess((__int64)Object, v219, v142, v141);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v144;
        if ( v144 >= (unsigned int)v5 )
          v144 = v5;
        memmove(v6, v219, v144);
      }
      return v143;
    case ProcessJobMemoryInformation:
      if ( ProcessInformationLength != 40 )
        return -1073741820;
      v87 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v169 = 0uLL;
        v170 = 0uLL;
        *(_QWORD *)&v171 = 0LL;
        if ( *((_QWORD *)Object + 118) )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v211);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v213, 0x98u, 0LL);
          KiUnstackDetachProcess((struct _KTHREAD *)v211, 0);
          *((_QWORD *)&v169 + 1) = JobInformation[0];
          *(_QWORD *)&v170 = JobInformation[1];
          *(_QWORD *)&v169 = JobInformation[2];
          v88 = v171;
          if ( (v214 & 0x200000) != 0 )
            v88 = v216;
          *(_QWORD *)&v171 = v88;
          v89 = *((_QWORD *)&v170 + 1);
          if ( (v214 & 0x200) != 0 )
            v89 = v215;
          *((_QWORD *)&v170 + 1) = v89;
          *(_OWORD *)v6 = v169;
          *((_OWORD *)v6 + 1) = v170;
          *((_QWORD *)v6 + 4) = v171;
          if ( ReturnLength )
            *ReturnLength = 40;
        }
        else
        {
          v87 = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v87;
      }
      return result;
    case ProcessInPrivate:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      v45 = result;
      if ( result < 0 )
        return result;
      v44 = Object;
      *v6 = (*((_DWORD *)Object + 429) & 0x400) != 0;
LABEL_116:
      ObfDereferenceObjectWithTag(v44, 0x79517350u);
      return v45;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v139 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      ProcessHandleInformation = result;
      if ( result < 0 )
        return result;
      v140 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v140 )
        goto LABEL_213;
      LOBYTE(v139) = (*(_BYTE *)(v140 + 44) & 0x10) != 0;
      *(_DWORD *)v6 = v139;
      goto LABEL_209;
    default:
      return -1073741821;
  }
}
