/*
 * XREFs of SepCheckCreateLowBox @ 0x14047C9E0
 * Callers:
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlIsParentOfChildAppContainer @ 0x1403E1C94 (RtlIsParentOfChildAppContainer.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall SepCheckCreateLowBox(PSID a1)
{
  int IsParentOfChildAppContainer; // ebx
  unsigned int v3; // edi
  char v4; // si
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  IsParentOfChildAppContainer = 0;
  v3 = -1073741790;
  v4 = 1;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  if ( SubjectContext.ClientToken )
  {
    if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
    {
      v4 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  IsParentOfChildAppContainer = *((_DWORD *)ClientToken + 50) & 0x2000;
LABEL_4:
  if ( !IsParentOfChildAppContainer && v4 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
    IsParentOfChildAppContainer = (unsigned __int8)RtlIsParentOfChildAppContainer(*((PSID *)ClientToken + 98), a1);
  SeReleaseSubjectContext(&SubjectContext);
  if ( IsParentOfChildAppContainer )
    return 0;
  return v3;
}
