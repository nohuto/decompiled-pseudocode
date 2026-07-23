/*
 * XREFs of NtQueryInformationJobObject @ 0x140465EA0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     KeIsSingleGroupAffinityEx @ 0x140076CFC (KeIsSingleGroupAffinityEx.c)
 *     PsGetJobServerSilo @ 0x140076F4C (PsGetJobServerSilo.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400860B0 (PsGetServerSiloServiceSessionId.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspIsSiloInServerSilo @ 0x14020F4F4 (PspIsSiloInServerSilo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140465DD0 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140465DE8 (PspNotificationLimitRateControlToleranceField.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspQueryRateControlHistory @ 0x14046804C (PspQueryRateControlHistory.c)
 *     PspRateControlLimitFlag @ 0x14046833C (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404683A0 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140468440 (PspLockJobMemoryLimitsShared.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x14046850C (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140468AE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404BED88 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobIoAttribution @ 0x1404D3AA0 (PspQueryJobIoAttribution.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspLockJobListShared @ 0x14068062C (PspLockJobListShared.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406806F8 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspUnlockJobListShared @ 0x140681084 (PspUnlockJobListShared.c)
 *     EtwTraceJobSetQuery @ 0x1406A1AA8 (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E63BC (ObGetSiloRootDirectoryPath.c)
 */

