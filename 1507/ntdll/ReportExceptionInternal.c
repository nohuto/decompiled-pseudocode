/*
 * XREFs of ReportExceptionInternal @ 0x180001C2C
 * Callers:
 *     RtlWerpReportException @ 0x180001C20 (RtlWerpReportException.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 * Callees:
 *     SendMessageToWERService @ 0x180001D58 (SendMessageToWERService.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall ReportExceptionInternal(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v10; // rdx
  __int64 result; // rax
  _QWORD v12[176]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[176]; // [rsp+5A0h] [rbp+4A0h] BYREF

  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset(v13, 0, 0x578uLL);
  v10 = 0LL;
  LODWORD(v13[0]) = 91751760;
  LODWORD(v13[5]) = 0x20000000;
  v13[7] = a2;
  v13[6] = __PAIR64__(a1, a5);
  if ( a3 )
  {
    while ( (unsigned int)v10 < a4 && (unsigned int)v10 < 5 )
    {
      v13[v10 + 8] = *(_QWORD *)(a3 + 8 * v10);
      v10 = (unsigned int)(v10 + 1);
    }
  }
  memset(v12, 0, 0x578uLL);
  LODWORD(v12[0]) = 91751760;
  result = SendMessageToWERService(v13, v12);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = v12[6];
      return 0LL;
    }
  }
  return result;
}
