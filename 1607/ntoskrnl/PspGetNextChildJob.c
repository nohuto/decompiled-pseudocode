/*
 * XREFs of PspGetNextChildJob @ 0x1404676C4
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
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
