/*
 * XREFs of NtDeleteWnfStateData @ 0x1405BF43C
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
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140502BAC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502CE8 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140502DAC (ExpCaptureWnfStateName.c)
 *     ExpWnfDeleteStateData @ 0x14053F6E0 (ExpWnfDeleteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140554F94 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfDeletePermanentStateData @ 0x1406FC328 (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  int v8; // edi
  struct _KTHREAD *v9; // r8
  PEPROCESS Process; // r12
  int v11; // eax
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *Ptr; // rdi
  struct _EX_RUNDOWN_REF *v18; // rcx
  unsigned __int64 v19; // rtt
  struct _EX_RUNDOWN_REF *v20; // rcx
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  void *v25; // rdi
  NTSTATUS v26; // eax
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-100h]
  NTSTATUS v28; // [rsp+50h] [rbp-D8h]
  unsigned int v29; // [rsp+58h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v30; // [rsp+60h] [rbp-C8h] BYREF
  int v31[2]; // [rsp+68h] [rbp-C0h] BYREF
  PVOID P; // [rsp+70h] [rbp-B8h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp-B0h] BYREF
  int v34; // [rsp+7Ch] [rbp-ACh]
  unsigned __int64 v35; // [rsp+80h] [rbp-A8h] BYREF
  ACCESS_MASK v36; // [rsp+90h] [rbp-98h] BYREF
  PVOID v37[2]; // [rsp+98h] [rbp-90h] BYREF
  PSID Sid; // [rsp+A8h] [rbp-80h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+B8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-50h] BYREF
  NTSTATUS v42; // [rsp+148h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v31 = 0LL;
  v30 = 0LL;
  v29 = 0;
  v37[0] = 0LL;
  v37[1] = 0LL;
  v28 = ExpCaptureWnfStateName((__int64 *)StateName, &v35, PreviousMode);
  if ( v28 >= 0 )
  {
    v6 = v35;
    v7 = (v35 >> 4) & 3;
    v34 = (v35 >> 4) & 3;
    v29 = (v35 >> 6) & 0xF;
    v28 = ExpWnfCaptureScopeInstanceId(v29, (unsigned __int8 *)ExplicitScope, v5, &Sid, v37);
    if ( v28 >= 0 )
    {
      if ( PreviousMode )
      {
        v8 = 0;
        if ( ExplicitScope )
        {
          v28 = ExpWnfCheckCrossScopeAccess(v6);
          if ( v28 < 0 )
            goto LABEL_19;
        }
      }
      else
      {
        v8 = 1;
      }
      if ( PreviousMode )
      {
        v9 = KeGetCurrentThread();
        Process = v9->ApcState.Process;
        v11 = 0;
        v6 = v35;
        LODWORD(v7) = v34;
      }
      else
      {
        v9 = 0LL;
        Process = PsInitialSystemProcess;
        v11 = 1;
      }
      LODWORD(Privileges) = v11;
      v28 = ExpWnfResolveScopeInstance(
              (signed __int64 *)v31,
              (__int64)Process,
              (__int64)v9,
              v29,
              Sid,
              (SIZE_T)Privileges);
      if ( v28 >= 0 )
      {
        v13 = ExpWnfLookupNameInstance(*(__int64 *)v31, v6, (__int64 *)&v30, v12);
        v28 = v13;
        if ( v13 != -1073741772 || (_DWORD)v7 == 3 )
        {
          if ( v13 >= 0 )
          {
            if ( v8
              || (Ptr = v30[9].Ptr,
                  SeCaptureSubjectContext(&SubjectContext),
                  SeAccessCheck(
                    Ptr,
                    &SubjectContext,
                    0,
                    2u,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
                    1,
                    &GrantedAccess,
                    &AccessStatus),
                  SeReleaseSubjectContext(&SubjectContext),
                  v28 = AccessStatus,
                  AccessStatus >= 0) )
            {
              if ( (_DWORD)v7 == 3 && (PEPROCESS)v30[19].Count != Process )
              {
                v28 = -1073741790;
                goto LABEL_19;
              }
              if ( (v6 & 0x400) == 0
                || (v26 = ExpWnfDeletePermanentStateData(*(_QWORD *)v31, v6),
                    v28 = v26,
                    v14 = 0x80000000LL,
                    (int)(v26 + 0x80000000) < 0)
                || v26 == -1073741772 )
              {
                ExpWnfDeleteStateData((__int64)v30, v14, v15, v16);
LABEL_18:
                v28 = 0;
              }
            }
          }
        }
        else
        {
          v28 = ExpWnfLookupPermanentName(v6, &P);
          if ( v28 >= 0 )
          {
            if ( v8
              || (v25 = (void *)*((_QWORD *)P + 2),
                  SeCaptureSubjectContext(&SubjectSecurityContext),
                  SeAccessCheck(
                    v25,
                    &SubjectSecurityContext,
                    0,
                    2u,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
                    1,
                    &v36,
                    &v42),
                  SeReleaseSubjectContext(&SubjectSecurityContext),
                  v28 = v42,
                  v42 >= 0) )
            {
              if ( (v6 & 0x400) == 0 )
                goto LABEL_18;
              v28 = ExpWnfDeletePermanentStateData(*(_QWORD *)v31, v6);
              if ( v28 == -1073741772 )
                goto LABEL_18;
            }
          }
        }
      }
    }
  }
LABEL_19:
  if ( v30 )
  {
    v18 = v30 + 1;
    _m_prefetchw(&v30[1]);
    v19 = v18->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v18, v19 - 2, v19) )
      ExfReleaseRundownProtection(v18);
  }
  if ( *(_QWORD *)v31 )
  {
    v20 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v31 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v31 + 8LL));
    v21 = v20->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v21 - 2, v21) )
      ExfReleaseRundownProtection(v20);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v29, v37, PreviousMode);
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v28;
}
