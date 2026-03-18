/*
 * XREFs of SepAdtLogAuditFailureEvent @ 0x1406D2D08
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall SepAdtLogAuditFailureEvent(unsigned int a1, char a2)
{
  unsigned __int32 v3; // edx
  unsigned __int8 *v4; // r8
  __int64 v5; // rcx
  _OWORD Src[66]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Src, 0, 1048);
  if ( !SepAdtAuditFailureEventLogged || a2 || (unsigned int)SepAdtAuditFailureCount >= 0x32 )
  {
    SepAdtAuditFailureEventLogged = 1;
    v3 = _InterlockedExchange(&SepAdtAuditFailureCount, 0);
    v4 = (unsigned __int8 *)SeLocalSystemSid;
    *(_QWORD *)&Src[0] = 0x20900000001LL;
    *(_QWORD *)&Src[1] = 0x200080066LL;
    if ( a2 )
    {
      DWORD1(Src[1]) = 18;
LABEL_7:
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4 * v4[1] + 8;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 3] = v4;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 1;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 32;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 3] = SeSubsystemName;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 10;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = a1;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 3;
      v5 = (unsigned __int8)SepCrashOnAuditFail;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 1;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = v5;
      ++DWORD2(Src[0]);
      DWORD2(Src[2 * DWORD2(Src[0]) + 1]) = 3;
      HIDWORD(Src[2 * DWORD2(Src[0]) + 1]) = 4;
      *(_QWORD *)&Src[2 * DWORD2(Src[0]) + 2] = v3;
      ++DWORD2(Src[0]);
      SepAdtLogAuditRecord(Src);
      return 0LL;
    }
    if ( v3 )
      goto LABEL_7;
  }
  return 0LL;
}
