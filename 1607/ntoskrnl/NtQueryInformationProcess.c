/*
 * XREFs of NtQueryInformationProcess @ 0x140421450
 * Callers:
 *     <none>
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     SeTokenIsNoChildProcessRestricted @ 0x14007BFAC (SeTokenIsNoChildProcessRestricted.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     KeQueryAffinityProcess @ 0x14009C45C (KeQueryAffinityProcess.c)
 *     MmQueryWorkingSetInformation @ 0x14009EE10 (MmQueryWorkingSetInformation.c)
 *     MmQueryCommitReleaseState @ 0x1400AEEB0 (MmQueryCommitReleaseState.c)
 *     PsQueryProcessCommandLine @ 0x1400B0074 (PsQueryProcessCommandLine.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     KeQueryGroupMaskProcess @ 0x1400F5118 (KeQueryGroupMaskProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x14014CF94 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x14015C8D0 (ZwQueryInformationJobObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x1401D7448 (KeQueryCpuSetsProcess.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14022C960 (ExQueryHandleExceptionsPermanency.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     ObQueryDeviceMapInformation @ 0x1404210E0 (ObQueryDeviceMapInformation.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExEnumHandleTable @ 0x14045D3A0 (ExEnumHandleTable.c)
 *     PsReferenceProcessFilePointer @ 0x14046DE90 (PsReferenceProcessFilePointer.c)
 *     MmGetSectionInformation @ 0x140470AD8 (MmGetSectionInformation.c)
 *     PsQueryProcessAttributes @ 0x140470C90 (PsQueryProcessAttributes.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1404A5B98 (PsQueryTotalCycleTimeProcess.c)
 *     PsQueryRuntimeProcess @ 0x1404A5C60 (PsQueryRuntimeProcess.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 *     PspQueryQuotaLimits @ 0x1404AF824 (PspQueryQuotaLimits.c)
 *     PsQueryFullProcessImageName @ 0x1404B43B0 (PsQueryFullProcessImageName.c)
 *     ExReferenceHandleDebugInfo @ 0x1404B7C04 (ExReferenceHandleDebugInfo.c)
 *     PsQueryProcessQuotaCounters @ 0x1404BB784 (PsQueryProcessQuotaCounters.c)
 *     KeGetExecuteOptions @ 0x1404BF3F8 (KeGetExecuteOptions.c)
 *     ExIsRestrictedCaller @ 0x1404D3730 (ExIsRestrictedCaller.c)
 *     IoQueryFileDosDeviceName @ 0x1404EB03C (IoQueryFileDosDeviceName.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 *     ObGetProcessHandleCount @ 0x14051B034 (ObGetProcessHandleCount.c)
 *     ExQueryProcessHandleInformation @ 0x14054BE88 (ExQueryProcessHandleInformation.c)
 *     DbgkOpenProcessDebugPort @ 0x140617E54 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x1406209E0 (VslGetSecurePebAddress.c)
 *     PspGetRedirectionTrustPolicy @ 0x14067D310 (PspGetRedirectionTrustPolicy.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14067D4A8 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspQueryPooledQuotaLimits @ 0x14067D94C (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14067DAC4 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140682254 (PsIumGetOnDemandDebugChallenge.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406AD484 (ExDereferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r15
  _OBJECT_NAME_INFORMATION *v6; // rsi
  PROCESSINFOCLASS v7; // r10d
  unsigned __int8 v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  char *v12; // rdi
  NTSTATUS result; // eax
  NTSTATUS v14; // esi
  char *v15; // rdi
  int SectionInformation; // r12d
  struct _EX_RUNDOWN_REF *v17; // rbx
  struct _FILE_OBJECT *v18; // r13
  signed int v19; // ebx
  POBJECT_NAME_INFORMATION v20; // r12
  ULONG v21; // r13d
  unsigned __int16 MaximumLength; // ax
  _DWORD *v23; // r15
  int v24; // eax
  int v25; // r13d
  _KPROCESS *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 Group; // rdx
  _DWORD *v30; // rdx
  int v31; // ebx
  NTSTATUS DeviceMapInformation; // edi
  _QWORD *v33; // rbx
  struct _KPROCESS *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rcx
  NTSTATUS v37; // r15d
  HANDLE v38; // rdx
  _DWORD *v39; // r8
  int ProcessHandleCount; // edi
  NTSTATUS v41; // ebx
  int v42; // ebx
  int v43; // ebx
  int v44; // r13d
  int SessionId; // ebx
  PVOID v46; // rcx
  __int64 v47; // rdi
  __int64 *v48; // rax
  int v49; // ebx
  unsigned int v50; // r13d
  __int64 v51; // r15
  unsigned int v52; // edi
  PVOID v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rdx
  _OWORD *v58; // rax
  __int64 v59; // rcx
  int v60; // eax
  void *Process; // r9
  void *v62; // r9
  volatile signed __int32 *p_Lock; // r9
  int v64; // eax
  __int64 v65; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v67; // rax
  int v68; // edi
  struct _EX_RUNDOWN_REF *v69; // r15
  void *Ptr; // rbx
  _DWORD *v71; // rcx
  NTSTATUS v72; // ebx
  PVOID v73; // rdi
  NTSTATUS v74; // edi
  __int64 v75; // rax
  wchar_t *Buffer; // rax
  void *v77; // rsi
  PVOID v78; // rbx
  int v79; // edi
  __int64 v80; // rdx
  __int64 v81; // rcx
  ULONG v82; // edi
  unsigned int v83; // eax
  unsigned int v84; // ecx
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned __int16 v90; // di
  __int64 v91; // rax
  __int64 v92; // rcx
  ULONG v93; // eax
  __int64 v94; // rbx
  struct _EX_RUNDOWN_REF *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  int v100; // r14d
  _DWORD *v101; // rcx
  __int64 v102; // rax
  int v103; // ecx
  _DWORD *v104; // rcx
  int RedirectionTrustPolicy; // eax
  int v106; // eax
  int v107; // edi
  __int64 v108; // rax
  NTSTATUS v109; // edi
  int v110; // ebx
  struct _EX_RUNDOWN_REF *v111; // rbx
  __int64 v112; // rax
  NTSTATUS ProcessCommandLine; // eax
  struct _KPROCESS *v114; // rcx
  int v115; // edi
  __int64 v116; // rax
  unsigned int v117; // edi
  int v118; // r8d
  ULONG v119; // ebx
  struct _KPROCESS *v120; // r15
  PACCESS_TOKEN v121; // rax
  unsigned __int64 v122; // rdx
  PVOID Object; // [rsp+40h] [rbp-698h] BYREF
  NTSTATUS v124; // [rsp+48h] [rbp-690h]
  unsigned __int8 v125; // [rsp+4Ch] [rbp-68Ch]
  unsigned __int16 v126; // [rsp+50h] [rbp-688h] BYREF
  unsigned int GroupMaskProcess; // [rsp+54h] [rbp-684h] BYREF
  char v128; // [rsp+58h] [rbp-680h] BYREF
  char v129[3]; // [rsp+59h] [rbp-67Fh] BYREF
  ULONG v130; // [rsp+5Ch] [rbp-67Ch] BYREF
  HANDLE v131; // [rsp+60h] [rbp-678h]
  int v132; // [rsp+68h] [rbp-670h]
  PVOID v133; // [rsp+70h] [rbp-668h] BYREF
  int v134; // [rsp+78h] [rbp-660h]
  __int64 v135; // [rsp+80h] [rbp-658h]
  HANDLE Handle; // [rsp+88h] [rbp-650h] BYREF
  __int128 v137; // [rsp+90h] [rbp-648h]
  int v138; // [rsp+A0h] [rbp-638h]
  PROCESSINFOCLASS v139; // [rsp+A4h] [rbp-634h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+A8h] [rbp-630h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-628h]
  __int64 v142; // [rsp+B8h] [rbp-620h]
  struct _MDL *v143; // [rsp+C0h] [rbp-618h] BYREF
  _OBJECT_NAME_INFORMATION v144; // [rsp+C8h] [rbp-610h] BYREF
  _OBJECT_NAME_INFORMATION v145; // [rsp+D8h] [rbp-600h] BYREF
  _DWORD v146[2]; // [rsp+E8h] [rbp-5F0h] BYREF
  int v147; // [rsp+F0h] [rbp-5E8h] BYREF
  int v148; // [rsp+F4h] [rbp-5E4h]
  unsigned int v149; // [rsp+F8h] [rbp-5E0h] BYREF
  int v150; // [rsp+FCh] [rbp-5DCh] BYREF
  int v151; // [rsp+100h] [rbp-5D8h] BYREF
  __int64 v152; // [rsp+108h] [rbp-5D0h]
  PULONG v153; // [rsp+110h] [rbp-5C8h]
  _QWORD v154[2]; // [rsp+118h] [rbp-5C0h] BYREF
  _OBJECT_NAME_INFORMATION v155; // [rsp+128h] [rbp-5B0h]
  _OBJECT_NAME_INFORMATION v156; // [rsp+138h] [rbp-5A0h]
  _OBJECT_NAME_INFORMATION v157; // [rsp+148h] [rbp-590h]
  __int64 v158; // [rsp+158h] [rbp-580h] BYREF
  __int64 v159; // [rsp+160h] [rbp-578h]
  int v160; // [rsp+168h] [rbp-570h]
  _DWORD v161[3]; // [rsp+16Ch] [rbp-56Ch] BYREF
  PVOID v162; // [rsp+178h] [rbp-560h] BYREF
  wchar_t *v163; // [rsp+180h] [rbp-558h] BYREF
  PVOID v164; // [rsp+188h] [rbp-550h] BYREF
  __int64 v165; // [rsp+190h] [rbp-548h]
  PVOID v166; // [rsp+198h] [rbp-540h] BYREF
  __int128 v167; // [rsp+1A0h] [rbp-538h]
  _QWORD Src[14]; // [rsp+1B0h] [rbp-528h] BYREF
  __int64 v169[4]; // [rsp+220h] [rbp-4B8h] BYREF
  __int64 v170; // [rsp+240h] [rbp-498h] BYREF
  __int64 v171; // [rsp+248h] [rbp-490h] BYREF
  char v172[40]; // [rsp+250h] [rbp-488h] BYREF
  _OBJECT_NAME_INFORMATION v173; // [rsp+278h] [rbp-460h]
  _OBJECT_NAME_INFORMATION v174; // [rsp+288h] [rbp-450h]
  _OBJECT_NAME_INFORMATION v175; // [rsp+298h] [rbp-440h]
  __int128 v176; // [rsp+2B0h] [rbp-428h]
  __int128 v177; // [rsp+2C0h] [rbp-418h]
  __int128 v178; // [rsp+2D0h] [rbp-408h]
  __int128 v179; // [rsp+2E0h] [rbp-3F8h]
  __int128 v180; // [rsp+2F0h] [rbp-3E8h]
  __int128 v181; // [rsp+300h] [rbp-3D8h]
  __int128 v182; // [rsp+310h] [rbp-3C8h]
  __int128 v183; // [rsp+320h] [rbp-3B8h]
  __int128 v184; // [rsp+330h] [rbp-3A8h]
  __int128 v185; // [rsp+340h] [rbp-398h]
  char v186; // [rsp+350h] [rbp-388h] BYREF
  _QWORD JobInformation[5]; // [rsp+360h] [rbp-378h] BYREF
  _BYTE v188[48]; // [rsp+388h] [rbp-350h] BYREF
  _BYTE v189[56]; // [rsp+3B8h] [rbp-320h] BYREF
  char v190[16]; // [rsp+3F0h] [rbp-2E8h] BYREF
  int v191; // [rsp+400h] [rbp-2D8h]
  wchar_t *v192; // [rsp+468h] [rbp-270h]
  __int64 v193; // [rsp+480h] [rbp-258h]
  _OWORD v194[11]; // [rsp+490h] [rbp-248h] BYREF
  _OWORD v195[11]; // [rsp+540h] [rbp-198h] BYREF
  _QWORD v196[20]; // [rsp+5F0h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (_OBJECT_NAME_INFORMATION *)ProcessInformation;
  v7 = ProcessInformationClass;
  v139 = ProcessInformationClass;
  v131 = ProcessHandle;
  v154[1] = ProcessInformation;
  LODWORD(v135) = ProcessInformationLength;
  v153 = ReturnLength;
  v9 = KeGetCurrentThread()->gap0[10];
  v125 = v9;
  CurrentThread = KeGetCurrentThread();
  if ( v9 )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessProtectionInformation:
        v10 = 1;
        break;
      case ProcessCommitReleaseInformation:
        v10 = 8;
        break;
      case ProcessEnableReadWriteVmLogging:
        v10 = 1;
        break;
      default:
        v10 = 1;
        if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 )
          v10 = 4;
        break;
    }
    v160 = v10;
    if ( ProcessInformationLength )
    {
      if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&ProcessInformationClass = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
        || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      *(_QWORD *)&ProcessInformationClass = 0x7FFFFFFF0000LL;
    }
    if ( ReturnLength )
    {
      v11 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  switch ( v7 )
  {
    case ProcessBasicInformation:
      if ( ProcessInformationLength == 64 )
      {
        v23 = ProcessInformation;
        v133 = ProcessInformation;
        v24 = 64;
        v135 = 64LL;
        *(_QWORD *)ProcessInformation = 64LL;
        v6 = (_OBJECT_NAME_INFORMATION *)((char *)ProcessInformation + 8);
      }
      else
      {
        if ( ProcessInformationLength != 48 )
          return -1073741820;
        v23 = 0LL;
        v133 = 0LL;
        v24 = 48;
        v135 = 48LL;
      }
      v130 = v24;
      ObjectNameInformation = v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v25 = result;
      v124 = result;
      if ( result < 0 )
        return result;
      v26 = (_KPROCESS *)Object;
      *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 395);
      v6->Name.Buffer = (wchar_t *)v26[1].ActiveProcessors.Bitmap[1];
      if ( v26->SecurePid )
        VslGetSecurePebAddress(v26);
      if ( v25 < 0 )
        goto LABEL_59;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v26);
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 && v26 != CurrentThread->Process )
        goto LABEL_69;
      KeQueryAffinityProcess((__int64)v26, v194, (int *)&GroupMaskProcess, 0LL);
      v28 = GroupMaskProcess;
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0 )
      {
        if ( v26 != CurrentThread->Process )
          goto LABEL_68;
        Group = CurrentThread->UserAffinity.Group;
        if ( !_bittest64(&v28, Group) )
          goto LABEL_68;
      }
      else
      {
        _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
      }
      if ( (_DWORD)Group != 20 )
      {
        v27 = *((_QWORD *)v194 + Group + 1);
        goto LABEL_69;
      }
LABEL_68:
      v27 = 0LL;
LABEL_69:
      *(_QWORD *)&v6[1].Name.Length = v27;
      LODWORD(v6[1].Name.Buffer) = v26->BasePriority;
      *(_QWORD *)&v6[2].Name.Length = v26[1].Header.WaitListHead.Blink;
      v6[2].Name.Buffer = (wchar_t *)v26[1].SwapListEntry.Next;
      if ( v23 )
      {
        v23[14] = 0;
        if ( (v26[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 )
          v23[14] = 1;
        if ( v26[1].ActiveProcessors.Bitmap[7] )
          v23[14] |= 2u;
        v30 = (_DWORD *)&v26[1].DirectoryTableBase + 1;
        if ( (v26[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
          v23[14] |= 4u;
        v26 = (_KPROCESS *)Object;
        v23[14] ^= (v23[14] ^ (8 * (*((unsigned __int8 *)Object + 768) >> 7))) & 8;
        if ( v26->FreezeCount + ((*(_DWORD *)&v26->0 >> 3) & 1) )
          v23[14] |= 0x10u;
        v23[14] ^= (v23[14] ^ (32 * ((*v30 >> 20) & 1))) & 0x20;
        PsQueryProcessAttributes(v26, &v128, 0LL);
        if ( v128 )
          v23[14] |= 0x40u;
        if ( v26->SecurePid )
          v23[14] |= 0x80u;
        if ( v26[2].ActiveProcessors.Bitmap[9] )
          v23[14] |= 0x100u;
        v25 = v124;
      }
      if ( ReturnLength )
        *ReturnLength = v135;
LABEL_59:
      ObfDereferenceObjectWithTag(v26, 0x79517350u);
      return v25;
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
        PsQueryStatisticsProcess(Object, v172);
        v155 = v173;
        v156 = v174;
        v157 = v175;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *v6 = v155;
        v6[1] = v156;
        v6[2] = v157;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        memset(Src, 0, sizeof(Src));
        v33 = Object;
        Src[0] = *((_QWORD *)Object + 102);
        Src[1] = *((_QWORD *)Object + 103);
        LODWORD(Src[2]) = *((_DWORD *)Object + 321);
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v188);
        v124 = MmQueryWorkingSetInformation(&Src[3], &Src[4], &Src[12], v169, &v171, v161);
        KiUnstackDetachProcess((struct _KTHREAD *)v188, 0);
        PsQueryProcessQuotaCounters(v33, 1LL, &Src[6], &Src[5]);
        PsQueryProcessQuotaCounters(v33, 0LL, &Src[8], &Src[7]);
        Src[9] = v33[158] << 12;
        Src[10] = *((_QWORD *)Object + 159) << 12;
        Src[13] = *((_QWORD *)Object + 238) << 12;
        Src[11] = Src[9];
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = v124;
        if ( v124 >= 0 )
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v34 = (struct _KPROCESS *)Object;
        v35 = PsQueryRuntimeProcess(Object, &v149);
        v36 = KeMaximumIncrement;
        *(_QWORD *)&v6[1].Name.Length = KeMaximumIncrement * (unsigned __int64)v35;
        v6[1].Name.Buffer = (wchar_t *)(v36 * v149);
        *(_QWORD *)&v6->Name.Length = v34[1].ThreadListHead.Flink;
        v6->Name.Buffer = (wchar_t *)v34[2].Affinity.Bitmap[17];
        if ( ReturnLength )
          *ReturnLength = 32;
        goto LABEL_436;
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
        Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 132) >> 64);
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
        v41 = xKdEnumerateDebuggingDevices();
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v41;
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
        v31 = *((_DWORD *)Object + 296);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = v31;
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
        LOBYTE(v126) = 0;
        HIBYTE(v126) = *((_BYTE *)Object + 1119);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->Name.Length = v126;
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
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v42 = HIBYTE(*((_DWORD *)Object + 193)) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = v42;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        ProcessHandleCount = ObGetProcessHandleCount(Object, v146);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = ProcessHandleCount;
        if ( (_DWORD)v5 != 4 )
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = v146[0];
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
      SectionInformation = result;
      if ( result >= 0 )
      {
        v53 = Object;
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
          || (KeQueryAffinityProcess((__int64)v53, v195, (int *)&GroupMaskProcess, 0LL),
              ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
        {
          SectionInformation = -1073741811;
        }
        else
        {
          _BitScanForward((unsigned int *)&v80, GroupMaskProcess);
          v81 = *((_QWORD *)v195 + v80 + 1);
          if ( (_DWORD)v5 == 16 )
            LOWORD(v6->Name.Buffer) = v80;
          *(_QWORD *)&v6->Name.Length = v81;
          if ( ReturnLength )
            *ReturnLength = v5;
        }
        goto LABEL_208;
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
        v43 = (unsigned __int8)(*((_BYTE *)Object + 440) & 2) >> 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = v43;
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
        v132 = *((_DWORD *)ProcessInformation + 10);
        v44 = v132;
        if ( (v132 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 36 )
          return -1073741820;
        v44 = 0;
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
        DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, (__int64)v6, v44);
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
        ObfDereferenceObjectWithTag(v46, 0x79517350u);
        *(_DWORD *)&v6->Name.Length = SessionId;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessWow64Information:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v47 = 0LL;
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
        v48 = (__int64 *)*((_QWORD *)Object + 133);
        if ( v48 )
          v47 = *v48;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)&v6->Name.Length = v47;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        if ( (unsigned int)v5 >= 0x10 )
        {
          v130 = v5 - 16;
          v12 = (char *)&v6[1];
        }
        else
        {
          v130 = 0;
          v6 = (_OBJECT_NAME_INFORMATION *)&v186;
        }
        v14 = PsQueryFullProcessImageName(Object, v6, v12, &v130);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( v14 >= 0 && !v12 )
          v14 = -1073741820;
        if ( ReturnLength && ((int)(v14 + 0x80000000) < 0 || v14 == -1073741820) )
          *ReturnLength = v130 + 16;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v49 = (*((_DWORD *)Object + 193) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)&v6->Name.Length = v49;
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
      if ( result >= 0 )
      {
        v37 = DbgkOpenProcessDebugPort(Object, v9, &Handle);
        v38 = Handle;
        if ( v37 < 0 )
          v38 = 0LL;
        Handle = v38;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)&v6->Name.Length = Handle;
        if ( ReturnLength )
          *ReturnLength = 8;
        return v37;
      }
      return result;
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
      v19 = result;
      if ( result < 0 )
        return result;
      v39 = Object;
      *(_DWORD *)&v6->Name.Length = ((unsigned __int8)~*((_BYTE *)Object + 772) >> 1) & 1;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_446;
    case ProcessHandleTracing:
      if ( ProcessInformationLength < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(v9, *(_QWORD *)&ProcessInformationClass, 0x140000000uLL, 1LL) )
        return -1073741790;
      v50 = ((int)v5 - 16) / 0xA0u;
      v51 = (__int64)&v6[1];
      v52 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      SectionInformation = result;
      if ( result < 0 )
        return result;
      v53 = Object;
      v54 = ObReferenceProcessHandleTable(Object);
      v142 = v54;
      if ( !v54 )
        goto LABEL_207;
      v55 = ExReferenceHandleDebugInfo(v54);
      v56 = v55;
      v143 = (struct _MDL *)v55;
      if ( v55 )
      {
        LODWORD(v6->Name.Buffer) = 0;
        v57 = (unsigned int)(*(_DWORD *)(v55 + 72) % *(_DWORD *)(v55 + 4));
        v138 = v57;
        while ( 1 )
        {
          v146[1] = v52;
          if ( v52 >= *(_DWORD *)(v56 + 4) )
            break;
          v58 = (_OWORD *)(v56 + 160 * v57);
          v176 = v58[5];
          v177 = v58[6];
          v178 = v58[7];
          v179 = v58[8];
          v180 = v58[9];
          v181 = v58[10];
          v182 = v58[11];
          v183 = v58[12];
          v184 = v58[13];
          v185 = v58[14];
          v59 = v177;
          if ( *(_QWORD *)&v6->Name.Length == (_QWORD)v177 || !*(_QWORD *)&v6->Name.Length )
          {
            v60 = DWORD2(v177);
            if ( DWORD2(v177) )
            {
              ++LODWORD(v6->Name.Buffer);
              if ( v50 )
              {
                v161[1] = --v50;
                *(_QWORD *)v51 = v59;
                *(_OWORD *)(v51 + 8) = v176;
                *(_DWORD *)(v51 + 24) = v60;
                *(_OWORD *)(v51 + 32) = v178;
                *(_OWORD *)(v51 + 48) = v179;
                *(_OWORD *)(v51 + 64) = v180;
                *(_OWORD *)(v51 + 80) = v181;
                *(_OWORD *)(v51 + 96) = v182;
                *(_OWORD *)(v51 + 112) = v183;
                *(_OWORD *)(v51 + 128) = v184;
                *(_OWORD *)(v51 + 144) = v185;
                v51 += 160LL;
                v169[1] = v51;
              }
              else
              {
                SectionInformation = -1073741820;
                v124 = -1073741820;
              }
            }
          }
          if ( !(_DWORD)v57 )
            LODWORD(v57) = *(_DWORD *)(v56 + 4);
          v57 = (unsigned int)(v57 - 1);
          v138 = v57;
          ++v52;
        }
        if ( ReturnLength )
          *ReturnLength = v51 - (_DWORD)v6;
        ExDereferenceHandleDebugInfo(v142, v56);
        v53 = Object;
      }
      else
      {
        SectionInformation = -1073741811;
      }
      goto LABEL_349;
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
      v19 = result;
      v124 = result;
      if ( result < 0 )
        return result;
      v71 = Object;
      *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 193) >> 27) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_462;
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
      DeviceMapInformation = KeGetExecuteOptions(Process, &v147);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        *(_DWORD *)&v6->Name.Length = v147;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessCookie:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      DeviceMapInformation = 0;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = (PVOID)p_Lock;
      }
      else
      {
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v9, &v162, 0LL);
        p_Lock = (volatile signed __int32 *)v162;
        Object = v162;
        if ( result < 0 )
          return result;
      }
      v124 = 0;
      while ( 1 )
      {
        v64 = *((_DWORD *)p_Lock + 242);
        if ( v64 )
          break;
        v65 = MEMORY[0xFFFFF78000000014];
        CurrentPrcb = KeGetCurrentPrcb();
        v67 = __rdtsc();
        _InterlockedCompareExchange(
          p_Lock + 242,
          CurrentPrcb->MmPageFaultCount ^ v67 ^ v65 ^ CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ HIDWORD(v65),
          0);
        DeviceMapInformation = v124;
        p_Lock = (volatile signed __int32 *)Object;
      }
      *(_DWORD *)&v6->Name.Length = v64;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle == (HANDLE)-1LL )
        return DeviceMapInformation;
      ObfDereferenceObject((PVOID)p_Lock);
      return DeviceMapInformation;
    case ProcessImageInformation:
      if ( ProcessInformationLength != 64 )
        return -1073741820;
      v68 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      SectionInformation = result;
      if ( result < 0 )
        return result;
      v69 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == CurrentThread->Process )
      {
        Ptr = (void *)*((_QWORD *)Object + 119);
        if ( !Ptr )
          result = -1073741558;
        SectionInformation = result;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        Ptr = v69[119].Ptr;
        if ( Ptr )
          ObfReferenceObject(v69[119].Ptr);
        else
          SectionInformation = -1073741811;
        ExReleaseRundownProtection(v69 + 92);
        v68 = 1;
      }
      else
      {
        SectionInformation = -1073741558;
        Ptr = 0LL;
        v68 = 1;
      }
      ObfDereferenceObjectWithTag(v69, 0x79517350u);
      if ( SectionInformation >= 0 )
      {
        SectionInformation = MmGetSectionInformation(Ptr, 1LL, v6);
        if ( v68 )
          ObfDereferenceObject(Ptr);
        if ( SectionInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return SectionInformation;
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
      v72 = result;
      if ( result >= 0 )
      {
        v73 = Object;
        *(_QWORD *)&v6->Name.Length = PsQueryTotalCycleTimeProcess(Object, &v163);
        v6->Name.Buffer = v163;
        if ( ReturnLength )
          *ReturnLength = 16;
        ObfDereferenceObjectWithTag(v73, 0x79517350u);
        return v72;
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
      v19 = result;
      if ( result < 0 )
        return result;
      v71 = Object;
      *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 192) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_462;
    case ProcessImageFileNameWin32:
      v15 = 0LL;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      SectionInformation = result;
      if ( result < 0 )
        return result;
      v17 = (struct _EX_RUNDOWN_REF *)Object;
      v18 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 137);
      v133 = v18;
      if ( v18 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
        {
          ObfReferenceObject(v18);
          ExReleaseRundownProtection(v17 + 92);
        }
        else
        {
          SectionInformation = -1073741558;
        }
      }
      else
      {
        SectionInformation = PsReferenceProcessFilePointer(Object, &v133);
        v18 = (struct _FILE_OBJECT *)v133;
      }
      ObfDereferenceObjectWithTag(v17, 0x79517350u);
      if ( SectionInformation < 0 )
        return SectionInformation;
      v19 = IoQueryFileDosDeviceName(v18, &ObjectNameInformation);
      ObfDereferenceObject(v18);
      if ( v19 >= 0 )
      {
        v20 = ObjectNameInformation;
        v21 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v21 <= (unsigned int)v5 )
        {
          v6->Name.Length = ObjectNameInformation->Name.Length;
          v6->Name.MaximumLength = v20->Name.MaximumLength;
          MaximumLength = v20->Name.MaximumLength;
          if ( MaximumLength )
          {
            v15 = (char *)&v6[1];
            memmove(&v6[1], v20->Name.Buffer, MaximumLength);
          }
          v6->Name.Buffer = (wchar_t *)v15;
        }
        else
        {
          v19 = -1073741820;
          v124 = -1073741820;
        }
        if ( ReturnLength )
          *ReturnLength = v21;
        ExFreePoolWithTag(v20, 0);
      }
      return v19;
    case ProcessImageFileMapping:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v77 = *(void **)ProcessInformation;
      v169[2] = *(_QWORD *)ProcessInformation;
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
      v19 = ObReferenceObjectByHandleWithTag(
              v77,
              0x100020u,
              (POBJECT_TYPE)IoFileObjectType,
              v9,
              0x79517350u,
              &v133,
              0LL);
      v71 = Object;
      if ( v19 < 0 )
        goto LABEL_462;
      v14 = PsReferenceProcessFilePointer(Object, &v164);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( v14 >= 0 )
      {
        v14 = -1073741823;
        v78 = v164;
        if ( *((_QWORD *)v133 + 5) == *((_QWORD *)v164 + 5) )
          v14 = 0;
        ObfDereferenceObject(v133);
        ObfDereferenceObject(v78);
        if ( v14 >= 0 && ReturnLength )
          *ReturnLength = 0;
      }
      else
      {
        ObfDereferenceObject(v133);
      }
      return v14;
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
      v132 = *((_DWORD *)Object + 192);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v79 = (v132 & 0x80000) != 0;
      if ( (v132 & 0x40000) != 0 )
        v79 |= 2u;
      *(_DWORD *)&v6->Name.Length = v79;
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
      v132 = *((_DWORD *)Object + 193);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)&v6->Name.Length = (v132 & 0x200000) != 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (ProcessInformationLength & 1) != 0 )
        return -1073741811;
      v82 = 0;
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
        v83 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v83;
        do
        {
          _BitScanForward(&v84, v83);
          v82 += 2;
          v130 = v82;
          if ( v82 <= (unsigned int)v5 )
          {
            v6->Name.Length = v84;
            v6 = (_OBJECT_NAME_INFORMATION *)((char *)v6 + 2);
            v169[3] = (__int64)v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v84);
          v83 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *ReturnLength = v82;
        v19 = (unsigned int)v5 < v82 ? 0xC0000023 : 0;
        v124 = v19;
LABEL_446:
        ObfDereferenceObjectWithTag(v39, 0x79517350u);
        return v19;
      }
      return result;
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
      v85 = *((_QWORD *)Object + 126);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)&v6->Name.Length = v85;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      v86 = 0LL;
      v134 = 0;
      v137 = 0uLL;
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
      v124 = result;
      if ( result < 0 )
        return result;
      v53 = Object;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 92) )
      {
        KiStackAttachProcess((_KPROCESS *)v53, 0, (__int64)v189);
        v87 = (__int64 *)*((_QWORD *)v53 + 133);
        if ( v87 )
          v86 = *v87;
        if ( v86 )
        {
          v165 = *(unsigned int *)(v86 + 16);
          v88 = v165 + 104;
          if ( (unsigned __int64)(v165 + 104) >= 0x7FFFFFFF0000LL )
            v88 = 0x7FFFFFFF0000LL;
          v134 = *(_DWORD *)v88;
          v89 = v165 + 112;
          if ( (unsigned __int64)(v165 + 112) >= 0x7FFFFFFF0000LL )
            v89 = 0x7FFFFFFF0000LL;
          v152 = *(_QWORD *)v89;
          v90 = v152;
          LODWORD(v137) = v152;
          *((_QWORD *)&v137 + 1) = HIDWORD(v152);
        }
        else
        {
          v142 = *(_QWORD *)(*((_QWORD *)v53 + 127) + 32LL);
          v91 = v142 + 164;
          if ( (unsigned __int64)(v142 + 164) >= 0x7FFFFFFF0000LL )
            v91 = 0x7FFFFFFF0000LL;
          v134 = *(_DWORD *)v91;
          v92 = v142 + 176;
          if ( (unsigned __int64)(v142 + 176) >= 0x7FFFFFFF0000LL )
            v92 = 0x7FFFFFFF0000LL;
          LODWORD(v167) = *(_DWORD *)v92;
          *((_QWORD *)&v167 + 1) = *(_QWORD *)(v92 + 8);
          v137 = v167;
          v90 = v167;
        }
        SectionInformation = v124;
        KiUnstackDetachProcess((struct _KTHREAD *)v189, 0);
        if ( SectionInformation < 0 )
          goto LABEL_348;
        v93 = v90 + 6;
        if ( ReturnLength )
          *ReturnLength = v93;
        if ( (unsigned int)v5 >= v93 )
        {
          *(_DWORD *)&v6->Name.Length = v134;
          *(&v6->Name.MaximumLength + 1) = v90;
        }
        else
        {
          SectionInformation = -1073741820;
          v124 = -1073741820;
        }
        if ( SectionInformation >= 0 && v90 )
        {
          v53 = Object;
          SectionInformation = MmCopyVirtualMemory((ULONG_PTR)Object, (unsigned __int16)v137, 1, (__int64)&v170);
        }
        else
        {
LABEL_348:
          v53 = Object;
        }
LABEL_349:
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v53 + 92);
      }
      else
      {
LABEL_207:
        SectionInformation = -1073741558;
      }
LABEL_208:
      ObfDereferenceObjectWithTag(v53, 0x79517350u);
      return SectionInformation;
    case ProcessHandleInformation:
      if ( ProcessInformationLength >= 0x10 )
      {
        result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v9, &v166, 0LL);
        if ( result >= 0 )
        {
          v94 = (__int64)CurrentThread;
          --CurrentThread->KernelApcDisable;
          v95 = (struct _EX_RUNDOWN_REF *)v166;
          v96 = ObReferenceProcessHandleTable(v166);
          if ( v96 )
          {
            SectionInformation = ExQueryProcessHandleInformation(v96, v6, (unsigned int)v5, ReturnLength);
            ExReleaseRundownProtection(v95 + 92);
          }
          else
          {
            SectionInformation = -1073741558;
          }
          KiLeaveCriticalRegionUnsafe(v94, v97, v98, v99);
          ObfDereferenceObject(v95);
          return SectionInformation;
        }
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 16;
        return -1073741820;
      }
      return result;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v100 = *(_DWORD *)ProcessInformation;
      v148 = *(_DWORD *)ProcessInformation;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v100 = v148;
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
      switch ( v100 )
      {
        case 1:
          v124 = 0;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
          v101 = Object;
          if ( (*((_DWORD *)Object + 192) & 0x20000) == 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
          if ( (v101[192] & 0x8000000) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
          if ( (v101[192] & 0x2000000) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
          if ( (v101[192] & 0x1000000) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 8u;
          break;
        case 2:
          v124 = 0;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
          if ( (*((_DWORD *)Object + 192) & 0x400) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
          if ( (*((_DWORD *)Object + 435) & 0x4000) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
          break;
        case 3:
          v124 = 0;
          v102 = ObReferenceProcessHandleTable(Object);
          if ( v102 )
          {
            ExQueryHandleExceptionsPermanency(v102, v129, (bool *)&v126);
            *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
            if ( v129[0] )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
            if ( (_BYTE)v126 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 92);
          }
          else
          {
            v124 = -1073741558;
          }
          break;
        case 4:
          v124 = 0;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
          if ( *((int *)Object + 192) < 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
          break;
        case 6:
          v124 = 0;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
          if ( (*((_DWORD *)Object + 192) & 0x4000000) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
          break;
        case 7:
          v124 = 0;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
          if ( (*((_DWORD *)Object + 193) & 0x10) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
          break;
        case 8:
          v124 = 0;
          PsQueryProcessSignatureMitigationPolicy(Object, &v151, 0x140000000uLL);
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = v151;
          break;
        case 9:
          v124 = 0;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
          v103 = *((_DWORD *)Object + 435);
          if ( (v103 & 4) != 0 )
          {
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
          }
          else if ( (v103 & 8) != 0 )
          {
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
          }
          break;
        case 10:
          v124 = 0;
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
          v104 = Object;
          if ( (*((_DWORD *)Object + 435) & 0x800) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
          if ( (v104[435] & 0x1000) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
          if ( (v104[435] & 0x20000) != 0 )
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 4u;
          break;
        case 16:
          v124 = 0;
          RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(
                                     Object,
                                     *(_QWORD *)&ProcessInformationClass,
                                     0x140000000uLL);
          *(_DWORD *)(&v6->Name.MaximumLength + 1) = 0;
          v106 = RedirectionTrustPolicy - 1;
          if ( v106 )
          {
            if ( v106 == 1 )
              *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 2u;
          }
          else
          {
            *(_DWORD *)(&v6->Name.MaximumLength + 1) |= 1u;
          }
          break;
        default:
          v124 = -1073741637;
          break;
      }
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v124;
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v107 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      SectionInformation = result;
      v124 = result;
      if ( result < 0 )
        return result;
      v53 = Object;
      v108 = ObReferenceProcessHandleTable(Object);
      if ( !v108 )
        goto LABEL_207;
      LOBYTE(v107) = (*(_BYTE *)(v108 + 44) & 2) != 0;
      *(_DWORD *)&v6->Name.Length = v107;
      goto LABEL_349;
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
      v19 = result;
      if ( result < 0 )
        return result;
      v71 = Object;
      *(_DWORD *)&v6->Name.Length = *((_DWORD *)Object + 456) & 0x7FFFFFFF;
      *(_DWORD *)(&v6->Name.MaximumLength + 1) = v71[457];
      goto LABEL_462;
    case ProcessHandleTable:
      if ( ProcessInformationLength < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 ProcessInformation,
                 ProcessInformationLength,
                 (unsigned __int8)KeGetCurrentThread()->gap0[10],
                 1LL,
                 v154,
                 &v143);
      if ( result >= 0 )
      {
        v109 = 0;
        v110 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v110 >= 0 )
        {
          v158 = 0LL;
          v159 = 0LL;
          v111 = (struct _EX_RUNDOWN_REF *)Object;
          v112 = ObReferenceProcessHandleTable(Object);
          if ( v112 )
          {
            v158 = v154[0];
            v159 = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v112, PspHandleTableWalker, &v158, 0LL);
            ExReleaseRundownProtection(v111 + 92);
          }
          else
          {
            v109 = -1073741558;
          }
          ObfDereferenceObjectWithTag(v111, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v159);
          ExUnlockUserBuffer(v143);
          return v109;
        }
        else
        {
          ExUnlockUserBuffer(v143);
          return v110;
        }
      }
      return result;
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
      v19 = result;
      if ( result < 0 )
        return result;
      v71 = Object;
      *(_DWORD *)&v6->Name.Length = (*((_DWORD *)Object + 110) >> 5) & 1;
      goto LABEL_462;
    case ProcessCommandLineInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v9,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v34 = (struct _KPROCESS *)Object;
      ProcessCommandLine = PsQueryProcessCommandLine(
                             (struct _EX_RUNDOWN_REF *)Object,
                             (__int64)v6,
                             v5,
                             v9,
                             ReturnLength);
      goto LABEL_435;
    case ProcessProtectionInformation:
      v19 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v19 >= 0 )
      {
        if ( (_DWORD)v5 )
        {
          v39 = Object;
          LOBYTE(v6->Name.Length) = *((_BYTE *)Object + 1738);
          if ( ReturnLength )
            *ReturnLength = 1;
          v19 = 0;
        }
        else
        {
          v19 = -1073741820;
          v39 = Object;
        }
        if ( v39 )
          goto LABEL_446;
      }
      return v19;
    case ProcessTelemetryIdInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v9,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v34 = (struct _KPROCESS *)Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((ULONG_PTR)Object, v6, (unsigned int)v5, (__int64)ReturnLength);
LABEL_435:
      DeviceMapInformation = ProcessCommandLine;
      if ( !v34 )
        return DeviceMapInformation;
LABEL_436:
      v114 = v34;
      goto LABEL_437;
    case ProcessCommitReleaseInformation:
      Object = 0LL;
      if ( ProcessInformationLength == 32 )
      {
        v144 = *(_OBJECT_NAME_INFORMATION *)ProcessInformation;
        v145 = (_OBJECT_NAME_INFORMATION)*((_OWORD *)ProcessInformation + 1);
        if ( *(_DWORD *)&v144.Name.Length == 3 )
        {
          if ( (*(_DWORD *)(&v144.Name.MaximumLength + 1) & 0xFFFFFFF8) != 0 || v144.Name.Buffer )
          {
            v19 = -1073741811;
          }
          else
          {
            v19 = ObReferenceObjectByHandleWithTag(
                    ProcessHandle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v9,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v19 >= 0 )
            {
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v150, &v144.Name.Buffer, &v145, &v145.Name.Buffer);
              *(_DWORD *)(&v144.Name.MaximumLength + 1) ^= (*((_BYTE *)&v144.Name.MaximumLength + 2) ^ (unsigned __int8)v150) & 1;
              v144.Name.Buffer = (wchar_t *)((__int64)v144.Name.Buffer << 12);
              *(_QWORD *)&v145.Name.Length <<= 12;
              v145.Name.Buffer = (wchar_t *)((__int64)v145.Name.Buffer << 12);
              *v6 = v144;
              v6[1] = v145;
              v19 = 0;
            }
          }
        }
        else
        {
          v19 = -1073741735;
        }
      }
      else
      {
        v19 = -1073741820;
      }
      v71 = Object;
      if ( Object )
        goto LABEL_462;
      return v19;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      v117 = 0;
      SectionInformation = ObReferenceObjectByHandleWithTag(
                             ProcessHandle,
                             0x1000u,
                             (POBJECT_TYPE)PsProcessType,
                             v9,
                             0x79517350u,
                             &Object,
                             0LL);
      if ( SectionInformation >= 0 )
      {
        LOBYTE(v117) = v139 == ProcessAllowedCpuSetsInformation;
        v119 = 8 * KeQueryCpuSetsProcess((__int64)Object, v196, v118, v117);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v119;
        if ( v119 >= (unsigned int)v5 )
          v119 = v5;
        memmove(v6, v196, v119);
      }
      return SectionInformation;
    case ProcessJobMemoryInformation:
      if ( ProcessInformationLength != 40 )
        return -1073741820;
      v74 = 0;
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
        v155 = (_OBJECT_NAME_INFORMATION)0LL;
        v156 = (_OBJECT_NAME_INFORMATION)0LL;
        *(_QWORD *)&v157.Name.Length = 0LL;
        if ( *((_QWORD *)Object + 118) )
        {
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v188);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, JobInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, v190, 0x98u, 0LL);
          KiUnstackDetachProcess((struct _KTHREAD *)v188, 0);
          v155.Name.Buffer = (wchar_t *)JobInformation[0];
          *(_QWORD *)&v156.Name.Length = JobInformation[1];
          *(_QWORD *)&v155.Name.Length = JobInformation[2];
          v75 = *(_QWORD *)&v157.Name.Length;
          if ( (v191 & 0x200000) != 0 )
            v75 = v193;
          *(_QWORD *)&v157.Name.Length = v75;
          Buffer = v156.Name.Buffer;
          if ( (v191 & 0x200) != 0 )
            Buffer = v192;
          v156.Name.Buffer = Buffer;
          *v6 = v155;
          v6[1] = v156;
          *(_QWORD *)&v6[2].Name.Length = *(_QWORD *)&v157.Name.Length;
          if ( ReturnLength )
            *ReturnLength = 40;
        }
        else
        {
          v74 = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v74;
      }
      return result;
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
      v19 = result;
      if ( result < 0 )
        return result;
      v71 = Object;
      LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 435) & 0x400) != 0;
      goto LABEL_462;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v115 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      SectionInformation = result;
      v124 = result;
      if ( result < 0 )
        return result;
      v53 = Object;
      v116 = ObReferenceProcessHandleTable(Object);
      if ( !v116 )
        goto LABEL_207;
      LOBYTE(v115) = (*(_BYTE *)(v116 + 44) & 0x10) != 0;
      *(_DWORD *)&v6->Name.Length = v115;
      goto LABEL_349;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, ProcessInformation, ProcessInformationLength, ReturnLength);
    case ProcessChildProcessInformation:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      DeviceMapInformation = 0;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v120 = KeGetCurrentThread()->ApcState.Process;
        Object = v120;
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
        v120 = (struct _KPROCESS *)Object;
      }
      v121 = PsReferencePrimaryToken(v120);
      v154[0] = v121;
      v6->Name.Length = 0;
      if ( (v120[2].ActiveProcessors.Bitmap[0] & 0x8000000000000LL) != 0 )
        HIBYTE(v6->Name.Length) = 1;
      if ( SeTokenIsNoChildProcessRestricted((__int64)v121) )
        LOBYTE(v6->Name.Length) = 1;
      if ( ReturnLength )
        *ReturnLength = 2;
      ObFastDereferenceObject((signed __int64 *)&v120[1].Affinity.Bitmap[5], v122);
      if ( ProcessHandle != (HANDLE)-1LL )
      {
        v114 = v120;
LABEL_437:
        ObfDereferenceObjectWithTag(v114, 0x79517350u);
      }
      return DeviceMapInformation;
    case ProcessHighGraphicsPriorityInformation:
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
      v19 = result;
      if ( result < 0 )
        return result;
      v71 = Object;
      LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 435) & 0x100000) != 0;
LABEL_462:
      ObfDereferenceObjectWithTag(v71, 0x79517350u);
      return v19;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( v7 == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
        || v7 == ProcessEnableLogging && ProcessInformationLength < 4 )
      {
        return -1073741820;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v19 = result;
      if ( result < 0 )
        return result;
      v39 = Object;
      LOBYTE(v6->Name.Length) = (*((_DWORD *)Object + 435) >> 26) & 3;
      if ( v139 == ProcessEnableLogging )
        *(_DWORD *)&v6->Name.Length |= (v39[435] >> 26) & 0xC;
      goto LABEL_446;
    default:
      return -1073741821;
  }
}
