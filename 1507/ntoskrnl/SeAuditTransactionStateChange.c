/*
 * XREFs of SeAuditTransactionStateChange @ 0x1406D2250
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

void __stdcall SeAuditTransactionStateChange(GUID *TransactionId, GUID *ResourceManagerId, ULONG NewTransactionState)
{
  __int64 v4; // rsi
  GUID *v6; // rdi
  _QWORD *PrimaryToken; // rbx
  _QWORD **ClientToken; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // eax
  PUNICODE_STRING v12; // rbx
  _KPROCESS *Process; // rcx
  int v14; // eax
  PUNICODE_STRING pImageFileName; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+68h] [rbp-A0h] BYREF
  int v19; // [rsp+488h] [rbp+380h] BYREF
  __int64 v20; // [rsp+48Ch] [rbp+384h]
  int v21; // [rsp+494h] [rbp+38Ch]

  SubjectContext.ClientToken = 0LL;
  v4 = NewTransactionState;
  SubjectContext.ImpersonationLevel = 0x80000000;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  memset((char *)Src + 4, 0, 0x414uLL);
  pImageFileName = 0LL;
  v6 = (GUID *)&v19;
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  LOWORD(Src[2]) = 116;
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
  if ( SeLocateProcessImageName(KeGetCurrentThread()->ApcState.Process, &pImageFileName) < 0 || !pImageFileName )
  {
    RtlInitUnicodeString(&DestinationString, L"?");
    pImageFileName = &DestinationString;
  }
  v11 = *(unsigned __int8 *)(v10 + 1);
  Src[12] = v9;
  LODWORD(Src[3]) = 4;
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v11 + 8;
  Src[15] = 0x100000000DLL;
  Src[23] = 0x100000000DLL;
  Src[10] = SeSubsystemName;
  v12 = pImageFileName;
  Src[11] = 0x800000005LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Src[18] = TransactionId;
  Src[28] = Process[1].Header.WaitListHead.Blink;
  v14 = pImageFileName->Length + 16;
  Src[19] = 0x400000003LL;
  HIDWORD(Src[31]) = v14;
  Src[20] = v4;
  Src[26] = v6;
  Src[27] = 0x80000000BLL;
  LODWORD(Src[31]) = 2;
  Src[34] = pImageFileName;
  LODWORD(Src[1]) = 8;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v12 != &DestinationString )
    ExFreePoolWithTag(v12, 0);
}
