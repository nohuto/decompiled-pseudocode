/*
 * XREFs of NtSetInformationThread @ 0x140478220
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x14000A100 (KeAbProcessBaseIoPriorityChange.c)
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KeSetIdealProcessorThread @ 0x140043D40 (KeSetIdealProcessorThread.c)
 *     MmGetMinWsPagePriority @ 0x140043E34 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x140043E3C (MmGetDefaultPagePriority.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140138144 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetAffinityThread @ 0x14015B334 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401FF1A8 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x140204BBC (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x140205B1C (KeSetSelectedCpuSetsThread.c)
 *     PspAttachThreadToUmsCompletionList @ 0x140243A1C (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x140243B6C (PspDetachThreadFromUmsCompletionList.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     PspWriteTebIdealProcessor @ 0x140479050 (PspWriteTebIdealProcessor.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     KeSetDisableBoostThread @ 0x1405645D8 (KeSetDisableBoostThread.c)
 *     PspWowSetContextThread @ 0x14056AA80 (PspWowSetContextThread.c)
 *     SeCheckPrivilegedObject @ 0x140583928 (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x14069905C (KeEnableProfiling.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v8; // r14
  int v9; // eax
  unsigned int v10; // r12d
  char *v11; // rcx
  ULONG64 v12; // r8
  NTSTATUS v13; // esi
  NTSTATUS result; // eax
  struct _KTHREAD *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rbx
  unsigned __int64 v17; // rtt
  unsigned __int64 v18; // rtt
  PVOID v19; // rcx
  unsigned int v20; // ebx
  UCHAR v21; // dl
  _DWORD *v22; // rbx
  int v23; // edi
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  volatile signed __int32 *v26; // rdx
  signed __int32 v27; // eax
  unsigned __int32 v28; // r8d
  int v29; // r8d
  PVOID v30; // rbx
  PVOID v31; // rcx
  int v32; // ebx
  PVOID v33; // rdi
  PVOID v34; // rbx
  struct _KTHREAD *v35; // rbx
  struct _EX_RUNDOWN_REF *v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  _QWORD *i; // rdx
  struct _EX_RUNDOWN_REF *NextProcessThread; // rax
  unsigned __int64 v41; // rtt
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  _QWORD *v45; // rax
  _DWORD *v46; // rdx
  unsigned __int64 v47; // rtt
  LONG v48; // ebx
  __int64 v49; // r14
  unsigned __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rax
  LONG v53; // edx
  KPRIORITY v54; // ebx
  unsigned __int64 v55; // rdi
  _DWORD *v56; // r14
  int v57; // ebx
  signed __int32 v58; // eax
  unsigned __int32 v59; // edi
  int v60; // edi
  int v61; // ebx
  PVOID v62; // rsi
  __int64 v63; // r12
  __int64 v64; // r9
  NTSTATUS v65; // r14d
  __int64 v66; // r13
  __int64 v67; // rbx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbx
  __int16 v71; // ax
  _KPROCESS *Process; // rbx
  struct _EX_RUNDOWN_REF *v73; // rsi
  unsigned __int64 v74; // rtt
  NTSTATUS v75; // ebx
  unsigned __int64 v76; // rtt
  int v77; // ebx
  int v78; // edi
  NTSTATUS v79; // ebx
  PVOID v80; // rcx
  char v81; // bl
  __int64 v82; // rcx
  _BYTE *v83; // rcx
  PVOID v84; // rbx
  NTSTATUS v85; // edi
  struct _KTHREAD *v86; // rbx
  PVOID v88; // rbx
  __int64 v89; // rdx
  unsigned int v90; // ebx
  PVOID Object; // [rsp+40h] [rbp-1B8h] BYREF
  int v92; // [rsp+48h] [rbp-1B0h]
  int v93; // [rsp+50h] [rbp-1A8h]
  int v94; // [rsp+54h] [rbp-1A4h] BYREF
  LONG Increment; // [rsp+58h] [rbp-1A0h]
  char v96; // [rsp+5Ch] [rbp-19Ch]
  unsigned int v97; // [rsp+60h] [rbp-198h]
  unsigned int v98; // [rsp+70h] [rbp-188h]
  __int64 v99; // [rsp+78h] [rbp-180h]
  PVOID Token; // [rsp+80h] [rbp-178h] BYREF
  __int128 v101; // [rsp+88h] [rbp-170h]
  unsigned __int64 v102; // [rsp+98h] [rbp-160h]
  unsigned __int64 v103; // [rsp+A0h] [rbp-158h]
  int v104; // [rsp+A8h] [rbp-150h]
  int v105; // [rsp+ACh] [rbp-14Ch]
  unsigned int v106; // [rsp+B0h] [rbp-148h]
  PVOID v107; // [rsp+C0h] [rbp-138h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-130h]
  int v109; // [rsp+D0h] [rbp-128h]
  KPRIORITY v110; // [rsp+D4h] [rbp-124h]
  __int128 v111; // [rsp+D8h] [rbp-120h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-110h]
  __int64 v113; // [rsp+F0h] [rbp-108h]
  HANDLE v114; // [rsp+F8h] [rbp-100h]
  __int128 v115; // [rsp+100h] [rbp-F8h] BYREF
  char v116[160]; // [rsp+110h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentThread->gap0[10];
  if ( !v8 )
  {
    v10 = 1;
    v12 = MmUserProbeAddress;
    goto LABEL_19;
  }
  if ( ThreadInformationClass == ThreadAffinityMask )
  {
LABEL_3:
    v9 = 8;
LABEL_4:
    v10 = 1;
    goto LABEL_5;
  }
  if ( ThreadInformationClass >= ThreadEventPair && ThreadInformationClass < ThreadIoPriority )
  {
LABEL_12:
    v9 = 4;
    goto LABEL_4;
  }
  switch ( ThreadInformationClass )
  {
    case ThreadPriority:
    case ThreadIoPriority:
    case ThreadPagePriority:
      v9 = 4;
      goto LABEL_4;
    case ThreadEnableAlignmentFaultFixup:
    case ThreadCounterProfiling:
      v10 = 1;
      v9 = 1;
      break;
    case ThreadGroupInformation:
    case ThreadUmsInformation:
    case ThreadCpuAccountingInformation:
      goto LABEL_3;
    default:
      goto LABEL_12;
  }
LABEL_5:
  v92 = v9;
  if ( !ThreadInformationLength )
  {
LABEL_18:
    v12 = MmUserProbeAddress;
    goto LABEL_19;
  }
  if ( ((v9 - 1) & (unsigned int)ThreadInformation) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (char *)ThreadInformation + ThreadInformationLength;
  v12 = MmUserProbeAddress;
  if ( (unsigned __int64)v11 > MmUserProbeAddress || (unsigned __int64)v11 < v5 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    goto LABEL_18;
  }
LABEL_19:
  if ( ThreadInformationClass == ThreadAffinityMask )
  {
    if ( ThreadInformationLength != 8 )
      return -1073741820;
    *(_QWORD *)&v115 = *(_QWORD *)v5;
    if ( (_QWORD)v115 )
    {
      v13 = 0;
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
      v16 = (struct _EX_RUNDOWN_REF *)(*((_QWORD *)Object + 68) + 736LL);
      _m_prefetchw(v16);
      v17 = v16->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v17 == _InterlockedCompareExchange64((volatile signed __int64 *)v16, v17 + 2, v17)
        || ExfAcquireRundownProtection(v16) )
      {
        if ( !KeSetLegacyAffinityThread((__int64)Object, v115) )
          v13 = -1073741811;
        _m_prefetchw(v16);
        v18 = v16->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v18 - 2, v18) )
          ExfReleaseRundownProtection(v16);
      }
      else
      {
        v13 = -1073741558;
      }
      goto LABEL_34;
    }
    return -1073741811;
  }
  if ( ThreadInformationClass != ThreadIdealProcessor )
  {
    if ( ThreadInformationClass == ThreadImpersonationToken )
    {
      if ( ThreadInformationLength == 8 )
      {
        Handle = *(HANDLE *)v5;
        v13 = 0;
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
        v15 = KeGetCurrentThread();
        if ( Handle )
        {
          v13 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v15->PreviousMode, &Token, 0LL);
          if ( v13 >= 0 )
          {
            v34 = Token;
            if ( *((_DWORD *)Token + 48) == 2 )
            {
              v13 = PsImpersonateClient((PETHREAD)Object, Token, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Token + 49));
              ObfDereferenceObject(v34);
            }
            else
            {
              ObfDereferenceObject(Token);
              v13 = -1073741656;
            }
          }
        }
        else
        {
          PsImpersonateClient((PETHREAD)Object, 0LL, 0, 0, SecurityImpersonation);
        }
LABEL_34:
        v19 = Object;
        goto LABEL_35;
      }
      return -1073741820;
    }
    if ( ThreadInformationClass == ThreadPagePriority )
    {
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v24 = *(_DWORD *)v5;
      v98 = v24;
      if ( v24 <= (unsigned int)MmGetDefaultPagePriority() && v24 >= (unsigned int)MmGetMinWsPagePriority() )
      {
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
          v25 = v24 << 12;
          v26 = (volatile signed __int32 *)Object;
          v27 = *((_DWORD *)Object + 431);
          do
          {
            v28 = v27;
            v27 = _InterlockedCompareExchange(v26 + 431, v25 | v27 & 0xFFFF8FFF, v27);
          }
          while ( v27 != v28 );
          v29 = (v28 >> 12) & 7;
          v30 = Object;
          if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
            EtwTracePriority((__int64)Object, 0x533u, v29, v98, 0LL);
          v31 = v30;
LABEL_55:
          ObfDereferenceObjectWithTag(v31, 0x79517350u);
          return 0;
        }
        return result;
      }
      return -1073741811;
    }
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v54 = *(_DWORD *)v5;
        v110 = v54;
        if ( (unsigned int)(v54 - 1) > 0x1E )
          return -1073741811;
        if ( v54 >= 16
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
        KeSetPriorityThread((PKTHREAD)Object, v54);
LABEL_110:
        v31 = Object;
        goto LABEL_55;
      case ThreadBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v48 = *(_DWORD *)v5;
        Increment = v48;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v13 = result;
        if ( result < 0 )
          return result;
        v33 = Object;
        v49 = *((_QWORD *)Object + 68);
        v50 = (unsigned int)(v48 + 16);
        if ( (unsigned int)v50 > 0x20 || (v51 = 0x10007C001LL, !_bittest64(&v51, v50)) )
        {
          Process = CurrentThread->ApcState.Process;
          if ( Process != *((_KPROCESS **)PsGetServerSiloGlobals(0LL) + 5) && *(_BYTE *)(v49 + 1111) != 4 )
          {
            v13 = -1073741811;
LABEL_63:
            v19 = v33;
LABEL_35:
            ObfDereferenceObjectWithTag(v19, 0x79517350u);
            return v13;
          }
        }
        v52 = *(_QWORD *)(v49 + 944);
        if ( v52 && (*(_DWORD *)(v52 + 856) & 0x20) != 0 && *(_BYTE *)(v49 + 1111) != 4 )
        {
          v53 = Increment;
          if ( Increment > 0 )
          {
            v33 = Object;
            goto LABEL_63;
          }
        }
        else
        {
          v53 = Increment;
        }
        v33 = Object;
        KeSetBasePriorityThread((PKTHREAD)Object, v53);
        goto LABEL_63;
      case ThreadEnableAlignmentFaultFixup:
        if ( ThreadInformationLength != 1 )
          return -1073741820;
        v81 = *(_BYTE *)v5;
        v96 = v81;
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
        if ( v81 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 30, 0);
        else
          _interlockedbittestandreset((volatile signed __int32 *)Object + 30, 0);
        goto LABEL_110;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v97 = *(_DWORD *)v5;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v23 = result;
        if ( result < 0 )
          return result;
        v35 = (struct _KTHREAD *)Object;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( v35 != CurrentThread )
          return -1073741811;
        v38 = (__int64)v35->Process;
        v99 = v38;
        for ( i = 0LL; ; i = Object )
        {
          NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(v38, i, (__int64)v36, v37);
          Object = NextProcessThread;
          if ( !NextProcessThread )
            break;
          _m_prefetchw(&NextProcessThread[212]);
          v41 = NextProcessThread[212].Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v41 == _InterlockedCompareExchange64((volatile signed __int64 *)&NextProcessThread[212], v41 + 2, v41)
            || ExfAcquireRundownProtection(NextProcessThread + 212) )
          {
            v36 = (struct _EX_RUNDOWN_REF *)Object;
            v42 = *((_QWORD *)Object + 30);
            if ( v42 )
            {
              v37 = 0LL;
              v43 = *(_QWORD *)(v38 + 1064);
              if ( v43 )
                v37 = v42 + 0x2000;
              if ( v97 >= 0x40 )
              {
                if ( v97 < 0x440 )
                {
                  if ( v43 )
                  {
                    if ( v37 && *(_DWORD *)(v37 + 3988) )
                    {
                      v46 = (_DWORD *)(*(unsigned int *)(v37 + 3988) + 4LL * (v97 - 64));
                      if ( (unsigned __int64)v46 >= MmUserProbeAddress )
                        v46 = (_DWORD *)MmUserProbeAddress;
                      *v46 = 0;
                    }
                  }
                  else
                  {
                    v44 = *(_QWORD *)(v42 + 6016);
                    v113 = v44;
                    if ( v44 )
                    {
                      v45 = (_QWORD *)(v44 + 8LL * (v97 - 64));
                      if ( (unsigned __int64)v45 >= MmUserProbeAddress )
                        v45 = (_QWORD *)MmUserProbeAddress;
                      *v45 = 0LL;
                    }
                  }
                }
              }
              else if ( v43 )
              {
                if ( v37 )
                  *(_DWORD *)(v37 + 4LL * v97 + 3600) = 0;
              }
              else
              {
                *(_QWORD *)(v42 + 8LL * v97 + 5248) = 0LL;
              }
            }
            _m_prefetchw(&v36[212]);
            v47 = v36[212].Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v47 != _InterlockedCompareExchange64((volatile signed __int64 *)&v36[212], v47 - 2, v47) )
              ExfReleaseRundownProtection(v36 + 212);
          }
        }
        return v23;
      case ThreadPriorityBoost:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v78 = *(_DWORD *)v5;
        v109 = *(_DWORD *)v5;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v79 = result;
        if ( result >= 0 )
        {
          if ( !v78 )
            v10 = 0;
          KeSetDisableBoostThread(Object, v10);
          ObfDereferenceObjectWithTag(v80, 0x79517350u);
          return v79;
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
                   &Object,
                   0LL);
        v75 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)Object + 431, 4u);
        goto LABEL_157;
      case ThreadBreakOnTermination:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v77 = *(_DWORD *)v5;
        v104 = v77;
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
        if ( v77 )
          _InterlockedOr((volatile signed __int32 *)Object + 431, 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 431, 0xFFFFFFDF);
        goto LABEL_110;
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
        v31 = Object;
        *((_QWORD *)Object + 74) = MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_55;
      case ThreadIoPriority:
        if ( ((ThreadInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( ThreadInformationLength == 4 )
        {
          LODWORD(v5) = *(_DWORD *)v5;
          v93 = v5;
          LOBYTE(v55) = 0;
        }
        else
        {
          v5 = *(_QWORD *)v5;
          v103 = v5;
          v55 = HIDWORD(v5);
          v93 = v5;
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
        v56 = Object;
        if ( (_BYTE)v55 == 1 && ((*((_DWORD *)Object + 431) >> 9) & 7) < (int)v5 )
          IoBoostThreadIoPriority((__int64)Object, v5, 0);
        v57 = (_DWORD)v5 << 9;
        v58 = v56[431];
        do
        {
          v59 = v58;
          v58 = _InterlockedCompareExchange(v56 + 431, v57 | v58 & 0xFFFFF1FF, v58);
        }
        while ( v58 != v59 );
        v60 = (v59 >> 9) & 7;
        v61 = v93;
        v62 = Object;
        if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
          EtwTracePriority((__int64)Object, 0x534u, v60, v93, 0LL);
        if ( v61 != v60 )
          KeAbProcessBaseIoPriorityChange((__int64)v62, v60, v61);
        v31 = v62;
        goto LABEL_55;
      case ThreadActualBasePriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v32 = *(_DWORD *)v5;
        Increment = v32;
        if ( (unsigned int)(v32 - 1) > 0x1E )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x400u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        v13 = result;
        if ( result < 0 )
          return result;
        v33 = Object;
        if ( v32 < 16
          || *(_BYTE *)(*((_QWORD *)Object + 68) + 1111LL) == 4
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v8) )
        {
          KeSetActualBasePriorityThread((__int64)v33, v32);
        }
        else
        {
          v13 = -1073741727;
        }
        goto LABEL_63;
      case ThreadWow64Context:
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x10u,
                   (POBJECT_TYPE)PsThreadType,
                   v8,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v73 = (struct _EX_RUNDOWN_REF *)((char *)Object + 1696);
        _m_prefetchw((char *)Object + 1696);
        v74 = v73->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v74 == _InterlockedCompareExchange64((volatile signed __int64 *)v73, v74 + 2, v74)
          || ExfAcquireRundownProtection(v73) )
        {
          v75 = PspWowSetContextThread(Object, v5, ThreadInformationLength, v8);
          _m_prefetchw(v73);
          v76 = v73->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v76 != _InterlockedCompareExchange64((volatile signed __int64 *)v73, v76 - 2, v76) )
            ExfReleaseRundownProtection(v73);
LABEL_157:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v75;
        }
        else
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741749;
        }
      case ThreadGroupInformation:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        v115 = *(_OWORD *)v5;
        if ( WORD4(v115) >= KeQueryActiveGroupCount() )
          return -1073741811;
        v63 = WORD4(v115);
        if ( ((unsigned __int64)v115 & qword_1403D15E8[WORD4(v115)]) != (_QWORD)v115
          || WORD5(v115) | (unsigned __int16)(WORD6(v115) | HIWORD(v115)) )
        {
          return -1073741811;
        }
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
          v65 = 0;
          v66 = *((_QWORD *)Object + 68);
          --CurrentThread->KernelApcDisable;
          v67 = KeAbPreAcquire(v66 + 728, 0LL, 0LL, v64);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 728), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)(v66 + 728), v67, v66 + 728, v69);
          if ( v67 )
            *(_BYTE *)(v67 + 26) |= 1u;
          v70 = *(_QWORD *)(v66 + 944);
          if ( !v70
            || (ExAcquireResourceSharedLite((PERESOURCE)(v70 + 56), 1u), (*(_DWORD *)(v70 + 856) & 0x10) == 0)
            || (v82 = *(_QWORD *)(v70 + 8 * v63 + 624)) != 0 && ((unsigned __int64)v115 & v82) == (_QWORD)v115 )
          {
            KeSetAffinityThread((__int64)Object, (__int64)&v115, v68, v69);
          }
          else
          {
            v65 = -1073741823;
          }
          if ( v70 )
            ExReleaseResourceLite((PERESOURCE)(v70 + 56));
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 728), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v66 + 728));
          KeAbPostRelease(v66 + 728);
          v71 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v71;
          if ( !v71
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v65;
        }
        return result;
      case ThreadUmsInformation:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v111 = *(_OWORD *)v5;
        v112 = *(_QWORD *)(v5 + 16);
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          v86 = CurrentThread;
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
          v86 = (struct _KTHREAD *)Object;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        if ( v86 != CurrentThread )
          return -1073741811;
        if ( (_DWORD)v111 == 1 )
          return PspAttachThreadToUmsCompletionList(v86, (__int64)&v111, v8, *(__int64 *)&ThreadInformationLength);
        if ( (_DWORD)v111 != 2 )
          return -1073741811;
        return PspDetachThreadFromUmsCompletionList(v86);
      case ThreadCounterProfiling:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v101 = *(_OWORD *)v5;
        v102 = *(_QWORD *)(v5 + 16);
        v83 = (_BYTE *)v102;
        if ( (v102 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v102 >= v12 )
          v83 = (_BYTE *)v12;
        *v83 = *v83;
        v83[447] = v83[447];
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
          v84 = Object;
          if ( Object == KeGetCurrentThread() )
          {
            if ( HIDWORD(v101) )
              v85 = KeEnableProfiling(Object, DWORD2(v101), v101, v102);
            else
              v85 = KeDisableProfiling((__int64)Object, v102);
          }
          else
          {
            v85 = -1073741637;
          }
          ObfDereferenceObjectWithTag(v84, 0x79517350u);
          return v85;
        }
        return result;
      case ThreadIdealProcessorEx:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v94 = *(_DWORD *)v5;
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
        v33 = Object;
        v13 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, (__int64)&v94, (__int64)&v94);
        if ( v13 >= 0 )
        {
          if ( (*((_DWORD *)v33 + 29) & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v33);
          *(_DWORD *)v5 = v94;
        }
        goto LABEL_63;
      case ThreadCpuAccountingInformation:
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        v114 = *(HANDLE *)v5;
        if ( v114 )
        {
          result = ObReferenceObjectByHandleWithTag(v114, 2u, MmSessionObjectType, v8, 0x79517350u, &v107, 0LL);
          if ( result < 0 )
            return result;
          v88 = v107;
          v89 = *((_QWORD *)v107 + 4);
          if ( !v89 )
          {
            ObfDereferenceObjectWithTag(v107, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v89) )
          {
            ObfDereferenceObjectWithTag(v88, 0x79517350u);
            return -1073740714;
          }
          CurrentThread[1].SListFaultAddress = v88;
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
        v90 = MEMORY[4];
        v105 = MEMORY[4];
        if ( MEMORY[4] > 8u )
          return -1073741811;
        v23 = ObReferenceObjectByHandleWithTag(
                ThreadHandle,
                0x400u,
                (POBJECT_TYPE)PsThreadType,
                v8,
                0x79517350u,
                &Object,
                0LL);
        if ( v23 < 0 )
          return v23;
        KeSetUserHeteroCpuPolicyThread((__int64)Object, v90);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v23;
      case ThreadSelectedCpuSets:
        if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
          return -1073741820;
        memmove(v116, (const void *)v5, ThreadInformationLength);
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
        v75 = KeSetSelectedCpuSetsThread((__int64)Object, ThreadInformationLength >> 3, v116);
        goto LABEL_157;
      default:
        return -1073741821;
    }
  }
  if ( ThreadInformationLength != 4 )
    return -1073741820;
  v20 = *(_DWORD *)v5;
  v106 = v20;
  if ( v20 > 0x40 )
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
    v21 = v20;
    v22 = Object;
    v23 = KeSetIdealProcessorThread((PKTHREAD)Object, v21);
    if ( (v22[29] & 0x400) == 0 )
      PspWriteTebIdealProcessor(CurrentThread, v22);
    ObfDereferenceObjectWithTag(v22, 0x79517350u);
    return v23;
  }
  return result;
}
