/*
 * XREFs of RmpObjectTableEnumerationBegin @ 0x18001F564
 * Callers:
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180046590 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableEnumerationBegin(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  RtlAcquireSRWLockShared(a1 + 16);
  *a2 = a1;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[1] = a1;
  result = *(_QWORD *)(a1 + 8);
  a2[3] = result;
  a2[2] = result;
  return result;
}
