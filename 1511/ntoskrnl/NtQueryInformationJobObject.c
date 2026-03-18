/*
 * XREFs of NtQueryInformationJobObject @ 0x1403E9B88
 * Callers:
 *     <none>
 * Callees:
 *     PsGetJobServerSilo @ 0x1400222FC (PsGetJobServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     KeIsSingleGroupAffinityEx @ 0x1400EFDEC (KeIsSingleGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoEnableIoQos @ 0x1401BD738 (IoEnableIoQos.c)
 *     IoQueryFlowInformation @ 0x1401BD7CC (IoQueryFlowInformation.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspUnlockJobListShared @ 0x1403E9B04 (PspUnlockJobListShared.c)
 *     PspLockJobListShared @ 0x1403E9B3C (PspLockJobListShared.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1403EAFE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspQueryRateControlHistory @ 0x1403EBB78 (PspQueryRateControlHistory.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1403EC7C8 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1403EC81C (PspLockJobMemoryLimitsShared.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x1403EC9A0 (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404B6734 (PspQueryJobHierarchyProcessIdList.c)
 *     ObGetRootDirectoryNameByPointer @ 0x140630A1C (ObGetRootDirectoryNameByPointer.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406421D4 (PspNotificationLimitRateControlToleranceField.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406421EC (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140642204 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRateControlLimitFlag @ 0x140642398 (PspRateControlLimitFlag.c)
 *     EtwTraceJobSetQuery @ 0x140660C64 (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  char *v7; // r10
  unsigned __int64 v8; // r15
  PULONG v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r8
  bool v13; // zf
  ULONG v14; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r14
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v18; // rcx
  __int64 v19; // rsi
  void *v20; // rcx
  const void *v21; // r12
  NTSTATUS JobHierarchyProcessIdList; // ebx
  char v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  int *v28; // rax
  unsigned __int16 v29; // bx
  unsigned __int16 v30; // dx
  unsigned __int64 v31; // rcx
  _QWORD *v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rbx
  unsigned int v35; // r15d
  unsigned __int16 v36; // cx
  unsigned __int16 v37; // r8
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  int v40; // ecx
  int v41; // r15d
  int v42; // r15d
  int v43; // r15d
  int v44; // r15d
  int v45; // r15d
  int v46; // r15d
  _DWORD *v47; // r14
  __int128 *v48; // r14
  struct _KTHREAD *v49; // rax
  __int64 v50; // rbx
  struct _ERESOURCE *v51; // rdx
  _DWORD *v52; // rcx
  struct _ERESOURCE *v53; // rcx
  struct _KTHREAD *v54; // rax
  __int64 v55; // rbx
  struct _ERESOURCE *v56; // r8
  _DWORD *SharedWaiters; // rdx
  int v58; // ecx
  __int64 JobSilo; // rax
  size_t v60; // rdx
  int v61; // r14d
  __int64 v62; // rax
  _DWORD *v63; // rcx
  __int64 v64; // rbx
  struct _KTHREAD *v65; // rax
  bool v66; // r14
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 ServerSiloForSilo; // rax
  struct _ERESOURCE *v70; // rdx
  _DWORD *v71; // rax
  __int64 v72; // rax
  __int64 *v73; // rcx
  _QWORD *v74; // r8
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  int v81; // edx
  _DWORD *v82; // rcx
  __int64 v83; // r8
  int *v84; // r9
  _BYTE *v85; // r10
  int v86; // eax
  _DWORD *v87; // r9
  __int64 v88; // rdx
  int v89; // edx
  int v90; // r13d
  int v91; // ebx
  _BYTE *v92; // r15
  __int64 v93; // r12
  __int64 v94; // rdx
  int v95; // eax
  _DWORD *v96; // rdx
  int v97; // edx
  _DWORD *v98; // rcx
  __int64 v99; // rax
  int v100; // r15d
  __int64 v101; // rcx
  __int64 v102; // rdx
  _DWORD *v103; // r8
  _DWORD *v104; // rax
  __int64 v105; // r8
  _DWORD *v106; // rax
  _DWORD *v107; // r8
  int v108; // edx
  __int64 v109; // rdx
  int v110; // ecx
  int v111; // r8d
  _BYTE v112[4]; // [rsp+80h] [rbp+0h] BYREF

  v5 = (unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = JobInformationLength;
  *(_DWORD *)(v5 + 76) = JobInformationLength;
  v7 = (char *)JobInformation;
  *(_QWORD *)(v5 + 40) = JobInformation;
  v8 = JobInformationClass;
  *(_DWORD *)(v5 + 108) = JobInformationClass;
  *(_QWORD *)(v5 + 168) = JobHandle;
  *(_QWORD *)(v5 + 96) = JobInformation;
  v10 = ReturnLength;
  *(_QWORD *)(v5 + 8) = ReturnLength;
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
  v11 = dword_1406A38BC[v8];
  *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v11;
  *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v11;
  if ( JobInformationLength == v11 )
    goto LABEL_23;
  if ( (unsigned int)v8 > 0x25 )
    return -1073741820;
  v12 = 0x2080004828LL;
  if ( !_bittest64(&v12, v8) || JobInformationLength < v11 )
    return -1073741820;
LABEL_22:
  v11 = JobInformationLength;
  *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = JobInformationLength;
  *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = JobInformationLength;
LABEL_23:
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v6 )
    {
      if ( ((dword_1406A396C[v8] - 1) & (unsigned int)v7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v7[v6] > MmUserProbeAddress || &v7[v6] < v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( ReturnLength )
    {
      v18 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = *v18;
    }
  }
  if ( JobHandle )
  {
    result = ObReferenceObjectByHandle(JobHandle, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, (PVOID *)(v5 + 144), 0LL);
    v19 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v19;
    if ( result < 0 )
      return result;
    goto LABEL_39;
  }
  v20 = (void *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v20;
  v19 = (__int64)v20;
  if ( v20 )
  {
    ObfReferenceObject(v20);
LABEL_39:
    v7 = *(char **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    v10 = *(PULONG *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    goto LABEL_42;
  }
  if ( (_DWORD)v8 != 31 )
    return -1073741790;
LABEL_42:
  *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v11;
  *(_BYTE *)v5 = 0;
  v21 = 0LL;
  JobHierarchyProcessIdList = 0;
  if ( (int)v8 <= 18 )
  {
    if ( (_DWORD)v8 == 18 )
    {
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = 7;
      *(_WORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x176) = 0;
      --CurrentThread->SpecialApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
      v40 = *(_DWORD *)(v19 + 1296);
      *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x174) = (v40 & 0x200) != 0;
      *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x175) = (v40 & 0x80000) != 0;
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = *(_QWORD *)(v19 + 944);
      PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
      v21 = (const void *)(v5 + 368);
      goto LABEL_56;
    }
    if ( (int)v8 <= 10 )
    {
      if ( (_DWORD)v8 == 10 )
      {
        PspLockJobListShared((__int64)CurrentThread);
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0;
        PspUnlockJobListShared((__int64)CurrentThread);
        v21 = (const void *)(v5 + 104);
        goto LABEL_56;
      }
      if ( (_DWORD)v8 != 1 )
      {
        switch ( (_DWORD)v8 )
        {
          case 2:
LABEL_61:
            memset((void *)(v5 + 864), 0, 0x98uLL);
            --CurrentThread->SpecialApcDisable;
            ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) = *(_DWORD *)(v19 + 256);
            *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x378) = *(_QWORD *)(v19 + 240);
            *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x380) = *(_QWORD *)(v19 + 248);
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x388) = *(_DWORD *)(v19 + 260);
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x398) = *(unsigned __int8 *)(v19 + 881);
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x39C) = *(_DWORD *)(v19 + 484);
            if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)(v19 + 264), (unsigned __int16 *)(v5 + 16)) )
              *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x390) = *(_QWORD *)(v19
                                                                                                + 8LL
                                                                                                * *(unsigned __int16 *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)
                                                                                                + 272);
            else
              *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x390) = 0LL;
            *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x360) = *(_QWORD *)(v19 + 224);
            *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x368) = *(_QWORD *)(v19 + 232);
            if ( (_DWORD)v8 == 9 )
            {
              PspLockJobMemoryLimitsShared(v19, 0LL);
              *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D0) = *(_QWORD *)(v19 + 576) << 12;
              *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D8) = *(_QWORD *)(v19 + 584) << 12;
              *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E8) = *(_QWORD *)(v19 + 608) << 12;
              *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3F0) = *(_QWORD *)(v19 + 592) << 12;
              PspUnlockJobMemoryLimitsShared(v19, 0LL);
              PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
              *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E0) = *(_QWORD *)(v19 + 600) << 12;
            }
            else
            {
              PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
            }
            v21 = (const void *)(v5 + 864);
            break;
          case 3:
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
            JobHierarchyProcessIdList = PspQueryJobHierarchyProcessIdList((PVOID)v19);
            v23 = 1;
            goto LABEL_234;
          case 4:
            --CurrentThread->SpecialApcDisable;
            ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *(_DWORD *)(v19 + 448);
            PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
            v21 = (const void *)(v5 + 120);
            break;
          case 5:
            memset((void *)(v5 + 176), 0, 0x28uLL);
            *(_BYTE *)v5 = 1;
            *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
            v24 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            *(_OWORD *)v24 = *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
            *(_OWORD *)(v24 + 16) = *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
            *(_QWORD *)(v24 + 32) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
            LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            v23 = *(_BYTE *)v5;
LABEL_235:
            v47 = *(_DWORD **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            goto LABEL_236;
          case 6:
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_DWORD *)(v19 + 452);
            v21 = (const void *)(v5 + 112);
            break;
          case 8:
            goto LABEL_135;
          case 9:
            goto LABEL_61;
          default:
            goto LABEL_149;
        }
LABEL_56:
        JobHierarchyProcessIdList = 0;
LABEL_57:
        v23 = 0;
LABEL_234:
        LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        goto LABEL_235;
      }
LABEL_135:
      PspQueryJobHierarchyAccountingInformation((PVOID)v19);
      v21 = (const void *)(v5 + 1248);
      goto LABEL_56;
    }
    if ( (_DWORD)v8 == 11 )
    {
      if ( v10 && (v6 & 1) == 0 )
      {
        v34 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        --*(_WORD *)(v34 + 486);
        ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
        v35 = 0;
        v36 = 0;
        v37 = *(_WORD *)(v19 + 264);
        if ( v37 )
        {
          v38 = (_QWORD *)(v19 + 272);
          do
          {
            if ( *v38 )
              *(_WORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x750 + 2LL * v35++) = v36;
            ++v36;
            ++v38;
          }
          while ( v36 < v37 );
        }
        PspUnlockJob(v19, v34);
        v39 = 2 * v35;
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 2 * v35;
        v23 = 1;
        *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
        if ( v39 > (unsigned int)v6 )
        {
          JobHierarchyProcessIdList = -1073741789;
          LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        }
        else
        {
          JobHierarchyProcessIdList = 0;
          LODWORD(v6) = v39;
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v39;
        }
        memmove(
          *(void **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
          (const void *)(v5 + 1872),
          (unsigned int)v6);
        goto LABEL_235;
      }
      goto LABEL_102;
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
            ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
            v25 = *(_QWORD *)(v19 + 1000);
            if ( !v25 || (v26 = *(_DWORD *)(v25 + 40), (v26 & 0x40) != 0) )
            {
              *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = *(_DWORD *)(v25 + 44);
              v27 = 1;
              if ( (v26 & 4) != 0 )
                v27 = 3;
              if ( (v26 & 1) != 0 )
                v27 |= 4u;
              if ( (v26 & 2) != 0 )
                v27 |= 8u;
              if ( (v26 & 0x20) != 0 )
                v27 |= 0x10u;
              *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v27;
            }
            PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
            v21 = (const void *)(v5 + 80);
          }
          else if ( (_DWORD)v8 == 16 )
          {
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C) = *(_DWORD *)(v19 + 884);
            v21 = (const void *)(v5 + 124);
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_QWORD *)(v19 + 472);
            v21 = (const void *)(v5 + 152);
          }
          goto LABEL_56;
        }
        if ( v10 && (v6 & 0xF) == 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
          if ( (*(_DWORD *)(v19 + 256) & 0x10) != 0 )
            v28 = (int *)(v19 + 264);
          else
            v28 = KeActiveProcessors;
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x430) = *(_OWORD *)v28;
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x440) = *((_OWORD *)v28 + 1);
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x450) = *((_OWORD *)v28 + 2);
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x460) = *((_OWORD *)v28 + 3);
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x470) = *((_OWORD *)v28 + 4);
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x480) = *((_OWORD *)v28 + 5);
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x490) = *((_OWORD *)v28 + 6);
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) - 16 + 0x4B0) = *((_OWORD *)v28 + 7);
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4B0) = *((_OWORD *)v28 + 8);
          *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C0) = *((_OWORD *)v28 + 9);
          *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4D0) = *((_QWORD *)v28 + 20);
          PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
          v29 = *(_WORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x430);
          memset((void *)(v5 + 1552), 0, 16LL * v29);
          v30 = 0;
          if ( v29 )
          {
            v31 = v5 + 1552;
            v32 = (_QWORD *)(v5 + 1080);
            do
            {
              *(_WORD *)(v31 + 8) = v30;
              *(_QWORD *)v31 = *v32;
              ++v30;
              ++v32;
              v31 += 16LL;
            }
            while ( v30 < v29 );
          }
          v33 = 16 * v29;
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v33;
          if ( (unsigned int)v6 >= v33 )
          {
            JobHierarchyProcessIdList = 0;
            LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
          else
          {
            JobHierarchyProcessIdList = -1073741789;
          }
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v6;
          v23 = 1;
          *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
          memmove(
            *(void **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
            (const void *)(v5 + 1552),
            (unsigned int)v6);
          goto LABEL_235;
        }
LABEL_102:
        JobHierarchyProcessIdList = -1073741811;
LABEL_233:
        v23 = 0;
        goto LABEL_234;
      }
LABEL_177:
      *(_WORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
      *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A) = 0;
      PspQueryJobHierarchyAccountingInformation((PVOID)v19);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x528);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x530);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x4E0);
      --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(v19 + 56), 1u);
      if ( (*(_DWORD *)(v19 + 1296) & 0x4008) != 0x4008 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v19 + 1296), 0xFFFFFFFB);
        v19 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      }
      PspLockJobMemoryLimitsShared(v19, 0LL);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = *(_QWORD *)(v19 + 968) << 12;
      PspUnlockJobMemoryLimitsShared(v19, 0LL);
      v71 = *(_DWORD **)(v19 + 976);
      if ( v71 )
      {
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = *v71;
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x104) = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 4LL);
        v72 = *(_QWORD *)(v19 + 976);
        v73 = (__int64 *)(v72 + 8);
        v74 = (_QWORD *)(v72 + 72);
        v75 = *(_QWORD *)(v72 + 72);
        if ( !v75 )
          v75 = *v73;
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = v75;
        v76 = v74[1];
        if ( !v76 )
          v76 = v73[1];
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = v76;
        v77 = v74[2];
        if ( !v77 )
          v77 = v73[2];
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = v77;
        v78 = v74[3];
        if ( !v78 )
          v78 = v73[3];
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = v78 << 12;
        v79 = v74[4];
        if ( !v79 )
          v79 = v73[4];
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = v79 << 12;
        v80 = 0LL;
        do
        {
          v82 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField(v5 + 256, v80);
          v86 = *(int *)((char *)v84 + v83);
          if ( v86 )
            *v85 = 1;
          else
            v86 = *v84;
          *v82 = v86;
          v80 = (unsigned int)(v81 + 1);
          v87 = v84 + 1;
        }
        while ( (int)v80 < 3 );
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0LL;
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 0LL;
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 0LL;
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 0LL;
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = 0LL;
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = 0LL;
        v88 = 0LL;
        do
        {
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField(v5 + 256, v88) = 0;
          v88 = (unsigned int)(v89 + 1);
        }
        while ( (int)v88 < 3 );
      }
      v90 = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
      v91 = 0;
      v92 = (_BYTE *)(v5 + 56);
      v93 = 15LL;
      do
      {
        v94 = *(_QWORD *)(v19 + 976);
        if ( v94 && (v95 = PspRateControlLimitFlag((unsigned int)v91, v94, v83, v87), (v95 & *v96) != 0) )
          v97 = v96[v93];
        else
          v97 = 1;
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v97;
        LOBYTE(v83) = *v92;
        PspQueryRateControlHistory(v19, v97, v83, v5 + 116, v91);
        if ( v91 )
        {
          if ( v91 == 1 )
            v98 = (_DWORD *)(v5 + 344);
          else
            v98 = (_DWORD *)(v5 + 328);
        }
        else
        {
          v98 = (_DWORD *)(v5 + 352);
        }
        *v98 = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74);
        ++v91;
        ++v93;
        ++v92;
      }
      while ( v91 < 3 );
      v99 = *(_QWORD *)(v19 + 976);
      v100 = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C);
      if ( v99 )
      {
        *(_DWORD *)(v99 + 4) = 0;
        memset((void *)(*(_QWORD *)(v19 + 976) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
      if ( v90 == 88 )
      {
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C8) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x108);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x110);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x118);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E0) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x120);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E8) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x128);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F0) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x130);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F8) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x138);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x300) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x150);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x308) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x140);
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x310) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x148);
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x314) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x14C);
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x100) & 0x78204;
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C4) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x104) & 0x78204;
        v21 = (const void *)(v5 + 704);
      }
      else if ( v90 == 80 )
      {
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x248) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x108);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x110);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x258) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x118);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x260) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x120);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x268) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x128);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x270) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x130);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x138);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x280) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x140);
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x288) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x148);
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28C) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x14C);
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x100) & 0x70204;
        *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x244) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                          + 0x104) & 0x70204;
        v21 = (const void *)(v5 + 576);
      }
      else
      {
        v21 = (const void *)(v5 + 256);
      }
      JobHierarchyProcessIdList = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery(
          v19,
          *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8),
          v100,
          v5 + 256,
          v5 + 72,
          0,
          1830);
      goto LABEL_57;
    }
LABEL_218:
    memset((void *)(v5 + 384), 0, 0x48uLL);
    --CurrentThread->SpecialApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
    v101 = *(_QWORD *)(v19 + 976);
    if ( v101 )
    {
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A8) = *(_DWORD *)v101;
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = *(_QWORD *)(v101 + 8);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = *(_QWORD *)(v101 + 16);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = *(_QWORD *)(v101 + 24);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B0) = *(_QWORD *)(v101 + 32) << 12;
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = *(_QWORD *)(v101 + 40) << 12;
      v102 = 0LL;
      v103 = (_DWORD *)(v101 + 60);
      do
      {
        v104 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v5 + 384, v102, v103);
        *v104 = *(_DWORD *)(v105 - 12);
        v106 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v5 + 384);
        *v106 = *v107;
        v102 = (unsigned int)(v108 + 1);
        v103 = v107 + 1;
      }
      while ( (int)v102 < 3 );
    }
    PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
    if ( (_DWORD)v6 == 48 )
    {
      memset((void *)(v5 + 464), 0, 0x30uLL);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D0) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x180);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D8) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x188);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x190);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E8) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x198);
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1A0);
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F4) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1A4);
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F8) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1A8) & 0x70204;
      v21 = (const void *)(v5 + 464);
    }
    else if ( (_DWORD)v6 == 56 )
    {
      memset((void *)(v5 + 512), 0, 0x38uLL);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x180);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x188);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x190);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1B0);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x198);
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1A0);
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x22C) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1A4);
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x1A8) & 0x78204;
      v21 = (const void *)(v5 + 512);
    }
    else
    {
      v21 = (const void *)(v5 + 384);
    }
    JobHierarchyProcessIdList = 0;
    v23 = *(_BYTE *)v5;
    goto LABEL_234;
  }
  if ( (int)v8 > 31 )
  {
    switch ( (_DWORD)v8 )
    {
      case ' ':
        --CurrentThread->SpecialApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)(v19 + 56), 1u);
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = 0LL;
        *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0LL;
        v109 = *(_QWORD *)(v19 + 1280);
        if ( v109 )
        {
          v110 = 1;
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 1;
          v111 = *(_DWORD *)(v109 + 48);
          if ( (v111 & 1) != 0 )
          {
            v110 = 3;
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 3;
            *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = *(_QWORD *)(v109 + 40);
          }
          if ( (v111 & 2) != 0 )
          {
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = v110 | 4;
            *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF4) = *(_BYTE *)(v109 + 64);
          }
        }
        PspUnlockJob(v19, *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
        v21 = (const void *)(v5 + 232);
        goto LABEL_56;
      case '!':
        goto LABEL_218;
      case '"':
        goto LABEL_177;
    }
    if ( (_DWORD)v8 != 36 )
    {
      switch ( (_DWORD)v8 )
      {
        case '%':
          JobSilo = PspGetJobSilo(v19);
          if ( JobSilo )
          {
            *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
            JobHierarchyProcessIdList = ObGetRootDirectoryNameByPointer(JobSilo, v5 + 128);
            if ( JobHierarchyProcessIdList >= 0 )
            {
              v23 = 1;
              *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
              v60 = *(unsigned __int16 *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
              v61 = v60 + 16;
              if ( v60 + 16 > v6 )
              {
                JobHierarchyProcessIdList = -1073741789;
                LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
              }
              else
              {
                v62 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                *(_QWORD *)(v62 + 8) = v62 + 16;
                *(_WORD *)v62 = v60;
                *(_WORD *)(v62 + 2) = v60;
                memmove(
                  (void *)(v62 + 16),
                  *(const void **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
                  v60);
                v63 = *(_DWORD **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                if ( v63 )
                  *v63 = v61;
                LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
              }
              ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88), 0);
              goto LABEL_235;
            }
            goto LABEL_233;
          }
          goto LABEL_151;
        case '&':
          PsGetJobServerSilo(v19, (_QWORD *)(v5 + 64));
          if ( !*(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
            goto LABEL_151;
          v54 = KeGetCurrentThread();
          --v54->SpecialApcDisable;
          v55 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v55 + 1248), 1u);
          v56 = *(struct _ERESOURCE **)(v55 + 1248);
          SharedWaiters = v56[1].SharedWaiters;
          v58 = SharedWaiters[28];
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xDC) = v58;
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = SharedWaiters[29];
          if ( v58 >= 4 )
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = -1;
          else
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = *SharedWaiters;
          v53 = v56;
          break;
        case '\'':
          PsGetJobServerSilo(v19, (_QWORD *)(v5 + 64));
          if ( !*(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
            goto LABEL_151;
          v49 = KeGetCurrentThread();
          --v49->SpecialApcDisable;
          v50 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v50 + 1248), 1u);
          v51 = *(struct _ERESOURCE **)(v50 + 1248);
          v52 = v51[1].SharedWaiters;
          if ( (int)v52[28] >= 4 )
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = -1;
          else
            *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = *v52;
          v53 = v51;
          break;
        default:
          goto LABEL_149;
      }
      ExReleaseResourceLite(v53);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(*(PVOID *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
      v21 = (const void *)(v5 + 216);
      goto LABEL_126;
    }
    v64 = PspGetJobSilo(v19);
    if ( v64 )
    {
      v65 = KeGetCurrentThread();
      --v65->SpecialApcDisable;
      v66 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v64 + 1248), 1u);
      *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x290) = *(_OWORD *)(v64 + 1232);
      v67 = *(_QWORD *)(v64 + 1248);
      v68 = *(_QWORD *)(v67 + 128);
      if ( v68 )
        *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A0) = *(_OWORD *)(v68 + 1232);
      else
        *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A0) = PspNullGuid;
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B4) = *(_DWORD *)(v67 + 120);
      *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0) = *(_DWORD *)(v64 + 1192);
      ServerSiloForSilo = PspGetServerSiloForSilo(v64);
      if ( ServerSiloForSilo )
        v66 = *(_QWORD *)(*(_QWORD *)(ServerSiloForSilo + 1248) + 136LL) != 0LL;
      *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B8) = v66;
      ExReleaseResourceLite(v70);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      v21 = (const void *)(v5 + 656);
      goto LABEL_126;
    }
LABEL_151:
    JobHierarchyProcessIdList = -1073740535;
    goto LABEL_233;
  }
  if ( (_DWORD)v8 == 31 )
  {
    v48 = (__int128 *)(v19 + 1232);
    if ( !v19 )
      v48 = &PspNullGuid;
    JobHierarchyProcessIdList = IoQueryFlowInformation((__int64)v48, (__int64)v7, v6, (__int64)v10);
    if ( JobHierarchyProcessIdList == -1073741822 )
    {
      JobHierarchyProcessIdList = IoEnableIoQos();
      if ( JobHierarchyProcessIdList >= 0 )
        JobHierarchyProcessIdList = IoQueryFlowInformation(
                                      (__int64)v48,
                                      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                                      v6,
                                      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    }
    v23 = 1;
    v47 = 0LL;
    LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    goto LABEL_236;
  }
  v41 = v8 - 19;
  if ( !v41 )
    goto LABEL_135;
  v42 = v41 - 1;
  if ( !v42 )
  {
    JobHierarchyProcessIdList = PspAllocateAndQueryNotificationChannel(CurrentThread, v19, v5 + 1024);
    LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v47 = *(_DWORD **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( JobHierarchyProcessIdList >= 0 )
    {
      v21 = (const void *)(v5 + 1024);
      JobHierarchyProcessIdList = 0;
      v23 = 0;
      goto LABEL_236;
    }
    goto LABEL_131;
  }
  v43 = v42 - 1;
  if ( !v43 )
  {
    *(_BYTE *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = (*(_DWORD *)(v19 + 1296) & 0x400) != 0;
    v21 = (const void *)(v5 + 28);
    goto LABEL_56;
  }
  v44 = v43 - 5;
  if ( v44 )
  {
    v45 = v44 - 2;
    if ( !v45 )
    {
      memset((void *)(v5 + 800), 0, 0x28uLL);
      PspLockJobMemoryLimitsShared(v19, CurrentThread);
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x328) = *(_QWORD *)(v19 + 608) << 12;
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x320) = *(_QWORD *)(v19 + 968) << 12;
      *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x330) = *(_QWORD *)(v19 + 1312) << 12;
      v19 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      PspUnlockJobMemoryLimitsShared(v19, CurrentThread);
      v21 = (const void *)(v5 + 800);
      goto LABEL_56;
    }
    v46 = v45 - 1;
    if ( v46 )
    {
      if ( v46 == 1 )
      {
        *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x348) = *(_OWORD *)(v19 + 1232);
        v21 = (const void *)(v5 + 840);
        goto LABEL_56;
      }
LABEL_149:
      JobHierarchyProcessIdList = -1073741821;
      goto LABEL_233;
    }
    *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_QWORD *)(v19 + 1312);
    v21 = (const void *)(v5 + 160);
LABEL_126:
    v19 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    goto LABEL_56;
  }
  JobHierarchyProcessIdList = PspQueryJobHierarchyInterferenceCount((PVOID)v19);
  LODWORD(v6) = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  v47 = *(_DWORD **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( JobHierarchyProcessIdList < 0 )
  {
    *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
LABEL_131:
    v23 = 0;
    goto LABEL_236;
  }
  v23 = 1;
  *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 8;
LABEL_236:
  if ( v19 )
    ObfDereferenceObject((PVOID)v19);
  if ( JobHierarchyProcessIdList >= 0 && !v23 )
    memmove(*(void **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28), v21, (unsigned int)v6);
  if ( v47 )
    *v47 = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  return JobHierarchyProcessIdList;
}
