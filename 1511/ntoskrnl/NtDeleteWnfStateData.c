/*
 * XREFs of NtDeleteWnfStateData @ 0x140548688
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1403E51C8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x1403E5210 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1403E55A8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1403E5B1C (ExpWnfCaptureScopeInstanceId.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     ExpWnfDeleteStateData @ 0x1404B2498 (ExpWnfDeleteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404BF3D0 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfDeletePermanentStateData @ 0x140677B58 (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  unsigned __int64 v4; // r14
  NTSTATUS v5; // edi
  KPROCESSOR_MODE v6; // r8
  int *v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  int v10; // r13d
  struct _KTHREAD *v11; // r8
  PEPROCESS Process; // rcx
  int v13; // eax
  void *Ptr; // rdi
  void *v16; // rdi
  int v17; // [rsp+54h] [rbp-D4h]
  struct _EX_RUNDOWN_REF *v18; // [rsp+58h] [rbp-D0h] BYREF
  int v19[2]; // [rsp+60h] [rbp-C8h] BYREF
  NTSTATUS v20; // [rsp+68h] [rbp-C0h]
  PVOID P; // [rsp+70h] [rbp-B8h] BYREF
  int v22; // [rsp+78h] [rbp-B0h]
  NTSTATUS AccessStatus; // [rsp+7Ch] [rbp-ACh] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-A8h] BYREF
  ACCESS_MASK v25; // [rsp+90h] [rbp-98h] BYREF
  PVOID v26[2]; // [rsp+98h] [rbp-90h] BYREF
  ACCESS_MASK v27[2]; // [rsp+A8h] [rbp-80h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+B8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-50h] BYREF
  PEPROCESS v32; // [rsp+140h] [rbp+18h]
  NTSTATUS v33; // [rsp+148h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  LODWORD(v4) = 0;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v5 = ExpCaptureWnfStateName((__int64 *)StateName, &v24, PreviousMode);
  v20 = v5;
  if ( v5 >= 0 )
  {
    v8 = v24;
    v9 = (v24 >> 4) & 3;
    v22 = (v24 >> 4) & 3;
    v4 = (v24 >> 6) & 0xF;
    v17 = (v24 >> 6) & 0xF;
    v5 = ExpWnfCaptureScopeInstanceId(v17, v7, v6, v27, v26);
    v20 = v5;
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
        v8 = v24;
        LODWORD(v9) = v22;
      }
      else
      {
        v11 = 0LL;
        Process = PsInitialSystemProcess;
      }
      v32 = Process;
      v5 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v19, (__int64)Process, (__int64)v11, v4, *(PSID *)v27);
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
              if ( (_DWORD)v9 != 3 || (PEPROCESS)v18[19].Count == v32 )
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
                    &v25,
                    &v33),
                  SeReleaseSubjectContext(&SubjectSecurityContext),
                  v5 = v33,
                  v33 >= 0) )
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
    ExReleaseRundownProtection_0(v18 + 1);
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v4, v26, PreviousMode);
  KeLeaveCriticalRegion();
  return v5;
}
