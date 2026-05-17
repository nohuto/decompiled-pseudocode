/*
 * XREFs of WerpGetProcessSnapshot @ 0x180006C68
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180029F60 (RtlQueryResourcePolicy.c)
 *     PssNtCaptureSnapshot @ 0x180059160 (PssNtCaptureSnapshot.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 */

NTSTATUS __fastcall WerpGetProcessSnapshot(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  result = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &v4, 4u, 0LL);
  if ( result >= 0 )
  {
    if ( (_DWORD)v4 )
    {
      return -1073741823;
    }
    else
    {
      result = RtlQueryResourcePolicy(0LL, 0LL, &v5, 4LL);
      if ( result >= 0 )
      {
        if ( (int)v5 <= 10 )
        {
          return -1073741801;
        }
        else
        {
          v5 = a2;
          result = PssNtCaptureSnapshot(&v5, -1LL, 4227865087LL, 1048607LL);
          if ( result >= 0 )
            return 0;
        }
      }
    }
  }
  return result;
}
