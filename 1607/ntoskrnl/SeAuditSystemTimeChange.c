/*
 * XREFs of SeAuditSystemTimeChange @ 0x14068E5F0
 * Callers:
 *     NtSetSystemTime @ 0x1406AD23C (NtSetSystemTime.c)
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

void __fastcall SeAuditSystemTimeChange(__int64 a1, __int64 a2)
{
  _QWORD *ClientToken; // rsi
  _QWORD *PrimaryToken; // r15
  _QWORD **v6; // rax
  __int64 v7; // r14
  _KPROCESS *CurrentThreadProcess; // r13
  int AllocatedFullProcessImageName; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  P = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v6 = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v6 = (_QWORD **)SubjectContext.ClientToken;
  v7 = *v6[19];
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  memset(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v10 = *(unsigned __int8 *)(v7 + 1);
    Src[0] = 0x120800000001LL;
    LODWORD(Src[2]) = 524388;
    LODWORD(Src[3]) = 4;
    HIDWORD(Src[3]) = 4 * v10 + 8;
    Src[10] = &SeSubsystemName;
    Src[6] = v7;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    if ( ClientToken )
      v11 = ClientToken[3];
    else
      v11 = PrimaryToken[3];
    Src[12] = v11;
    Src[15] = 0x80000000CLL;
    Src[19] = 0x80000000CLL;
    Src[24] = CurrentThreadProcess[1].Header.WaitListHead.Blink;
    v12 = *(unsigned __int16 *)P + 16;
    Src[30] = P;
    HIDWORD(Src[27]) = v12;
    Src[16] = a1;
    Src[20] = a2;
    Src[23] = 0x80000000BLL;
    LODWORD(Src[27]) = 2;
    LODWORD(Src[1]) = 7;
    SepAdtLogAuditRecord(Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
