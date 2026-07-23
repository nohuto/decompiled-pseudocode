/*
 * XREFs of PsAssignProcessToJobObject @ 0x1404D597C
 * Callers:
 *     NtAssignProcessToJobObject @ 0x1404D58A0 (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x14067F418 (PspAssignProcessToJobList.c)
 * Callees:
 *     PspGetJobAssignmentDisposition @ 0x1404D5AB0 (PspGetJobAssignmentDisposition.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(void *a1, ULONG_PTR a2)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition(a1, a2, &v6) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(a1, a2);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
