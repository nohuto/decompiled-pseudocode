/*
 * XREFs of SeAdtRegistryValueChangedAuditAlarm @ 0x14068D5EC
 * Callers:
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PsGetCurrentThreadProcess @ 0x1400B0D5C (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     ObNormalizeHandleValue @ 0x140666180 (ObNormalizeHandleValue.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140695550 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 *     AdtpBuildRegistryValueString @ 0x1406D0B04 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildReplacementString @ 0x1406D1E34 (AdtpBuildReplacementString.c)
 */

void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        char *a5,
        unsigned __int64 a6,
        unsigned int *a7,
        int a8)
{
  unsigned __int16 *v10; // rdi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v13; // rdx
  __int16 v14; // ax
  void *v15; // r8
  __int16 v16; // cx
  ACL *v17; // rdx
  __int64 v18; // rdx
  ACL *v19; // rcx
  __int64 v20; // rax
  __int16 v21; // ax
  void *v22; // r8
  ACL *v23; // rdx
  __int64 v24; // rax
  int AllocatedFullProcessImageName; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Blink; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD **v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // r10d
  int v38; // r9d
  int v39; // eax
  unsigned int v40; // r8d
  unsigned int v41; // r11d
  BOOLEAN GenerateAudit[8]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v43; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v44; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v46; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v47; // [rsp+90h] [rbp-78h] BYREF
  PVOID v48; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v49; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD Src[132]; // [rsp+E8h] [rbp-20h] BYREF
  char v53; // [rsp+508h] [rbp+400h] BYREF
  char v54; // [rsp+528h] [rbp+420h] BYREF
  char v55; // [rsp+548h] [rbp+440h] BYREF

  memset(Src, 0, 0x418uLL);
  v49 = 0LL;
  v10 = 0LL;
  v46.Length = 0;
  v47.Length = 0;
  v43.Length = 0;
  v44.Length = 0;
  v45 = 0uLL;
  GenerateAudit[1] = 0;
  GenerateAudit[2] = 0;
  v48 = 0LL;
  *(_QWORD *)&v46.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v46.Buffer + 2) = 0;
  HIWORD(v46.Buffer) = 0;
  *(_QWORD *)&v47.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v47.Buffer + 2) = 0;
  HIWORD(v47.Buffer) = 0;
  *(_QWORD *)&v43.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v43.Buffer + 2) = 0;
  HIWORD(v43.Buffer) = 0;
  *(_QWORD *)&v44.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v44.Buffer + 2) = 0;
  HIWORD(v44.Buffer) = 0;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v13 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v13 = SubjectContext.ClientToken;
  GenerateAudit[0] = SeAuditingWithTokenForSubcategory(118, (__int64)v13);
  if ( GenerateAudit[0] )
  {
    v14 = *(_WORD *)(a2 + 2);
    v15 = PrimaryToken;
    if ( ClientToken )
      v15 = ClientToken;
    v16 = *(_WORD *)(a2 + 2) & 0x10;
    if ( !v16 )
      goto LABEL_7;
    if ( v14 < 0 )
    {
      v18 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v18 )
      {
LABEL_7:
        v17 = 0LL;
        goto LABEL_12;
      }
      v17 = (ACL *)(a2 + v18);
    }
    else
    {
      v17 = *(ACL **)(a2 + 24);
    }
LABEL_12:
    if ( !v16 )
    {
LABEL_13:
      v19 = 0LL;
      goto LABEL_18;
    }
    if ( v14 < 0 )
    {
      v20 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v20 )
        goto LABEL_13;
      v19 = (ACL *)(a2 + v20);
    }
    else
    {
      v19 = *(ACL **)(a2 + 24);
    }
