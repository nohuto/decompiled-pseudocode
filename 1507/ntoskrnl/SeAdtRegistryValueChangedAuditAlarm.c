/*
 * XREFs of SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     ObNormalizeHandleValue @ 0x140587094 (ObNormalizeHandleValue.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1406D7C34 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 *     AdtpBuildRegistryValueString @ 0x14070C50C (AdtpBuildRegistryValueString.c)
 *     AdtpBuildReplacementString @ 0x14070CFE0 (AdtpBuildReplacementString.c)
 */

void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        struct _KPROCESS *a5,
        unsigned __int64 a6,
        unsigned int *a7,
        int a8)
{
  PUNICODE_STRING v9; // r14
  PVOID v10; // rdi
  unsigned __int16 *v11; // rsi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v14; // rdx
  __int16 v15; // ax
  void *v16; // r8
  __int16 v17; // cx
  ACL *v18; // rdx
  __int64 v19; // rdx
  ACL *v20; // rcx
  __int64 v21; // rax
  __int16 v22; // ax
  ACL *v23; // rdx
  __int64 v24; // rax
  NTSTATUS NameString; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _KPROCESS *v30; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  _QWORD *v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD **v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  unsigned __int64 v38; // rax
  int v39; // r9d
  int v40; // r10d
  unsigned int v41; // r8d
  unsigned int v42; // r11d
  BOOLEAN GenerateAudit[8]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v45; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v46; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v47; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v48; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v49; // [rsp+98h] [rbp-70h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int16 *v51; // [rsp+B0h] [rbp-58h]
  PEPROCESS Process; // [rsp+B8h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD Src[132]; // [rsp+F8h] [rbp-10h] BYREF
  char v56; // [rsp+518h] [rbp+410h] BYREF
  char v57; // [rsp+538h] [rbp+430h] BYREF
  char v58; // [rsp+558h] [rbp+450h] BYREF

  v9 = 0LL;
  Process = a5;
  memset(Src, 0, 1048);
  v51 = a4;
  P = 0LL;
  *(_QWORD *)&v49.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v49.Buffer + 2) = 0;
  v10 = 0LL;
  HIWORD(v49.Buffer) = 0;
  v11 = 0LL;
  *(_QWORD *)&v48.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v48.Buffer + 2) = 0;
  HIWORD(v48.Buffer) = 0;
  *(_QWORD *)&v46.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v46.Buffer + 2) = 0;
  HIWORD(v46.Buffer) = 0;
  *(_QWORD *)&v45.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v45.Buffer + 2) = 0;
  HIWORD(v45.Buffer) = 0;
  v47 = 0uLL;
  v49.Length = 0;
  v48.Length = 0;
  v46.Length = 0;
  v45.Length = 0;
  GenerateAudit[2] = 0;
  GenerateAudit[1] = 0;
  pImageFileName = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v14 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v14 = SubjectContext.ClientToken;
  GenerateAudit[0] = SeAuditingWithTokenForSubcategory(117, (__int64)v14);
  if ( GenerateAudit[0] )
  {
    v15 = *(_WORD *)(a2 + 2);
    v16 = PrimaryToken;
    if ( ClientToken )
      v16 = ClientToken;
    v17 = *(_WORD *)(a2 + 2) & 0x10;
    if ( !v17 )
      goto LABEL_7;
    if ( v15 < 0 )
    {
      v19 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v19 )
      {
LABEL_7:
        v18 = 0LL;
        goto LABEL_12;
      }
      v18 = (ACL *)(a2 + v19);
    }
    else
    {
      v18 = *(ACL **)(a2 + 24);
    }
LABEL_12:
    if ( !v17 )
    {
LABEL_13:
      v20 = 0LL;
      goto LABEL_18;
    }
    if ( v15 < 0 )
    {
      v21 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v21 )
        goto LABEL_13;
      v20 = (ACL *)(a2 + v21);
    }
    else
    {
      v20 = *(ACL **)(a2 + 24);
    }
LABEL_18:
    SeExamineSacl(v20, v18, v16, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
    RtlInitUnicodeString(&DestinationString, L"Key");
    v22 = *(_WORD *)(a2 + 2);
    if ( ClientToken )
      PrimaryToken = ClientToken;
    if ( (v22 & 0x10) == 0 )
      goto LABEL_21;
    if ( v22 >= 0 )
    {
      v23 = *(ACL **)(a2 + 24);
    }
    else
    {
      v24 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v24 )
      {
LABEL_21:
        v23 = 0LL;
        goto LABEL_26;
      }
      v23 = (ACL *)(a2 + v24);
    }