NTSTATUS __stdcall NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  char *v7; // r11
  unsigned __int64 v8; // r15
  unsigned __int32 v10; // edx
  unsigned int v11; // r14d
  bool v12; // zf
  ULONG v13; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r9
  __int64 v16; // rcx
  __int64 v17; // rsi
  void *v18; // rcx
  const void *v19; // r12
  NTSTATUS NotificationChannel; // edi
  __int64 v21; // r13
  unsigned int v22; // r15d
  int v23; // r14d
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  int *v28; // rax
  unsigned __int16 v29; // di
  unsigned __int16 v30; // dx
  unsigned __int64 v31; // rcx
  _QWORD *v32; // r8
  unsigned int v33; // eax
  unsigned int v34; // edi
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // r8
  _QWORD *v37; // rdx
  int v38; // eax
  int v39; // ecx
  int v40; // r15d
  int v41; // r15d
  int v42; // r15d
  int v43; // r15d
  int v44; // r15d
  int v45; // r15d
  int v46; // r15d
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // r15
  __int64 v51; // rax
  char *ServerSiloGlobals; // rax
  size_t v53; // r8
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  bool v58; // cc
  unsigned int *v59; // rax
  __int64 JobSilo; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // rax
  __int64 *v65; // rcx
  _QWORD *v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  int v73; // edx
  _DWORD *v74; // rcx
  int *v75; // r9
  _BYTE *v76; // r10
  __int64 v77; // r8
  int v78; // eax
  __int64 v79; // rdx
  int v80; // edx
  int v81; // r15d
  int v82; // r12d
  _BYTE *v83; // rdi
  __int64 v84; // r8
  int v85; // eax
  _DWORD *v86; // rdx
  int v87; // edx
  _DWORD *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rdi
  __int64 v92; // rcx
  int i; // edx
  _DWORD *v94; // rax
  __int64 v95; // r8
  int v96; // edx
  _DWORD *v97; // rax
  _DWORD *v98; // r8
  int v99; // edx
  int *v100; // rax
  size_t Size; // [rsp+80h] [rbp+0h] BYREF

  v5 = (unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = JobInformationLength;
  v7 = (char *)JobInformation;
  *(_QWORD *)(v5 + 16) = JobInformation;
  v8 = JobInformationClass;
  *(_DWORD *)(v5 + 88) = JobInformationClass;
  *(_QWORD *)(v5 + 104) = JobInformation;
  *(_QWORD *)(v5 + 64) = ReturnLength;
  v10 = JobInformationClass - 1;
  if ( v10 > 0x29 )
    return -1073741821;
  switch ( (_DWORD)v8 )
  {
    case 9:
      if ( JobInformationLength == 144 )
        goto LABEL_22;
      v12 = JobInformationLength == 152;
      goto LABEL_20;
    case 0xC:
      v13 = JobInformationLength - 48;
      goto LABEL_15;
    case 0xD:
      v13 = JobInformationLength - 80;
      goto LABEL_15;
    case 0x14:
      v13 = JobInformationLength - 40;
LABEL_15:
      v12 = (v13 & 0xFFFFFFF7) == 0;
      goto LABEL_20;
    case 0x1C:
      if ( JobInformationLength == 16 )
        goto LABEL_22;
      v12 = JobInformationLength == 40;
LABEL_20:
      if ( !v12 )
        return -1073741820;
      goto LABEL_22;
  }
  v11 = PspJobInfoLengths[v10];
  *(_DWORD *)v5 = v11;
  *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v11;
  if ( JobInformationLength == v11 )
    goto LABEL_23;
  if ( (unsigned int)v8 > 0x25 )
    return -1073741820;
  JobInformation = (PVOID)0x2080004828LL;
  if ( !_bittest64((const __int64 *)&JobInformation, v8) || JobInformationLength < v11 )
    return -1073741820;
LABEL_22:
  v11 = JobInformationLength;
  *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = JobInformationLength;
  *(_DWORD *)v5 = JobInformationLength;
LABEL_23:
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = CurrentThread;
  LOBYTE(JobInformation) = CurrentThread->PreviousMode;
  if ( (_BYTE)JobInformation )
  {
    if ( (_DWORD)v6 )
    {
      if ( ((PspJobInfoAlign[v10] - 1) & (unsigned int)v7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&v7[v6] > 0x7FFFFFFF0000LL || &v7[v6] < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ReturnLength )
    {
      v16 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v16 = *(_DWORD *)v16;
    }
  }
  if ( JobHandle )
  {
    result = ObReferenceObjectByHandleWithTag(
               JobHandle,
               4u,
               (POBJECT_TYPE)PsJobType,
               (KPROCESSOR_MODE)JobInformation,
               0x79517350u,
               (PVOID *)(v5 + 48),
               0LL);
    if ( result < 0 )
      return result;
    v17 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    goto LABEL_39;
  }
  v18 = (void *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v18;
  v17 = (__int64)v18;
  if ( v18 )
  {
    ObfReferenceObjectWithTag(v18, 0x79517350u);
LABEL_39:
    CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    v7 = *(char **)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    goto LABEL_42;
  }
  if ( (((_DWORD)v8 - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_42:
  *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v11;
  *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v11;
  *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  v19 = 0LL;
  NotificationChannel = 0;
  if ( (int)v8 > 18 )
  {
    if ( (int)v8 <= 32 )
    {
      if ( (_DWORD)v8 == 32 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 0LL;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 0LL;
        v47 = *(_QWORD *)(v17 + 1296);
        if ( v47 )
        {
          v48 = 1;
          *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 1;
          v49 = *(_DWORD *)(v47 + 48);
          if ( (v49 & 1) != 0 )
          {
            v48 = 3;
            *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 3;
            *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = *(_QWORD *)(v47 + 40);
          }
          if ( (v49 & 2) != 0 )
          {
            *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v48 | 4;
            *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xE4) = *(_BYTE *)(v47 + 64);
          }
        }
        PspUnlockJob(v17, *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        v19 = (const void *)(v5 + 216);
        goto LABEL_219;
      }
      v40 = v8 - 19;
      if ( !v40 )
        goto LABEL_134;
      v41 = v40 - 1;
      if ( !v41 )
      {
        NotificationChannel = PspAllocateAndQueryNotificationChannel(CurrentThread, v17, v5 + 1072);
        v22 = *(_DWORD *)v5;
        v23 = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( NotificationChannel >= 0 )
        {
          v19 = (const void *)(v5 + 1072);
          NotificationChannel = 0;
        }
        goto LABEL_222;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = (*(_DWORD *)(v17 + 1304) & 0x400) != 0;
        v19 = (const void *)(v5 + 40);
        goto LABEL_219;
      }
      v43 = v42 - 5;
      if ( !v43 )
      {
        NotificationChannel = PspQueryJobHierarchyInterferenceCount(v17, v7, JobInformation, CurrentThread);
        v22 = *(_DWORD *)v5;
        v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( NotificationChannel < 0 )
        {
          v23 = 0;
        }
        else
        {
          *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
          v23 = 8;
        }
        goto LABEL_222;
      }
      v44 = v43 - 2;
      if ( !v44 )
      {
        memset((void *)(v5 + 784), 0, 0x28uLL);
        PspLockJobMemoryLimitsShared(v17, *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x318) = *(_QWORD *)(v17 + 608) << 12;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x310) = *(_QWORD *)(v17 + 960) << 12;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x320) = *(_QWORD *)(v17 + 1320) << 12;
        v17 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        PspUnlockJobMemoryLimitsShared(v17, *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        v19 = (const void *)(v5 + 784);
        NotificationChannel = 0;
        goto LABEL_59;
      }
      v45 = v44 - 1;
      if ( !v45 )
      {
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_QWORD *)(v17 + 1320);
        v19 = (const void *)(v5 + 160);
        NotificationChannel = 0;
        v17 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        goto LABEL_59;
      }
      v46 = v45 - 1;
      if ( !v46 )
      {
        *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x300) = *(_OWORD *)(v17 + 1240);
        v19 = (const void *)(v5 + 768);
        goto LABEL_219;
      }
      if ( v46 != 1 )
      {
LABEL_148:
        NotificationChannel = -1073741821;
        goto LABEL_220;
      }
      NotificationChannel = -1073741822;
LABEL_220:
      v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v22 = *(_DWORD *)v5;
      goto LABEL_221;
    }
    if ( (_DWORD)v8 != 33 )
    {
      if ( (_DWORD)v8 != 34 )
      {
        switch ( (_DWORD)v8 )
        {
          case '$':
            JobSilo = PspGetJobSilo(v17);
            v61 = JobSilo;
            if ( JobSilo )
            {
              *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = *(_DWORD *)(JobSilo + 1236);
              v62 = *(_QWORD *)(JobSilo + 1064);
              if ( v62 )
                *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x174) = *(_DWORD *)(v62 + 1236);
              else
                *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x174) = 0;
              *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = *(_DWORD *)(v61 + 1224);
              *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x17C) = PspIsSiloInServerSilo(v61);
              v19 = (const void *)(v5 + 368);
              goto LABEL_219;
            }
            break;
          case '%':
            v56 = PspGetJobSilo(v17);
            if ( v56 )
            {
              *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
              NotificationChannel = ObGetSiloRootDirectoryPath(v56, v5 + 144);
              if ( NotificationChannel >= 0 )
              {
                *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
                v57 = *(unsigned __int16 *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
                v22 = v57 + 16;
                *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v57 + 16;
                v58 = v57 + 16 <= (unsigned int)v6;
                v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                if ( v58 )
                {
                  *(_QWORD *)(v21 + 8) = v21 + 16;
                  *(_WORD *)v21 = v57;
                  *(_WORD *)(v21 + 2) = v57;
                  memmove(
                    (void *)(v21 + 16),
                    *(const void **)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x98),
                    (unsigned __int16)v57);
                  v59 = *(unsigned int **)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
                  if ( v59 )
                    *v59 = v22;
                }
                else
                {
                  NotificationChannel = -1073741789;
                }
                ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x98), 0);
                goto LABEL_221;
              }
              goto LABEL_220;
            }
            break;
          case '&':
            PsGetJobServerSilo(v17, (__int64 *)(v5 + 80));
            v54 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
            if ( !PsIsHostSilo(v54) )
            {
              v55 = *(_QWORD *)(v54 + 1256);
              *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D4) = *(_DWORD *)(v55 + 992);
              *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D8) = *(_DWORD *)(v55 + 996);
              *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D0) = PsGetServerSiloServiceSessionId(v54);
              v19 = (const void *)(v5 + 464);
              goto LABEL_219;
            }
            break;
          case '\'':
            if ( v17 )
            {
              PsGetJobServerSilo(v17, (__int64 *)(v5 + 80));
              v51 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
            }
            else
            {
              v51 = xHalTimerWatchdogStop();
            }
            ServerSiloGlobals = (char *)PsGetServerSiloGlobals(v51);
            v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            memmove((void *)v21, ServerSiloGlobals + 1008, v53);
            *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
            v22 = *(_DWORD *)v5;
            v23 = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            goto LABEL_222;
          case '*':
            memset((void *)(v5 + 992), 0, 0x48uLL);
            v50 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            --*(_WORD *)(v50 + 486);
            ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
            NotificationChannel = PspQueryJobIoAttribution(v17, v5 + 992);
            PspUnlockJob(v17, v50);
            v19 = (const void *)(v5 + 992);
            goto LABEL_220;
          default:
            goto LABEL_148;
        }
        NotificationChannel = -1073740535;
        goto LABEL_220;
      }
      goto LABEL_170;
    }
