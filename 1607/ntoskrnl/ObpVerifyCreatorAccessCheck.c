/*
 * XREFs of ObpVerifyCreatorAccessCheck @ 0x140476830
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1404765A4 (NtCreatePrivateNamespace.c)
 *     NtDeletePrivateNamespace @ 0x140668B70 (NtDeletePrivateNamespace.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140477F64 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 */

__int64 __fastcall ObpVerifyCreatorAccessCheck(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *PrimaryToken; // rbx
  PULONG v4; // rax
  int v5; // ebx
  int v6; // ecx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-59h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-51h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext[2]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE Sid[80]; // [rsp+70h] [rbp-9h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  TokenInformation = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  memset(SubjectContext, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, SubjectContext);
  PrimaryToken = SubjectContext[0].PrimaryToken;
  if ( SubjectContext[0].ClientToken )
    PrimaryToken = SubjectContext[0].ClientToken;
  if ( PrimaryToken[48] == 2 && (int)PrimaryToken[49] < 2 )
  {
    LODWORD(SubjectContext[1].PrimaryToken) = -1073741790;
  }
  else
  {
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( !(_DWORD)TokenInformation
      || (LODWORD(SubjectContext[1].PrimaryToken) = SeQueryInformationToken(
                                                      PrimaryToken,
                                                      TokenAppContainerSid,
                                                      &SubjectContext[1].ClientToken),
          SLODWORD(SubjectContext[1].PrimaryToken) >= 0) )
    {
      SeQueryInformationToken(PrimaryToken, TokenIntegrityLevel, (PVOID *)((char *)&TokenInformation + 4));
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v4 = RtlSubAuthoritySid(Sid, 0);
      *v4 = HIDWORD(TokenInformation);
      *(_QWORD *)&SubjectContext[1].ImpersonationLevel = Sid;
      SeLockSubjectContext(SubjectContext);
      v5 = RtlEnumerateBoundaryDescriptorEntries(a1, ObpVerifyAccessToBoundaryEntry, SubjectContext);
      SeUnlockSubjectContext(SubjectContext);
      v6 = (int)SubjectContext[1].PrimaryToken;
      if ( SLODWORD(SubjectContext[1].PrimaryToken) >= 0 )
      {
        if ( v5 < 0 )
          v6 = v5;
        LODWORD(SubjectContext[1].PrimaryToken) = v6;
        if ( v6 >= 0 && SubjectContext[1].ClientToken )
        {
          if ( (BYTE4(SubjectContext[1].PrimaryToken) & 1) == 0 )
            v6 = -1073741790;
          LODWORD(SubjectContext[1].PrimaryToken) = v6;
        }
      }
    }
  }
  SeReleaseSubjectContext(SubjectContext);
  if ( SubjectContext[1].ClientToken )
    ExFreePoolWithTag(SubjectContext[1].ClientToken, 0);
  return LODWORD(SubjectContext[1].PrimaryToken);
}
