/*
 * XREFs of SeAuditPlugAndPlay @ 0x14068E0CC
 * Callers:
 *     PiAuditDeviceOperation @ 0x14064C804 (PiAuditDeviceOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AdtpWriteToEtwEx @ 0x1402379CC (AdtpWriteToEtwEx.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 */

void __fastcall SeAuditPlugAndPlay(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        char a9)
{
  int v13; // eax
  unsigned int v14; // ecx
  _QWORD *PrimaryToken; // rdx
  _QWORD **ClientToken; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v25[132]; // [rsp+58h] [rbp-B0h] BYREF

  SubjectContext.ClientToken = 0LL;
  SubjectContext.ImpersonationLevel = 0x80000000;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  memset(v25, 0, sizeof(v25));
  if ( a8 )
  {
    switch ( a8 )
    {
      case 1:
        v13 = 6419;
        break;
      case 2:
        v13 = 6420;
        break;
      case 3:
        v13 = 6421;
        break;
      case 4:
        v13 = 6422;
        break;
      case 5:
        v13 = 6423;
        break;
      case 6:
        v13 = 6424;
        break;
      default:
        return;
    }
    v14 = 0;
  }
  else
  {
    v13 = 6416;
    v14 = 1;
  }
  HIDWORD(v25[0]) = v13;
  LODWORD(v25[0]) = 5;
  HIDWORD(v25[2]) = 524426;
  v25[1] = v14;
  if ( !a9 )
    HIWORD(v25[2]) = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
  {
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    PrimaryToken = SubjectContext.ClientToken;
  }
  v17 = *ClientToken[19];
  v18 = PrimaryToken[3];
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 4;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 4 * *(unsigned __int8 *)(v17 + 1) + 8;
  v25[4 * HIDWORD(v25[1]) + 7] = v17;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 1;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 32;
  v25[4 * HIDWORD(v25[1]) + 7] = &SeSubsystemName;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 5;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 8;
  v25[4 * HIDWORD(v25[1]) + 5] = v18;
  v19 = *a1;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 1;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = v19 + 16;
  v20 = *a2 + 16;
  v25[4 * HIDWORD(v25[1]) + 7] = a1;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 1;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = v20;
  v25[4 * HIDWORD(v25[1]) + 7] = a2;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 13;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 16;
  v25[4 * HIDWORD(v25[1]) + 7] = a6;
  v21 = *a7;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 1;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = v21 + 16;
  v25[4 * HIDWORD(v25[1]) + 7] = a7;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 34;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = *a3 + 16;
  v22 = *a4 + 16;
  v25[4 * HIDWORD(v25[1]) + 7] = a3;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 34;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = v22;
  v25[4 * HIDWORD(v25[1]) + 7] = a4;
  ++HIDWORD(v25[1]);
  LODWORD(v25[4 * HIDWORD(v25[1]) + 4]) = 34;
  HIDWORD(v25[4 * HIDWORD(v25[1]) + 4]) = *a5 + 16;
  v25[4 * HIDWORD(v25[1]) + 7] = a5;
  ++HIDWORD(v25[1]);
  AdtpWriteToEtwEx((__int64)v25, &v23);
  SeReleaseSubjectContext(&SubjectContext);
}
