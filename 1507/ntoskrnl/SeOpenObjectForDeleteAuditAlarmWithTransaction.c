/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x1406D4B84 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140434B7C (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140526C38 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1406D3128 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x1406D3C14 (SepQueryTypeString.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1406D7C34 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

void __stdcall SeOpenObjectForDeleteAuditAlarmWithTransaction(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        GUID *TransactionId,
        PBOOLEAN GenerateOnClose)
{
  PVOID v11; // r10
  BOOLEAN v12; // r15
  BOOLEAN v13; // r13
  PVOID v14; // r12
  UNICODE_STRING *v15; // rdi
  UNICODE_STRING *v16; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  __int16 v18; // cx
  ACL *v19; // rdx
  __int64 v20; // rax
  ACL *v21; // rcx
  __int64 v22; // rax
  PACCESS_TOKEN v23; // r15
  BOOLEAN v24; // r13
  __int16 v25; // ax
  ACL *v26; // rdx
  __int64 v27; // rax
  int *v28; // rcx
  int NameString; // eax
  GUID *v30; // rax
  GUID *v31; // r15
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  wchar_t *v34; // rcx
  wchar_t *v35; // rax
  int v36; // [rsp+40h] [rbp-91h]
  int v37; // [rsp+58h] [rbp-79h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-29h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-28h] BYREF
  unsigned __int16 v40[2]; // [rsp+ACh] [rbp-25h] BYREF
  int v41; // [rsp+B0h] [rbp-21h]
  int **AuxData; // [rsp+B8h] [rbp-19h]
  PVOID P; // [rsp+C0h] [rbp-11h] BYREF
  PVOID v44; // [rsp+C8h] [rbp-9h] BYREF
  PACCESS_TOKEN Token; // [rsp+D0h] [rbp-1h]
  UNICODE_STRING *ObjectType; // [rsp+118h] [rbp+47h]
  ACCESS_MASK AccessModea; // [rsp+150h] [rbp+7Fh]

  ObjectType = ObjectTypeName;
  v11 = Object;
  v12 = 0;
  GenerateAudit = 0;
  v13 = 0;
  GenerateAlarm[0] = 0;
  v14 = 0LL;
  P = 0LL;
  v15 = 0LL;
  v44 = 0LL;
  v16 = 0LL;
  v41 = 0;
  v40[0] = 999;
  if ( AccessMode )
  {
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    AuxData = (int **)AccessState->AuxData;
    Token = AccessState->SubjectSecurityContext.ClientToken;
    if ( !Token )
      Token = AccessState->SubjectSecurityContext.PrimaryToken;
    if ( ObjectTypeName && ObjectTypeName->Length )
    {
      v16 = ObjectTypeName;
    }
    else if ( v11 )
    {
      v41 = SepQueryTypeString((__int64)v11, &v44);
      if ( v41 < 0 )
      {
LABEL_69:
        if ( v44 )
          ExFreePoolWithTag(v44, 0);
LABEL_71:
        if ( v41 < 0 )
          SepAuditFailed((unsigned int)v41);
        return;
      }
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v11 = Object;
      if ( v44 )
        v16 = (UNICODE_STRING *)v44;
      ObjectTypeName = ObjectType;
    }
    if ( !SecurityDescriptor
      || !SepAdtAuditObjectAccessWithContext(
            (__int64)v11,
            ObjectTypeName,
            AccessGranted,
            AccessGranted == 0,
            p_SubjectSecurityContext,
            1,
            v40) )
    {
      goto LABEL_36;
    }
    v18 = *((_WORD *)SecurityDescriptor + 1);
    AccessModea = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    if ( (v18 & 0x10) != 0 )
    {
      if ( v18 < 0 )
      {
        v20 = *((unsigned int *)SecurityDescriptor + 3);
        v19 = 0LL;
        if ( (_DWORD)v20 )
          v19 = (ACL *)((char *)SecurityDescriptor + v20);
      }
      else
      {
        v19 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
    }
    else
    {
      v19 = 0LL;
    }
    if ( (v18 & 0x10) == 0 )
      goto LABEL_22;
    if ( (v18 & 0x8000) == 0 )
    {
      v21 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_27;
    }
    v22 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v22 )
      v21 = (ACL *)((char *)SecurityDescriptor + v22);
    else
LABEL_22:
      v21 = 0LL;
LABEL_27:
    v23 = Token;
    v24 = AccessGranted;
    SeExamineSacl(
      v21,
      v19,
      Token,
      AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess,
      AccessGranted,
      &GenerateAudit,
      GenerateAlarm);
    v25 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v25 & 0x10) == 0 )
      goto LABEL_28;
    if ( v25 >= 0 )
    {
      v26 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_33;
    }
    v27 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v27 )
      v26 = (ACL *)((char *)SecurityDescriptor + v27);
    else
LABEL_28:
      v26 = 0LL;
LABEL_33:
    SeExamineGlobalSacl(ObjectType, v26, v23, AccessModea, AccessGranted, &GenerateAudit, GenerateAlarm);
    v12 = GenerateAudit;
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
      goto LABEL_44;
    }
    v13 = GenerateAlarm[0];
