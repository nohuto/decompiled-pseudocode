/*
 * XREFs of WerpGetProcessSnapshot @ 0x180006C58
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000786C (RtlReportExceptionHelper.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180029F50 (RtlQueryResourcePolicy.c)
 *     PssNtCaptureSnapshot @ 0x180059150 (PssNtCaptureSnapshot.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 */

NTSTATUS __fastcall WerpGetProcessSnapshot(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  HANDLE SnapshotHandle; // [rsp+50h] [rbp+18h] BYREF

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
      result = RtlQueryResourcePolicy(0LL, 0LL, &SnapshotHandle, 4LL);
      if ( result >= 0 )
      {
        if ( (int)SnapshotHandle <= 10 )
        {
          return -1073741801;
        }
        else
        {
          SnapshotHandle = a2;
          result = PssNtCaptureSnapshot(&SnapshotHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xFC0019FF, 0x10001Fu);
          if ( result >= 0 )
            return 0;
        }
      }
    }
  }
  return result;
}
