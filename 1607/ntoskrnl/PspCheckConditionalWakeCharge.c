/*
 * XREFs of PspCheckConditionalWakeCharge @ 0x1404D43D8
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     PsChargeProcessWakeCounter @ 0x140501218 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     PspIsProcessInJob @ 0x1404D5808 (PspIsProcessInJob.c)
 */

char __fastcall PspCheckConditionalWakeCharge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r9
  __int64 v6; // rdx

  v3 = a1;
  if ( !*(_QWORD *)(a1 + 944) || *(_QWORD *)(*(_QWORD *)(a1 + 944) + 1072LL) != *(_QWORD *)(a2 + 1072) )
    return 1;
  v5 = (unsigned int)(1 << a3);
  while ( (unsigned int)PspIsProcessInJob(v3, a2, a3, v5) != 292 )
  {
    if ( (*(_DWORD *)(v6 + 948) & (unsigned int)v5) != 0 )
      return 1;
    a2 = *(_QWORD *)(v6 + 1056);
  }
  return 0;
}