LABEL_211:
    memset((void *)(v5 + 384), 0, 0x48uLL);
    v91 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    --*(_WORD *)(v91 + 486);
    ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
    v92 = *(_QWORD *)(v17 + 968);
    if ( v92 )
    {
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A8) = *(_DWORD *)v92;
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = *(_QWORD *)(v92 + 8);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = *(_QWORD *)(v92 + 16);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = *(_QWORD *)(v92 + 24);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B0) = *(_QWORD *)(v92 + 32) << 12;
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = *(_QWORD *)(v92 + 40) << 12;
      for ( i = 0; i < 3; i = v99 + 1 )
      {
        v94 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v5 + 384, i);
        *v94 = *(_DWORD *)(v95 - 12);
        v97 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v5 + 384, v96);
        *v97 = *v98;
      }
    }
    PspUnlockJob(v17, v91);
    if ( (_DWORD)v6 == 48 )
    {
      memset((void *)(v5 + 480), 0, 0x30uLL);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x180);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E8) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x188);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x190);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F8) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x198);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x1A0);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x204) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x1A4);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x208) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x1A8) & 0x70204;
      v19 = (const void *)(v5 + 480);
    }
    else if ( (_DWORD)v6 == 56 )
    {
      memset((void *)(v5 + 528), 0, 0x38uLL);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x180);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x188);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x220) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x190);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x228) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x1B0);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x230) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x198);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x238) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x1A0);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x23C) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x1A4);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x240) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x1A8) & 0x278204;
      v19 = (const void *)(v5 + 528);
    }
    else
    {
      v19 = (const void *)(v5 + 384);
    }
    goto LABEL_219;
  }
  if ( (_DWORD)v8 == 18 )
  {
    *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 7;
    *(_WORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x166) = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
    v39 = *(_DWORD *)(v17 + 1304);
    *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x164) = (v39 & 0x200) != 0;
    *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x165) = (v39 & 0x80000) != 0;
    *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = *(_QWORD *)(v17 + 936);
    PspUnlockJob(v17, *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    v19 = (const void *)(v5 + 352);
    goto LABEL_219;
  }
  if ( (int)v8 > 10 )
  {
    if ( (_DWORD)v8 == 11 )
    {
      if ( *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) && (v6 & 1) == 0 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
        v34 = 0;
        v35 = 0;
        v36 = *(_WORD *)(v17 + 264);
        if ( v36 )
        {
          v37 = (_QWORD *)(v17 + 272);
          do
          {
            if ( *v37 )
              *(_WORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x780 + 2LL * v34++) = v35;
            ++v35;
            ++v37;
          }
          while ( v35 < v36 );
        }
        PspUnlockJob(v17, *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        v38 = 2 * v34;
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 2 * v34;
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 2 * v34;
        *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
        v23 = 2 * v34;
        if ( 2 * v34 > (unsigned int)v6 )
        {
          NotificationChannel = -1073741789;
          v22 = *(_DWORD *)v5;
        }
        else
        {
          NotificationChannel = 0;
          v22 = v38;
          *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v38;
        }
        v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        memmove((void *)v21, (const void *)(v5 + 1920), v22);
        goto LABEL_222;
      }
LABEL_101:
      NotificationChannel = -1073741811;
      goto LABEL_220;
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
            ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
            v25 = *(_QWORD *)(v17 + 992);
            if ( !v25 || (v26 = *(_DWORD *)(v25 + 40), (v26 & 0x40) != 0) )
            {
              *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = *(_DWORD *)(v25 + 44);
              v27 = 1;
              if ( (v26 & 4) != 0 )
                v27 = 3;
              if ( (v26 & 1) != 0 )
                v27 |= 4u;
              if ( (v26 & 2) != 0 )
                v27 |= 8u;
              if ( (v26 & 0x20) != 0 )
                v27 |= 0x10u;
              *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v27;
            }
            PspUnlockJob(v17, *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
            v19 = (const void *)(v5 + 112);
          }
          else if ( (_DWORD)v8 == 16 )
          {
            *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x84) = *(_DWORD *)(v17 + 876);
            v19 = (const void *)(v5 + 132);
          }
          else
          {
            *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *(_QWORD *)(v17 + 472);
            v19 = (const void *)(v5 + 168);
          }
          goto LABEL_219;
        }
        if ( *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) && (v6 & 0xF) == 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
          if ( (*(_DWORD *)(v17 + 256) & 0x10) != 0 )
            v28 = (int *)(v17 + 264);
          else
            v28 = KeActiveProcessors;
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x460) = *(_OWORD *)v28;
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x470) = *((_OWORD *)v28 + 1);
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x480) = *((_OWORD *)v28 + 2);
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x490) = *((_OWORD *)v28 + 3);
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x4A0) = *((_OWORD *)v28 + 4);
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x4B0) = *((_OWORD *)v28 + 5);
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C0) = *((_OWORD *)v28 + 6);
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) - 16 + 0x4E0) = *((_OWORD *)v28 + 7);
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x4E0) = *((_OWORD *)v28 + 8);
          *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x4F0) = *((_OWORD *)v28 + 9);
          *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x500) = *((_QWORD *)v28 + 20);
          PspUnlockJob(v17, *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
          v29 = *(_WORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x460);
          memset((void *)(v5 + 1600), 0, 16LL * v29);
          v30 = 0;
          if ( v29 )
          {
            v31 = v5 + 1600;
            v32 = (_QWORD *)(v5 + 1128);
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
          *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v33;
          *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v33;
          if ( (unsigned int)v6 >= v33 )
          {
            NotificationChannel = 0;
            v22 = v33;
          }
          else
          {
            NotificationChannel = -1073741789;
            v22 = v6;
          }
          *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v22;
          *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
          v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          memmove((void *)v21, (const void *)(v5 + 1600), v22);
          v23 = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          goto LABEL_222;
        }
        goto LABEL_101;
      }
