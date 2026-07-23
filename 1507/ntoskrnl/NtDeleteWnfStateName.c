/*
 * XREFs of NtDeleteWnfStateName @ 0x14053EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x140502DAC (ExpCaptureWnfStateName.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteNameInstance @ 0x14053F340 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14053F768 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x14053F894 (ExpWnfDeletePermanentName.c)
 *     ExpWnfDeletePermanentStateData @ 0x1406FC328 (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r13
  NTSTATUS v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  _BOOL8 v7; // r12
  _KPROCESS *Process; // rcx
  __int64 v9; // r9
  void *Ptr; // rdi
  __int64 v11; // r8
  struct _EX_RUNDOWN_REF *v12; // rcx
  unsigned __int64 v13; // rtt
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  struct _EX_RUNDOWN_REF *v17; // rcx
  unsigned __int64 v18; // rtt
  void *v19; // rdi
  struct _EX_RUNDOWN_REF *v20; // rcx
  unsigned __int64 v21; // rtt
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F0h]
  NTSTATUS v23; // [rsp+50h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *v24; // [rsp+58h] [rbp-C0h] BYREF
  int v25[2]; // [rsp+60h] [rbp-B8h] BYREF
  _KPROCESS *v26; // [rsp+68h] [rbp-B0h]
  PVOID P; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+80h] [rbp-98h]
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp-88h] BYREF
  ACCESS_MASK v31; // [rsp+94h] [rbp-84h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+98h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-60h] BYREF
  int v34; // [rsp+128h] [rbp+10h]
  NTSTATUS v35; // [rsp+130h] [rbp+18h] BYREF
  NTSTATUS AccessStatus; // [rsp+138h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = 0;
  P = 0LL;
  *(_QWORD *)v25 = 0LL;
  v24 = 0LL;
  v3 = ExpCaptureWnfStateName((__int64 *)StateName, &v28, PreviousMode);
  if ( v3 >= 0 )
  {
    v4 = v28;
    v5 = (v28 >> 6) & 0xF;
    v6 = (v28 >> 4) & 3;
    if ( ((v28 >> 4) & 3) == 0 )
    {
      v3 = -1073741811;
      goto LABEL_21;
    }
    v7 = PreviousMode == 0;
    if ( (_DWORD)v6 != 3 )
    {
      if ( PreviousMode )
      {
        v3 = ExpWnfLookupPermanentName(v28, &P);
        if ( v3 < 0 )
          goto LABEL_21;
        v19 = (void *)*((_QWORD *)P + 2);
        SeCaptureSubjectContext(&SubjectSecurityContext);
        SeAccessCheck(
          v19,
          &SubjectSecurityContext,
          0,
          0x10000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          &v31,
          &v35);
        SeReleaseSubjectContext(&SubjectSecurityContext);
        v3 = v35;
        if ( v35 < 0 )
          goto LABEL_21;
        LODWORD(v7) = 1;
      }
      v3 = ExpWnfDeletePermanentName(v4);
      if ( v3 < 0 )
        goto LABEL_21;
      v34 = 1;
    }
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v4 = v28;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v26 = Process;
    if ( (_DWORD)v6 == 3 )
    {
      LODWORD(Privileges) = PreviousMode == 0;
      v3 = ExpWnfResolveScopeInstance(
             (signed __int64 *)v25,
             (__int64)Process,
             0LL,
             (unsigned int)v5,
             0LL,
             (SIZE_T)Privileges);
      if ( v3 < 0 )
        goto LABEL_21;
    }
    else
    {
      v3 = 0;
      *(_QWORD *)v25 = ExpWnfEnumerateScopeInstances((unsigned int)v5, 0LL);
    }
    if ( *(_QWORD *)v25 )
    {
      v29 = (int)v6;
      while ( 1 )
      {
        v3 = ExpWnfLookupNameInstance(*(__int64 *)v25, v4, (__int64 *)&v24, v9);
        v23 = v3;
        if ( v3 >= 0 )
        {
          if ( !v7 )
          {
            Ptr = v24[9].Ptr;
            SeCaptureSubjectContext(&SubjectContext);
            SeAccessCheck(
              Ptr,
              &SubjectContext,
              0,
              0x10000u,
              0,
              0LL,
              (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
              1,
              &GrantedAccess,
              &AccessStatus);
            SeReleaseSubjectContext(&SubjectContext);
            v3 = AccessStatus;
            v23 = AccessStatus;
            if ( AccessStatus < 0 )
              goto LABEL_21;
            LODWORD(v7) = 1;
          }
          if ( v29 == 3 && (_KPROCESS *)v24[19].Count != v26 )
          {
            v3 = -1073741790;
            goto LABEL_21;
          }
          ExpWnfNotifyNameSubscribers((__int64)v24, 0x10u, 1, PreviousMode != 0);
          LOBYTE(v11) = 1;
          if ( (unsigned int)ExpWnfDeleteNameInstance(*(_QWORD *)v25, v24, v11) )
          {
            v24 = 0LL;
          }
          else
          {
            v3 = -1073741772;
            v23 = -1073741772;
          }
        }
        if ( v29 != 3 )
        {
          if ( v24 )
          {
            v20 = v24 + 1;
            _m_prefetchw(&v24[1]);
            v21 = v24[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)&v24[1], v21 - 2, v21) )
              ExfReleaseRundownProtection(v20);
            v24 = 0LL;
            v3 = v23;
            v4 = v28;
          }
          *(_QWORD *)v25 = ExpWnfEnumerateScopeInstances((unsigned int)v5, *(_QWORD *)v25);
          if ( *(_QWORD *)v25 )
            continue;
        }
        break;
      }
    }
    if ( (v4 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v4);
  }
LABEL_21:
  if ( v34 )
    v3 = 0;
  if ( v24 )
  {
    v17 = v24 + 1;
    _m_prefetchw(&v24[1]);
    v18 = v24[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)&v24[1], v18 - 2, v18) )
      ExfReleaseRundownProtection(v17);
  }
  if ( *(_QWORD *)v25 )
  {
    v12 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v25 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v25 + 8LL));
    v13 = *(_QWORD *)(*(_QWORD *)v25 + 8LL) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v13 - 2, v13) )
      ExfReleaseRundownProtection(v12);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v3;
}
