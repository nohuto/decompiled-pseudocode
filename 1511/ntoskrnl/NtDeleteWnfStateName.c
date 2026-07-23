/*
 * XREFs of NtDeleteWnfStateName @ 0x1403E19C4
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ExpCaptureWnfStateName @ 0x1403E5210 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1403E55A8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     ExpWnfDeleteNameInstance @ 0x1404B2110 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404C094C (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x1404C53D0 (ExpWnfDeletePermanentName.c)
 *     ExpWnfDeletePermanentStateData @ 0x140677B58 (ExpWnfDeletePermanentStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // r14
  NTSTATUS v3; // edi
  char v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  _BOOL8 v8; // r13
  _KPROCESS *Process; // rax
  void *Ptr; // rdi
  __int64 v11; // r8
  void *v13; // rdi
  struct _EX_RUNDOWN_REF *v14; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-B8h] BYREF
  int v16[2]; // [rsp+68h] [rbp-B0h] BYREF
  PVOID P; // [rsp+70h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+78h] [rbp-A0h] BYREF
  ACCESS_MASK v19[3]; // [rsp+84h] [rbp-94h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+98h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-60h] BYREF
  char PreviousMode; // [rsp+128h] [rbp+10h]
  int v24; // [rsp+130h] [rbp+18h]
  _KPROCESS *v25; // [rsp+138h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v24 = 0;
  P = 0LL;
  v2 = 0LL;
  *(_QWORD *)v16 = 0LL;
  v14 = 0LL;
  v3 = ExpCaptureWnfStateName(StateName, &v15);
  AccessStatus[2] = v3;
  if ( v3 >= 0 )
  {
    v5 = v15;
    v6 = (v15 >> 6) & 0xF;
    v7 = (v15 >> 4) & 3;
    if ( ((v15 >> 4) & 3) == 0 )
    {
      v3 = -1073741811;
      goto LABEL_21;
    }
    v8 = v4 == 0;
    if ( (_DWORD)v7 != 3 )
    {
      if ( v4 )
      {
        v3 = ExpWnfLookupPermanentName(v15, &P);
        if ( v3 < 0 )
          goto LABEL_21;
        v13 = (void *)*((_QWORD *)P + 2);
        SeCaptureSubjectContext(&SubjectSecurityContext);
        SeAccessCheck(
          v13,
          &SubjectSecurityContext,
          0,
          0x10000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          v19,
          (PNTSTATUS)&v25);
        SeReleaseSubjectContext(&SubjectSecurityContext);
        v3 = (int)v25;
        if ( (int)v25 < 0 )
          goto LABEL_21;
        LODWORD(v8) = 1;
      }
      v3 = ExpWnfDeletePermanentName(v5);
      if ( v3 < 0 )
        goto LABEL_21;
      v24 = 1;
      v4 = PreviousMode;
    }
    if ( v4 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v5 = v15;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v25 = Process;
    if ( (_DWORD)v7 == 3 )
    {
      v3 = ExpWnfResolveScopeInstance((int)v16, (int)Process, 0, v6, 0LL);
      v2 = *(struct _EX_RUNDOWN_REF **)v16;
      if ( v3 < 0 )
        goto LABEL_21;
    }
    else
    {
      v3 = 0;
      v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v6, 0LL);
    }
    if ( v2 )
    {
      v15 = (int)v7;
      while ( 1 )
      {
        v3 = ExpWnfLookupNameInstance(v2, v5, &v14);
        if ( v3 >= 0 )
        {
          if ( !v8 )
          {
            Ptr = v14[9].Ptr;
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
              AccessStatus);
            SeReleaseSubjectContext(&SubjectContext);
            v3 = AccessStatus[0];
            if ( AccessStatus[0] < 0 )
              goto LABEL_21;
            LODWORD(v8) = 1;
          }
          if ( v15 == 3 && (_KPROCESS *)v14[19].Count != v25 )
          {
            v3 = -1073741790;
            goto LABEL_21;
          }
          ExpWnfNotifyNameSubscribers(v14, 16LL, 1LL, PreviousMode != 0);
          LOBYTE(v11) = 1;
          if ( (unsigned int)ExpWnfDeleteNameInstance(v2, v14, v11) )
            v14 = 0LL;
          else
            v3 = -1073741772;
        }
        if ( v15 != 3 )
        {
          if ( v14 )
          {
            ExReleaseRundownProtection_0(v14 + 1);
            v14 = 0LL;
          }
          v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v6, v2);
          if ( v2 )
            continue;
        }
        break;
      }
    }
    if ( (v5 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v5);
  }
LABEL_21:
  if ( v24 )
    v3 = 0;
  if ( v14 )
    ExReleaseRundownProtection_0(v14 + 1);
  if ( v2 )
    ExReleaseRundownProtection_0(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  return v3;
}
