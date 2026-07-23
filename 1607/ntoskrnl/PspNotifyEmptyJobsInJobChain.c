/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x140468F04
 * Callers:
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140468E34 (PspEvaluateAndNotifyEmptyJob.c)
 */

void __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  signed __int8 v1; // cf
  __int64 v2; // rbx
  char v3; // di

  v1 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 768), 0xBu);
  v2 = *(_QWORD *)(a1 + 944);
  v3 = !v1;
  while ( v2 )
  {
    PspEvaluateAndNotifyEmptyJob((PRKEVENT)v2, v3, 1);
    v2 = *(_QWORD *)(v2 + 1056);
  }
}
