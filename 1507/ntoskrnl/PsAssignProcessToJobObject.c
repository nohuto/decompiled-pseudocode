/*
 * XREFs of PsAssignProcessToJobObject @ 0x14041A4C4
 * Callers:
 *     NtAssignProcessToJobObject @ 0x14041A3EC (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x1406C34A8 (PspAssignProcessToJobList.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x14041BE48 (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(void *a1, void *a2)
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
