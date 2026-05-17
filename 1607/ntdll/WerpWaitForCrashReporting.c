/*
 * XREFs of WerpWaitForCrashReporting @ 0x1800087E4
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtWaitForMultipleObjects @ 0x1800A6F70 (NtWaitForMultipleObjects.c)
 */

__int64 __fastcall WerpWaitForCrashReporting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 i; // [rsp+20h] [rbp-38h]
  _QWORD v12[3]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a4;
  v6 = 0;
  if ( a1 )
  {
    v12[0] = a1;
    v6 = 1;
  }
  if ( a2 )
  {
    v7 = v6++;
    v12[v7] = a2;
  }
  if ( a3 )
  {
    v8 = v6++;
    v12[v8] = a3;
  }
  if ( v6 )
  {
    if ( v6 > 3 )
    {
      return (unsigned int)-1073741684;
    }
    else
    {
      for ( i = a4; ; i = v5 )
      {
        LOBYTE(a4) = 1;
        v9 = NtWaitForMultipleObjects(v6, v12, 1LL, a4, i);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( v9 < (int)v6 )
          return v4;
        if ( v9 == 258 )
          break;
      }
      return (unsigned int)-1073741823;
    }
  }
  return v4;
}
