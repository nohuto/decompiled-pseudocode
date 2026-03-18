/*
 * XREFs of PspGetNextChildJob @ 0x1403EB804
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
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
    v6 = (_QWORD *)a2[129];
  else
    v6 = *(_QWORD **)(a1 + 1048);
  while ( v6 != (_QWORD *)(a1 + 1048) )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 129)) )
    {
      v3 = v6 - 129;
      break;
    }
    v6 = (_QWORD *)*v6;
  }
  PspUnlockJob(a1, CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v3;
}
