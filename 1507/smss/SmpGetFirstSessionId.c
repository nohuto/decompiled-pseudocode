/*
 * XREFs of SmpGetFirstSessionId @ 0x140004D28
 * Callers:
 *     SmscpParseArgs @ 0x140004180 (SmscpParseArgs.c)
 *     wmain @ 0x140004718 (wmain.c)
 * Callees:
 *     SmpIsHostSmss @ 0x140004D48 (SmpIsHostSmss.c)
 */

__int64 SmpGetFirstSessionId()
{
  __int64 result; // rax
  int v1; // eax
  unsigned int JobInformation; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int8)SmpIsHostSmss() )
    return 0LL;
  while ( 1 )
  {
    JobInformation = 0;
    Interval.QuadPart = -2500000LL;
    v1 = NtQueryInformationJobObject(0LL, JobObjectAssociateCompletionPortInformation|0x20, &JobInformation, 4u, 0LL);
    if ( v1 < 0 )
      NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v1);
    result = JobInformation;
    if ( JobInformation != -1 )
      break;
    NtDelayExecution(0, &Interval);
  }
  return result;
}