LABEL_26:
    SeExamineGlobalSacl(&DestinationString, v23, PrimaryToken, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
    if ( !GenerateAudit[0] )
      goto LABEL_64;
    if ( Process )
    {
      NameString = SepQueryNameString(Process, (PUNICODE_STRING *)&P);
      v10 = P;
      if ( NameString < 0 )
        goto LABEL_55;
      if ( P )
        v11 = (unsigned __int16 *)P;
    }
    v26 = 4096;
    if ( a8 )
    {
      v27 = 4096LL;
      if ( a7[1] < 0x1000 )
        v27 = a7[1];
      NameString = AdtpBuildRegistryValueString(*a7, v27, *((_QWORD *)a7 + 1), &v49, &GenerateAudit[2]);
      if ( NameString < 0 )
        goto LABEL_55;
      v28 = *a7 + 1872;
      *(_DWORD *)&v46.Length = 1703936;
      v46.Buffer = (wchar_t *)&v57;
      NameString = AdtpBuildReplacementString(v28, &v46);
      if ( NameString < 0 )
        goto LABEL_55;
    }
    else
    {
      RtlInitUnicodeString(&v49, L"-");
      RtlInitUnicodeString(&v46, L"-");
    }
    if ( a8 == 2 )
    {
      RtlInitUnicodeString(&v48, L"-");
      RtlInitUnicodeString(&v45, L"-");
    }
    else
    {
      if ( a7[5] < 0x1000 )
        v26 = a7[5];
      NameString = AdtpBuildRegistryValueString(a7[4], v26, *((_QWORD *)a7 + 3), &v48, &GenerateAudit[1]);
      if ( NameString < 0 )
        goto LABEL_55;
      v29 = a7[4] + 1872;
      *(_DWORD *)&v45.Length = 1703936;
      v45.Buffer = (wchar_t *)&v58;
      NameString = AdtpBuildReplacementString(v29, &v45);
      if ( NameString < 0 )
        goto LABEL_55;
    }
    LODWORD(v47) = 1703936;
    *((_QWORD *)&v47 + 1) = &v56;
    NameString = AdtpBuildReplacementString((unsigned int)(a8 + 1904), &v47);
    if ( NameString >= 0 )
    {
      v30 = KeGetCurrentThread()->ApcState.Process;
      Blink = v30[1].Header.WaitListHead.Blink;
      NameString = SeLocateProcessImageName(v30, &pImageFileName);
      if ( NameString >= 0 )
      {
        v32 = SubjectContext.PrimaryToken;
        v33 = SubjectContext.PrimaryToken;
        LODWORD(Src[0]) = 3;
        if ( SubjectContext.ClientToken )
          v33 = SubjectContext.ClientToken;
        LODWORD(Src[2]) = 524405;
        HIDWORD(Src[0]) = 4657;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v34 = v33[19];
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*(_QWORD *)v34 + 1LL) + 8;
        v35 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( SubjectContext.ClientToken )
        {
          v35 = (_QWORD **)SubjectContext.ClientToken;
          v32 = SubjectContext.ClientToken;
        }
        v36 = *v35[19];
        Src[10] = SeSubsystemName;
        Src[12] = v32[3];
        Src[6] = v36;
        if ( v11 )
        {
          v37 = *v11;
          LODWORD(Src[15]) = 1;
          HIDWORD(Src[15]) = v37 + 16;
          Src[18] = v11;
        }
        Src[22] = v51;
        LODWORD(Src[19]) = 1;
        Src[23] = 0x80000000BLL;
        HIDWORD(Src[19]) = *v51 + 16;
        v38 = ObNormalizeHandleValue(a6);
        v9 = pImageFileName;
        Src[24] = v38;
        LODWORD(Src[27]) = v39;
        HIDWORD(Src[27]) = v40 + (unsigned __int16)v47;
        Src[30] = &v47;
        LODWORD(Src[31]) = v39;
        HIDWORD(Src[31]) = v40 + v46.Length;
        Src[34] = &v46;
        LODWORD(Src[35]) = v39;
        HIDWORD(Src[35]) = v40 + v49.Length;
        Src[38] = &v49;
        LODWORD(Src[39]) = v39;
        HIDWORD(Src[39]) = v40 + v45.Length;
        Src[42] = &v45;
        LODWORD(Src[43]) = v39;
        HIDWORD(Src[43]) = v40 + v48.Length;
        Src[46] = &v48;
        LODWORD(v38) = v40 + pImageFileName->Length;
        Src[47] = __PAIR64__(v42, v41);
        HIDWORD(Src[51]) = v38;
        Src[48] = Blink;
        LODWORD(Src[51]) = 2;
        Src[54] = pImageFileName;
        LODWORD(Src[1]) = 13;
        SepAdtLogAuditRecord(Src);
        v10 = P;
        goto LABEL_56;
      }
      v10 = P;
      v9 = pImageFileName;
    }
LABEL_55:
    SepAuditFailed((unsigned int)NameString);
LABEL_56:
    if ( GenerateAudit[2] )
      ExFreePoolWithTag(v49.Buffer, 0);
    if ( GenerateAudit[1] )
      ExFreePoolWithTag(v48.Buffer, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
LABEL_64:
  SeReleaseSubjectContext(&SubjectContext);
}
