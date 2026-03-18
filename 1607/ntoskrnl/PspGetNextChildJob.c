/*
 * XREFs of PspGetNextChildJob @ 0x1404687F4
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140468674 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006ADC0 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x140468EB0 (PspUnlockJob.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // r14
  _QWORD *v6; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  if ( a2 )
    v6 = (_QWORD *)a2[128];
  else
    v6 = *(_QWORD **)(a1 + 1040);
  while ( v6 != (_QWORD *)(a1 + 1040) )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 128)) )
    {
      v3 = v6 - 128;
      break;
    }
    v6 = (_QWORD *)*v6;
  }
  PspUnlockJob(a1, CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v3;
}
