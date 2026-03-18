/*
 * XREFs of SeIsAppContainerOrIdentifyLevelContext @ 0x1404E9DC4
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x1404E9BB8 (PopPowerRequestActionInfo.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 * Callees:
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall SeIsAppContainerOrIdentifyLevelContext(PSECURITY_SUBJECT_CONTEXT SubjectContext, _BYTE *a2)
{
  char v2; // si
  PSECURITY_SUBJECT_CONTEXT p_SubjectContexta; // rbx
  unsigned int v5; // edi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  *a2 = 1;
  p_SubjectContexta = SubjectContext;
  if ( !SubjectContext )
  {
    SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    v2 = 1;
  }
  if ( SeAccessCheck(
         SeNullDaclSd,
         p_SubjectContexta,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus) )
  {
    *a2 = 0;
  }
  v5 = 0;
  if ( AccessStatus != -1073741790 )
    v5 = AccessStatus;
  if ( v2 )
    SeReleaseSubjectContext(p_SubjectContexta);
  return v5;
}
