/*
 * XREFs of SeAuditFipsCryptoSelftests @ 0x14068DBB8
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400B0D5C (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SeAuditFipsCryptoSelftests(char a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD **PrimaryToken; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Blink; // r14
  int AllocatedFullProcessImageName; // ebx
  int v8; // ecx
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  SubjectContext.ClientToken = 0LL;
  v3 = a2;
  SubjectContext.ImpersonationLevel = 0x80000000;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  memset((char *)Src + 4, 0, 0x414uLL);
  P = 0LL;
  LODWORD(Src[0]) = 1;
  LOWORD(Src[2]) = 102;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  Src[7] = 0x2000000001LL;
  LODWORD(Src[1]) = 2;
  Src[6] = *PrimaryToken[19];
  HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(Src[6] + 1LL) + 8;
  Src[10] = &SeSubsystemName;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Blink = CurrentThreadProcess[1].Header.WaitListHead.Blink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    Src[11] = 0x80000000BLL;
    Src[12] = Blink;
    v8 = *(unsigned __int16 *)P + 16;
    LODWORD(Src[15]) = 2;
    HIDWORD(Src[15]) = v8;
    Src[18] = P;
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
  SeReleaseSubjectContext(&SubjectContext);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
}
