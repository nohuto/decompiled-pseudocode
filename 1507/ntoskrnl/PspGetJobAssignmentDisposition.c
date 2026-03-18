/*
 * XREFs of PspGetJobAssignmentDisposition @ 0x14041BE48
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14041A4C4 (PsAssignProcessToJobObject.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PspIsProcessInJob @ 0x14053CC40 (PspIsProcessInJob.c)
 */

__int64 __fastcall PspGetJobAssignmentDisposition(__int64 a1, struct _EX_RUNDOWN_REF *a2, _DWORD *a3)
{
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rtt
  unsigned __int64 v9; // rtt
  __int64 v11; // rax

  v4 = a2 + 92;
  _m_prefetchw(&a2[92]);
  v7 = 0;
  v8 = a2[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[92], v8 + 2, v8)
    && !ExfAcquireRundownProtection(v4) )
  {
    return 3221225738LL;
  }
  if ( a2[118].Count )
  {
    if ( (unsigned int)PspIsProcessInJob(a2, a1) == 292 )
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
            goto LABEL_11;
        }
        *a3 = 3;
      }
      else
      {
LABEL_11:
        if ( *(_QWORD *)(a1 + 1064) || *(_DWORD *)(a1 + 212) )
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
  _m_prefetchw(v4);
  v9 = v4->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v9 - 2, v9) )
    ExfReleaseRundownProtection(v4);
  return v7;
}
