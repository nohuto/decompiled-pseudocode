/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406918F0
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x140691898 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140413B78 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404A2230 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14068FEA4 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepQueryTypeString @ 0x140690880 (SepQueryTypeString.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140695550 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
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
  BOOLEAN v13; // r12
  PVOID v14; // r13
  UNICODE_STRING *v15; // rdi
  UNICODE_STRING *v16; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  int v18; // eax
  __int16 v19; // cx
  ACL *v20; // rdx
  __int64 v21; // rax
  ACL *v22; // rcx
  __int64 v23; // rax
  PACCESS_TOKEN v24; // r15
  BOOLEAN v25; // r12
  __int16 v26; // ax
  ACL *v27; // rdx
  __int64 v28; // rax
  int *v29; // rcx
  unsigned __int16 *v30; // rdx
  GUID *v31; // rax
  GUID *v32; // r15
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  wchar_t *v35; // rcx
  wchar_t *v36; // rax
  int v37; // [rsp+40h] [rbp-91h]
  int v38; // [rsp+58h] [rbp-79h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-29h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-28h] BYREF
  unsigned __int16 v41[2]; // [rsp+ACh] [rbp-25h] BYREF
  int v42; // [rsp+B0h] [rbp-21h]
  int **AuxData; // [rsp+B8h] [rbp-19h]
  PVOID v44; // [rsp+C0h] [rbp-11h] BYREF
  PVOID P; // [rsp+C8h] [rbp-9h] BYREF
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
  v42 = 0;
  v41[0] = 999;
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
      v18 = SepQueryTypeString((__int64)v11, &v44);
      v14 = v44;
      v42 = v18;
      if ( v18 < 0 )
        goto LABEL_66;
      ObjectTypeName = ObjectType;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v11 = Object;
      if ( v44 )
        v16 = (UNICODE_STRING *)v44;
    }
    if ( !SecurityDescriptor
      || !SepAdtAuditObjectAccessWithContext(
            (__int64)v11,
            ObjectTypeName,
            AccessGranted,
            AccessGranted == 0,
            p_SubjectSecurityContext,
            1,
            v41) )
    {
      goto LABEL_35;
    }
    v19 = *((_WORD *)SecurityDescriptor + 1);
    AccessModea = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    if ( (v19 & 0x10) != 0 )
    {
      if ( v19 < 0 )
      {
        v21 = *((unsigned int *)SecurityDescriptor + 3);
        v20 = 0LL;
        if ( (_DWORD)v21 )
          v20 = (ACL *)((char *)SecurityDescriptor + v21);
      }
      else
      {
        v20 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
    }
    else
    {
      v20 = 0LL;
    }
    if ( (v19 & 0x10) == 0 )
      goto LABEL_21;
    if ( (v19 & 0x8000) == 0 )
    {
      v22 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_26;
    }
    v23 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v23 )
      v22 = (ACL *)((char *)SecurityDescriptor + v23);
    else
LABEL_21:
      v22 = 0LL;
LABEL_26:
    v24 = Token;
    v25 = AccessGranted;
    SeExamineSacl(
      v22,
      v20,
      Token,
      AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess,
      AccessGranted,
      &GenerateAudit,
      GenerateAlarm);
    v26 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v26 & 0x10) == 0 )
      goto LABEL_27;
    if ( v26 >= 0 )
    {
      v27 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_32;
    }
    v28 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v28 )
      v27 = (ACL *)((char *)SecurityDescriptor + v28);
    else
LABEL_27:
      v27 = 0LL;
LABEL_32:
    SeExamineGlobalSacl(ObjectType, v27, v24, AccessModea, AccessGranted, &GenerateAudit, GenerateAlarm);
    v12 = GenerateAudit;
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
LABEL_43:
      AccessState->GenerateAudit = 1;
      if ( AbsoluteObjectName && AbsoluteObjectName->Length )
      {
        v15 = AbsoluteObjectName;
        goto LABEL_50;
      }
      if ( !Object )
      {
LABEL_50:
        if ( v25 )
        {
          v32 = (GUID *)AuxData;
          SepAdtOpenObjectForDeleteAuditAlarm(
            v41[0],
            (__int64)p_SubjectSecurityContext,
            (__int64)AbsoluteObjectName,
            &v16->Length,
            &v15->Length,
            (__int64)AccessState->SubjectSecurityContext.ClientToken,
            (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
            v37,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            v38,
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
            v35 = AccessState->ObjectTypeName.Buffer;
            if ( v35 )
            {
              ExFreePoolWithTag(v35, 0);
              *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
            }
            v36 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16->MaximumLength, 0x20206553u);
            AccessState->ObjectTypeName.Buffer = v36;
            if ( v36 )
            {
              AccessState->ObjectTypeName.MaximumLength = v16->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectTypeName, v16);
            }
          }
          if ( TransactionId )
            v32[2] = *TransactionId;
        }
        else
        {
          v31 = TransactionId;
          if ( !TransactionId )
            v31 = (GUID *)(AuxData + 4);
          SepAdtOpenObjectAuditAlarm(
            v41[0],
            &SeSubsystemName,
            0LL,
            &v16->Length,
            &v15->Length,
            (__int16 *)SecurityDescriptor,
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
            (int *)v31,
            (__int64)AccessState);
        }
        goto LABEL_66;
      }
      v42 = SepQueryNameString((char *)Object, &P);
      if ( v42 >= 0 )
      {
        if ( P )
          v15 = (UNICODE_STRING *)P;
        goto LABEL_50;
      }
LABEL_66:
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
LABEL_70:
      if ( v42 < 0 )
        SepAuditFailed((unsigned int)v42);
      return;
    }
    v13 = GenerateAlarm[0];
LABEL_35:
    if ( AccessGranted )
    {
      v29 = *AuxData;
      if ( *AuxData )
      {
        if ( *v29 )
        {
          v30 = v41;
          LOBYTE(v30) = AccessGranted;
          if ( SepAdtAuditPrivilegeUseWithContext(
                 (unsigned int *)v29,
                 (__int64)v30,
                 0LL,
                 (__int64)&AccessState->SubjectSecurityContext,
                 v41) )
          {
            v12 = 1;
            AccessState->AuditPrivileges = 1;
          }
        }
      }
    }
    if ( !v12 && !v13 )
      goto LABEL_70;
    v25 = AccessGranted;
    goto LABEL_43;
  }
}
