/*
 * XREFs of SeAuditFipsCryptoSelftests @ 0x14064E43C
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SeLocateProcessImageName @ 0x1404D6CDC (SeLocateProcessImageName.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

void __fastcall SeAuditFipsCryptoSelftests(unsigned __int8 a1, unsigned int a2)
{
  __int64 v3; // r14
  _QWORD **PrimaryToken; // rcx
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Blink; // r15
  NTSTATUS v7; // eax
  PUNICODE_STRING v8; // rbx
  int v9; // edi
  int Length; // ecx
  PUNICODE_STRING pImageFileName; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  SubjectContext.ClientToken = 0LL;
  SubjectContext.PrimaryToken = 0LL;
  memset(Src, 0, 1048);
  v3 = a2;
  pImageFileName = 0LL;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(102LL, a1, a1 == 0, 0LL) )
  {
    LOWORD(Src[2]) = 102;
    LODWORD(Src[0]) = 1;
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
    LODWORD(Src[3]) = 4;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
    Src[7] = 0x2000000001LL;
    LODWORD(Src[1]) = 2;
    Src[6] = *PrimaryToken[19];
    HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(Src[6] + 1LL) + 8;
    Src[10] = SeSubsystemName;
    Process = KeGetCurrentThread()->ApcState.Process;
    Blink = Process[1].Header.WaitListHead.Blink;
    v7 = SeLocateProcessImageName(Process, &pImageFileName);
    v8 = pImageFileName;
    v9 = v7;
    if ( v7 >= 0 )
    {
      Length = pImageFileName->Length;
      Src[11] = 0x80000000BLL;
      Src[12] = Blink;
      LODWORD(Src[15]) = 2;
      Src[18] = pImageFileName;
      HIDWORD(Src[15]) = Length + 16;
      LODWORD(Src[1]) = 4;
      if ( a1 )
      {
        HIDWORD(Src[0]) = 6417;
        WORD1(Src[2]) = 8;
      }
      else
      {
        HIDWORD(Src[0]) = 6418;
        WORD1(Src[2]) = 16;
        Src[19] = 0x40000000ALL;
        Src[20] = v3;
        LODWORD(Src[1]) = 5;
      }
      SepAdtLogAuditRecord(Src);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( v9 < 0 )
      SepAuditFailed((unsigned int)v9);
  }
}
