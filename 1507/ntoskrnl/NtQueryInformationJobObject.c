/*
 * XREFs of NtQueryInformationJobObject @ 0x1404139BC
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PspGetServerSiloForSilo @ 0x1400CEE80 (PspGetServerSiloForSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PsGetServerSiloState @ 0x140117518 (PsGetServerSiloState.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoEnableIoQos @ 0x1401F8FC0 (IoEnableIoQos.c)
 *     IoQueryFlowInformation @ 0x1401F9054 (IoQueryFlowInformation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140415378 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspReferenceJobSilo @ 0x140415668 (PspReferenceJobSilo.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140415AF0 (PspQueryJobHierarchyProcessIdList.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PspQueryRateControlHistory @ 0x140506D2C (PspQueryRateControlHistory.c)
 *     ObGetRootDirectoryNameByPointer @ 0x1406AEB94 (ObGetRootDirectoryNameByPointer.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x1406C469C (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406C4724 (PspNotificationLimitRateControlToleranceField.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406C473C (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406C4754 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRateControlLimitFlag @ 0x1406C4944 (PspRateControlLimitFlag.c)
 *     EtwTraceJobSetQuery @ 0x1406E3C4C (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r10
  char *v7; // r11
  unsigned __int64 v8; // r13
  PULONG v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r8
  bool v13; // zf
  ULONG v14; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v17; // rcx
  char *v18; // rsi
  char *v19; // rcx
  const void *v20; // r12
  NTSTATUS JobHierarchyInterferenceCount; // ebx
  char v22; // r14
  _OWORD *v23; // rax
  unsigned int v24; // r15d
  void *v25; // r13
  __int16 v26; // ax
  struct _ERESOURCE *v27; // r12
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // dx
  unsigned __int16 v30; // r8
  unsigned __int64 *v31; // rsi
  __int64 v32; // r9
  __int64 v33; // r13
  _QWORD *v34; // rdx
  __int16 v35; // ax
  __int16 v36; // ax
  __int64 v37; // rsi
  __int64 v38; // r9
  __int16 v39; // ax
  __int64 v40; // rax
  int v41; // edx
  int v42; // ecx
  __int16 v43; // ax
  int *v44; // rax
  __int16 v45; // ax
  unsigned __int16 v46; // bx
  unsigned __int16 v47; // dx
  unsigned __int64 v48; // rcx
  _QWORD *v49; // r8
  unsigned int v50; // ecx
  unsigned int v51; // ebx
  unsigned __int16 v52; // dx
  unsigned __int16 v53; // r9
  _QWORD *v54; // r8
  __int16 v55; // ax
  int v56; // ecx
  int v57; // ecx
  __int16 v58; // ax
  int v59; // r13d
  int v60; // r13d
  int v61; // r13d
  int v62; // r13d
  int v63; // r13d
  int v64; // r13d
  int v65; // r13d
  __int64 *v66; // r14
  unsigned __int64 *v67; // rsi
  __int64 v68; // r9
  __int64 v69; // r9
  __int64 v70; // r13
  _QWORD *v71; // rcx
  __int16 v72; // ax
  __int64 v73; // rdx
  int v74; // ecx
  int v75; // r8d
  __int16 v76; // ax
  __int64 v77; // rax
  __int64 v78; // r15
  struct _KTHREAD *v79; // rcx
  __int64 v80; // rcx
  _QWORD *v81; // rcx
  struct _KTHREAD *v82; // rcx
  __int16 v83; // ax
  __int64 v84; // rax
  __int64 v85; // r15
  struct _KTHREAD *v86; // rcx
  __int64 v87; // rcx
  _QWORD *v88; // rcx
  struct _KTHREAD *v89; // rcx
  __int16 v90; // ax
  __int64 v91; // rax
  __int64 v92; // r15
  struct _KTHREAD *v93; // rcx
  __int64 ServerSiloForSilo; // rcx
  __int64 v95; // rcx
  _DWORD *v96; // rcx
  struct _KTHREAD *v97; // rcx
  __int16 v98; // ax
  __int64 v99; // rax
  void *v100; // r13
  size_t v101; // rdx
  int v102; // r14d
  __int64 v103; // rax
  _DWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // r15
  struct _KTHREAD *v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  struct _KTHREAD *v110; // rcx
  __int16 v111; // ax
  __int64 v112; // r9
  unsigned __int64 *v113; // rsi
  __int64 v114; // r9
  __int64 v115; // r12
  _DWORD *v116; // rax
  __int64 v117; // rax
  __int64 *v118; // rcx
  _QWORD *v119; // r8
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rdx
  int v126; // edx
  _DWORD *v127; // rcx
  __int64 v128; // r8
  int *v129; // r9
  _BYTE *v130; // r10
  int v131; // eax
  _DWORD *v132; // r9
  __int64 v133; // rdx
  int v134; // edx
  __int64 v135; // r15
  int v136; // ebx
  _BYTE *v137; // r13
  __int64 v138; // r12
  __int64 v139; // rdx
  int v140; // eax
  _DWORD *v141; // rdx
  int v142; // edx
  _DWORD *v143; // rcx
  __int64 v144; // rax
  int v145; // r13d
  __int16 v146; // ax
  int v147; // eax
  struct _ERESOURCE *v148; // rbx
  __int64 v149; // rcx
  __int64 v150; // rdx
  _DWORD *v151; // r8
  _DWORD *v152; // rax
  __int64 v153; // r8
  _DWORD *v154; // rax
  _DWORD *v155; // r8
  int v156; // edx
  __int16 v157; // ax
  int v158; // eax
  _DWORD *v159; // rcx
  _BYTE v160[4]; // [rsp+80h] [rbp+0h] BYREF

  v5 = (unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = JobInformationLength;
  *(_DWORD *)(v5 + 40) = JobInformationLength;
  v7 = (char *)JobInformation;
  *(_QWORD *)(v5 + 8) = JobInformation;
  v8 = JobInformationClass;
  *(_DWORD *)(v5 + 124) = JobInformationClass;
  *(_QWORD *)(v5 + 64) = JobHandle;
  *(_QWORD *)(v5 + 88) = JobInformation;
  v10 = ReturnLength;
  *(_QWORD *)(v5 + 48) = ReturnLength;
  *(_QWORD *)(v5 + 72) = ReturnLength;
  if ( (unsigned int)(v8 - 1) > 0x28 )
    return -1073741821;
  switch ( (_DWORD)v8 )
  {
    case 9:
      if ( JobInformationLength == 144 )
        goto LABEL_22;
      v13 = JobInformationLength == 152;
      goto LABEL_20;
    case 0xC:
      v14 = JobInformationLength - 48;
      goto LABEL_15;
    case 0xD:
      v14 = JobInformationLength - 80;
      goto LABEL_15;
    case 0x14:
      v14 = JobInformationLength - 40;
LABEL_15:
      v13 = (v14 & 0xFFFFFFF7) == 0;
      goto LABEL_20;
    case 0x1C:
      if ( JobInformationLength == 16 )
        goto LABEL_22;
      v13 = JobInformationLength == 40;
LABEL_20:
      if ( !v13 )
        return -1073741820;
      goto LABEL_22;
  }
  v11 = dword_140723BAC[v8];
  *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v11;
  *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v11;
  if ( JobInformationLength == v11 )
    goto LABEL_23;
  if ( (unsigned int)v8 > 0x25 )
    return -1073741820;
  v12 = 0x2080004828LL;
  if ( !_bittest64(&v12, v8) || JobInformationLength < v11 )
    return -1073741820;
LABEL_22:
  v11 = JobInformationLength;
  *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = JobInformationLength;
  *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = JobInformationLength;
LABEL_23:
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = CurrentThread;
  LOBYTE(JobInformationLength) = CurrentThread->PreviousMode;
  if ( (_BYTE)JobInformationLength )
  {
    if ( (_DWORD)v6 )
    {
      if ( ((dword_140723AFC[v8] - 1) & (unsigned int)v7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v7[v6] > MmUserProbeAddress || &v7[v6] < v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( ReturnLength )
    {
      v17 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = *v17;
    }
  }
  if ( JobHandle )
  {
    result = ObReferenceObjectByHandle(
               JobHandle,
               4u,
               (POBJECT_TYPE)PsJobType,
               JobInformationLength,
               (PVOID *)(v5 + 112),
               0LL);
    v18 = *(char **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v18;
    if ( result < 0 )
      return result;
    goto LABEL_41;
  }
  v19 = (char *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v19;
  v18 = v19;
  if ( v19 )
  {
    ObfReferenceObject(v19);
LABEL_41:
    v10 = *(PULONG *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v7 = *(char **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    goto LABEL_42;
  }
  if ( (_DWORD)v8 != 31 )
    return -1073741790;
LABEL_42:
  *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v11;
  *(_BYTE *)v5 = 0;
  v20 = 0LL;
  JobHierarchyInterferenceCount = 0;
  if ( (int)v8 > 18 )
  {
    if ( (int)v8 <= 32 )
    {
      if ( (_DWORD)v8 == 32 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 0LL;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 0LL;
        v73 = *((_QWORD *)v18 + 160);
        if ( v73 )
        {
          v74 = 1;
          *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 1;
          v75 = *(_DWORD *)(v73 + 48);
          if ( (v75 & 1) != 0 )
          {
            v74 = 3;
            *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 3;
            *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = *(_QWORD *)(v73 + 40);
          }
          if ( (v75 & 2) != 0 )
          {
            *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = v74 | 4;
            *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12C) = *(_BYTE *)(v73 + 64);
          }
        }
        ExReleaseResourceLite((PERESOURCE)(v18 + 56));
        v76 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v76;
        if ( !v76
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v20 = (const void *)(v5 + 288);
        goto LABEL_56;
      }
      v59 = v8 - 19;
      if ( !v59 )
        goto LABEL_191;
      v60 = v59 - 1;
      if ( v60 )
      {
        v61 = v60 - 1;
        if ( !v61 )
        {
          *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = (*((_DWORD *)v18 + 324) & 0x400) != 0;
          v20 = (const void *)(v5 + 44);
          goto LABEL_56;
        }
        v62 = v61 - 5;
        if ( !v62 )
        {
          JobHierarchyInterferenceCount = PspQueryJobHierarchyInterferenceCount(v18, v7);
          v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          v25 = *(void **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          if ( JobHierarchyInterferenceCount < 0 )
          {
            *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
            v22 = 0;
          }
          else
          {
            v22 = 1;
            *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 8;
          }
          goto LABEL_325;
        }
        v63 = v62 - 2;
        if ( v63 )
        {
          v64 = v63 - 1;
          if ( v64 )
          {
            v65 = v64 - 1;
            if ( v65 )
            {
              if ( v65 == 1 )
              {
                v66 = (__int64 *)(v18 + 1232);
                if ( !v18 )
                  v66 = PspNullGuid;
                JobHierarchyInterferenceCount = IoQueryFlowInformation((__int64)v66, (__int64)v7, v6, (__int64)v10);
                if ( JobHierarchyInterferenceCount == -1073741822 )
                {
                  JobHierarchyInterferenceCount = IoEnableIoQos();
                  v25 = *(void **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  if ( JobHierarchyInterferenceCount >= 0 )
                    JobHierarchyInterferenceCount = IoQueryFlowInformation(
                                                      (__int64)v66,
                                                      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                                                      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                                                      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
                }
                else
                {
                  v25 = *(void **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                }
                v22 = 1;
                *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
                goto LABEL_324;
              }
              goto LABEL_208;
            }
            *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x320) = *((_OWORD *)v18 + 77);
            v20 = (const void *)(v5 + 800);
            goto LABEL_56;
          }
          *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *((_QWORD *)v18 + 164);
          v20 = (const void *)(v5 + 200);
        }
        else
        {
          memset((void *)(v5 + 816), 0, 0x28uLL);
          --CurrentThread->SpecialApcDisable;
          v67 = (unsigned __int64 *)(v18 + 1024);
          v70 = KeAbPreAcquire((ULONG_PTR)v67, 0LL, 0LL, v68);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v67, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v67, v70, (ULONG_PTR)v67, v69);
          if ( v70 )
            *(_BYTE *)(v70 + 26) |= 1u;
          v71 = *(_QWORD **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x338) = v71[76] << 12;
          *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x330) = v71[121] << 12;
          *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x340) = v71[164] << 12;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v67, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v67);
          KeAbPostRelease((ULONG_PTR)v67);
          v72 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v72;
          if ( !v72
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          v20 = (const void *)(v5 + 816);
        }
        goto LABEL_97;
      }
      JobHierarchyInterferenceCount = PspAllocateAndQueryNotificationChannel(CurrentThread, v18, v5 + 1024);
      if ( JobHierarchyInterferenceCount >= 0 )
      {
        v20 = (const void *)(v5 + 1024);
        goto LABEL_56;
      }
LABEL_322:
      v22 = 0;
      goto LABEL_323;
    }
    if ( (_DWORD)v8 != 33 )
    {
      if ( (_DWORD)v8 != 34 )
      {
        if ( (_DWORD)v8 != 36 )
        {
          switch ( (_DWORD)v8 )
          {
            case '%':
              JobHierarchyInterferenceCount = -1073740535;
              v99 = PspReferenceJobSilo(v18, CurrentThread);
              v100 = (void *)v99;
              *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v99;
              if ( v99 )
              {
                *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0;
                *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0LL;
                JobHierarchyInterferenceCount = ObGetRootDirectoryNameByPointer(v99, v5 + 152);
                if ( JobHierarchyInterferenceCount < 0 )
                {
                  v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                }
                else
                {
                  *(_BYTE *)v5 = 1;
                  *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
                  v101 = *(unsigned __int16 *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
                  v102 = v101 + 16;
                  if ( v101 + 16 > *(unsigned int *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
                  {
                    JobHierarchyInterferenceCount = -1073741789;
                    v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                  }
                  else
                  {
                    v103 = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                    *(_QWORD *)(v103 + 8) = v103 + 16;
                    *(_WORD *)v103 = v101;
                    *(_WORD *)(v103 + 2) = v101;
                    memmove(
                      (void *)(v103 + 16),
                      *(const void **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0),
                      v101);
                    v104 = *(_DWORD **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                    if ( v104 )
                      *v104 = v102;
                    v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                  }
                  ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0), 0);
                }
                PspDereferenceSiloObject(v100);
                v22 = *(_BYTE *)v5;
                v25 = *(void **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                goto LABEL_325;
              }
              goto LABEL_322;
            case '&':
              JobHierarchyInterferenceCount = -1073740535;
              v91 = PspReferenceJobSilo(v18, CurrentThread);
              v92 = v91;
              if ( !v91 )
                goto LABEL_322;
              v93 = KeGetCurrentThread();
              --v93->SpecialApcDisable;
              ExAcquireResourceSharedLite((PERESOURCE)(v91 + 48), 1u);
              ServerSiloForSilo = PspGetServerSiloForSilo(v92);
              if ( ServerSiloForSilo && (int)PsGetServerSiloState(ServerSiloForSilo) < 3 )
              {
                *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_QWORD *)(v92 + 24);
                v96 = *(_DWORD **)(v95 + 256);
                *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *v96;
                *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v96[28];
                *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = v96[29];
                JobHierarchyInterferenceCount = 0;
              }
              else
              {
                JobHierarchyInterferenceCount = -1073741816;
              }
              ExReleaseResourceLite((PERESOURCE)(v92 + 48));
              v97 = KeGetCurrentThread();
              v98 = v97->SpecialApcDisable + 1;
              v97->SpecialApcDisable = v98;
              if ( !v98 && ($CD287064E7C9F7953DE243E927CFCB99 *)v97->ApcState.ApcListHead[0].Flink != &v97->152 )
                KiCheckForKernelApcDelivery();
              PspDereferenceSiloObject((void *)v92);
              v20 = (const void *)(v5 + 176);
              break;
            case '\'':
              JobHierarchyInterferenceCount = -1073740535;
              v84 = PspReferenceJobSilo(v18, CurrentThread);
              v85 = v84;
              if ( !v84 )
                goto LABEL_322;
              v86 = KeGetCurrentThread();
              --v86->SpecialApcDisable;
              ExAcquireResourceSharedLite((PERESOURCE)(v84 + 48), 1u);
              v87 = PspGetServerSiloForSilo(v85);
              if ( v87 )
              {
                if ( (int)PsGetServerSiloState(v87) < 3 )
                {
                  *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *(_DWORD *)PsGetServerSiloGlobals(v88);
                  JobHierarchyInterferenceCount = 0;
                }
                else
                {
                  JobHierarchyInterferenceCount = -1073740720;
                }
              }
              else
              {
                JobHierarchyInterferenceCount = -1073741816;
              }
              ExReleaseResourceLite((PERESOURCE)(v85 + 48));
              v89 = KeGetCurrentThread();
              v90 = v89->SpecialApcDisable + 1;
              v89->SpecialApcDisable = v90;
              if ( !v90 && ($CD287064E7C9F7953DE243E927CFCB99 *)v89->ApcState.ApcListHead[0].Flink != &v89->152 )
                KiCheckForKernelApcDelivery();
              PspDereferenceSiloObject((void *)v85);
              v20 = (const void *)(v5 + 184);
              break;
            case ')':
              JobHierarchyInterferenceCount = -1073740535;
              v77 = PspReferenceJobSilo(v18, CurrentThread);
              v78 = v77;
              if ( !v77 )
                goto LABEL_322;
              v79 = KeGetCurrentThread();
              --v79->SpecialApcDisable;
              ExAcquireResourceSharedLite((PERESOURCE)(v77 + 48), 1u);
              v80 = PspGetServerSiloForSilo(v78);
              if ( v80 )
              {
                if ( (int)PsGetServerSiloState(v80) < 3 )
                {
                  *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *((_DWORD *)PsGetServerSiloGlobals(v81)
                                                                                         + 29);
                  JobHierarchyInterferenceCount = 0;
                }
                else
                {
                  JobHierarchyInterferenceCount = -1073740720;
                }
              }
              else
              {
                JobHierarchyInterferenceCount = -1073741816;
              }
              ExReleaseResourceLite((PERESOURCE)(v78 + 48));
              v82 = KeGetCurrentThread();
              v83 = v82->SpecialApcDisable + 1;
              v82->SpecialApcDisable = v83;
              if ( !v83 && ($CD287064E7C9F7953DE243E927CFCB99 *)v82->ApcState.ApcListHead[0].Flink != &v82->152 )
                KiCheckForKernelApcDelivery();
              PspDereferenceSiloObject((void *)v78);
              v20 = (const void *)(v5 + 128);
              break;
            default:
LABEL_208:
              JobHierarchyInterferenceCount = -1073741821;
              goto LABEL_322;
          }
          v18 = *(char **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          v22 = *(_BYTE *)v5;
LABEL_323:
          v25 = *(void **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_324:
          v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          goto LABEL_325;
        }
        JobHierarchyInterferenceCount = -1073740535;
        v105 = PspReferenceJobSilo(v18, CurrentThread);
        v106 = v105;
        if ( !v105 )
          goto LABEL_322;
        v107 = KeGetCurrentThread();
        --v107->SpecialApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)(v105 + 48), 1u);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = *(_QWORD *)(v106 + 24);
        v108 = *(_QWORD *)(v106 + 152);
        if ( v108 )
          *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = *(_QWORD *)(v108 + 24);
        else
          *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 0LL;
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xEC) = *(_DWORD *)(v106 + 176);
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = *(_DWORD *)(v106 + 180);
        v109 = PspGetServerSiloForSilo(v106);
        if ( !v109
          || (v13 = *(_QWORD *)(v109 + 256) == 0LL,
              *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 1,
              v13) )
        {
          *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0;
        }
        ExReleaseResourceLite((PERESOURCE)(v106 + 48));
        v110 = KeGetCurrentThread();
        v111 = v110->SpecialApcDisable + 1;
        v110->SpecialApcDisable = v111;
        if ( !v111 && ($CD287064E7C9F7953DE243E927CFCB99 *)v110->ApcState.ApcListHead[0].Flink != &v110->152 )
          KiCheckForKernelApcDelivery();
        PspDereferenceSiloObject((void *)v106);
        v20 = (const void *)(v5 + 216);
        goto LABEL_97;
      }
      goto LABEL_260;
    }
LABEL_310:
    memset((void *)(v5 + 432), 0, 0x48uLL);
    --CurrentThread->SpecialApcDisable;
    v148 = (struct _ERESOURCE *)(v18 + 56);
    ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
    v149 = *((_QWORD *)v18 + 122);
    if ( v149 )
    {
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D8) = *(_DWORD *)v149;
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B0) = *(_QWORD *)(v149 + 8);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B8) = *(_QWORD *)(v149 + 16);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C0) = *(_QWORD *)(v149 + 24);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) = *(_QWORD *)(v149 + 32) << 12;
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C8) = *(_QWORD *)(v149 + 40) << 12;
      v150 = 0LL;
      v151 = (_DWORD *)(v149 + 60);
      do
      {
        v152 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v5 + 432, v150, v151);
        *v152 = *(_DWORD *)(v153 - 12);
        v154 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v5 + 432);
        *v154 = *v155;
        v150 = (unsigned int)(v156 + 1);
        v151 = v155 + 1;
      }
      while ( (int)v150 < 3 );
      v148 = (struct _ERESOURCE *)(v18 + 56);
    }
    ExReleaseResourceLite(v148);
    v157 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v157;
    if ( !v157
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    v158 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    if ( v158 == 48 )
    {
      memset((void *)(v5 + 512), 0, 0x30uLL);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1B0);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1B8);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1C0);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1C8);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1D0);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x224) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1D4);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1D8) & 0x70204;
      v20 = (const void *)(v5 + 512);
    }
    else if ( v158 == 56 )
    {
      memset((void *)(v5 + 560), 0, 0x38uLL);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1B0);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1B8);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1C0);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1E0);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1C8);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x258) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1D0);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x25C) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1D4);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x260) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1D8) & 0x78204;
      v20 = (const void *)(v5 + 560);
    }
    else
    {
      v20 = (const void *)(v5 + 432);
    }
    goto LABEL_56;
  }
  if ( (_DWORD)v8 == 18 )
  {
    *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = 7;
    *(_WORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A6) = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
    v57 = *((_DWORD *)v18 + 324);
    *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A4) = (v57 & 0x200) != 0;
    *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A5) = (v57 & 0x80000) != 0;
    *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A8) = *((_QWORD *)v18 + 118);
    ExReleaseResourceLite((PERESOURCE)(v18 + 56));
    v58 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v58;
    if ( !v58
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    v20 = (const void *)(v5 + 416);
    goto LABEL_56;
  }
  if ( (int)v8 > 10 )
  {
    if ( (_DWORD)v8 == 11 )
    {
      if ( v10 )
      {
        v22 = 1;
        if ( (v6 & 1) == 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
          v51 = 0;
          v52 = 0;
          v53 = *((_WORD *)v18 + 132);
          if ( v53 )
          {
            v54 = v18 + 272;
            do
            {
              if ( *v54 )
                *(_WORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x750 + 2LL * v51++) = v52;
              ++v52;
              ++v54;
            }
            while ( v52 < v53 );
          }
          ExReleaseResourceLite((PERESOURCE)(v18 + 56));
          v55 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v55;
          if ( !v55
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          v56 = 2 * v51;
          *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 2 * v51;
          *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
          if ( 2 * v51 > *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
          {
            JobHierarchyInterferenceCount = -1073741789;
            v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          }
          else
          {
            JobHierarchyInterferenceCount = 0;
            v24 = v56;
            *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v56;
          }
          v25 = *(void **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          memmove(v25, (const void *)(v5 + 1872), v24);
          goto LABEL_325;
        }
      }
LABEL_137:
      JobHierarchyInterferenceCount = -1073741811;
      goto LABEL_322;
    }
    if ( (_DWORD)v8 != 12 )
    {
      if ( (_DWORD)v8 != 13 )
      {
        if ( (_DWORD)v8 != 14 )
        {
          if ( (_DWORD)v8 == 15 )
          {
            --CurrentThread->SpecialApcDisable;
            ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
            v40 = *((_QWORD *)v18 + 125);
            if ( !v40 || (v41 = *(_DWORD *)(v40 + 40), (v41 & 0x40) != 0) )
            {
              *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = *(_DWORD *)(v40 + 44);
              v42 = 1;
              if ( (v41 & 4) != 0 )
                v42 = 3;
              if ( (v41 & 1) != 0 )
                v42 |= 4u;
              if ( (v41 & 2) != 0 )
                v42 |= 8u;
              if ( (v41 & 0x20) != 0 )
                v42 |= 0x10u;
              *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v42;
            }
            ExReleaseResourceLite((PERESOURCE)(v18 + 56));
            v43 = CurrentThread->SpecialApcDisable + 1;
            CurrentThread->SpecialApcDisable = v43;
            if ( !v43
              && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            v20 = (const void *)(v5 + 96);
          }
          else if ( (_DWORD)v8 == 16 )
          {
            *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *((_DWORD *)v18 + 221);
            v20 = (const void *)(v5 + 120);
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *((_QWORD *)v18 + 59);
            v20 = (const void *)(v5 + 208);
          }
          goto LABEL_56;
        }
        if ( v10 && (v6 & 0xF) == 0 )
        {
          --CurrentThread->SpecialApcDisable;
          v22 = 1;
          ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
          if ( (*((_DWORD *)v18 + 64) & 0x10) != 0 )
            v44 = (int *)(v18 + 264);
          else
            v44 = KeActiveProcessors;
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x430) = *(_OWORD *)v44;
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x440) = *((_OWORD *)v44 + 1);
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x450) = *((_OWORD *)v44 + 2);
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x460) = *((_OWORD *)v44 + 3);
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x470) = *((_OWORD *)v44 + 4);
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x480) = *((_OWORD *)v44 + 5);
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x490) = *((_OWORD *)v44 + 6);
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) - 16 + 0x4B0) = *((_OWORD *)v44 + 7);
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4B0) = *((_OWORD *)v44 + 8);
          *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C0) = *((_OWORD *)v44 + 9);
          *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4D0) = *((_QWORD *)v44 + 20);
          ExReleaseResourceLite((PERESOURCE)(v18 + 56));
          v45 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v45;
          if ( !v45
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          v46 = *(_WORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x430);
          memset((void *)(v5 + 1552), 0, 16LL * v46);
          v47 = 0;
          if ( v46 )
          {
            v48 = v5 + 1552;
            v49 = (_QWORD *)(v5 + 1080);
            do
            {
              *(_WORD *)(v48 + 8) = v47;
              *(_QWORD *)v48 = *v49;
              ++v47;
              ++v49;
              v48 += 16LL;
            }
            while ( v47 < v46 );
          }
          v50 = 16 * v46;
          *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v50;
          if ( *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) >= v50 )
          {
            JobHierarchyInterferenceCount = 0;
            v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
          else
          {
            JobHierarchyInterferenceCount = -1073741789;
            v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          }
          *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v24;
          *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
          v25 = *(void **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          memmove(v25, (const void *)(v5 + 1552), v24);
          goto LABEL_325;
        }
        goto LABEL_137;
      }
LABEL_260:
      *(_WORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
      *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A) = 0;
      PspQueryJobHierarchyAccountingInformation(v18, v5 + 1248);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x528);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x530);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x4E0);
      --CurrentThread->SpecialApcDisable;
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v18 + 56;
      ExAcquireResourceExclusiveLite((PERESOURCE)(v18 + 56), 1u);
      if ( (*((_DWORD *)v18 + 324) & 0x4008) != 0x4008 )
      {
        _InterlockedAnd((volatile signed __int32 *)v18 + 324, 0xFFFFFFFB);
        v18 = *(char **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      }
      v113 = (unsigned __int64 *)(v18 + 1024);
      v115 = KeAbPreAcquire((ULONG_PTR)v113, 0LL, 0LL, v112);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v113, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v113, v115, (ULONG_PTR)v113, v114);
      if ( v115 )
        *(_BYTE *)(v115 + 26) |= 1u;
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20)
                                                                                        + 968LL) << 12;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v113, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v113);
      KeAbPostRelease((ULONG_PTR)v113);
      v18 = *(char **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v116 = (_DWORD *)*((_QWORD *)v18 + 122);
      if ( v116 )
      {
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = *v116;
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x134) = *(_DWORD *)(*((_QWORD *)v18 + 122) + 4LL);
        v117 = *((_QWORD *)v18 + 122);
        v118 = (__int64 *)(v117 + 8);
        v119 = (_QWORD *)(v117 + 72);
        v120 = *(_QWORD *)(v117 + 72);
        if ( !v120 )
          v120 = *v118;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = v120;
        v121 = v119[1];
        if ( !v121 )
          v121 = v118[1];
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = v121;
        v122 = v119[2];
        if ( !v122 )
          v122 = v118[2];
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = v122;
        v123 = v119[3];
        if ( !v123 )
          v123 = v118[3];
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = v123 << 12;
        v124 = v119[4];
        if ( !v124 )
          v124 = v118[4];
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = v124 << 12;
        v125 = 0LL;
        do
        {
          v127 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField(v5 + 304, v125);
          v131 = *(int *)((char *)v129 + v128);
          if ( v131 )
            *v130 = 1;
          else
            v131 = *v129;
          *v127 = v131;
          v125 = (unsigned int)(v126 + 1);
          v132 = v129 + 1;
        }
        while ( (int)v125 < 3 );
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 0LL;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = 0LL;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = 0LL;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 0LL;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = 0LL;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = 0LL;
        v133 = 0LL;
        do
        {
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField(v5 + 304, v133) = 0;
          v133 = (unsigned int)(v134 + 1);
        }
        while ( (int)v133 < 3 );
      }
      v135 = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8);
      v136 = 0;
      v137 = (_BYTE *)(v5 + 56);
      v138 = 15LL;
      do
      {
        v139 = *((_QWORD *)v18 + 122);
        if ( v139 && (v140 = PspRateControlLimitFlag((unsigned int)v136, v139, v128, v132), (v140 & *v141) != 0) )
          v142 = v141[v138];
        else
          v142 = 1;
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v142;
        LOBYTE(v128) = *v137;
        PspQueryRateControlHistory((_DWORD)v18, v142, v128, v5 + 140, v136);
        if ( v136 )
        {
          if ( v136 == 1 )
            v143 = (_DWORD *)(v5 + 392);
          else
            v143 = (_DWORD *)(v5 + 376);
        }
        else
        {
          v143 = (_DWORD *)(v5 + 400);
        }
        *v143 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C);
        ++v136;
        ++v138;
        ++v137;
      }
      while ( v136 < 3 );
      v144 = *((_QWORD *)v18 + 122);
      v145 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C);
      if ( v144 )
      {
        *(_DWORD *)(v144 + 4) = 0;
        memset((void *)(*((_QWORD *)v18 + 122) + 72LL), 0, 0x40uLL);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48));
      v146 = *(_WORD *)(v135 + 486) + 1;
      *(_WORD *)(v135 + 486) = v146;
      if ( !v146 && *(_QWORD *)(v135 + 152) != v135 + 152 )
        KiCheckForKernelApcDelivery();
      v147 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      if ( v147 == 88 )
      {
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C8) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x138);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x140);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x148);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E0) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x150);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E8) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x158);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F0) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x160);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F8) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x168);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x300) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x180);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x308) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x170);
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x310) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x178);
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x314) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x17C);
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x130) & 0x78204;
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C4) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x134) & 0x78204;
        v20 = (const void *)(v5 + 704);
      }
      else if ( v147 == 80 )
      {
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x138);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x280) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x140);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x288) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x148);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x290) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x150);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x298) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x158);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A0) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x160);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A8) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x168);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x170);
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B8) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x178);
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2BC) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x17C);
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x270) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x130) & 0x70204;
        *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x274) = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x134) & 0x70204;
        v20 = (const void *)(v5 + 624);
      }
      else
      {
        v20 = (const void *)(v5 + 304);
      }
      JobHierarchyInterferenceCount = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery(
          (_DWORD)v18,
          *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
          v145,
          v5 + 304,
          v5 + 80,
          0,
          1830);
      goto LABEL_57;
    }
    goto LABEL_310;
  }
  switch ( (_DWORD)v8 )
  {
    case 0xA:
      --CurrentThread->SpecialApcDisable;
      v37 = KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0LL, *(__int64 *)&JobInformationLength);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&PspJobListLock, v37, (ULONG_PTR)&PspJobListLock, v38);
      if ( v37 )
        *(_BYTE *)(v37 + 26) |= 1u;
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = 0;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
      KeAbPostRelease((ULONG_PTR)&PspJobListLock);
      v39 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v39;
      if ( !v39
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v20 = (const void *)(v5 + 132);
LABEL_97:
      v18 = *(char **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      goto LABEL_56;
    case 1:
LABEL_191:
      PspQueryJobHierarchyAccountingInformation(v18, v5 + 1248);
      v20 = (const void *)(v5 + 1248);
      goto LABEL_56;
    case 2:
LABEL_64:
      memset((void *)(v5 + 864), 0, 0x98uLL);
      --CurrentThread->SpecialApcDisable;
      v27 = (struct _ERESOURCE *)(v18 + 56);
      ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) = *((_DWORD *)v18 + 64);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x378) = *((_QWORD *)v18 + 30);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x380) = *((_QWORD *)v18 + 31);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x388) = *((_DWORD *)v18 + 65);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x398) = (unsigned __int8)v18[881];
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x39C) = *((_DWORD *)v18 + 121);
      v28 = 20;
      *(_WORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 20;
      v29 = 0;
      v30 = *((_WORD *)v18 + 132);
      if ( v30 )
      {
        do
        {
          if ( *(_QWORD *)&v18[8 * v29 + 272] )
          {
            if ( v28 != 20 )
              goto LABEL_71;
            v28 = v29;
            *(_WORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v29;
          }
          ++v29;
        }
        while ( v29 < v30 );
      }
      if ( v28 == 20 )
LABEL_71:
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x390) = 0LL;
      else
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x390) = *(_QWORD *)&v18[8 * v28 + 272];
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x360) = *((_QWORD *)v18 + 28);
      *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x368) = *((_QWORD *)v18 + 29);
      if ( (_DWORD)v8 == 9 )
      {
        v31 = (unsigned __int64 *)(v18 + 1024);
        v33 = KeAbPreAcquire((ULONG_PTR)v31, 0LL, 0LL, 20LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v31, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v31, v33, (ULONG_PTR)v31, v32);
        if ( v33 )
          *(_BYTE *)(v33 + 26) |= 1u;
        v34 = *(_QWORD **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D0) = v34[72] << 12;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D8) = v34[73] << 12;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E8) = v34[76] << 12;
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F0) = v34[74] << 12;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v31, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v31);
        KeAbPostRelease((ULONG_PTR)v31);
        ExReleaseResourceLite(v27);
        v35 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v35;
        if ( !v35
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v18 = *(char **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E0) = *((_QWORD *)v18 + 75) << 12;
      }
      else
      {
        ExReleaseResourceLite((PERESOURCE)(v18 + 56));
        v36 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v36;
        if ( !v36
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v20 = (const void *)(v5 + 864);
      goto LABEL_56;
    case 3:
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
      JobHierarchyInterferenceCount = PspQueryJobHierarchyProcessIdList(v18, v7, (unsigned int)v6, v5 + 24);
      v22 = 1;
      goto LABEL_323;
    case 4:
      --CurrentThread->SpecialApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
      *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *((_DWORD *)v18 + 112);
      ExReleaseResourceLite((PERESOURCE)(v18 + 56));
      v26 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v26;
      if ( !v26
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v20 = (const void *)(v5 + 144);
      goto LABEL_56;
  }
  if ( (_DWORD)v8 != 5 )
  {
    if ( (_DWORD)v8 != 6 )
    {
      if ( (_DWORD)v8 != 8 )
      {
        if ( (_DWORD)v8 != 9 )
          goto LABEL_208;
        goto LABEL_64;
      }
      goto LABEL_191;
    }
    *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *((_DWORD *)v18 + 113);
    v20 = (const void *)(v5 + 136);
LABEL_56:
    JobHierarchyInterferenceCount = 0;
LABEL_57:
    v22 = 0;
    goto LABEL_323;
  }
  memset((void *)(v5 + 248), 0, 0x28uLL);
  *(_BYTE *)v5 = 1;
  *(_BYTE *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
  v23 = *(_OWORD **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *v23 = *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8);
  v23[1] = *(_OWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108);
  *((_QWORD *)v23 + 4) = *(_QWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118);
  v24 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  v25 = v23;
  v22 = *(_BYTE *)v5;
LABEL_325:
  if ( v18 )
    ObfDereferenceObject(v18);
  if ( JobHierarchyInterferenceCount >= 0 && !v22 )
    memmove(v25, v20, v24);
  v159 = *(_DWORD **)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( v159 )
    *v159 = *(_DWORD *)(((unsigned __int64)v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  return JobHierarchyInterferenceCount;
}
