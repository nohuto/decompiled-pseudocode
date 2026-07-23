/*
 * XREFs of CmpReportAuditVirtualizationEvent @ 0x140602934
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     SeReportSecurityEventWithSubCategory @ 0x14007622C (SeReportSecurityEventWithSubCategory.c)
 *     SeSetAuditParameter @ 0x140099310 (SeSetAuditParameter.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 *     CmVirtualKCBToRealPath @ 0x140600410 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpReportAuditVirtualizationEvent(__int64 a1)
{
  UNICODE_STRING *p_UnicodeString; // rsi
  UNICODE_STRING *v3; // rdi
  _QWORD *PrimaryToken; // rcx
  int AllocatedFullProcessImageName; // ebx
  ULONG v6; // r15d
  ULONG v7; // r8d
  NTSTATUS v8; // eax
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Blink; // r14
  ULONG v11; // r8d
  NTSTATUS v12; // eax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  __int64 Data; // [rsp+48h] [rbp-B8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v18; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _SE_ADT_PARAMETER_ARRAY AuditParameters; // [rsp+90h] [rbp-70h] BYREF

  P = 0LL;
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
  AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeLogonId, 0, &Data);
  v6 = ++AuditParameters.ParameterCount;
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( CmpVEEnabled && (*(_WORD *)(a1 + 178) & 0x100) != 0 )
    {
      v3 = (UNICODE_STRING *)CmpConstructName(a1);
      if ( !v3 )
      {
LABEL_7:
        AllocatedFullProcessImageName = -1073741670;
        goto LABEL_20;
      }
      AllocatedFullProcessImageName = CmVirtualKCBToRealPath(a1, &UnicodeString);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        p_UnicodeString = &UnicodeString;
LABEL_13:
        AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v6, p_UnicodeString);
        v7 = ++AuditParameters.ParameterCount;
        if ( AllocatedFullProcessImageName >= 0 )
        {
          v8 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v7, v3);
          ++AuditParameters.ParameterCount;
          AllocatedFullProcessImageName = v8;
          if ( v8 >= 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            Blink = Process[1].Header.WaitListHead.Blink;
            AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&P);
            if ( AllocatedFullProcessImageName >= 0 )
            {
              AllocatedFullProcessImageName = SeSetAuditParameter(
                                                &AuditParameters,
                                                SeAdtParmTypePtr,
                                                AuditParameters.ParameterCount,
                                                Blink);
              v11 = ++AuditParameters.ParameterCount;
              if ( AllocatedFullProcessImageName >= 0 )
              {
                v12 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeFileSpec, v11, P);
                ++AuditParameters.ParameterCount;
                AllocatedFullProcessImageName = v12;
                if ( v12 >= 0 )
                {
                  AllocatedFullProcessImageName = SeReportSecurityEventWithSubCategory(
                                                    0,
                                                    &DestinationString,
                                                    0LL,
                                                    &AuditParameters,
                                                    0x76u);
                  if ( AllocatedFullProcessImageName >= 0 )
                    AllocatedFullProcessImageName = 0;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(a1);
      if ( !p_UnicodeString )
        goto LABEL_7;
      RtlInitUnicodeString(&v18, 0LL);
      AllocatedFullProcessImageName = CmRealKCBToVirtualPath(a1, (__m128i *)&v18, &UnicodeString);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        v3 = &UnicodeString;
        goto LABEL_13;
      }
    }
  }
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0x61506553u);
  if ( p_UnicodeString == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  if ( v3 == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( v3 )
  {
    CmpFreeTransientPoolWithTag(v3, 0x624E4D43u);
  }
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AllocatedFullProcessImageName;
}
