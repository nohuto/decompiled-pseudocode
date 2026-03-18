/*
 * XREFs of SeAuditPlugAndPlay @ 0x1406D1DA4
 * Callers:
 *     PiAuditStartedDevice @ 0x1406964A4 (PiAuditStartedDevice.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

void __fastcall SeAuditPlugAndPlay(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3, __int64 a4)
{
  _QWORD *PrimaryToken; // r8
  _QWORD *ClientToken; // rax
  _QWORD *v10; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  SubjectContext.ClientToken = 0LL;
  SubjectContext.ImpersonationLevel = 0x80000000;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  memset((char *)Src + 4, 0, 0x414uLL);
  Src[0] = 0x191000000005LL;
  LODWORD(Src[2]) = 524425;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  LODWORD(Src[7]) = 1;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  HIDWORD(Src[7]) = 32;
  Src[11] = 0x800000005LL;
  v10 = (_QWORD *)ClientToken[19];
  Src[15] = 0x100000000DLL;
  Src[18] = a4;
  Src[22] = a1;
  Src[6] = *v10;
  Src[26] = a2;
  Src[30] = a3;
  LODWORD(v10) = *(unsigned __int8 *)(Src[6] + 1LL);
  LODWORD(Src[19]) = 34;
  LODWORD(Src[23]) = 34;
  LODWORD(Src[27]) = 34;
  HIDWORD(Src[3]) = 4 * (_DWORD)v10 + 8;
  LODWORD(Src[1]) = 7;
  Src[10] = SeSubsystemName;
  Src[12] = PrimaryToken[3];
  HIDWORD(Src[19]) = *a1 + 16;
  HIDWORD(Src[23]) = *a2 + 16;
  HIDWORD(Src[27]) = *a3 + 16;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
