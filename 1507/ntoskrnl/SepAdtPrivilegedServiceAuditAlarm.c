/*
 * XREFs of SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404359A8 (SePrivilegedServiceAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140524EA0 (NtPrivilegedServiceAuditAlarm.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1400150A0 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepAdtCheckPrivilegeForSensitivity @ 0x14024F8A0 (SepAdtCheckPrivilegeForSensitivity.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepFilterPrivilegeAudits @ 0x1405416C0 (SepFilterPrivilegeAudits.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1406D3F7C (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

void __fastcall SepAdtPrivilegedServiceAuditAlarm(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        unsigned __int8 a7)
{
  __int16 v8; // r15
  unsigned __int8 v9; // bl
  bool v10; // r14
  bool v11; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdi
  PACCESS_TOKEN ClientToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT *v14; // r10
  PACCESS_TOKEN PrimaryToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT *v16; // r10
  _KPROCESS *Process; // rcx
  NTSTATUS v18; // eax
  PUNICODE_STRING v19; // r14
  int v20; // r12d
  UNICODE_STRING *v21; // rax
  __int64 v22; // rbx
  unsigned __int16 *v23; // rcx
  __int16 v24; // ax
  int Length_high; // eax
  int v26; // edx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  bool v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31; // [rsp+31h] [rbp-CFh] BYREF
  bool v32; // [rsp+32h] [rbp-CEh] BYREF
  _BYTE v33[5]; // [rsp+33h] [rbp-CDh] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+38h] [rbp-C8h] BYREF
  PSECURITY_SUBJECT_CONTEXT Blink; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v36; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  struct _SECURITY_SUBJECT_CONTEXT v39; // [rsp+60h] [rbp-A0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  _QWORD Src[132]; // [rsp+A0h] [rbp-60h] BYREF

  pImageFileName = 0LL;
  v37 = a3;
  v8 = 130;
  v36 = a2;
  v9 = a7 == 0;
  v38 = a4;
  v31 = 0;
  v33[0] = 0;
  v10 = SepAuditingEnabledForSubcategory(130, a7, a7 == 0);
  v32 = v10;
  if ( dword_14032BD58 )
  {
    if ( a1 )
    {
      p_SubjectContext = a1;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      SepAdtIncorporatePerUserPolicy(30, a7, v9, (_DWORD)ClientToken, (__int64)&v32);
      v10 = v32;
    }
    else
    {
      SepAuditFailed(3221225596LL);
    }
    if ( !a1 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  v11 = SepAuditingEnabledForSubcategory(131, a7, v9);
  v30 = v11;
  if ( dword_14032BD5C )
  {
    if ( a1 )
    {
      v14 = a1;
      Blink = a1;
    }
    else
    {
      Blink = &v39;
      memset(&v39, 0, sizeof(v39));
      SeCaptureSubjectContext(&v39);
      v14 = &v39;
    }
    PrimaryToken = v14->ClientToken;
    if ( v14->ClientToken || (PrimaryToken = v14->PrimaryToken) != 0LL )
    {
      SepAdtIncorporatePerUserPolicy(31, a7, v9, (_DWORD)PrimaryToken, (__int64)&v30);
      v11 = v30;
    }
    else
    {
      SepAuditFailed(3221225596LL);
      v16 = Blink;
    }
    if ( !a1 )
      SeReleaseSubjectContext(v16);
  }
  if ( (v10 || v11) && (unsigned __int8)SepFilterPrivilegeAudits(0LL, a6) )
  {
    if ( !v10 || !v11 || !a6 || !*a6 )
    {
      SepAdtCheckPrivilegeForSensitivity(a6, &v31, v33);
      if ( !v10 || !v31 )
      {
        if ( !v11 || !v33[0] )
          return;
        v8 = 131;
      }
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    Blink = (PSECURITY_SUBJECT_CONTEXT)Process[1].Header.WaitListHead.Blink;
    v18 = SeLocateProcessImageName(Process, &pImageFileName);
    v19 = pImageFileName;
    v20 = v18;
    if ( v18 >= 0 )
    {
      if ( v38 )
        v21 = **(UNICODE_STRING ***)(v38 + 152);
      else
        v21 = **(UNICODE_STRING ***)(a5 + 152);
      v22 = *(_QWORD *)(a5 + 24);
      v23 = (unsigned __int16 *)&SeSubsystemName;
      pImageFileName = v21;
      if ( v36 )
        v23 = v36;
      v36 = v23;
      memset(Src, 0, 0x418uLL);
      v24 = 16;
      Src[6] = pImageFileName;
      LODWORD(Src[0]) = 4;
      if ( a7 )
        v24 = 8;
      LOWORD(Src[2]) = v8;
      WORD1(Src[2]) = v24;
      Length_high = HIBYTE(pImageFileName->Length);
      HIDWORD(Src[0]) = 4673;
      LODWORD(Src[3]) = 4;
      LODWORD(Src[7]) = 1;
      v26 = *v36 + 16;
      HIDWORD(Src[3]) = 4 * Length_high + 8;
      HIDWORD(Src[7]) = v26;
      Src[10] = v36;
      Src[11] = 0x800000005LL;
      if ( v38 )
        Src[12] = *(_QWORD *)(v38 + 24);
      else
        Src[12] = v22;
      Src[18] = v36;
      LODWORD(Src[15]) = 1;
      HIDWORD(Src[15]) = v26;
      if ( v37 )
      {
        v27 = *v37;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v27 + 16;
        Src[22] = v37;
      }
      if ( a6 )
      {
        v28 = *a6;
        if ( *a6 )
        {
          LODWORD(Src[23]) = 8;
          Src[26] = a6;
          HIDWORD(Src[23]) = 12 * (v28 - 1) + 20;
        }
      }
      Src[28] = Blink;
      v29 = v19->Length + 16;
      Src[27] = 0x80000000BLL;
      HIDWORD(Src[31]) = v29;
      LODWORD(Src[31]) = 2;
      Src[34] = v19;
      LODWORD(Src[1]) = 8;
      SepAdtLogAuditRecord(Src);
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v20 < 0 )
      SepAuditFailed((unsigned int)v20);
  }
}
