/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x1404B9924
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeCheckAuditPrivilege @ 0x14046E588 (SeCheckAuditPrivilege.c)
 *     SepProbeAndCaptureString_U @ 0x14046F5B0 (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140479708 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  BOOLEAN v14; // r13
  NTSTATUS v15; // esi
  PVOID v16; // rdi
  _BYTE *v17; // rcx
  NTSTATUS v18; // edi
  ULONG PrivilegeCount; // r14d
  unsigned int v20; // ecx
  char *v21; // rdx
  ULONG *PoolWithTag; // rax
  ULONG *v23; // rdi
  PVOID v25; // r14
  char v26; // al
  ACL **v27; // rdi
  BOOLEAN v28; // r12
  __int64 v29; // rcx
  NTSTATUS v30; // ebx
  __int16 v31; // cx
  __int64 v32; // rdx
  ACL *v33; // rdx
  __int64 v34; // rax
  ACL *v35; // rcx
  BOOLEAN GenerateAlarm; // [rsp+A0h] [rbp-B8h] BYREF
  BOOLEAN v37; // [rsp+A1h] [rbp-B7h]
  BOOLEAN GenerateAudit[2]; // [rsp+A2h] [rbp-B6h] BYREF
  int v39; // [rsp+A4h] [rbp-B4h]
  ACL **v40; // [rsp+A8h] [rbp-B0h] BYREF
  PVOID Token; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int16 v42; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID P; // [rsp+C0h] [rbp-98h] BYREF
  PVOID v44; // [rsp+C8h] [rbp-90h]
  PVOID v45; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v46; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-70h] BYREF
  unsigned int v49; // [rsp+108h] [rbp-50h]
  ULONG v50; // [rsp+10Ch] [rbp-4Ch]
  size_t Size; // [rsp+110h] [rbp-48h]
  PVOID v52; // [rsp+118h] [rbp-40h]

  v12 = ObjectTypeName;
  P = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v37 = 0;
  GenerateAudit[0] = 0;
  GenerateAlarm = 0;
  v47 = 0LL;
  v14 = KeGetCurrentThread()->gap0[10];
  GenerateAudit[1] = v14;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, v14) )
  {
    v30 = -1073741727;
    goto LABEL_52;
  }
  v15 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, v14, &Token, 0LL);
  v16 = Token;
  v52 = Token;
  if ( v15 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 != -1073741816 )
    {
      v29 = (unsigned int)v15;
LABEL_81:
      SepAuditFailed(v29);
    }
    return v15;
  }
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v30 = -1073741659;
LABEL_52:
    SeReleaseSubjectContext(&SubjectContext);
    return v30;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v30 = -1073741703;
    goto LABEL_52;
  }
  v15 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, v14, PagedPool, 0, &v40);
  v39 = v15;
  if ( v15 < 0 || !v40 )
  {
    ObfDereferenceObject(v16);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 == -1073741670 )
    {
      v29 = 3221225626LL;
      goto LABEL_81;
    }
    return v15;
  }
  if ( AccessGranted && Privileges )
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v50 = PrivilegeCount;
    if ( PrivilegeCount >= 0x42 )
    {
      v18 = -1073741811;
      v39 = -1073741811;
      goto LABEL_29;
    }
    v20 = 12 * (PrivilegeCount - 1) + 20;
    v49 = v20;
    if ( 12 * (PrivilegeCount - 1) != -20 )
    {
      v21 = (char *)Privileges + v20;
      if ( (unsigned __int64)v21 > MmUserProbeAddress || v21 < (char *)Privileges )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    Size = v20;
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v20, 0x72506553u);
    v23 = PoolWithTag;
    v44 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeReleaseSecurityDescriptor(v40, v14, 0);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      v39 = -1073741670;
      SepAuditFailed(3221225626LL);
      return -1073741670;
    }
    memmove(PoolWithTag, Privileges, Size);
    *v23 = PrivilegeCount;
    v12 = ObjectTypeName;
  }
  if ( HandleId )
  {
    if ( ((unsigned __int8)HandleId & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v47 = *(_QWORD *)HandleId;
  }
  v17 = GenerateOnClose;
  if ( (unsigned __int64)GenerateOnClose >= MmUserProbeAddress )
    v17 = (_BYTE *)MmUserProbeAddress;
  *v17 = *v17;
  v18 = SepProbeAndCaptureString_U((ULONG64)SubsystemName, (__int64)&P);
  v39 = v18;
  if ( v18 >= 0 )
  {
    v18 = SepProbeAndCaptureString_U((ULONG64)v12, (__int64)&v46);
    v39 = v18;
    if ( v18 >= 0 )
    {
      v18 = SepProbeAndCaptureString_U((ULONG64)ObjectName, (__int64)&v45);
      v39 = v18;
    }
  }
LABEL_29:
  if ( v18 >= 0 )
  {
    v25 = v46;
    v26 = SepAdtAuditObjectAccessWithContext(
            0LL,
            (const UNICODE_STRING *)v46,
            AccessGranted,
            AccessGranted == 0,
            &SubjectContext,
            0,
            &v42);
    v27 = v40;
    if ( !v26 )
      goto LABEL_31;
    v31 = *((_WORD *)v40 + 1);
    if ( (v31 & 0x10) == 0 )
      goto LABEL_68;
    if ( (v31 & 0x8000) == 0 )
    {
      v33 = v40[3];
      goto LABEL_70;
    }
    v32 = *((unsigned int *)v40 + 3);
    if ( (_DWORD)v32 )
      v33 = (ACL *)((char *)v40 + v32);
    else
LABEL_68:
      v33 = 0LL;
LABEL_70:
    if ( (v31 & 0x10) == 0 )
      goto LABEL_74;
    if ( (v31 & 0x8000) == 0 )
    {
      v35 = v40[3];
      goto LABEL_76;
    }
    v34 = *((unsigned int *)v40 + 3);
    if ( (_DWORD)v34 )
      v35 = (ACL *)((char *)v40 + v34);
    else
LABEL_74:
      v35 = 0LL;
LABEL_76:
    SeExamineSacl(v35, v33, Token, GrantedAccess | DesiredAccess, AccessGranted, GenerateAudit, &GenerateAlarm);
    if ( GenerateAudit[0] || GenerateAlarm )
    {
      v27 = v40;
      v25 = v46;
      v28 = SepAdtOpenObjectAuditAlarm(
              v42,
              (_DWORD)P,
              (unsigned __int64)&v47 & -(__int64)(HandleId != 0LL),
              (_DWORD)v46,
              (__int64)v45,
              (__int64)v40,
              (__int64)Token,
              (__int64)SubjectContext.PrimaryToken,
              DesiredAccess,
              GrantedAccess,
              (__int64)v44,
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
        v25 = v46;
        SepAdtPrivilegeObjectAuditAlarm(
          (unsigned __int16 *)P,
          (unsigned __int16 *)v46,
          (unsigned __int16 *)v45,
          v47,
          (__int64)Token,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
          DesiredAccess,
          (int *)v44,
          AccessGranted);
        v28 = 0;
        v27 = v40;
      }
      SeReleaseSecurityDescriptor(v27, v14, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v25 )
        ExFreePoolWithTag(v25, 0);
      if ( v45 )
        ExFreePoolWithTag(v45, 0);
      if ( v44 )
        ExFreePoolWithTag(v44, 0);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      *GenerateOnClose = v28;
      return 0;
    }
LABEL_31:
    v28 = v37;
    goto LABEL_32;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
  if ( v45 )
    ExFreePoolWithTag(v45, 0);
  if ( v44 )
    ExFreePoolWithTag(v44, 0);
  SeReleaseSecurityDescriptor(v40, v14, 0);
  ObfDereferenceObject(Token);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v18 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v18;
}
