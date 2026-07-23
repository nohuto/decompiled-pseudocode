/*
 * XREFs of NtSetInformationThread @ 0x1404F1560
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     KeSetIdealProcessorThread @ 0x14007064C (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140070694 (KeSetIdealProcessorThreadByNumber.c)
 *     PsSetIoPriorityThread @ 0x140071C90 (PsSetIoPriorityThread.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     KeSetBasePriorityThread @ 0x14007EE14 (KeSetBasePriorityThread.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     KeSetLegacyAffinityThread @ 0x1400C8768 (KeSetLegacyAffinityThread.c)
 *     PsImpersonateContainerOfThread @ 0x1400CF4D0 (PsImpersonateContainerOfThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D0900 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     MmGetMinWsPagePriority @ 0x1400D1BB0 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     PspRevertContainerImpersonation @ 0x1400D1BC0 (PspRevertContainerImpersonation.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     KeVerifyGroupAffinity @ 0x140133128 (KeVerifyGroupAffinity.c)
 *     KeSetAffinityThread @ 0x140134874 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401D2D88 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x1401D6ADC (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401D7670 (KeSetSelectedCpuSetsThread.c)
 *     PspAttachThreadToUmsCompletionList @ 0x14020F1C8 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x14020F318 (PspDetachThreadFromUmsCompletionList.c)
 *     PspLockThreadSecurityExclusive @ 0x14020F33C (PspLockThreadSecurityExclusive.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14020F394 (PspUnlockThreadSecurityExclusive.c)
 *     EtwTracePriority @ 0x140225E3C (EtwTracePriority.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     PsLookupThreadByThreadId @ 0x14041F6B0 (PsLookupThreadByThreadId.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     PspWriteTebIdealProcessor @ 0x14045836C (PspWriteTebIdealProcessor.c)
 *     RtlTestProtectedAccess @ 0x1404A7060 (RtlTestProtectedAccess.c)
 *     KeSetDisableBoostThread @ 0x1404D2008 (KeSetDisableBoostThread.c)
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     PspWow64SetContextThread @ 0x1404FC310 (PspWow64SetContextThread.c)
 *     SeCheckPrivilegedObject @ 0x140547ABC (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x14064FCA4 (KeEnableProfiling.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v8; // r12
  int v9; // eax
  int v10; // edi
  NTSTATUS result; // eax
  struct _KTHREAD *v12; // rax
  unsigned __int64 v13; // rbx
  NTSTATUS v14; // esi
  PETHREAD v15; // rbx
  PETHREAD v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  PETHREAD v19; // rdx
  signed __int32 v20; // eax
  unsigned __int32 v21; // r8d
  int v22; // r8d
  PETHREAD v23; // rbx
  PETHREAD v24; // rcx
  PVOID v25; // rbx
  int v26; // ebx
  PETHREAD v27; // rdi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rsi
  PETHREAD v30; // rdi
  int v31; // esi
  PETHREAD v32; // rbx
  _KPROCESS *Process; // r8
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  LONG v37; // edx
  HANDLE v38; // rbx
  NTSTATUS v39; // edi
  PETHREAD v40; // r14
  _KPROCESS *v41; // r15
  unsigned int v42; // r13d
  NTSTATUS v43; // r12d
  PETHREAD v44; // rsi
  _KPROCESS *v45; // rsi
  struct _EX_RUNDOWN_REF *i; // rdx
  __int64 NextProcessThread; // rax
  struct _EX_RUNDOWN_REF *v48; // rbx
  unsigned __int64 Count; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned int v55; // ebx
  UCHAR v56; // dl
  PETHREAD v57; // rbx
  NTSTATUS v58; // edi
  struct _EX_RUNDOWN_REF *v59; // rdi
  NTSTATUS v60; // ebx
  KPRIORITY v61; // ebx
  _QWORD *ServerSiloGlobals; // rax
  __int64 v63; // rdx
  NTSTATUS v64; // edi
  _KPROCESS *v65; // r15
  unsigned __int64 v66; // rbx
  PETHREAD v67; // rsi
  int v68; // esi
  NTSTATUS v69; // ebx
  PVOID v70; // rcx
  int v71; // ebx
  char v72; // bl
  __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  struct _KTHREAD *v75; // rbx
  PVOID v77; // rbx
  __int64 v78; // rdx
  unsigned int v79; // ebx
  NTSTATUS v80; // ebx
  _QWORD *v81; // r12
  KPROCESSOR_MODE v82; // r13
  _PROCESSOR_NUMBER v83; // eax
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  unsigned __int16 v86; // bx
  char *PoolWithTag; // rax
  void *v88; // rax
  PETHREAD v89; // rbx
  int v90; // ebx
  PETHREAD Thread; // [rsp+40h] [rbp-228h] BYREF
  NTSTATUS v92; // [rsp+48h] [rbp-220h]
  char v93; // [rsp+4Ch] [rbp-21Ch]
  char v94; // [rsp+4Dh] [rbp-21Bh]
  int v95; // [rsp+50h] [rbp-218h]
  KPROCESSOR_MODE v96; // [rsp+55h] [rbp-213h]
  char v97; // [rsp+57h] [rbp-211h]
  LONG Increment; // [rsp+58h] [rbp-210h]
  _PROCESSOR_NUMBER v99; // [rsp+5Ch] [rbp-20Ch] BYREF
  _QWORD *v100; // [rsp+60h] [rbp-208h]
  HANDLE v101; // [rsp+68h] [rbp-200h]
  int v102; // [rsp+70h] [rbp-1F8h]
  unsigned int v103; // [rsp+74h] [rbp-1F4h]
  PVOID P; // [rsp+78h] [rbp-1F0h]
  struct _KTHREAD *v105; // [rsp+80h] [rbp-1E8h]
  PVOID v106; // [rsp+88h] [rbp-1E0h] BYREF
  PETHREAD v107[2]; // [rsp+90h] [rbp-1D8h] BYREF
  __int128 v108; // [rsp+A0h] [rbp-1C8h]
  unsigned __int64 v109; // [rsp+B0h] [rbp-1B8h]
  KPRIORITY v110; // [rsp+B8h] [rbp-1B0h]
  unsigned int v111; // [rsp+BCh] [rbp-1ACh]
  int v112; // [rsp+C0h] [rbp-1A8h]
  int v113; // [rsp+C4h] [rbp-1A4h]
  int v114; // [rsp+C8h] [rbp-1A0h]
  int v115; // [rsp+CCh] [rbp-19Ch]
  int v116; // [rsp+D0h] [rbp-198h]
  HANDLE Handle; // [rsp+E8h] [rbp-180h]
  PVOID Object; // [rsp+F0h] [rbp-178h] BYREF
  void *Src[2]; // [rsp+100h] [rbp-168h]
  int v120; // [rsp+110h] [rbp-158h]
  __int128 v121; // [rsp+120h] [rbp-148h]
  __int128 v122; // [rsp+130h] [rbp-138h] BYREF
  __int64 v123; // [rsp+140h] [rbp-128h]
  __int64 v124; // [rsp+148h] [rbp-120h]
  unsigned __int64 v125; // [rsp+150h] [rbp-118h]
  HANDLE v126; // [rsp+158h] [rbp-110h]
  unsigned __int64 v127; // [rsp+160h] [rbp-108h]
  HANDLE v128; // [rsp+168h] [rbp-100h]
  __int128 v129; // [rsp+170h] [rbp-F8h] BYREF
  char v130[160]; // [rsp+180h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  v101 = ThreadHandle;
  CurrentThread = KeGetCurrentThread();
  v105 = CurrentThread;
  v8 = CurrentThread->gap0[10];
  v96 = v8;
  if ( v8 )
  {
    if ( ThreadInformationClass < ThreadEnableAlignmentFaultFixup && ThreadInformationClass >= ThreadImpersonationToken
      || ThreadInformationClass == ThreadPagePriority
      || ThreadInformationClass > ThreadNameInformation )
    {
LABEL_4:
      v9 = 4;
    }
    else
    {
      switch ( ThreadInformationClass )
      {
        case ThreadAffinityMask:
        case ThreadGroupInformation:
        case ThreadUmsInformation:
        case ThreadCpuAccountingInformation:
        case ThreadNameInformation:
          v9 = 8;
          break;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v9 = 1;
          break;
        default:
          goto LABEL_4;
      }
    }
    v95 = v9;
    if ( ThreadInformationLength )
    {
      if ( ((v9 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + ThreadInformationLength > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + ThreadInformationLength < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  switch ( ThreadInformationClass )
  {
    case ThreadImpersonationToken:
      if ( ThreadInformationLength == 8 )
      {
        Handle = *(HANDLE *)ThreadInformation;
        v10 = 0;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   128,
                   (__int64)PsThreadType,
                   v8,
                   2035381072,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v12 = KeGetCurrentThread();
          if ( Handle )
          {
            v10 = ObReferenceObjectByHandle(
                    Handle,
                    4u,
                    (POBJECT_TYPE)SeTokenObjectType,
                    v12->PreviousMode,
                    &Object,
                    0LL);
            if ( v10 >= 0 )
            {
              v25 = Object;
              if ( *((_DWORD *)Object + 48) == 2 )
              {
                v10 = PsImpersonateClient(Thread, Object, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Object + 49));
                ObfDereferenceObject(v25);
              }
              else
              {
                ObfDereferenceObject(Object);
                v10 = -1073741656;
              }
            }
          }
          else
          {
            PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
          }
LABEL_22:
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v10;
        }
        return result;
      }
      return -1073741820;
    case ThreadPagePriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v17 = *(_DWORD *)ThreadInformation;
      v103 = v17;
      if ( v17 > (unsigned int)MmGetDefaultPagePriority() || v17 < (unsigned int)MmGetMinWsPagePriority() )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 2035381072,
                 &Thread,
                 0LL,
                 0LL);
      v92 = result;
      if ( result >= 0 )
      {
        v18 = v17 << 12;
        v19 = Thread;
        v20 = *((_DWORD *)&Thread[1].SwapListEntry + 2);
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v19[1].SwapListEntry + 2,
                  v18 | v20 & 0xFFFF8FFF,
                  v20);
        }
        while ( v20 != v21 );
        v22 = (v21 >> 12) & 7;
        v23 = Thread;
        if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
          EtwTracePriority((__int64)Thread, 0x533u, v22, v103, 0LL);
        v24 = v23;
LABEL_48:
        ObfDereferenceObjectWithTag(v24, 0x79517350u);
        return 0;
      }
      break;
    case ThreadWorkOnBehalfTicket:
      if ( ThreadHandle == (HANDLE)-2LL )
      {
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v13 = *(_QWORD *)ThreadInformation;
        v128 = *(HANDLE *)ThreadInformation;
        v14 = ObpReferenceObjectByHandleWithTag(
                0xFFFFFFFFFFFFFFFEuLL,
                1024,
                (__int64)PsThreadType,
                v8,
                2035381072,
                &Thread,
                0LL,
                0LL);
        if ( v14 < 0 )
          return v14;
        v107[1] = 0LL;
        if ( v13 )
        {
          v106 = (PVOID)(PspWorkOnBehalfEncodingKey ^ v13);
          v14 = PsLookupThreadByThreadId((HANDLE)(int)(PspWorkOnBehalfEncodingKey ^ v13), v107);
          v15 = v107[0];
          if ( v14 >= 0 )
          {
            if ( v107[0][1].Header.LockNV == HIDWORD(v106) )
            {
              v14 = 0;
            }
            else
            {
              ObfDereferenceObject(v107[0]);
              v14 = -1073741275;
            }
          }
          if ( v14 >= 0 )
          {
            PspRevertContainerImpersonation((__int64)CurrentThread);
            PsImpersonateContainerOfThread(v15);
            ObfDereferenceObject(v15);
          }
        }
        else
        {
          PspRevertContainerImpersonation((__int64)CurrentThread);
        }
        v16 = Thread;
LABEL_37:
        ObfDereferenceObjectWithTag(v16, 0x79517350u);
        return v14;
      }
      return -1073741811;
    default:
      switch ( ThreadInformationClass )
      {
        case ThreadPriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v61 = *(_DWORD *)ThreadInformation;
          v110 = v61;
          if ( (unsigned int)(v61 - 1) > 0x1E )
            return -1073741811;
          if ( v61 >= 16
            && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                   SeIncreaseBasePriorityPrivilege,
                                   ThreadHandle,
                                   1024LL,
                                   v8) )
          {
            return -1073741727;
          }
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x400u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result < 0 )
            return result;
          KeSetPriorityThread(Thread, v61);
LABEL_131:
          v24 = Thread;
          goto LABEL_48;
        case ThreadBasePriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v31 = *(_DWORD *)ThreadInformation;
          Increment = *(_DWORD *)ThreadInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     1024,
                     (__int64)PsThreadType,
                     v8,
                     2035381072,
                     &Thread,
                     0LL,
                     0LL);
          v92 = result;
          if ( result < 0 )
            return result;
          v32 = Thread;
          Process = Thread->Process;
          v34 = (unsigned int)(v31 + 16);
          if ( (unsigned int)v34 > 0x20 || (v35 = 0x10007C001LL, !_bittest64(&v35, v34)) )
          {
            ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
            if ( v63 != ServerSiloGlobals[108] && HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 4 )
            {
              v14 = -1073741811;
LABEL_77:
              v16 = v32;
              goto LABEL_37;
            }
          }
          v36 = Process[1].Affinity.Bitmap[16];
          if ( v36 && (*(_DWORD *)(v36 + 848) & 0x20) != 0 && HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 4 )
          {
            v37 = Increment;
            if ( Increment > 0 )
            {
              v32 = Thread;
              goto LABEL_76;
            }
          }
          else
          {
            v37 = Increment;
          }
          v32 = Thread;
          KeSetBasePriorityThread(Thread, v37);
LABEL_76:
          v14 = v92;
          goto LABEL_77;
        case ThreadAffinityMask:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          v38 = *(HANDLE *)ThreadInformation;
          *(_QWORD *)&v129 = v38;
          if ( !v38 )
            return -1073741811;
          v39 = 0;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x400u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result >= 0 )
          {
            v40 = Thread;
            v41 = Thread->Process;
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v41[1].Header.WaitListHead) )
            {
              if ( !KeSetLegacyAffinityThread((__int64)v40, (__int64)v38) )
                v39 = -1073741811;
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v41[1].Header.WaitListHead);
            }
            else
            {
              v39 = -1073741558;
            }
            ObfDereferenceObjectWithTag(v40, 0x79517350u);
            return v39;
          }
          return result;
        case ThreadEnableAlignmentFaultFixup:
          if ( ThreadInformationLength != 1 )
            return -1073741820;
          v72 = *(_BYTE *)ThreadInformation;
          v97 = *(_BYTE *)ThreadInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          v92 = result;
          if ( result < 0 )
            return result;
          if ( v72 )
            _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 0);
          else
            _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0);
          goto LABEL_131;
        case ThreadQuerySetWin32StartAddress:
          return -1073741811;
        case ThreadZeroTlsCell:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v42 = *(_DWORD *)ThreadInformation;
          v102 = *(_DWORD *)ThreadInformation;
          result = ObReferenceObjectByHandleWithTag(
                     v101,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          v43 = result;
          v92 = result;
          if ( result < 0 )
            return result;
          v44 = Thread;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( v44 != CurrentThread )
            return -1073741811;
          v45 = v44->Process;
          v101 = v45;
          for ( i = 0LL; ; i = v48 )
          {
            NextProcessThread = PsGetNextProcessThread(v45, i);
            Thread = (PETHREAD)NextProcessThread;
            v48 = (struct _EX_RUNDOWN_REF *)NextProcessThread;
            if ( !NextProcessThread )
              break;
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(NextProcessThread + 1704)) )
            {
              Count = v48[30].Count;
              if ( Count )
              {
                v50 = 0LL;
                v51 = v45[1].ActiveProcessors.Bitmap[7];
                if ( v51 )
                  v50 = Count + 0x2000;
                if ( v42 >= 0x40 )
                {
                  if ( v42 < 0x440 )
                  {
                    if ( v51 )
                    {
                      if ( v50 && *(_DWORD *)(v50 + 3988) )
                      {
                        v54 = *(unsigned int *)(v50 + 3988) + 4LL * (v42 - 64);
                        if ( v54 >= 0x7FFFFFFF0000LL )
                          v54 = 0x7FFFFFFF0000LL;
                        *(_DWORD *)v54 = 0;
                      }
                    }
                    else
                    {
                      v52 = *(_QWORD *)(Count + 6016);
                      v124 = v52;
                      if ( v52 )
                      {
                        v53 = v52 + 8LL * (v42 - 64);
                        if ( v53 >= 0x7FFFFFFF0000LL )
                          v53 = 0x7FFFFFFF0000LL;
                        *(_QWORD *)v53 = 0LL;
                      }
                    }
                  }
                }
                else if ( v51 )
                {
                  if ( v50 )
                    *(_DWORD *)(v50 + 4LL * v42 + 3600) = 0;
                }
                else
                {
                  *(_QWORD *)(Count + 8LL * v42 + 5248) = 0LL;
                }
              }
              ExReleaseRundownProtection(v48 + 213);
            }
          }
          return v43;
        case ThreadIdealProcessor:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v55 = *(_DWORD *)ThreadInformation;
          v111 = v55;
          if ( v55 > 0x40 )
            return -1073741811;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result < 0 )
            return result;
          v56 = v55;
          v57 = Thread;
          v58 = KeSetIdealProcessorThread(Thread, v56);
          if ( (v57->MiscFlags & 0x400) == 0 )
            PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v57);
LABEL_119:
          ObfDereferenceObjectWithTag(v57, 0x79517350u);
          return v58;
        case ThreadPriorityBoost:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v68 = *(_DWORD *)ThreadInformation;
          v112 = *(_DWORD *)ThreadInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x400u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          v69 = result;
          if ( result >= 0 )
          {
            KeSetDisableBoostThread((__int64)Thread, v68 != 0);
            ObfDereferenceObjectWithTag(v70, 0x79517350u);
            return v69;
          }
          return result;
        case ThreadSetTlsArrayAddress:
          return -1073741822;
        case ThreadHideFromDebugger:
          if ( ThreadInformationLength )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          v92 = result;
          if ( result < 0 )
            return result;
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
          goto LABEL_186;
        case ThreadBreakOnTermination:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v71 = *(_DWORD *)ThreadInformation;
          v116 = *(_DWORD *)ThreadInformation;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
            return -1073741727;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          v92 = result;
          if ( result < 0 )
            return result;
          if ( v71 )
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
          goto LABEL_131;
        case ThreadSwitchLegacyState:
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result < 0 )
            return result;
          v24 = Thread;
          Thread->NpxState = MEMORY[0xFFFFF780000003D8] | 3LL;
          goto LABEL_48;
        case ThreadIoPriority:
          if ( ((ThreadInformationLength - 4) & 0xFFFFFFFB) != 0 )
            return -1073741820;
          if ( ThreadInformationLength == 4 )
          {
            LODWORD(v28) = *(_DWORD *)ThreadInformation;
            v115 = *(_DWORD *)ThreadInformation;
            LOBYTE(v29) = 0;
          }
          else
          {
            v28 = *(_QWORD *)ThreadInformation;
            v125 = v28;
            v29 = HIDWORD(v28);
          }
          if ( (unsigned int)v28 >= 4 )
            return -1073741811;
          if ( (unsigned int)v28 >= 3
            && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                   SeIncreaseBasePriorityPrivilege,
                                   ThreadHandle,
                                   32LL,
                                   v8) )
          {
            return -1073741727;
          }
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     32,
                     (__int64)PsThreadType,
                     v8,
                     2035381072,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v30 = Thread;
          if ( (_BYTE)v29 == 1 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v28 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)Thread, v28, 0);
          PsSetIoPriorityThread((__int64)v30, v28);
          v24 = v30;
          goto LABEL_48;
        case ThreadActualBasePriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v26 = *(_DWORD *)ThreadInformation;
          Increment = v26;
          if ( (unsigned int)(v26 - 1) > 0x1E )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)ThreadHandle,
                     1024,
                     (__int64)PsThreadType,
                     v8,
                     2035381072,
                     &Thread,
                     0LL,
                     0LL);
          v14 = result;
          if ( result < 0 )
            return result;
          v27 = Thread;
          if ( v26 < 16
            || HIBYTE(Thread->Process[1].ActiveProcessors.Bitmap[13]) == 4
            || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v8) )
          {
            KeSetActualBasePriorityThread((__int64)v27, v26);
          }
          else
          {
            v14 = -1073741727;
          }
LABEL_59:
          v16 = v27;
          goto LABEL_37;
        case ThreadWow64Context:
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x10u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result >= 0 )
          {
            v59 = (struct _EX_RUNDOWN_REF *)Thread;
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
            {
              v60 = PspWow64SetContextThread(v59, v5, ThreadInformationLength, v8);
              ExReleaseRundownProtection(v59 + 213);
              ObfDereferenceObjectWithTag(v59, 0x79517350u);
              return v60;
            }
            else
            {
              ObfDereferenceObjectWithTag(v59, 0x79517350u);
              return -1073741749;
            }
          }
          return result;
        case ThreadGroupInformation:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          v129 = *(_OWORD *)ThreadInformation;
          if ( !KeVerifyGroupAffinity((__int64)&v129, 1) )
            return -1073741811;
          v64 = 0;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result < 0 )
            return result;
          v92 = 0;
          v65 = Thread->Process;
          PspLockProcessShared((__int64)v65, (__int64)CurrentThread);
          v66 = v65[1].Affinity.Bitmap[16];
          if ( !v66 )
          {
            v64 = v92;
LABEL_146:
            v67 = Thread;
            KeSetAffinityThread((__int64)Thread, (__int64)&v129);
            goto LABEL_147;
          }
          ExAcquireResourceSharedLite((PERESOURCE)(v66 + 56), 1u);
          if ( (*(_DWORD *)(v66 + 848) & 0x10) == 0 )
            goto LABEL_146;
          v73 = *(_QWORD *)(v66 + 8LL * WORD4(v129) + 624);
          if ( v73 )
          {
            if ( ((unsigned __int64)v129 & v73) == (_QWORD)v129 )
              goto LABEL_146;
          }
          v64 = -1073741823;
          v67 = Thread;
LABEL_147:
          if ( v66 )
            ExReleaseResourceLite((PERESOURCE)(v66 + 56));
          PspUnlockProcessShared((__int64)v65, (__int64)CurrentThread);
          ObfDereferenceObjectWithTag(v67, 0x79517350u);
          result = v64;
          break;
        case ThreadUmsInformation:
          if ( ThreadInformationLength != 24 )
            return -1073741820;
          v122 = *(_OWORD *)ThreadInformation;
          v123 = *((_QWORD *)ThreadInformation + 2);
          if ( ThreadHandle == (HANDLE)-2LL )
          {
            v75 = CurrentThread;
          }
          else
          {
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x20u,
                       (POBJECT_TYPE)PsThreadType,
                       v8,
                       0x79517350u,
                       (PVOID *)&Thread,
                       0LL);
            if ( result < 0 )
              return result;
            v75 = Thread;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          }
          if ( v75 != CurrentThread )
            return -1073741811;
          if ( (_DWORD)v122 == 1 )
            return PspAttachThreadToUmsCompletionList(v75, (__int64)&v122, v8, *(__int64 *)&ThreadInformationLength);
          if ( (_DWORD)v122 != 2 )
            return -1073741811;
          return PspDetachThreadFromUmsCompletionList(v75);
        case ThreadCounterProfiling:
          if ( ThreadInformationLength != 24 )
            return -1073741820;
          v108 = *(_OWORD *)ThreadInformation;
          v109 = *((_QWORD *)ThreadInformation + 2);
          v74 = v109;
          if ( (v109 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v109 >= 0x7FFFFFFF0000LL )
            v74 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v74 = *(_BYTE *)v74;
          *(_BYTE *)(v74 + 447) = *(_BYTE *)(v74 + 447);
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result < 0 )
            return result;
          v57 = Thread;
          if ( Thread == KeGetCurrentThread() )
          {
            if ( HIDWORD(v108) )
              v58 = KeEnableProfiling(Thread, DWORD2(v108), v108, v109);
            else
              v58 = KeDisableProfiling((__int64)Thread, v109);
          }
          else
          {
            v58 = -1073741637;
          }
          goto LABEL_119;
        case ThreadIdealProcessorEx:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v99 = *(_PROCESSOR_NUMBER *)ThreadInformation;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result < 0 )
            return result;
          v27 = Thread;
          v14 = KeSetIdealProcessorThreadByNumber(Thread, &v99, &v99);
          if ( v14 >= 0 )
          {
            if ( (v27->MiscFlags & 0x400) == 0 )
              PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v27);
            *(_PROCESSOR_NUMBER *)v5 = v99;
          }
          goto LABEL_59;
        case ThreadCpuAccountingInformation:
          if ( ThreadHandle != (HANDLE)-2LL )
            return -1073741811;
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          v126 = *(HANDLE *)ThreadInformation;
          if ( v126 )
          {
            result = ObReferenceObjectByHandleWithTag(v126, 2u, MmSessionObjectType, v8, 0x79517350u, &v106, 0LL);
            if ( result < 0 )
              return result;
            v77 = v106;
            v78 = *((_QWORD *)v106 + 4);
            if ( !v78 )
            {
              ObfDereferenceObjectWithTag(v106, 0x79517350u);
              return -1073740715;
            }
            if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v78) )
            {
              ObfDereferenceObjectWithTag(v77, 0x79517350u);
              return -1073740714;
            }
            CurrentThread[1].SListFaultAddress = v77;
          }
          else
          {
            if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
              return -1073740713;
            ObfDereferenceObject(CurrentThread[1].SListFaultAddress);
            CurrentThread[1].SListFaultAddress = 0LL;
          }
          return 0;
        case ThreadHeterogeneousCpuPolicy:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v79 = MEMORY[4];
          v113 = MEMORY[4];
          if ( MEMORY[4] > 8u )
            return -1073741811;
          v10 = ObReferenceObjectByHandleWithTag(
                  ThreadHandle,
                  0x400u,
                  (POBJECT_TYPE)PsThreadType,
                  v8,
                  0x79517350u,
                  (PVOID *)&Thread,
                  0LL);
          if ( v10 < 0 )
            return v10;
          KeSetUserHeteroCpuPolicyThread((__int64)Thread, v79);
          goto LABEL_22;
        case ThreadNameInformation:
          v94 = 0;
          v81 = 0LL;
          v100 = 0LL;
          P = 0LL;
          Thread = 0LL;
          v93 = 0;
          if ( ThreadInformationLength == 16 )
          {
            v82 = v96;
            v14 = ObReferenceObjectByHandleWithTag(
                    v101,
                    0x400u,
                    (POBJECT_TYPE)PsThreadType,
                    v96,
                    0x79517350u,
                    (PVOID *)&Thread,
                    0LL);
            v92 = v14;
            if ( v14 < 0 )
              goto LABEL_268;
            v94 = 1;
            v127 = v5;
            if ( v82 )
            {
              if ( v5 >= 0x7FFFFFFF0000LL )
                v5 = 0x7FFFFFFF0000LL;
              v83 = *(_PROCESSOR_NUMBER *)v5;
              LODWORD(v121) = v83;
              v84 = *(_QWORD *)(v5 + 8);
              *((_QWORD *)&v121 + 1) = v84;
              *(_OWORD *)Src = v121;
              if ( v83.Group )
              {
                if ( (v84 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v85 = v83.Group + v84;
                if ( v85 > 0x7FFFFFFF0000LL || v85 < v84 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              v14 = v92;
              v81 = v100;
            }
            else
            {
              *(_OWORD *)Src = *(_OWORD *)v5;
            }
            v86 = (unsigned __int16)Src[0];
            if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
            {
              v14 = -1073741811;
            }
            else
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
              v81 = PoolWithTag;
              v100 = PoolWithTag;
              if ( PoolWithTag )
              {
                v88 = PoolWithTag + 16;
                v81[1] = v88;
                *(_WORD *)v81 = v86;
                *((_WORD *)v81 + 1) = v86;
                memmove(v88, Src[1], v86);
                v89 = Thread;
                PspLockThreadSecurityExclusive((__int64)Thread, (__int64)CurrentThread);
                v93 = 1;
                P = v89[1].WaitBlock[3].Thread;
                v89[1].WaitBlock[3].Thread = (struct _KTHREAD *)v81;
                v81 = 0LL;
                v100 = 0LL;
                goto LABEL_268;
              }
              v14 = -1073741670;
            }
          }
          else
          {
            v14 = -1073741820;
          }
          v92 = v14;
LABEL_268:
          if ( v93 )
            PspUnlockThreadSecurityExclusive((__int64)Thread, (__int64)CurrentThread);
          if ( v94 )
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( P )
            ExFreePoolWithTag(P, 0x6D4E6854u);
          if ( v81 )
            ExFreePoolWithTag(v81, 0x6D4E6854u);
          return v14;
        case ThreadSelectedCpuSets:
          if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
            return -1073741820;
          memmove(v130, ThreadInformation, ThreadInformationLength);
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x400u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          if ( result >= 0 )
          {
            v80 = KeSetSelectedCpuSetsThread((__int64)Thread, ThreadInformationLength >> 3, v130);
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            return v80;
          }
          return result;
        case ThreadDynamicCodePolicyInfo:
          if ( ThreadHandle != (HANDLE)-2LL )
            return -1073741811;
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v120 = *(_DWORD *)ThreadInformation;
          if ( v120 == 1 )
          {
            if ( (CurrentThread->Process[2].ActiveProcessors.Bitmap[0] & 0x400000000000LL) == 0 )
              return -1073741790;
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
          }
          else
          {
            if ( v120 )
              return -1073741811;
            _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
          }
          return 0;
        case ThreadExplicitCaseSensitivity:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v90 = *(_DWORD *)ThreadInformation;
          v114 = *(_DWORD *)ThreadInformation;
          if ( !v8 )
            goto LABEL_280;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
            return -1073741727;
          if ( !RtlTestProtectedAccess(
                  (PS_PROTECTION)SBYTE2(CurrentThread->Process[2].ActiveProcessors.Bitmap[0]),
                  (PS_PROTECTION)81) )
            return -1073741790;
LABEL_280:
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     (PVOID *)&Thread,
                     0LL);
          v92 = result;
          if ( result >= 0 )
          {
            if ( v90 )
              _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x80000u);
            else
              _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFF7FFFF);
LABEL_186:
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            return v92;
          }
          return result;
        default:
          return -1073741821;
      }
      break;
  }
  return result;
}
