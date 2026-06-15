/*
 * XREFs of Template_qqqqqqq @ 0x18009A29C
 * Callers:
 *     ReportStatusToSCMgr @ 0x18003DC08 (ReportStatusToSCMgr.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqqqqqq(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _QWORD v10[14]; // [rsp+20h] [rbp-51h] BYREF
  int v11; // [rsp+C0h] [rbp+4Fh] BYREF
  int v12; // [rsp+C8h] [rbp+57h] BYREF

  v12 = a4;
  v11 = a3;
  v10[0] = &v11;
  v10[1] = 4LL;
  v10[2] = &v12;
  v10[3] = 4LL;
  v10[4] = &a5;
  v10[5] = 4LL;
  v10[6] = &a6;
  v10[8] = &a7;
  v10[10] = &a8;
  v10[12] = &a9;
  v10[7] = 4LL;
  v10[9] = 4LL;
  v10[11] = 4LL;
  v10[13] = 4LL;
  return ((__int64 (__fastcall *)(REGHANDLE, void *, __int64, _QWORD *))EtwEventWrite)(
           Microsoft_Windows_AudioHandle,
           &EVT_AUDIOSRV_FAIL_SET_SERVICE_STATUS,
           7LL,
           v10);
}
