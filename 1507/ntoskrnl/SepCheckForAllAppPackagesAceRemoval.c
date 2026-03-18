/*
 * XREFs of SepCheckForAllAppPackagesAceRemoval @ 0x14058D76C
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x1406D7010 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     SepSidInToken @ 0x1400078CC (SepSidInToken.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepHasAllAppPackagesPresent @ 0x1406D7590 (SepHasAllAppPackagesPresent.c)
 */

void __fastcall SepCheckForAllAppPackagesAceRemoval(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR a2,
        _BYTE *a3,
        _BYTE *a4)
{
  PACCESS_TOKEN ClientToken; // rcx
  char v9; // [rsp+30h] [rbp-30h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-28h] BYREF
  char v11; // [rsp+90h] [rbp+30h]
  char v12; // [rsp+98h] [rbp+38h]

  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !SepAllowAllApplicationAceRemoval && !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    SeCaptureSubjectContext(&SubjectContext);
    ClientToken = SubjectContext.ClientToken;
    if ( !SubjectContext.ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    if ( (unsigned __int8)SepSidInToken((__int64)ClientToken, 0LL, (__int64)SeTrustedInstallerSid, 0LL, 0) )
    {
      SeReleaseSubjectContext(&SubjectContext);
    }
    else
    {
      SeReleaseSubjectContext(&SubjectContext);
      if ( (unsigned __int8)SepHasAllAppPackagesPresent(SecurityDescriptor)
        && !(unsigned __int8)SepHasAllAppPackagesPresent(a2) )
      {
        if ( v11 && v12 && !v9 && a4 )
          *a4 = 1;
        if ( a3 )
          *a3 = 1;
      }
    }
  }
}
