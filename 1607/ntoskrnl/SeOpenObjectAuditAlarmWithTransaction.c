/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60
 * Callers:
 *     ObCheckObjectAccess @ 0x1404046D0 (ObCheckObjectAccess.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     SeOpenObjectAuditAlarm @ 0x1404BBECC (SeOpenObjectAuditAlarm.c)
 *     CmpCheckKeyBodyAccess @ 0x140602034 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeMaximumAuditMask @ 0x1402197EC (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140413B78 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14069037C (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x140690880 (SepQueryTypeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140690AA4 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140695550 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140695650 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __stdcall SeOpenObjectAuditAlarmWithTransaction(
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
  unsigned __int16 v10; // r10
  PVOID v11; // r11
  unsigned int v12; // edx
  UNICODE_STRING *v13; // rbx
  const UNICODE_STRING *v14; // rsi
  PACCESS_TOKEN ClientToken; // rdi
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // r12
  char *AuxData; // r14
  BOOLEAN v18; // r15
  char v19; // r14
  BOOLEAN v20; // r12
  SECURITY_SUBJECT_CONTEXT *v21; // rsi
  unsigned __int8 v22; // r11
  BOOLEAN v23; // bl
  unsigned __int8 v24; // al
  char v25; // al
  _DWORD *v26; // rcx
  BOOLEAN v27; // al
  char v28; // al
  _BYTE *PrimaryToken; // r8
  unsigned __int16 *v30; // rcx
  __int16 v31; // r11
  __int16 v32; // r15
  __int64 v33; // r9
  int v34; // eax
  unsigned int i; // r10d
  unsigned __int64 v36; // rax
  char v37; // cl
  ACCESS_MASK v38; // esi
  __int16 v39; // cx
  ACL *v40; // rdx
  __int64 v41; // rax
  ACL *v42; // rcx
  __int64 v43; // rax
  __int16 v44; // ax
  ACL *v45; // rdx
  __int64 v46; // rax
  __int16 v47; // ax
  __int64 v48; // rcx
  __int64 v49; // rax
  const UNICODE_STRING *v50; // rdi
  PVOID v51; // rcx
  int v52; // eax
  GUID *v53; // rax
  __int64 v54; // rdx
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  wchar_t *v57; // rcx
  wchar_t *v58; // rax
  int v59; // [rsp+50h] [rbp-D8h]
  BOOLEAN GenerateAudit[4]; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v61; // [rsp+ACh] [rbp-7Ch]
  BOOLEAN GenerateAlarm[4]; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int16 v63; // [rsp+B4h] [rbp-74h] BYREF
  int v64; // [rsp+B8h] [rbp-70h]
  const UNICODE_STRING *v65; // [rsp+C0h] [rbp-68h] BYREF
  const UNICODE_STRING *v66; // [rsp+C8h] [rbp-60h]
  PVOID P; // [rsp+D0h] [rbp-58h] BYREF
  char *v68; // [rsp+D8h] [rbp-50h]
  const UNICODE_STRING *v69; // [rsp+E0h] [rbp-48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-40h] BYREF
  UNICODE_STRING *ObjectType; // [rsp+158h] [rbp+30h]
  PUNICODE_STRING SourceString; // [rsp+168h] [rbp+40h]
  unsigned int *v74; // [rsp+170h] [rbp+48h]

  v74 = (unsigned int *)SecurityDescriptor;
  SourceString = AbsoluteObjectName;
  ObjectType = ObjectTypeName;
  v10 = 999;
  GenerateAudit[0] = 0;
  v11 = Object;
  GenerateAlarm[0] = 0;
  v12 = 0;
  v61 = 999;
  v13 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v69 = 0LL;
  v64 = 0;
  v63 = 999;
  if ( !AccessMode )
    return;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  AuxData = (char *)AccessState->AuxData;
  v68 = AuxData;
  if ( !ClientToken )
    ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
  v18 = AccessGranted;
  if ( !SecurityDescriptor )
    goto LABEL_26;
  v10 = 119;
  v61 = 119;
  if ( !AccessGranted )
    LOBYTE(v13) = 1;
  v63 = 119;
  if ( AccessGranted )
    LODWORD(v14) = 3;
  if ( (_BYTE)v13 )
    LODWORD(v14) = (unsigned int)v14 | 0x30;
  if ( !dword_140300C08 )
    goto LABEL_14;
  if ( (dword_140300C08 & (unsigned int)v14) != 0 )
  {
LABEL_65:
    v61 = SepAdtClassifyObjectIntoSubCategory(v11, ObjectTypeName, v18, (unsigned __int8)v13);
    v63 = v61;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(
                            (unsigned __int16)v61,
                            v18,
                            (unsigned __int8)v13,
                            p_SubjectSecurityContext) )
    {
      v38 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
      v39 = *((_WORD *)v74 + 1);
      if ( (v39 & 0x10) != 0 )
      {
        if ( v39 < 0 )
        {
          v41 = v74[3];
          if ( (_DWORD)v41 )
            v40 = (ACL *)((char *)v74 + v41);
          else
            v40 = 0LL;
        }
        else
        {
          v40 = (ACL *)*((_QWORD *)v74 + 3);
        }
      }
      else
      {
        v40 = 0LL;
      }
      if ( (v39 & 0x10) != 0 )
      {
        if ( v39 < 0 )
        {
          v43 = v74[3];
          if ( (_DWORD)v43 )
            v42 = (ACL *)((char *)v74 + v43);
          else
            v42 = 0LL;
        }
        else
        {
          v42 = (ACL *)*((_QWORD *)v74 + 3);
        }
      }
      else
      {
        v42 = 0LL;
      }
      SeExamineSacl(v42, v40, ClientToken, v38, v18, GenerateAudit, GenerateAlarm);
      v44 = *((_WORD *)v74 + 1);
      if ( (v44 & 0x10) != 0 )
      {
        if ( v44 < 0 )
        {
          v46 = v74[3];
          if ( (_DWORD)v46 )
            v45 = (ACL *)((char *)v74 + v46);
          else
            v45 = 0LL;
        }
        else
        {
          v45 = (ACL *)*((_QWORD *)v74 + 3);
        }
      }
      else
      {
        v45 = 0LL;
      }
      SeExamineGlobalSacl(ObjectType, v45, ClientToken, v38, v18, GenerateAudit, GenerateAlarm);
      v20 = GenerateAudit[0];
      if ( GenerateAudit[0] )
      {
        *GenerateOnClose = 1;
        if ( !v18 )
        {
          v10 = v61;
          v21 = &AccessState->SubjectSecurityContext;
          SecurityDescriptor = v74;
          goto LABEL_34;
        }
        v47 = *((_WORD *)v74 + 1);
        if ( (v47 & 0x10) != 0 )
        {
          if ( v47 >= 0 )
          {
            v48 = *((_QWORD *)v74 + 3);
          }
          else
          {
            v49 = v74[3];
            if ( (_DWORD)v49 )
              v48 = (__int64)v74 + v49;
            else
              v48 = 0LL;
          }
        }
        else
        {
          v48 = 0LL;
        }
        SeMaximumAuditMask(v48, v38, (__int64)ClientToken, (_DWORD *)AuxData + 7);
        SeMaximumAuditMaskFromGlobalSacl(ObjectType, v38, ClientToken, (PACCESS_MASK)AuxData + 7);
      }
    }
    else
    {
      v20 = GenerateAudit[0];
    }
    v10 = v61;
    SecurityDescriptor = v74;
    goto LABEL_15;
  }
  v19 = 0;
  if ( !dword_140300D48 )
  {
LABEL_14:
    v20 = GenerateAudit[0];
LABEL_15:
    v21 = &AccessState->SubjectSecurityContext;
    goto LABEL_16;
  }
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    p_SubjectSecurityContext = &SubjectContext;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    v10 = v61;
    v12 = 0;
    SecurityDescriptor = v74;
    ObjectTypeName = ObjectType;
    v11 = Object;
  }
  PrimaryToken = p_SubjectSecurityContext->ClientToken;
  if ( p_SubjectSecurityContext->ClientToken || (PrimaryToken = p_SubjectSecurityContext->PrimaryToken) != 0LL )
  {
    if ( PrimaryToken[119] != 2 )
      goto LABEL_62;
    v30 = (unsigned __int16 *)&AdtpPerCategoryCount;
    v31 = 0;
    v32 = 0;
    v33 = 2LL;
    do
    {
      v34 = *v30++;
      v12 += v34;
      --v33;
    }
    while ( v33 );
    for ( i = v12 + 14; v12 < i; ++v12 )
    {
      v36 = (unsigned __int64)v12 >> 1;
      v37 = 4 * (v12 & 1);
      if ( (((unsigned __int8)PrimaryToken[v36 + 88] >> v37) & 1) != 0 )
      {
        if ( ((unsigned __int8)v14 & 2) != 0 )
          goto LABEL_59;
        ++v31;
      }
      if ( (((unsigned __int8)PrimaryToken[v36 + 88] >> v37) & 4) != 0 )
      {
        if ( ((unsigned __int8)v14 & 0x20) != 0 )
          goto LABEL_59;
        ++v32;
      }
    }
    if ( ((unsigned __int8)v14 & 1) != 0 && v31 == 14 || ((unsigned __int8)v14 & 0x10) != 0 && v32 == 14 )
LABEL_59:
      v19 = 1;
    v18 = AccessGranted;
  }
  else
  {
    SepAuditFailed(3221225596LL);
  }
  v11 = Object;
  ObjectTypeName = ObjectType;
  SecurityDescriptor = v74;
  v10 = v61;
LABEL_62:
  v21 = &AccessState->SubjectSecurityContext;
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    SeReleaseSubjectContext(p_SubjectSecurityContext);
    v10 = v61;
    SecurityDescriptor = v74;
    ObjectTypeName = ObjectType;
    v11 = Object;
  }
  if ( v19 )
  {
    AuxData = v68;
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    goto LABEL_65;
  }
  v20 = GenerateAudit[0];
LABEL_16:
  if ( v18 )
  {
    v22 = 0;
    goto LABEL_18;
  }
LABEL_34:
  v22 = 1;
LABEL_18:
  v23 = v18;
  AbsoluteObjectName = (PUNICODE_STRING)AccessState->AuxData;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
  {
    v23 = 0;
    v22 = 1;
  }
  v24 = 0;
  while ( *((int *)&AbsoluteObjectName[5].Buffer + v24) >= 0 )
  {
    if ( ++v24 >= 0x20u )
    {
      v25 = 0;
      goto LABEL_24;
    }
  }
  v25 = SepAdtAuditThisEventWithContext(130LL, v23, v22, v21);
  v10 = v61;
  SecurityDescriptor = v74;
LABEL_24:
  AuxData = v68;
  v68[216] = v25;
  if ( v20 )
    goto LABEL_101;
  v13 = (UNICODE_STRING *)v65;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  v14 = v69;
LABEL_26:
  if ( v18 )
  {
    v26 = *(_DWORD **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v26 )
      {
        v28 = SepAdtAuditPrivilegeUseWithContext((_DWORD)v26, v18, 0, (_DWORD)p_SubjectSecurityContext, (__int64)&v63);
        v10 = v63;
        SecurityDescriptor = v74;
        v61 = v63;
        if ( v28 )
        {
          AccessState->AuditPrivileges = 1;
          goto LABEL_101;
        }
      }
    }
  }
  if ( GenerateAlarm[0] )
  {
LABEL_101:
    v13 = (UNICODE_STRING *)v65;
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    v14 = v69;
    v27 = 1;
    goto LABEL_31;
  }
  v27 = 0;
LABEL_31:
  AccessState->GenerateAudit = v27;
  if ( !v27 && !AuxData[216] )
    return;
  v50 = SourceString;
  if ( SourceString && SourceString->Length )
  {
    v51 = Object;
  }
  else
  {
    v51 = Object;
    if ( Object )
    {
      v52 = SepQueryNameString(Object, &P, AbsoluteObjectName, SecurityDescriptor);
      v64 = v52;
      if ( v52 < 0 )
        goto LABEL_136;
      v50 = v66;
      v10 = v61;
      SecurityDescriptor = v74;
      if ( P && *((_WORD *)P + 1) != (_WORD)v66 )
        v50 = (const UNICODE_STRING *)P;
      v51 = Object;
    }
    else
    {
      v50 = v66;
    }
  }
  if ( ObjectType && ObjectType->Length )
  {
    v14 = ObjectType;
LABEL_119:
    if ( v18 )
    {
      if ( v50 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v50->MaximumLength, 0x20206553u);
        AccessState->ObjectName.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          AccessState->ObjectName.MaximumLength = v50->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v50);
        }
      }
      if ( v14 )
      {
        v57 = AccessState->ObjectTypeName.Buffer;
        if ( v57 )
        {
          ExFreePoolWithTag(v57, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v58 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14->MaximumLength, 0x20206553u);
        AccessState->ObjectTypeName.Buffer = v58;
        if ( v58 )
        {
          AccessState->ObjectTypeName.MaximumLength = v14->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v14);
        }
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v53 = TransactionId;
      if ( !TransactionId )
        v53 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v10,
        (int)&SeSubsystemName,
        0,
        (int)v14,
        (__int64)v50,
        SecurityDescriptor,
        (__int64)p_SubjectSecurityContext->ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        *(_QWORD *)AuxData,
        0,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (__int64)v53,
        (__int64)AccessState);
      LOBYTE(v59) = 0;
      SepAdtStagingEvent(
        v61,
        v54,
        0LL,
        v14,
        v50,
        p_SubjectSecurityContext->ClientToken,
        AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        v59,
        0LL,
        AccessState);
    }
    v52 = v64;
    goto LABEL_136;
  }
  if ( !v51 )
    goto LABEL_119;
  v52 = SepQueryTypeString(v51, &v65, AbsoluteObjectName, SecurityDescriptor);
  v13 = (UNICODE_STRING *)v65;
  v64 = v52;
  if ( v52 >= 0 )
  {
    v10 = v61;
    SecurityDescriptor = v74;
    if ( v65 )
      v14 = v65;
    goto LABEL_119;
  }
LABEL_136:
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v52 = v64;
  }
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    v52 = v64;
  }
  if ( v52 < 0 )
    SepAuditFailed((unsigned int)v52);
}
