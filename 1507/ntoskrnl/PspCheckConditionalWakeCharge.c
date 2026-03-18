/*
 * XREFs of PspCheckConditionalWakeCharge @ 0x14053CBE8
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     EtwpQueueNotification @ 0x1404D5430 (EtwpQueueNotification.c)
 *     PsChargeProcessWakeCounter @ 0x1405572F4 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     PspIsProcessInJob @ 0x14053CC40 (PspIsProcessInJob.c)
 */

char __fastcall PspCheckConditionalWakeCharge(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // rdx
  int v5; // r9d

  v2 = a1;
  if ( !*(_QWORD *)(a1 + 944) || *(_QWORD *)(*(_QWORD *)(a1 + 944) + 1072LL) != *(_QWORD *)(a2 + 1072) )
    return 1;
  while ( (unsigned int)PspIsProcessInJob(v2, a2) != 292 )
  {
    if ( (*(_DWORD *)(v4 + 956) & v5) != 0 )
      return 1;
    a2 = *(_QWORD *)(v4 + 1064);
  }
  return 0;
}
