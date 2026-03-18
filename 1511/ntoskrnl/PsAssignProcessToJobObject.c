/*
 * XREFs of PsAssignProcessToJobObject @ 0x140486C70
 * Callers:
 *     NtAssignProcessToJobObject @ 0x140486B98 (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x140640F38 (PspAssignProcessToJobList.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x140487084 (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(PVOID Object, PEPROCESS Process)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition(Object, Process, &v6) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(Object, Process);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
