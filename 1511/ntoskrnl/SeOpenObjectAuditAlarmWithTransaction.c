/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30
 * Callers:
 *     CmpCheckKeyBodyAccess @ 0x1404033B0 (CmpCheckKeyBodyAccess.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x140470650 (ObCheckObjectAccess.c)
 *     SeOpenObjectAuditAlarm @ 0x1404B2E1C (SeOpenObjectAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SeMaximumAuditMask @ 0x1402004D8 (SeMaximumAuditMask.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepQueryNameString @ 0x1403BF450 (SepQueryNameString.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140478B20 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140650CA8 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x140651514 (SepQueryTypeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140651738 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140655D28 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140655E28 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
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
  PVOID v13; // rbx
  UNICODE_STRING *v14; // rsi
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
  const UNICODE_STRING *v50; // rcx
  PVOID v51; // r8
  int NameString; // eax
  int v53; // edi
  const UNICODE_STRING *v54; // rdi
  int v55; // eax
  GUID *v56; // rax
  __int64 v57; // rdx
  wchar_t *Buffer; // rcx
  PCUNICODE_STRING v59; // r15
  wchar_t *PoolWithTag; // rax
  wchar_t *v61; // rcx
  wchar_t *v62; // rax
  int v63; // [rsp+50h] [rbp-D8h]
  BOOLEAN GenerateAudit[4]; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v65; // [rsp+ACh] [rbp-7Ch]
  BOOLEAN GenerateAlarm[4]; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int16 v67; // [rsp+B4h] [rbp-74h] BYREF
  int v68; // [rsp+B8h] [rbp-70h]
  PCUNICODE_STRING SourceString; // [rsp+C0h] [rbp-68h]
  PVOID P; // [rsp+C8h] [rbp-60h] BYREF
  const UNICODE_STRING *v71; // [rsp+D0h] [rbp-58h] BYREF
  char *v72; // [rsp+D8h] [rbp-50h]
  const UNICODE_STRING *v73; // [rsp+E0h] [rbp-48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-40h] BYREF
  UNICODE_STRING *ObjectType; // [rsp+158h] [rbp+30h]
  unsigned int *v78; // [rsp+170h] [rbp+48h]

  v78 = (unsigned int *)SecurityDescriptor;
  ObjectType = ObjectTypeName;
  v10 = 999;
  GenerateAudit[0] = 0;
  v11 = Object;
  GenerateAlarm[0] = 0;
  v12 = 0;
  v65 = 999;
  v13 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v71 = 0LL;
  SourceString = 0LL;
  v73 = 0LL;
  v68 = 0;
  v67 = 999;
  if ( !AccessMode )
    return;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  AuxData = (char *)AccessState->AuxData;
  v72 = AuxData;
  if ( !ClientToken )
    ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
  v18 = AccessGranted;
  if ( !SecurityDescriptor )
    goto LABEL_26;
  v10 = 118;
  v65 = 118;
  if ( !AccessGranted )
    LOBYTE(v13) = 1;
  v67 = 118;
  if ( AccessGranted )
    LODWORD(v14) = 3;
  if ( (_BYTE)v13 )
    LODWORD(v14) = (unsigned int)v14 | 0x30;
  if ( !dword_1402DB908 )
    goto LABEL_14;
  if ( (dword_1402DB908 & (unsigned int)v14) != 0 )
  {
LABEL_65:
    v65 = SepAdtClassifyObjectIntoSubCategory(v11, ObjectTypeName, v18, (unsigned __int8)v13);
    v67 = v65;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(
                            (unsigned __int16)v65,
                            v18,
                            (unsigned __int8)v13,
                            p_SubjectSecurityContext) )
    {
      v38 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
      v39 = *((_WORD *)v78 + 1);
      if ( (v39 & 0x10) != 0 )
      {
        if ( v39 < 0 )
        {
          v41 = v78[3];
          if ( (_DWORD)v41 )
            v40 = (ACL *)((char *)v78 + v41);
          else
            v40 = 0LL;
        }
        else
        {
          v40 = (ACL *)*((_QWORD *)v78 + 3);
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
          v43 = v78[3];
          if ( (_DWORD)v43 )
            v42 = (ACL *)((char *)v78 + v43);
          else
            v42 = 0LL;
        }
        else
        {
          v42 = (ACL *)*((_QWORD *)v78 + 3);
        }
      }
      else
      {
        v42 = 0LL;
      }
      SeExamineSacl(v42, v40, ClientToken, v38, v18, GenerateAudit, GenerateAlarm);
      v44 = *((_WORD *)v78 + 1);
      if ( (v44 & 0x10) != 0 )
      {
        if ( v44 < 0 )
        {
          v46 = v78[3];
          if ( (_DWORD)v46 )
            v45 = (ACL *)((char *)v78 + v46);
          else
            v45 = 0LL;
        }
        else
        {
          v45 = (ACL *)*((_QWORD *)v78 + 3);
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
          v10 = v65;
          v21 = &AccessState->SubjectSecurityContext;
          SecurityDescriptor = v78;
          goto LABEL_34;
        }
        v47 = *((_WORD *)v78 + 1);
        if ( (v47 & 0x10) != 0 )
        {
          if ( v47 >= 0 )
          {
            v48 = *((_QWORD *)v78 + 3);
          }
          else
          {
            v49 = v78[3];
            if ( (_DWORD)v49 )
              v48 = (__int64)v78 + v49;
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
    v10 = v65;
    SecurityDescriptor = v78;
    goto LABEL_15;
  }
  v19 = 0;
  if ( !dword_1402DBA48 )
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
    v10 = v65;
    v12 = 0;
    SecurityDescriptor = v78;
    ObjectTypeName = ObjectType;
    v11 = Object;
  }
  PrimaryToken = p_SubjectSecurityContext->ClientToken;
  if ( p_SubjectSecurityContext->ClientToken || (PrimaryToken = p_SubjectSecurityContext->PrimaryToken) != 0LL )
  {
    if ( PrimaryToken[118] != 2 )
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
  SecurityDescriptor = v78;
  v10 = v65;
LABEL_62:
  v21 = &AccessState->SubjectSecurityContext;
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    SeReleaseSubjectContext(p_SubjectSecurityContext);
    v10 = v65;
    SecurityDescriptor = v78;
    ObjectTypeName = ObjectType;
    v11 = Object;
  }
  if ( v19 )
  {
    AuxData = v72;
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
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
  {
    v23 = 0;
    v22 = 1;
  }
  v24 = 0;
  while ( *((int *)AccessState->AuxData + v24 + 22) >= 0 )
  {
    if ( ++v24 >= 0x20u )
    {
      v25 = 0;
      goto LABEL_24;
    }
  }
  v25 = SepAdtAuditThisEventWithContext(129LL, v23, v22, v21);
  v10 = v65;
  SecurityDescriptor = v78;
LABEL_24:
  AuxData = v72;
  v72[216] = v25;
  if ( v20 )
    goto LABEL_101;
  v13 = P;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  v14 = (UNICODE_STRING *)v71;
LABEL_26:
  if ( v18 )
  {
    v26 = *(_DWORD **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v26 )
      {
        v28 = SepAdtAuditPrivilegeUseWithContext((_DWORD)v26, v18, 0, (_DWORD)p_SubjectSecurityContext, (__int64)&v67);
        v10 = v67;
        SecurityDescriptor = v78;
        v65 = v67;
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
    v13 = P;
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    v14 = (UNICODE_STRING *)v71;
    v27 = 1;
    goto LABEL_31;
  }
  v27 = 0;
LABEL_31:
  AccessState->GenerateAudit = v27;
  if ( !v27 && !AuxData[216] )
    return;
  v50 = AbsoluteObjectName;
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
  {
    v51 = Object;
    SourceString = AbsoluteObjectName;
  }
  else
  {
    v51 = Object;
    if ( Object )
    {
      NameString = SepQueryNameString((PEPROCESS)Object, (PUNICODE_STRING *)&P);
      v13 = P;
      v53 = NameString;
      v68 = NameString;
      if ( NameString < 0 )
        goto LABEL_139;
      v50 = SourceString;
      v10 = v65;
      SecurityDescriptor = v78;
      v51 = Object;
      if ( P )
      {
        if ( *((_WORD *)P + 1) != (_WORD)SourceString )
          v50 = (const UNICODE_STRING *)P;
        SourceString = v50;
      }
    }
    else
    {
      v50 = SourceString;
    }
  }
  if ( ObjectType && ObjectType->Length )
  {
    v54 = ObjectType;
LABEL_122:
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
        v59 = SourceString;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString->MaximumLength, 0x20206553u);
        AccessState->ObjectName.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          AccessState->ObjectName.MaximumLength = v59->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v59);
        }
      }
      if ( v54 )
      {
        v61 = AccessState->ObjectTypeName.Buffer;
        if ( v61 )
        {
          ExFreePoolWithTag(v61, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v62 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v54->MaximumLength, 0x20206553u);
        AccessState->ObjectTypeName.Buffer = v62;
        if ( v62 )
        {
          AccessState->ObjectTypeName.MaximumLength = v54->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v54);
        }
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v56 = TransactionId;
      if ( !TransactionId )
        v56 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v10,
        (unsigned int)&SeSubsystemName,
        0,
        (_DWORD)v54,
        (__int64)v50,
        (__int64)SecurityDescriptor,
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
        (__int64)v56,
        (__int64)AccessState);
      LOBYTE(v63) = 0;
      SepAdtStagingEvent(
        v65,
        v57,
        0LL,
        v54,
        SourceString,
        p_SubjectSecurityContext->ClientToken,
        AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        v63,
        0LL,
        AccessState);
    }
    v53 = v68;
    goto LABEL_139;
  }
  if ( !v51 )
  {
    v54 = v73;
    goto LABEL_122;
  }
  v55 = SepQueryTypeString(v51, &v71);
  v14 = (UNICODE_STRING *)v71;
  v53 = v55;
  v68 = v55;
  if ( v55 >= 0 )
  {
    v54 = v73;
    v10 = v65;
    SecurityDescriptor = v78;
    if ( v71 )
      v54 = v71;
    v50 = SourceString;
    goto LABEL_122;
  }
LABEL_139:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v53 < 0 )
    SepAuditFailed((unsigned int)v53);
}
