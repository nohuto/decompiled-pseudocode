/*
 * XREFs of PspGetJobAssignmentDisposition @ 0x1404D5AB0
 * Callers:
 *     PsAssignProcessToJobObject @ 0x1404D597C (PsAssignProcessToJobObject.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PspIsProcessInJob @ 0x1404D5808 (PspIsProcessInJob.c)
 */

__int64 __fastcall PspGetJobAssignmentDisposition(__int64 a1, struct _EX_RUNDOWN_REF *a2, _DWORD *a3)
{
  struct _EX_RUNDOWN_REF *v3; // r14
  unsigned int v7; // ebx
  __int64 v9; // rax

  v3 = a2 + 92;
  v7 = 0;
  if ( !ExAcquireRundownProtection(a2 + 92) )
    return 3221225738LL;
  if ( a2[118].Count )
  {
    if ( (unsigned int)PspIsProcessInJob((__int64)a2, a1) == 292 )
    {
      *a3 = 2;
    }
    else
    {
      v9 = a1;
      if ( a1 )
      {
        while ( v9 != a2[118].Count )
        {
          v9 = *(_QWORD *)(v9 + 1056);
          if ( !v9 )
            goto LABEL_9;
        }
        *a3 = 3;
      }
      else
      {
LABEL_9:
        if ( *(_QWORD *)(a1 + 1056) || *(_DWORD *)(a1 + 212) )
          v7 = -1073741637;
        else
          *a3 = 4;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  ExReleaseRundownProtection(v3);
  return v7;
}
