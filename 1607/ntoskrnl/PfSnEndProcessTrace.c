/*
 * XREFs of PfSnEndProcessTrace @ 0x1403E8EC4
 * Callers:
 *     PspExitProcess @ 0x140460564 (PspExitProcess.c)
 *     PfSnOperationProcess @ 0x1404F014C (PfSnOperationProcess.c)
 *     PfSnFailProcessTrace @ 0x14052A490 (PfSnFailProcessTrace.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     PfSnReferenceProcessTrace @ 0x1400F0910 (PfSnReferenceProcessTrace.c)
 *     memcmp @ 0x14014DE90 (memcmp.c)
 */

__int64 __fastcall PfSnEndProcessTrace(__int64 a1, signed __int32 a2, const void *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rax
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = PfSnReferenceProcessTrace(a1);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( !a3 || !memcmp(a3, &v5[3], 0x40uLL) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)&v7[50], a2, 0) )
        v6 = -1073741431;
      else
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&v7[46], DelayedWorkQueue);
    }
    else
    {
      v6 = -1073741198;
    }
    ExReleaseRundownProtection(v7 + 45);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}
