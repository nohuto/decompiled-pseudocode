/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x140525110
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x140526A90 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140526BA8 (SeCheckAuditPrivilege.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140526C38 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  PUNICODE_STRING v12; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v15; // rdx
  NTSTATUS v16; // esi
  PVOID v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rcx
  NTSTATUS v21; // edi
  ULONG PrivilegeCount; // r14d
  unsigned int v23; // ecx
  char *v24; // rdx
  ULONG *PoolWithTag; // rax
  ULONG *v26; // rdi
  PVOID v28; // r14
  char v29; // al
  ACL **v30; // rdi
  BOOLEAN v31; // r12
  __int64 v32; // rcx
  NTSTATUS v33; // ebx
  __int16 v34; // cx
  __int64 v35; // rdx
  ACL *v36; // rdx
  __int64 v37; // rax
  ACL *v38; // rcx
  int HandleInformation; // [rsp+28h] [rbp-130h]
  BOOLEAN GenerateAlarm; // [rsp+A0h] [rbp-B8h] BYREF
  BOOLEAN v41; // [rsp+A1h] [rbp-B7h]
  BOOLEAN GenerateAudit[2]; // [rsp+A2h] [rbp-B6h] BYREF
  int v43; // [rsp+A4h] [rbp-B4h]
  ACL **v44; // [rsp+A8h] [rbp-B0h] BYREF
  PVOID Token; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int16 v46; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID P; // [rsp+C0h] [rbp-98h] BYREF
  PVOID v48; // [rsp+C8h] [rbp-90h]
  PVOID v49; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v50; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-70h] BYREF
  unsigned int v53; // [rsp+108h] [rbp-50h]
  ULONG v54; // [rsp+10Ch] [rbp-4Ch]
  size_t Size; // [rsp+110h] [rbp-48h]
  PVOID v56; // [rsp+118h] [rbp-40h]

  v12 = ObjectTypeName;
  P = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  v41 = 0;
  GenerateAudit[0] = 0;
  GenerateAlarm = 0;
  v51 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  GenerateAudit[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v15) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v15) )
  {
    v33 = -1073741727;
    goto LABEL_52;
  }
  v16 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v17 = Token;
  v56 = Token;
  if ( v16 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v16 != -1073741816 )
    {
      v32 = (unsigned int)v16;
LABEL_81:
      SepAuditFailed(v32);
    }
    return v16;
  }
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v33 = -1073741659;
LABEL_52:
    SeReleaseSubjectContext(&SubjectContext);
    return v33;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v33 = -1073741703;
    goto LABEL_52;
  }
  v16 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 0, &v44);
  v43 = v16;
  if ( v16 < 0 || !v44 )
  {
    ObfDereferenceObject(v17);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v16 == -1073741670 )
    {
      v32 = 3221225626LL;
      goto LABEL_81;
    }
    return v16;
  }
  if ( AccessGranted && Privileges )
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v54 = PrivilegeCount;
    if ( PrivilegeCount >= 0x42 )
    {
      v21 = -1073741811;
      v43 = -1073741811;
      goto LABEL_29;
    }
    v23 = 12 * (PrivilegeCount - 1) + 20;
    v53 = v23;
    if ( 12 * (PrivilegeCount - 1) != -20 )
    {
      v24 = (char *)Privileges + v23;
      if ( (unsigned __int64)v24 > MmUserProbeAddress || v24 < (char *)Privileges )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    Size = v23;
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v23, 0x72506553u);
    v26 = PoolWithTag;
    v48 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeReleaseSecurityDescriptor(v44, PreviousMode, 0);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      v43 = -1073741670;
      SepAuditFailed(3221225626LL);
      return -1073741670;
    }
    memmove(PoolWithTag, Privileges, Size);
    *v26 = PrivilegeCount;
    v12 = ObjectTypeName;
  }
  if ( HandleId )
  {
    if ( ((unsigned __int8)HandleId & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v51 = *(_QWORD *)HandleId;
  }
  v20 = GenerateOnClose;
  if ( (unsigned __int64)GenerateOnClose >= MmUserProbeAddress )
    v20 = (_BYTE *)MmUserProbeAddress;
  *v20 = *v20;
  v21 = SepProbeAndCaptureString_U(SubsystemName, &P);
  v43 = v21;
  if ( v21 >= 0 )
  {
    v21 = SepProbeAndCaptureString_U(v12, &v50);
    v43 = v21;
    if ( v21 >= 0 )
    {
      v21 = SepProbeAndCaptureString_U(ObjectName, &v49);
      v43 = v21;
    }
  }
LABEL_29:
  if ( v21 >= 0 )
  {
    LOBYTE(v19) = AccessGranted == 0;
    LOBYTE(HandleInformation) = 0;
    LOBYTE(v18) = AccessGranted;
    v28 = v50;
    v29 = SepAdtAuditObjectAccessWithContext(0LL, v50, v18, v19, &SubjectContext, HandleInformation, &v46);
    v30 = v44;
    if ( !v29 )
      goto LABEL_31;
    v34 = *((_WORD *)v44 + 1);
    if ( (v34 & 0x10) == 0 )
      goto LABEL_68;
    if ( (v34 & 0x8000) == 0 )
    {
      v36 = v44[3];
      goto LABEL_70;
    }
    v35 = *((unsigned int *)v44 + 3);
    if ( (_DWORD)v35 )
      v36 = (ACL *)((char *)v44 + v35);
    else
LABEL_68:
      v36 = 0LL;
LABEL_70:
    if ( (v34 & 0x10) == 0 )
      goto LABEL_74;
    if ( (v34 & 0x8000) == 0 )
    {
      v38 = v44[3];
      goto LABEL_76;
    }
    v37 = *((unsigned int *)v44 + 3);
    if ( (_DWORD)v37 )
      v38 = (ACL *)((char *)v44 + v37);
    else
LABEL_74:
      v38 = 0LL;
LABEL_76:
    SeExamineSacl(v38, v36, Token, GrantedAccess | DesiredAccess, AccessGranted, GenerateAudit, &GenerateAlarm);
    if ( GenerateAudit[0] || GenerateAlarm )
    {
      v30 = v44;
      v28 = v50;
      v31 = SepAdtOpenObjectAuditAlarm(
              v46,
              (_DWORD)P,
              (unsigned __int64)&v51 & -(__int64)(HandleId != 0LL),
              (_DWORD)v50,
              (__int64)v49,
              (__int64)v44,
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
      if ( !GenerateAudit[0] && !GenerateAlarm && Privileges && AccessGranted )
      {
        v28 = v50;
        SepAdtPrivilegeObjectAuditAlarm(
          (unsigned __int16 *)P,
          (unsigned __int16 *)v50,
          (unsigned __int16 *)v49,
          v51,
          (__int64)Token,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
          DesiredAccess,
          (unsigned int *)v48,
          AccessGranted);
        v31 = 0;
        v30 = v44;
      }
      SeReleaseSecurityDescriptor(v30, PreviousMode, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      if ( v49 )
        ExFreePoolWithTag(v49, 0);
      if ( v48 )
        ExFreePoolWithTag(v48, 0);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      *GenerateOnClose = v31;
      return 0;
    }
LABEL_31:
    v31 = v41;
    goto LABEL_32;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  SeReleaseSecurityDescriptor(v44, PreviousMode, 0);
  ObfDereferenceObject(Token);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v21 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v21;
}
