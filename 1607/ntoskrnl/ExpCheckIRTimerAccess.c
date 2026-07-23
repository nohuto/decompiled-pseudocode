/*
 * XREFs of ExpCheckIRTimerAccess @ 0x1404D03D8
 * Callers:
 *     ExpSetTimer @ 0x1400ED6DC (ExpSetTimer.c)
 *     NtCreateTimer2 @ 0x1404701BC (NtCreateTimer2.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpCheckIRTimerAccess(char a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *PrimaryToken; // rcx
  unsigned int v3; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+90h] [rbp+8h] BYREF
  int v7; // [rsp+98h] [rbp+10h] BYREF

  if ( a1 != 1 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( PrimaryToken[48] == 2 && (int)PrimaryToken[49] < 2 )
  {
    v3 = -1073741790;
  }
  else
  {
    SeAccessCheckWithHint(
      (ULONGLONG)ExpIRTimerSecurityDescriptor,
      3,
      (int *)&SubjectContext,
      0,
      1u,
      0,
      0LL,
      (__int64)&ExTimerObjectType->TypeInfo.GenericMapping,
      1,
      &v7,
      (int *)&v6);
    v3 = v6;
  }
  SeReleaseSubjectContext(&SubjectContext);
  return v3;
}
