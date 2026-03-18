/*
 * XREFs of SeAuditSystemTimeChange @ 0x14064EE84
 * Callers:
 *     NtSetSystemTime @ 0x14066A764 (NtSetSystemTime.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

void __fastcall SeAuditSystemTimeChange(__int64 a1, __int64 a2)
{
  _QWORD **PrimaryToken; // rcx
  __int64 v5; // r14
  _KPROCESS *Process; // r15
  NTSTATUS v7; // eax
  PUNICODE_STRING v8; // rsi
  int v9; // eax
  int v10; // eax
  PUNICODE_STRING pImageFileName; // [rsp+20h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  pImageFileName = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  v5 = *PrimaryToken[19];
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(Src, 0, 0x418uLL);
  v7 = SeLocateProcessImageName(Process, &pImageFileName);
  v8 = pImageFileName;
  if ( v7 < 0 )
  {
    SepAuditFailed((unsigned int)v7);
  }
  else
  {
    v9 = *(unsigned __int8 *)(v5 + 1);
    Src[0] = 0x120800000001LL;
    LODWORD(Src[2]) = 524388;
    LODWORD(Src[3]) = 4;
    HIDWORD(Src[3]) = 4 * v9 + 8;
    Src[6] = v5;
    Src[10] = SeSubsystemName;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    if ( SubjectContext.ClientToken )
      Src[12] = *((_QWORD *)SubjectContext.ClientToken + 3);
    else
      Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
    Src[15] = 0x80000000CLL;
    Src[19] = 0x80000000CLL;
    Src[24] = Process[1].Header.WaitListHead.Blink;
    v10 = pImageFileName->Length + 16;
    Src[16] = a1;
    HIDWORD(Src[27]) = v10;
    Src[20] = a2;
    Src[23] = 0x80000000BLL;
    LODWORD(Src[27]) = 2;
    Src[30] = pImageFileName;
    LODWORD(Src[1]) = 7;
    SepAdtLogAuditRecord(Src);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
