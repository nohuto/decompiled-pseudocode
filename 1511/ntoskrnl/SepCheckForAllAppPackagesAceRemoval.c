/*
 * XREFs of SepCheckForAllAppPackagesAceRemoval @ 0x14051AE6C
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x140655164 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SepHasAllAppPackagesPresent @ 0x1406556E4 (SepHasAllAppPackagesPresent.c)
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
    if ( (unsigned __int8)SepSidInToken((__int64)ClientToken, 0LL, (__int64)SeTrustedInstallerSid, 0LL, 0, 0) )
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
