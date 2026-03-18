/*
 * XREFs of PspGetJobAssignmentDisposition @ 0x140487084
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140486C70 (PsAssignProcessToJobObject.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     PspIsProcessInJob @ 0x14048732C (PspIsProcessInJob.c)
 */

__int64 __fastcall PspGetJobAssignmentDisposition(__int64 a1, struct _EX_RUNDOWN_REF *a2, _DWORD *a3)
{
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v11; // rax

  v3 = a2 + 92;
  v9 = 0;
  if ( !ExAcquireRundownProtection(a2 + 92) )
    return 3221225738LL;
  if ( a2[118].Count )
  {
    if ( (unsigned int)PspIsProcessInJob(a2, a1, v7, v8) == 292 )
    {
      *a3 = 2;
    }
    else
    {
      v11 = a1;
      if ( a1 )
      {
        while ( v11 != a2[118].Count )
        {
          v11 = *(_QWORD *)(v11 + 1064);
          if ( !v11 )
            goto LABEL_9;
        }
        *a3 = 3;
      }
      else
      {
LABEL_9:
        if ( *(_QWORD *)(a1 + 1064) || *(_DWORD *)(a1 + 212) )
          v9 = -1073741637;
        else
          *a3 = 4;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  ExReleaseRundownProtection_0(v3);
  return v9;
}
