/*
 * XREFs of WerpWaitForCrashReporting @ 0x1800087D4
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000786C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1800D8780 (RtlReportExceptionEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtWaitForMultipleObjects @ 0x1800A6F70 (NtWaitForMultipleObjects.c)
 */

__int64 __fastcall WerpWaitForCrashReporting(void *a1, void *a2, void *a3, LARGE_INTEGER *Timeout)
{
  unsigned int v4; // ebx
  ULONG v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  NTSTATUS i; // eax
  HANDLE Handles[3]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v6 = 0;
  if ( a1 )
  {
    Handles[0] = a1;
    v6 = 1;
  }
  if ( a2 )
  {
    v7 = v6++;
    Handles[v7] = a2;
  }
  if ( a3 )
  {
    v8 = v6++;
    Handles[v8] = a3;
  }
  if ( v6 )
  {
    if ( v6 > 3 )
    {
      return (unsigned int)-1073741684;
    }
    else
    {
      for ( i = NtWaitForMultipleObjects(v6, Handles, WaitAny, 1u, Timeout);
            ;
            i = NtWaitForMultipleObjects(v6, Handles, WaitAny, 1u, Timeout) )
      {
        if ( i < 0 )
          return (unsigned int)i;
        if ( i < (int)v6 )
          return v4;
        if ( i == 258 )
          break;
      }
      return (unsigned int)-1073741823;
    }
  }
  return v4;
}
