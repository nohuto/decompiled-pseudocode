/*
 * XREFs of ObpVerifyCreatorAccessCheck @ 0x14054467C
 * Callers:
 *     NtCreatePrivateNamespace @ 0x14054422C (NtCreatePrivateNamespace.c)
 *     NtDeletePrivateNamespace @ 0x1406AEB0C (NtDeletePrivateNamespace.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140470BC0 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     SeUnlockSubjectContext @ 0x1404C52E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1404C5390 (SeLockSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 */

__int64 __fastcall ObpVerifyCreatorAccessCheck(_DWORD *a1)
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

  TokenInformation = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
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
      v5 = RtlEnumerateBoundaryDescriptorEntries(
             a1,
             (unsigned int (__fastcall *)(_DWORD *, __int64))ObpVerifyAccessToBoundaryEntry,
             (__int64)SubjectContext);
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
