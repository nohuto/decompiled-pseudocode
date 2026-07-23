/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x1404A0ABC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x1404A2118 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404A2230 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1404A23B0 (SeCheckAuditPrivilege.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  __int64 *v12; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rdx
  NTSTATUS v15; // esi
  PVOID v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  NTSTATUS v20; // edi
  ULONG PrivilegeCount; // r13d
  unsigned int v22; // ecx
  char *v23; // rdx
  ULONG *PoolWithTag; // rax
  ULONG *v25; // r14
  PVOID v27; // r14
  char v28; // al
  PVOID v29; // rdi
  BOOLEAN v30; // r13
  __int64 v31; // rcx
  NTSTATUS v32; // ebx
  __int16 v33; // cx
  __int64 v34; // rdx
  ACL *v35; // rdx
  __int64 v36; // rax
  ACL *v37; // rcx
  int HandleInformation; // [rsp+28h] [rbp-140h]
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-C7h] BYREF
  BOOLEAN GenerateAlarm[2]; // [rsp+A2h] [rbp-C6h] BYREF
  int v41; // [rsp+A4h] [rbp-C4h]
  PVOID v42; // [rsp+A8h] [rbp-C0h] BYREF
  unsigned __int16 v43; // [rsp+B0h] [rbp-B8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-B0h] BYREF
  PVOID v45; // [rsp+C0h] [rbp-A8h] BYREF
  PVOID P; // [rsp+C8h] [rbp-A0h] BYREF
  PVOID v47; // [rsp+D0h] [rbp-98h] BYREF
  PVOID v48; // [rsp+D8h] [rbp-90h]
  __int64 v49; // [rsp+E0h] [rbp-88h] BYREF
  __int64 *v50; // [rsp+E8h] [rbp-80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-78h] BYREF
  ULONG v52; // [rsp+110h] [rbp-58h]
  unsigned int v53; // [rsp+114h] [rbp-54h]
  size_t Size; // [rsp+118h] [rbp-50h]
  PVOID v55; // [rsp+120h] [rbp-48h]

  v12 = (__int64 *)HandleId;
  v50 = (__int64 *)HandleId;
  P = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  GenerateAudit = 0;
  GenerateAlarm[0] = 0;
  v49 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  GenerateAlarm[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v14) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v14) )
  {
    v32 = -1073741727;
    goto LABEL_52;
  }
  v15 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v16 = Token;
  v55 = Token;
  if ( v15 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 != -1073741816 )
    {
      v31 = (unsigned int)v15;
LABEL_81:
      SepAuditFailed(v31);
    }
    return v15;
  }
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v32 = -1073741659;
LABEL_52:
    SeReleaseSubjectContext(&SubjectContext);
    return v32;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v32 = -1073741703;
    goto LABEL_52;
  }
  v15 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 0, &v42);
  v41 = v15;
  if ( v15 < 0 || !v42 )
  {
    ObfDereferenceObject(v16);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 == -1073741670 )
    {
      v31 = 3221225626LL;
      goto LABEL_81;
    }
    return v15;
  }
  if ( AccessGranted && Privileges )
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v52 = PrivilegeCount;
    if ( PrivilegeCount >= 0x43 )
    {
      v20 = -1073741811;
      v41 = -1073741811;
      v12 = v50;
      goto LABEL_29;
    }
    v22 = 12 * (PrivilegeCount - 1) + 20;
    v53 = v22;
    if ( 12 * (PrivilegeCount - 1) != -20 )
    {
      v23 = (char *)Privileges + v22;
      if ( (unsigned __int64)v23 > 0x7FFFFFFF0000LL || v23 < (char *)Privileges )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    Size = v22;
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v22, 0x72506553u);
    v25 = PoolWithTag;
    v48 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeReleaseSecurityDescriptor(v42, PreviousMode, 0);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      v41 = -1073741670;
      SepAuditFailed(3221225626LL);
      return -1073741670;
    }
    memmove(PoolWithTag, Privileges, Size);
    *v25 = PrivilegeCount;
    v12 = v50;
  }
  if ( v12 )
  {
    if ( ((unsigned __int8)v12 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v49 = *v12;
  }
  v19 = (__int64)GenerateOnClose;
  if ( (unsigned __int64)GenerateOnClose >= 0x7FFFFFFF0000LL )
    v19 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v19 = *(_BYTE *)v19;
  v20 = SepProbeAndCaptureString_U(SubsystemName, &P);
  v41 = v20;
  if ( v20 >= 0 )
  {
    v20 = SepProbeAndCaptureString_U(ObjectTypeName, &v45);
    v41 = v20;
    if ( v20 >= 0 )
    {
      v20 = SepProbeAndCaptureString_U(ObjectName, &v47);
      v41 = v20;
    }
  }
LABEL_29:
  if ( v20 >= 0 )
  {
    LOBYTE(v18) = AccessGranted == 0;
    LOBYTE(HandleInformation) = 0;
    LOBYTE(v17) = AccessGranted;
    v27 = v45;
    v28 = SepAdtAuditObjectAccessWithContext(0LL, v45, v17, v18, &SubjectContext, HandleInformation, &v43);
    v29 = v42;
    if ( !v28 )
      goto LABEL_31;
    v33 = *((_WORD *)v42 + 1);
    if ( (v33 & 0x10) == 0 )
      goto LABEL_68;
    if ( (v33 & 0x8000) == 0 )
    {
      v35 = (ACL *)*((_QWORD *)v42 + 3);
      goto LABEL_70;
    }
    v34 = *((unsigned int *)v42 + 3);
    if ( (_DWORD)v34 )
      v35 = (ACL *)((char *)v42 + v34);
    else
LABEL_68:
      v35 = 0LL;
LABEL_70:
    if ( (v33 & 0x10) == 0 )
      goto LABEL_74;
    if ( (v33 & 0x8000) == 0 )
    {
      v37 = (ACL *)*((_QWORD *)v42 + 3);
      goto LABEL_76;
    }
    v36 = *((unsigned int *)v42 + 3);
    if ( (_DWORD)v36 )
      v37 = (ACL *)((char *)v42 + v36);
    else
LABEL_74:
      v37 = 0LL;
LABEL_76:
    SeExamineSacl(v37, v35, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, GenerateAlarm);
    if ( GenerateAudit || GenerateAlarm[0] )
    {
      v29 = v42;
      v27 = v45;
      v30 = SepAdtOpenObjectAuditAlarm(
              v43,
              (int)P,
              (unsigned __int64)&v49 & -(__int64)(v12 != 0LL),
              (int)v45,
              (__int64)v47,
              v42,
              (__int64)Token,
              (__int64)SubjectContext.PrimaryToken,
              DesiredAccess,
              GrantedAccess,
              (__int64)v48,
              AccessGranted,
              (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
              2,
              0LL,
              0,
              0LL,
              0LL,
              0LL);
LABEL_32:
      if ( !GenerateAudit && !GenerateAlarm[0] && Privileges && AccessGranted )
      {
        v27 = v45;
        SepAdtPrivilegeObjectAuditAlarm(
          (const int *)P,
          (unsigned __int16 *)v45,
          (unsigned __int16 *)v47,
          v49,
          (__int64)Token,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
          DesiredAccess,
          (int *)v48,
          AccessGranted);
        v30 = 0;
        v29 = v42;
      }
      SeReleaseSecurityDescriptor(v29, PreviousMode, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
      if ( v47 )
        ExFreePoolWithTag(v47, 0);
      if ( v48 )
        ExFreePoolWithTag(v48, 0);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      *GenerateOnClose = v30;
      return 0;
    }
LABEL_31:
    v30 = 0;
    goto LABEL_32;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v45 )
    ExFreePoolWithTag(v45, 0);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  SeReleaseSecurityDescriptor(v42, PreviousMode, 0);
  ObfDereferenceObject(Token);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v20 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v20;
}