LABEL_170:
      *(_WORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
      *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x3A) = 0;
      PspQueryJobHierarchyAccountingInformation(v17, v5 + 1296, JobInformation, CurrentThread);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                        + 0x558);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x560);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x510);
      --*(_WORD *)(*(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 486LL);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v17 + 56), 1u);
      if ( (*(_DWORD *)(v17 + 1304) & 0x4008) != 0x4008 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v17 + 1304), 0xFFFFFFFB);
        v17 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x1C);
      }
      PspLockJobMemoryLimitsShared(v17, 0LL);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = *(_QWORD *)(v17 + 960) << 12;
      PspUnlockJobMemoryLimitsShared(v17, 0LL);
      v63 = *(_DWORD **)(v17 + 968);
      if ( v63 )
      {
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = *v63;
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xF4) = *(_DWORD *)(*(_QWORD *)(v17 + 968) + 4LL);
        v64 = *(_QWORD *)(v17 + 968);
        v65 = (__int64 *)(v64 + 8);
        v66 = (_QWORD *)(v64 + 72);
        v67 = *(_QWORD *)(v64 + 72);
        if ( !v67 )
          v67 = *v65;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = v67;
        v68 = v66[1];
        if ( !v68 )
          v68 = v65[1];
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = v68;
        v69 = v66[2];
        if ( !v69 )
          v69 = v65[2];
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = v69;
        v70 = v66[3];
        if ( !v70 )
          v70 = v65[3];
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = v70 << 12;
        v71 = v66[4];
        if ( !v71 )
          v71 = v65[4];
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = v71 << 12;
        v72 = 0LL;
        do
        {
          v74 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField(v5 + 240, v72);
          v78 = *(int *)((char *)v75 + v77);
          if ( v78 )
            *v76 = 1;
          else
            v78 = *v75;
          *v74 = v78;
          v72 = (unsigned int)(v73 + 1);
        }
        while ( (int)v72 < 3 );
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0LL;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0LL;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 0LL;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 0LL;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = 0LL;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 0LL;
        v79 = 0LL;
        do
        {
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField(v5 + 240, v79) = 0;
          v79 = (unsigned int)(v80 + 1);
        }
        while ( (int)v79 < 3 );
      }
      v81 = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
      v82 = 0;
      v83 = (_BYTE *)(v5 + 56);
      LODWORD(v84) = 60;
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 60LL;
      do
      {
        if ( *(_QWORD *)(v17 + 968) && (v85 = PspRateControlLimitFlag((unsigned int)v82), (v85 & *v86) != 0) )
          v87 = *(_DWORD *)((char *)v86 + v84);
        else
          v87 = 1;
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = v87;
        LOBYTE(v84) = *v83;
        PspQueryRateControlHistory(v17, v87, v84, v5 + 136, v82);
        if ( v82 )
        {
          if ( v82 == 1 )
            v88 = (_DWORD *)(v5 + 328);
          else
            v88 = (_DWORD *)(v5 + 312);
        }
        else
        {
          v88 = (_DWORD *)(v5 + 336);
        }
        *v88 = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
        ++v82;
        v84 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) + 4LL;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v84;
        ++v83;
      }
      while ( v82 < 3 );
      v89 = *(_QWORD *)(v17 + 968);
      v90 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      if ( v89 )
      {
        *(_DWORD *)(v89 + 4) = 0;
        memset((void *)(*(_QWORD *)(v17 + 968) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob(v17, v90);
      if ( (_DWORD)v6 == 88 )
      {
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A8) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0xF8);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B0) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x100);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2B8) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x108);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C0) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x110);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C8) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x118);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D0) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x120);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2D8) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x128);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E0) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x140);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2E8) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x130);
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F0) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x138);
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2F4) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x13C);
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A0) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0xF0) & 0x278204;
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x2A4) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0xF4) & 0x278204;
        v19 = (const void *)(v5 + 672);
      }
      else if ( (_DWORD)v6 == 80 )
      {
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x258) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0xF8);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x260) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x100);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x268) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x108);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x270) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x110);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x278) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x118);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x280) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x120);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x288) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x128);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x290) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x130);
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x298) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x138);
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x29C) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0x13C);
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0xF0) & 0x70204;
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x254) = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                           + 0xF4) & 0x70204;
        v19 = (const void *)(v5 + 592);
      }
      else
      {
        v19 = (const void *)(v5 + 240);
      }
      NotificationChannel = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery(v17, v81, v5 + 240, v5 + 92, 0, 1830);
      goto LABEL_220;
    }
    goto LABEL_211;
  }
  switch ( (_DWORD)v8 )
  {
    case 0xA:
      PspLockJobListShared(CurrentThread);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0;
      PspUnlockJobListShared(*(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
      v19 = (const void *)(v5 + 128);
      goto LABEL_219;
    case 1:
LABEL_134:
      PspQueryJobHierarchyAccountingInformation(v17, v5 + 1296, JobInformation, CurrentThread);
      v19 = (const void *)(v5 + 1296);
      goto LABEL_219;
    case 2:
LABEL_60:
      memset((void *)(v5 + 832), 0, 0x98uLL);
      v24 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      --*(_WORD *)(v24 + 486);
      ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x350) = *(_DWORD *)(v17 + 256);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x358) = *(_QWORD *)(v17 + 240);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x360) = *(_QWORD *)(v17 + 248);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x368) = *(_DWORD *)(v17 + 260);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x378) = *(unsigned __int8 *)(v17 + 873);
      *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x37C) = *(_DWORD *)(v17 + 484);
      if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)(v17 + 264), (unsigned __int16 *)(v5 + 72)) )
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) = *(_QWORD *)(v17
                                                                                           + 8LL
                                                                                           * *(unsigned __int16 *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x48)
                                                                                           + 272);
      else
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x370) = 0LL;
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x340) = *(_QWORD *)(v17 + 224);
      *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x348) = *(_QWORD *)(v17 + 232);
      if ( (_DWORD)v8 == 9 )
      {
        PspLockJobMemoryLimitsShared(v17, 0LL);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B0) = *(_QWORD *)(v17 + 576) << 12;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x3B8) = *(_QWORD *)(v17 + 584) << 12;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C8) = *(_QWORD *)(v17 + 608) << 12;
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D0) = *(_QWORD *)(v17 + 592) << 12;
        PspUnlockJobMemoryLimitsShared(v17, 0LL);
        PspUnlockJob(v17, v24);
        *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C0) = *(_QWORD *)(v17 + 600) << 12;
      }
      else
      {
        PspUnlockJob(v17, v24);
      }
      v19 = (const void *)(v5 + 832);
      goto LABEL_219;
  }
  if ( (_DWORD)v8 != 3 )
  {
    switch ( (_DWORD)v8 )
    {
      case 4:
        --CurrentThread->SpecialApcDisable;
        ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C) = *(_DWORD *)(v17 + 448);
        PspUnlockJob(v17, *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
        v19 = (const void *)(v5 + 124);
        break;
      case 5:
        memset((void *)(v5 + 176), 0, 0x28uLL);
        *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
        v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        *(_OWORD *)v21 = *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
        *(_OWORD *)(v21 + 16) = *(_OWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
        *(_QWORD *)(v21 + 32) = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
        v22 = *(_DWORD *)v5;
LABEL_221:
        v23 = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        goto LABEL_222;
      case 6:
        *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *(_DWORD *)(v17 + 452);
        v19 = (const void *)(v5 + 120);
        break;
      case 8:
        goto LABEL_134;
      case 9:
        goto LABEL_60;
      default:
        goto LABEL_148;
    }
LABEL_219:
    NotificationChannel = 0;
    goto LABEL_220;
  }
  *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
  NotificationChannel = PspQueryJobHierarchyProcessIdList(v17, v7, (unsigned int)v6, v5 + 28);
  *(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
LABEL_59:
  v23 = *(_DWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
  v22 = *(_DWORD *)v5;
  v21 = *(_QWORD *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_222:
  if ( v17 )
    ObfDereferenceObjectWithTag((PVOID)v17, 0x79517350u);
  if ( NotificationChannel >= 0 && !*(_BYTE *)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    memmove((void *)v21, v19, v22);
  v100 = *(int **)(((unsigned __int64)&Size & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  if ( v100 )
    *v100 = v23;
  return NotificationChannel;
}
