/*
 * XREFs of SepCheckForAllAppPackagesAceRemoval @ 0x140694D8C
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x140694880 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     SepSidInToken @ 0x1400C2444 (SepSidInToken.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepHasAllAppPackagesPresent @ 0x140694F0C (SepHasAllAppPackagesPresent.c)
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
    if ( SepSidInToken((__int64)ClientToken, 0LL, SeTrustedInstallerSid, 0, 0, 0) )
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
