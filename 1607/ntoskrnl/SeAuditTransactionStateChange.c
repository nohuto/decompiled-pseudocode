/*
 * XREFs of SeAuditTransactionStateChange @ 0x14068E798
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PsGetCurrentThreadProcess @ 0x1400B0D5C (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 */

void __stdcall SeAuditTransactionStateChange(GUID *TransactionId, GUID *ResourceManagerId, ULONG NewTransactionState)
{
  __int64 v4; // r14
  GUID *v6; // rsi
  _QWORD *PrimaryToken; // rbx
  _QWORD **ClientToken; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  _KPROCESS *CurrentThreadProcess; // rax
  unsigned __int16 *p_DestinationString; // rdi
  int v13; // eax
  _KPROCESS *v14; // rax
  struct _LIST_ENTRY *Blink; // rcx
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+68h] [rbp-A0h] BYREF
  int v20; // [rsp+488h] [rbp+380h] BYREF
  __int64 v21; // [rsp+48Ch] [rbp+384h]
  int v22; // [rsp+494h] [rbp+38Ch]

  SubjectContext.ClientToken = 0LL;
  v4 = NewTransactionState;
  SubjectContext.ImpersonationLevel = 0x80000000;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  memset((char *)Src + 4, 0, 0x414uLL);
  P = 0LL;
  v6 = (GUID *)&v20;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  LOWORD(Src[2]) = 117;
  if ( ResourceManagerId )
    v6 = ResourceManagerId;
  Src[0] = 0x137900000003LL;
  WORD1(Src[2]) = 8;
  if ( (_DWORD)v4 == 6 )
    WORD1(Src[2]) = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
  {
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    PrimaryToken = SubjectContext.ClientToken;
  }
  v9 = PrimaryToken[3];
  v10 = *ClientToken[19];
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P) < 0
    || (p_DestinationString = (unsigned __int16 *)P) == 0LL )
  {
    RtlInitUnicodeString(&DestinationString, L"?");
    p_DestinationString = (unsigned __int16 *)&DestinationString;
    P = &DestinationString;
  }
  v13 = *(unsigned __int8 *)(v10 + 1);
  Src[6] = v10;
  Src[12] = v9;
  LODWORD(Src[3]) = 4;
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v13 + 8;
  Src[11] = 0x800000005LL;
  Src[10] = &SeSubsystemName;
  Src[15] = 0x100000000DLL;
  Src[18] = TransactionId;
  Src[19] = 0x400000003LL;
  Src[20] = v4;
  Src[23] = 0x100000000DLL;
  Src[26] = v6;
  Src[27] = 0x80000000BLL;
  v14 = PsGetCurrentThreadProcess();
  LODWORD(Src[31]) = 2;
  Src[34] = p_DestinationString;
  LODWORD(Src[1]) = 8;
  Blink = v14[1].Header.WaitListHead.Blink;
  LODWORD(v14) = *p_DestinationString + 16;
  Src[28] = Blink;
  HIDWORD(Src[31]) = (_DWORD)v14;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
  if ( P )
  {
    if ( P != &DestinationString )
      ExFreePoolWithTag(P, 0);
  }
}