LABEL_36:
    if ( AccessGranted )
    {
      v28 = *AuxData;
      if ( *AuxData )
      {
        if ( *v28
          && SepAdtAuditPrivilegeUseWithContext(
               (unsigned int *)v28,
               AccessGranted,
               0,
               (__int64)&AccessState->SubjectSecurityContext,
               v40) )
        {
          v12 = 1;
          AccessState->AuditPrivileges = 1;
        }
      }
    }
    if ( !v12 && !v13 )
      goto LABEL_71;
    v24 = AccessGranted;
LABEL_44:
    AccessState->GenerateAudit = 1;
    if ( AbsoluteObjectName && AbsoluteObjectName->Length )
    {
      v15 = AbsoluteObjectName;
    }
    else if ( Object )
    {
      NameString = SepQueryNameString((PEPROCESS)Object, (PUNICODE_STRING *)&P);
      v14 = P;
      v41 = NameString;
      if ( NameString < 0 )
      {
LABEL_67:
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        goto LABEL_69;
      }
      if ( P )
        v15 = (UNICODE_STRING *)P;
    }
    if ( v24 )
    {
      v31 = (GUID *)AuxData;
      SepAdtOpenObjectForDeleteAuditAlarm(
        v40[0],
        (__int64)p_SubjectSecurityContext,
        (__int64)AbsoluteObjectName,
        &v16->Length,
        &v15->Length,
        (__int64)AccessState->SubjectSecurityContext.ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        v36,
        AccessState->PreviouslyGrantedAccess,
        *AuxData,
        v37,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        (int *)TransactionId);
      if ( v15 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15->MaximumLength, 0x20206553u);
        AccessState->ObjectName.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          AccessState->ObjectName.MaximumLength = v15->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v15);
        }
      }
      if ( v16 )
      {
        v34 = AccessState->ObjectTypeName.Buffer;
        if ( v34 )
        {
          ExFreePoolWithTag(v34, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v35 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16->MaximumLength, 0x20206553u);
        AccessState->ObjectTypeName.Buffer = v35;
        if ( v35 )
        {
          AccessState->ObjectTypeName.MaximumLength = v16->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v16);
        }
      }
      if ( TransactionId )
        v31[2] = *TransactionId;
    }
    else
    {
      v30 = TransactionId;
      if ( !TransactionId )
        v30 = (GUID *)(AuxData + 4);
      SepAdtOpenObjectAuditAlarm(
        v40[0],
        SeSubsystemName,
        0LL,
        &v16->Length,
        &v15->Length,
        SecurityDescriptor,
        (__int64)AccessState->SubjectSecurityContext.ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        *AuxData,
        0,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (int *)v30,
        (__int64)AccessState);
    }
    goto LABEL_67;
  }
}
