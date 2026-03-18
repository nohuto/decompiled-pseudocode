/*
 * XREFs of CmpReportAuditVirtualizationEvent @ 0x1405E3324
 * Callers:
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     SeReportSecurityEventWithSubCategory @ 0x14001B500 (SeReportSecurityEventWithSubCategory.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     SeSetAuditParameter @ 0x1400D9040 (SeSetAuditParameter.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpReportAuditVirtualizationEvent(__int64 a1)
{
  UNICODE_STRING *p_UnicodeString; // rsi
  UNICODE_STRING *v3; // rdi
  _QWORD *PrimaryToken; // rcx
  int v5; // ebx
  ULONG v6; // r15d
  ULONG v7; // r8d
  NTSTATUS v8; // eax
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Blink; // r15
  NTSTATUS v11; // eax
  PUNICODE_STRING v12; // r14
  ULONG v13; // r8d
  NTSTATUS v14; // eax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-C0h] BYREF
  __int64 Data; // [rsp+48h] [rbp-B8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v20; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _SE_ADT_PARAMETER_ARRAY AuditParameters; // [rsp+90h] [rbp-70h] BYREF

  pImageFileName = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  p_UnicodeString = 0LL;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Security");
  AuditParameters.AuditId = 5039;
  AuditParameters.Type = 8;
  AuditParameters.CategoryId = 3;
  AuditParameters.ParameterCount = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Data = PrimaryToken[3];
  v5 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeLogonId, 0, &Data);
  v6 = ++AuditParameters.ParameterCount;
  if ( v5 >= 0 )
  {
    if ( CmpVEEnabled && (*(_WORD *)(a1 + 186) & 0x100) != 0 )
    {
      v3 = (UNICODE_STRING *)CmpConstructName(a1);
      if ( !v3 )
      {
LABEL_7:
        v5 = -1073741670;
        goto LABEL_22;
      }
      v5 = CmVirtualKCBToRealPath(a1, &UnicodeString);
      if ( v5 >= 0 )
      {
        p_UnicodeString = &UnicodeString;
LABEL_13:
        v5 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v6, p_UnicodeString);
        v7 = ++AuditParameters.ParameterCount;
        if ( v5 >= 0 )
        {
          v8 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v7, v3);
          ++AuditParameters.ParameterCount;
          v5 = v8;
          if ( v8 >= 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            Blink = Process[1].Header.WaitListHead.Blink;
            v11 = SeLocateProcessImageName(Process, &pImageFileName);
            v12 = pImageFileName;
            v5 = v11;
            if ( v11 >= 0 )
            {
              v5 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypePtr, AuditParameters.ParameterCount, Blink);
              v13 = ++AuditParameters.ParameterCount;
              if ( v5 >= 0 )
              {
                v14 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeFileSpec, v13, v12);
                ++AuditParameters.ParameterCount;
                v5 = v14;
                if ( v14 >= 0 )
                {
                  v5 = SeReportSecurityEventWithSubCategory(0, &DestinationString, 0LL, &AuditParameters, 0x75u);
                  if ( v5 >= 0 )
                    v5 = 0;
                }
              }
            }
            if ( v12 )
              ExFreePoolWithTag(v12, 0x61506553u);
          }
        }
      }
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(a1);
      if ( !p_UnicodeString )
        goto LABEL_7;
      RtlInitUnicodeString(&v20, 0LL);
      v5 = CmRealKCBToVirtualPath(a1, (__m128i *)&v20, &UnicodeString);
      if ( v5 >= 0 )
      {
        v3 = &UnicodeString;
        goto LABEL_13;
      }
    }
  }
LABEL_22:
  if ( p_UnicodeString == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  if ( v3 == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x624E4D43u);
  }
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)v5;
}
