/*
 * XREFs of NtDeleteWnfStateData @ 0x14057CF64
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403F50D0 (ExpWnfLookupPermanentName.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404613A4 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x1404613E4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x140461798 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140461CC0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfDeleteStateData @ 0x1404AE6B4 (ExpWnfDeleteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404C6884 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfDeletePermanentStateData @ 0x1406BA2D0 (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  unsigned __int64 v4; // r14
  NTSTATUS v5; // edi
  __int64 v6; // r8
  unsigned int *v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  int v10; // r13d
  struct _KTHREAD *v11; // r8
  PEPROCESS Process; // rcx
  int v13; // eax
  void *Ptr; // rdi
  void *v16; // rdi
  int v17; // [rsp+54h] [rbp-C4h]
  struct _EX_RUNDOWN_REF *v18; // [rsp+60h] [rbp-B8h] BYREF
  int v19[2]; // [rsp+68h] [rbp-B0h] BYREF
  int v20; // [rsp+70h] [rbp-A8h]
  NTSTATUS AccessStatus; // [rsp+74h] [rbp-A4h] BYREF
  PVOID P; // [rsp+78h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-98h] BYREF
  ACCESS_MASK v24; // [rsp+88h] [rbp-90h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+8Ch] [rbp-8Ch] BYREF
  ACCESS_MASK v26[2]; // [rsp+90h] [rbp-88h] BYREF
  PVOID v27[2]; // [rsp+A0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+B0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-48h] BYREF
  PEPROCESS v31; // [rsp+130h] [rbp+18h]
  NTSTATUS v32; // [rsp+138h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  LODWORD(v4) = 0;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v5 = ExpCaptureWnfStateName((unsigned __int64)StateName, &v23, PreviousMode);
  if ( v5 >= 0 )
  {
    v8 = v23;
    v9 = (v23 >> 4) & 3;
    v20 = (v23 >> 4) & 3;
    v4 = (v23 >> 6) & 0xF;
    v17 = (v23 >> 6) & 0xF;
    v5 = ExpWnfCaptureScopeInstanceId(v17, v7, v6, v26, v27);
    if ( v5 >= 0 )
    {
      if ( PreviousMode )
      {
        v10 = 0;
        if ( ExplicitScope )
        {
          v5 = ExpWnfCheckCrossScopeAccess(v8);
          if ( v5 < 0 )
            goto LABEL_19;
        }
      }
      else
      {
        v10 = 1;
      }
      if ( PreviousMode )
      {
        v11 = KeGetCurrentThread();
        Process = v11->ApcState.Process;
        LODWORD(v4) = v17;
        v8 = v23;
        LODWORD(v9) = v20;
      }
      else
      {
        v11 = 0LL;
        Process = PsInitialSystemProcess;
      }
      v31 = Process;
      v5 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v19, (__int64)Process, (__int64)v11, v4, *(PSID *)v26);
      if ( v5 >= 0 )
      {
        v13 = ExpWnfLookupNameInstance(*(__int64 *)v19, v8, (__int64 *)&v18);
        v5 = v13;
        if ( v13 != -1073741772 || (_DWORD)v9 == 3 )
        {
          if ( v13 >= 0 )
          {
            if ( v10
              || (Ptr = v18[9].Ptr,
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
                  v5 = AccessStatus,
                  AccessStatus >= 0) )
            {
              if ( (_DWORD)v9 != 3 || (PEPROCESS)v18[19].Count == v31 )
              {
                if ( (v8 & 0x400) == 0
                  || (v5 = ExpWnfDeletePermanentStateData(*(_QWORD *)v19, v8), (int)(v5 + 0x80000000) < 0)
                  || v5 == -1073741772 )
                {
                  ExpWnfDeleteStateData((__int64)v18);
LABEL_18:
                  v5 = 0;
                }
              }
              else
              {
                v5 = -1073741790;
              }
            }
          }
        }
        else
        {
          v5 = ExpWnfLookupPermanentName(v8, &P);
          if ( v5 >= 0 )
          {
            if ( v10
              || (v16 = (void *)*((_QWORD *)P + 2),
                  SeCaptureSubjectContext(&SubjectSecurityContext),
                  SeAccessCheck(
                    v16,
                    &SubjectSecurityContext,
                    0,
                    2u,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
                    1,
                    &v24,
                    &v32),
                  SeReleaseSubjectContext(&SubjectSecurityContext),
                  v5 = v32,
                  v32 >= 0) )
            {
              if ( (v8 & 0x400) == 0 )
                goto LABEL_18;
              v5 = ExpWnfDeletePermanentStateData(*(_QWORD *)v19, v8);
              if ( v5 == -1073741772 )
                goto LABEL_18;
            }
          }
        }
      }
    }
  }
LABEL_19:
  if ( v18 )
    ExReleaseRundownProtection(v18 + 1);
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v4, v27, PreviousMode);
  KeLeaveCriticalRegion();
  return v5;
}
