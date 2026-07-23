/*
 * XREFs of NtSetInformationThread @ 0x140425860
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     MmGetDefaultPagePriority @ 0x14007A034 (MmGetDefaultPagePriority.c)
 *     MmGetMinWsPagePriority @ 0x14007A03C (MmGetMinWsPagePriority.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KeSetIdealProcessorThread @ 0x140091CC4 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140091D0C (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetBasePriorityThread @ 0x140094928 (KeSetBasePriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x140095414 (KeSetLegacyAffinityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400A01F4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PsSetIoPriorityThread @ 0x1400FB824 (PsSetIoPriorityThread.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     KeVerifyGroupAffinity @ 0x1401230CC (KeVerifyGroupAffinity.c)
 *     KeSetAffinityThread @ 0x14012DAD4 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401C31EC (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x1401C7C68 (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401C8784 (KeSetSelectedCpuSetsThread.c)
 *     PspAttachThreadToUmsCompletionList @ 0x1401F5630 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x1401F5784 (PspDetachThreadFromUmsCompletionList.c)
 *     EtwTracePriority @ 0x14020E158 (EtwTracePriority.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 *     PspWriteTebIdealProcessor @ 0x140445D80 (PspWriteTebIdealProcessor.c)
 *     KeSetDisableBoostThread @ 0x140452B08 (KeSetDisableBoostThread.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     PspWow64SetContextThread @ 0x1404A4990 (PspWow64SetContextThread.c)
 *     SeCheckPrivilegedObject @ 0x14050C338 (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x14061A98C (KeEnableProfiling.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  size_t v4; // rdi
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v8; // r15
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // r14d
  char *v12; // rcx
  ULONG64 v13; // r8
  NTSTATUS v14; // esi
  NTSTATUS result; // eax
  struct _KTHREAD *v16; // rax
  PVOID v17; // rcx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  volatile signed __int32 *v20; // rdx
  signed __int32 v21; // eax
  unsigned __int32 v22; // r8d
  int v23; // r8d
  PVOID v24; // rbx
  PVOID v25; // rcx
  PVOID v26; // rbx
  LONG v27; // ebx
  __int64 v28; // r8
  PVOID v29; // rdi
  unsigned int v30; // r14d
  NTSTATUS v31; // r15d
  struct _KTHREAD *v32; // rdi
  __int64 v33; // rdi
  struct _EX_RUNDOWN_REF *i; // rdx
  struct _EX_RUNDOWN_REF *NextProcessThread; // rax
  struct _EX_RUNDOWN_REF *v36; // rbx
  unsigned __int64 Count; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  _DWORD *v42; // rax
  HANDLE v43; // rbx
  struct _EX_RUNDOWN_REF *v44; // r14
  unsigned int v45; // ebx
  UCHAR v46; // dl
  _DWORD *v47; // rbx
  NTSTATUS v48; // edi
  LONG v49; // ebx
  __int64 v50; // r14
  unsigned __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  LONG v54; // edx
  unsigned __int64 v55; // rdi
  bool v56; // zf
  PVOID v57; // rdi
  struct _EX_RUNDOWN_REF *v58; // rsi
  NTSTATUS v59; // ebx
  KPRIORITY v60; // ebx
  _KPROCESS *Process; // rbx
  __int64 v62; // r14
  __int64 v63; // rbx
  int v64; // ebx
  int v65; // ebx
  NTSTATUS v66; // edi
  PVOID v67; // rcx
  char v68; // bl
  __int64 v69; // rcx
  NTSTATUS v70; // ebx
  _BYTE *v71; // rcx
  struct _KTHREAD *v72; // rbx
  PVOID v74; // rbx
  __int64 v75; // rdx
  unsigned int v76; // ebx
  int v77; // edi
  PVOID Object; // [rsp+40h] [rbp-1B8h] BYREF
  int v79; // [rsp+48h] [rbp-1B0h]
  _PROCESSOR_NUMBER v80; // [rsp+50h] [rbp-1A8h] BYREF
  LONG Increment; // [rsp+54h] [rbp-1A4h]
  char v82; // [rsp+58h] [rbp-1A0h]
  unsigned int v83; // [rsp+5Ch] [rbp-19Ch]
  int v84; // [rsp+60h] [rbp-198h]
  __int128 v85; // [rsp+68h] [rbp-190h]
  unsigned __int64 v86; // [rsp+78h] [rbp-180h]
  int v87; // [rsp+80h] [rbp-178h]
  HANDLE Handle; // [rsp+88h] [rbp-170h]
  PVOID Token; // [rsp+90h] [rbp-168h] BYREF
  int v90; // [rsp+98h] [rbp-160h]
  int v91; // [rsp+A8h] [rbp-150h]
  __int64 v92; // [rsp+B0h] [rbp-148h]
  KPRIORITY v93; // [rsp+B8h] [rbp-140h]
  PVOID v94; // [rsp+C0h] [rbp-138h] BYREF
  int v95; // [rsp+C8h] [rbp-130h]
  unsigned int v96; // [rsp+CCh] [rbp-12Ch]
  __int128 v97; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-118h]
  __int64 v99; // [rsp+E8h] [rbp-110h]
  unsigned __int64 v100; // [rsp+F0h] [rbp-108h]
  HANDLE v101; // [rsp+F8h] [rbp-100h]
  __int128 v102; // [rsp+100h] [rbp-F8h] BYREF
  char v103[160]; // [rsp+110h] [rbp-E8h] BYREF

  v4 = ThreadInformationLength;
  v5 = (unsigned __int64)ThreadInformation;
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentThread->gap0[10];
  if ( !v8 )
  {
    v9 = 0x140000000uLL;
    v11 = 1;
    v13 = MmUserProbeAddress;
    goto LABEL_18;
  }
  if ( ThreadInformationClass >= ThreadEnableAlignmentFaultFixup || ThreadInformationClass < ThreadImpersonationToken )
  {
    v9 = 0x140000000uLL;
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
      case ThreadBasePriority:
      case ThreadImpersonationToken:
      case ThreadDescriptorTableEntry:
      case ThreadEventPair:
      case ThreadQuerySetWin32StartAddress:
      case ThreadZeroTlsCell:
      case ThreadPerformanceCount:
      case ThreadAmILastThread:
      case ThreadIdealProcessor:
      case ThreadPriorityBoost:
      case ThreadSetTlsArrayAddress:
      case ThreadIsIoPending:
      case ThreadHideFromDebugger:
      case ThreadBreakOnTermination:
      case ThreadSwitchLegacyState:
      case ThreadIsTerminated:
      case ThreadLastSystemCall:
      case ThreadIoPriority:
      case ThreadCycleTime:
      case ThreadPagePriority:
      case ThreadActualBasePriority:
      case ThreadTebInformation:
      case ThreadCSwitchMon:
      case ThreadCSwitchPmu:
      case ThreadWow64Context:
      case ThreadIdealProcessorEx:
        goto LABEL_5;
      case ThreadAffinityMask:
      case ThreadGroupInformation:
      case ThreadUmsInformation:
      case ThreadCpuAccountingInformation:
        v10 = 8;
        goto LABEL_6;
      case ThreadEnableAlignmentFaultFixup:
      case ThreadCounterProfiling:
        v11 = 1;
        v10 = 1;
        break;
      default:
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v9 = 0x140000000uLL;
LABEL_5:
    v10 = 4;
LABEL_6:
    v11 = 1;
  }
  v79 = v10;
  if ( !(_DWORD)v4 )
  {
LABEL_17:
    v13 = MmUserProbeAddress;
    goto LABEL_18;
  }
  if ( ((v10 - 1) & (unsigned int)ThreadInformation) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (char *)ThreadInformation + v4;
  v13 = MmUserProbeAddress;
  if ( (unsigned __int64)v12 > MmUserProbeAddress || (unsigned __int64)v12 < v5 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    goto LABEL_17;
  }
LABEL_18:
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( (_DWORD)v4 == 8 )
    {
      Handle = *(HANDLE *)v5;
      v14 = 0;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x80u,
                 (POBJECT_TYPE)PsThreadType,
                 v8,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v16 = KeGetCurrentThread();
      if ( Handle )
      {
        v14 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v16->PreviousMode, &Token, 0LL);
        if ( v14 >= 0 )
        {
          v26 = Token;
          if ( *((_DWORD *)Token + 48) == 2 )
          {
            v14 = PsImpersonateClient((PETHREAD)Object, Token, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Token + 49));
            ObfDereferenceObject(v26);
          }
          else
          {
            ObfDereferenceObject(Token);
            v14 = -1073741656;
          }
        }
      }
      else
      {
        PsImpersonateClient((PETHREAD)Object, 0LL, 0, 0, SecurityImpersonation);
      }
      v17 = Object;
      goto LABEL_24;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != ThreadPagePriority )
  {
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v60 = *(_DWORD *)v5;
        v93 = v60;
        if ( (unsigned int)(v60 - 1) > 0x1E )
          return -1073741811;
        if ( v60 >= 16
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
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        KeSetPriorityThread((PKTHREAD)Object, v60);
LABEL_115:
        v25 = Object;
        goto LABEL_37;
      case ThreadBasePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v49 = *(_DWORD *)v5;
        Increment = v49;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v14 = result;
        if ( result < 0 )
          return result;
        v29 = Object;
        v50 = *((_QWORD *)Object + 68);
        v51 = (unsigned int)(v49 + 16);
        if ( (unsigned int)v51 > 0x20 || (v52 = 0x10007C001LL, !_bittest64(&v52, v51)) )
        {
          Process = CurrentThread->ApcState.Process;
          if ( Process != *((_KPROCESS **)PsGetServerSiloGlobals(0LL) + 5) && *(_BYTE *)(v50 + 1119) != 4 )
          {
            v14 = -1073741811;
LABEL_48:
            v17 = v29;
LABEL_24:
            ObfDereferenceObjectWithTag(v17, 0x79517350u);
            return v14;
          }
        }
        v53 = *(_QWORD *)(v50 + 944);
        if ( v53 && (*(_DWORD *)(v53 + 856) & 0x20) != 0 && *(_BYTE *)(v50 + 1119) != 4 )
        {
          v54 = Increment;
          if ( Increment > 0 )
          {
            v29 = Object;
            goto LABEL_48;
          }
        }
        else
        {
          v54 = Increment;
        }
        v29 = Object;
        KeSetBasePriorityThread((PKTHREAD)Object, v54);
        goto LABEL_48;
      case ThreadAffinityMask:
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        v43 = *(HANDLE *)v5;
        *(_QWORD *)&v102 = v43;
        if ( !v43 )
          return -1073741811;
        v14 = 0;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v29 = Object;
        v44 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
        if ( ExAcquireRundownProtection(v44 + 92) )
        {
          if ( !KeSetLegacyAffinityThread((__int64)v29, (__int64)v43) )
            v14 = -1073741811;
          ExReleaseRundownProtection_0(v44 + 92);
        }
        else
        {
          v14 = -1073741558;
        }
        goto LABEL_48;
      case ThreadEnableAlignmentFaultFixup:
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v68 = *(_BYTE *)v5;
        v82 = v68;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v68 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 30, 0);
        else
          _interlockedbittestandreset((volatile signed __int32 *)Object + 30, 0);
        goto LABEL_115;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v30 = *(_DWORD *)v5;
        v84 = *(_DWORD *)v5;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v31 = result;
        if ( result < 0 )
          return result;
        v32 = (struct _KTHREAD *)Object;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( v32 != CurrentThread )
          return -1073741811;
        v33 = (__int64)v32->Process;
        v92 = v33;
        for ( i = 0LL; ; i = v36 )
        {
          NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(v33, i);
          Object = NextProcessThread;
          v36 = NextProcessThread;
          if ( !NextProcessThread )
            break;
          if ( ExAcquireRundownProtection(NextProcessThread + 212) )
          {
            Count = v36[30].Count;
            if ( Count )
            {
              v38 = 0LL;
              v39 = *(_QWORD *)(v33 + 1064);
              if ( v39 )
                v38 = Count + 0x2000;
              if ( v30 >= 0x40 )
              {
                if ( v30 < 0x440 )
                {
                  if ( v39 )
                  {
                    if ( v38 && *(_DWORD *)(v38 + 3988) )
                    {
                      v42 = (_DWORD *)(*(unsigned int *)(v38 + 3988) + 4LL * (v30 - 64));
                      if ( (unsigned __int64)v42 >= MmUserProbeAddress )
                        v42 = (_DWORD *)MmUserProbeAddress;
                      *v42 = 0;
                    }
                  }
                  else
                  {
                    v40 = *(_QWORD *)(Count + 6016);
                    v99 = v40;
                    if ( v40 )
                    {
                      v41 = (_QWORD *)(v40 + 8LL * (v30 - 64));
                      if ( (unsigned __int64)v41 >= MmUserProbeAddress )
                        v41 = (_QWORD *)MmUserProbeAddress;
                      *v41 = 0LL;
                    }
                  }
                }
              }
              else if ( v39 )
              {
                if ( v38 )
                  *(_DWORD *)(v38 + 4LL * v30 + 3600) = 0;
              }
              else
              {
                *(_QWORD *)(Count + 8LL * v30 + 5248) = 0LL;
              }
            }
            ExReleaseRundownProtection_0(v36 + 212);
          }
        }
        return v31;
      case ThreadIdealProcessor:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v45 = *(_DWORD *)v5;
        v96 = v45;
        if ( v45 > 0x40 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v46 = v45;
        v47 = Object;
        v48 = KeSetIdealProcessorThread((PKTHREAD)Object, v46);
        if ( (v47[29] & 0x400) == 0 )
          PspWriteTebIdealProcessor(CurrentThread, v47);
        goto LABEL_89;
      case ThreadPriorityBoost:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v65 = *(_DWORD *)v5;
        v95 = v65;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v66 = result;
        if ( result >= 0 )
        {
          if ( !v65 )
            v11 = 0;
          KeSetDisableBoostThread(Object, v11);
          ObfDereferenceObjectWithTag(v67, 0x79517350u);
          return v66;
        }
        return result;
      case ThreadSetTlsArrayAddress:
        return -1073741822;
      case ThreadHideFromDebugger:
        if ( (_DWORD)v4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v70 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)Object + 431, 4u);
        goto LABEL_171;
      case ThreadBreakOnTermination:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v64 = *(_DWORD *)v5;
        v91 = v64;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
          return -1073741727;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v64 )
          _InterlockedOr((volatile signed __int32 *)Object + 431, 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 431, 0xFFFFFFDF);
        goto LABEL_115;
      case ThreadSwitchLegacyState:
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v25 = Object;
        *((_QWORD *)Object + 74) = MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_37;
      case ThreadIoPriority:
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)v4 == 4 )
        {
          LODWORD(v5) = *(_DWORD *)v5;
          v90 = v5;
          LOBYTE(v55) = 0;
        }
        else
        {
          v5 = *(_QWORD *)v5;
          v100 = v5;
          v55 = HIDWORD(v5);
        }
        if ( (unsigned int)v5 >= 4 )
          return -1073741811;
        if ( (unsigned int)v5 >= 3
          && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 ThreadHandle,
                                 32LL,
                                 v8) )
        {
          return -1073741727;
        }
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v56 = (_BYTE)v55 == 1;
        v57 = Object;
        if ( v56 && ((*((_DWORD *)Object + 431) >> 9) & 7) < (int)v5 )
          IoBoostThreadIoPriority((KSPIN_LOCK *)Object, v5, 0);
        PsSetIoPriorityThread((__int64)v57, v5);
        v25 = v57;
        goto LABEL_37;
      case ThreadActualBasePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v27 = *(_DWORD *)v5;
        Increment = v27;
        if ( (unsigned int)(v27 - 1) > 0x1E )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v14 = result;
        if ( result < 0 )
          return result;
        v29 = Object;
        if ( v27 < 16
          || *(_BYTE *)(*((_QWORD *)Object + 68) + 1119LL) == 4
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v8) )
        {
          KeSetActualBasePriorityThread((__int64)v29, (unsigned int)v27, v28);
        }
        else
        {
          v14 = -1073741727;
        }
        goto LABEL_48;
      case ThreadWow64Context:
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x10u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result >= 0 )
        {
          v58 = (struct _EX_RUNDOWN_REF *)Object;
          if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 212) )
          {
            v59 = PspWow64SetContextThread(v58, v5, (unsigned int)v4, v8);
            ExReleaseRundownProtection_0(v58 + 212);
            ObfDereferenceObjectWithTag(v58, 0x79517350u);
            return v59;
          }
          else
          {
            ObfDereferenceObjectWithTag(v58, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( (_DWORD)v4 != 16 )
          return -1073741820;
        v102 = *(_OWORD *)v5;
        if ( !KeVerifyGroupAffinity((__int64)&v102, 1) )
          return -1073741811;
        v14 = 0;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v62 = *((_QWORD *)Object + 68);
        PspLockProcessShared(v62, (__int64)CurrentThread);
        v63 = *(_QWORD *)(v62 + 944);
        if ( !v63
          || (ExAcquireResourceSharedLite((PERESOURCE)(v63 + 56), 1u), (*(_DWORD *)(v63 + 856) & 0x10) == 0)
          || (v69 = *(_QWORD *)(v63 + 8LL * WORD4(v102) + 624)) != 0 && ((unsigned __int64)v102 & v69) == (_QWORD)v102 )
        {
          v29 = Object;
          KeSetAffinityThread((__int64)Object, (__int64)&v102);
        }
        else
        {
          v14 = -1073741823;
          v29 = Object;
        }
        if ( v63 )
          ExReleaseResourceLite((PERESOURCE)(v63 + 56));
        PspUnlockProcessShared(v62, (__int64)CurrentThread);
        goto LABEL_48;
      case ThreadUmsInformation:
        if ( (_DWORD)v4 != 24 )
          return -1073741820;
        v97 = *(_OWORD *)v5;
        v98 = *(_QWORD *)(v5 + 16);
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          v72 = CurrentThread;
        }
        else
        {
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x20u,
                     (POBJECT_TYPE)PsThreadType,
                     v8,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v72 = (struct _KTHREAD *)Object;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        if ( v72 != CurrentThread )
          return -1073741811;
        if ( (_DWORD)v97 == 1 )
          return PspAttachThreadToUmsCompletionList(v72, (__int64)&v97, v8, v9);
        if ( (_DWORD)v97 != 2 )
          return -1073741811;
        return PspDetachThreadFromUmsCompletionList(v72);
      case ThreadCounterProfiling:
        if ( (_DWORD)v4 != 24 )
          return -1073741820;
        v85 = *(_OWORD *)v5;
        v86 = *(_QWORD *)(v5 + 16);
        v71 = (_BYTE *)v86;
        if ( (v86 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v86 >= v13 )
          v71 = (_BYTE *)v13;
        *v71 = *v71;
        v71[447] = v71[447];
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v47 = Object;
        if ( Object == KeGetCurrentThread() )
        {
          if ( HIDWORD(v85) )
            v48 = KeEnableProfiling(Object, DWORD2(v85), v85, v86);
          else
            v48 = KeDisableProfiling((__int64)Object, v86);
        }
        else
        {
          v48 = -1073741637;
        }
LABEL_89:
        ObfDereferenceObjectWithTag(v47, 0x79517350u);
        return v48;
      case ThreadIdealProcessorEx:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v80 = *(_PROCESSOR_NUMBER *)v5;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v29 = Object;
        v14 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v80, &v80);
        if ( v14 >= 0 )
        {
          if ( (*((_DWORD *)v29 + 29) & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v29);
          *(_PROCESSOR_NUMBER *)v5 = v80;
        }
        goto LABEL_48;
      case ThreadCpuAccountingInformation:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        v101 = *(HANDLE *)v5;
        if ( v101 )
        {
          result = ObReferenceObjectByHandleWithTag(v101, 2u, MmSessionObjectType, v8, 0x79517350u, &v94, 0LL);
          if ( result < 0 )
            return result;
          v74 = v94;
          v75 = *((_QWORD *)v94 + 4);
          if ( !v75 )
          {
            ObfDereferenceObjectWithTag(v94, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v75) )
          {
            ObfDereferenceObjectWithTag(v74, 0x79517350u);
            return -1073740714;
          }
          CurrentThread[1].SListFaultAddress = v74;
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
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v76 = MEMORY[4];
        v87 = MEMORY[4];
        if ( MEMORY[4] > 8u )
          return -1073741811;
        v77 = ObReferenceObjectByHandleWithTag(
                ThreadHandle,
                0x400u,
                (POBJECT_TYPE)PsThreadType,
                v8,
                0x79517350u,
                &Object,
                0LL);
        if ( v77 >= 0 )
        {
          KeSetUserHeteroCpuPolicyThread((__int64)Object, v76);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        return v77;
      case ThreadSelectedCpuSets:
        if ( (v4 & 7) != 0 || (unsigned int)v4 > 0xA0 )
          return -1073741820;
        memmove(v103, (const void *)v5, v4);
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v70 = KeSetSelectedCpuSetsThread((__int64)Object, (unsigned int)v4 >> 3, v103);
LABEL_171:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v70;
      default:
        return -1073741821;
    }
  }
  if ( (_DWORD)v4 != 4 )
    return -1073741820;
  v18 = *(_DWORD *)v5;
  v83 = v18;
  if ( v18 > (unsigned int)MmGetDefaultPagePriority() || v18 < (unsigned int)MmGetMinWsPagePriority() )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x20u,
             (POBJECT_TYPE)PsThreadType,
             v8,
             0x79517350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v19 = v18 << 12;
    v20 = (volatile signed __int32 *)Object;
    v21 = *((_DWORD *)Object + 431);
    do
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange(v20 + 431, v19 | v21 & 0xFFFF8FFF, v21);
    }
    while ( v21 != v22 );
    v23 = (v22 >> 12) & 7;
    v24 = Object;
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
      EtwTracePriority((__int64)Object, 0x533u, v23, v83, 0LL);
    v25 = v24;
LABEL_37:
    ObfDereferenceObjectWithTag(v25, 0x79517350u);
    return 0;
  }
  return result;
}