LABEL_18:
    SeExamineSacl(v19, v17, v15, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
    RtlInitUnicodeString(&DestinationString, L"Key");
    v21 = *(_WORD *)(a2 + 2);
    v22 = PrimaryToken;
    if ( ClientToken )
      v22 = ClientToken;
    if ( (v21 & 0x10) == 0 )
      goto LABEL_21;
    if ( v21 >= 0 )
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
    SeExamineGlobalSacl(&DestinationString, v23, v22, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
    if ( !GenerateAudit[0] )
      goto LABEL_52;
    if ( a5 )
    {
      AllocatedFullProcessImageName = SepQueryNameString(a5, &v49);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      if ( v49 )
        v10 = (unsigned __int16 *)v49;
    }
    v26 = 4096;
    if ( a8 )
    {
      v27 = 4096LL;
      if ( a7[1] < 0x1000 )
        v27 = a7[1];
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        *a7,
                                        v27,
                                        *((_QWORD *)a7 + 1),
                                        &v46,
                                        &GenerateAudit[1]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      v28 = *a7 + 1872;
      *(_DWORD *)&v43.Length = 1703936;
      v43.Buffer = (wchar_t *)&v53;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v28, &v43);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
    }
    else
    {
      RtlInitUnicodeString(&v46, L"-");
      RtlInitUnicodeString(&v43, L"-");
    }
    if ( a8 == 2 )
    {
      RtlInitUnicodeString(&v47, L"-");
      RtlInitUnicodeString(&v44, L"-");
    }
    else
    {
      if ( a7[5] < 0x1000 )
        v26 = a7[5];
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        a7[4],
                                        v26,
                                        *((_QWORD *)a7 + 3),
                                        &v47,
                                        &GenerateAudit[2]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      v29 = a7[4] + 1872;
      *(_DWORD *)&v44.Length = 1703936;
      v44.Buffer = (wchar_t *)&v54;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v29, &v44);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
    }
    LODWORD(v45) = 1703936;
    *((_QWORD *)&v45 + 1) = &v55;
    AllocatedFullProcessImageName = AdtpBuildReplacementString((unsigned int)(a8 + 1904), &v45);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      Blink = CurrentThreadProcess[1].Header.WaitListHead.Blink;
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v48);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        LODWORD(Src[0]) = 3;
        v32 = PrimaryToken;
        LODWORD(Src[2]) = 524406;
        if ( ClientToken )
          v32 = ClientToken;
        HIDWORD(Src[0]) = 4657;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v33 = v32[19];
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*(_QWORD *)v33 + 1LL) + 8;
        v34 = (_QWORD **)PrimaryToken;
        if ( ClientToken )
        {
          v34 = (_QWORD **)ClientToken;
          PrimaryToken = ClientToken;
        }
        v35 = *v34[19];
        Src[10] = &SeSubsystemName;
        Src[12] = *((_QWORD *)PrimaryToken + 3);
        Src[6] = v35;
        if ( v10 )
        {
          v36 = *v10;
          LODWORD(Src[15]) = 1;
          HIDWORD(Src[15]) = v36 + 16;
          Src[18] = v10;
        }
        HIDWORD(Src[19]) = *a4 + 16;
        LODWORD(Src[19]) = 1;
        Src[22] = a4;
        Src[23] = 0x80000000BLL;
        Src[24] = ObNormalizeHandleValue(a6);
        Src[54] = v48;
        HIDWORD(Src[27]) = v37 + (unsigned __int16)v45;
        Src[30] = &v45;
        LODWORD(Src[27]) = v38;
        HIDWORD(Src[31]) = v37 + v43.Length;
        Src[34] = &v43;
        LODWORD(Src[31]) = v38;
        HIDWORD(Src[35]) = v37 + v46.Length;
        Src[38] = &v46;
        LODWORD(Src[35]) = v38;
        HIDWORD(Src[39]) = v37 + v44.Length;
        Src[42] = &v44;
        LODWORD(Src[39]) = v38;
        HIDWORD(Src[43]) = v37 + v47.Length;
        Src[46] = &v47;
        v39 = v37 + *(unsigned __int16 *)v48;
        LODWORD(Src[43]) = v38;
        HIDWORD(Src[51]) = v39;
        Src[47] = __PAIR64__(v41, v40);
        Src[48] = Blink;
        LODWORD(Src[51]) = 2;
        LODWORD(Src[1]) = 13;
        SepAdtLogAuditRecord(Src);
        goto LABEL_44;
      }
    }
LABEL_43:
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_44:
    if ( GenerateAudit[1] )
      ExFreePoolWithTag(v46.Buffer, 0);
    if ( GenerateAudit[2] )
      ExFreePoolWithTag(v47.Buffer, 0);
    if ( v48 )
      ExFreePoolWithTag(v48, 0);
    if ( v49 )
      ExFreePoolWithTag(v49, 0);
  }
LABEL_52:
  SeReleaseSubjectContext(&SubjectContext);
}
