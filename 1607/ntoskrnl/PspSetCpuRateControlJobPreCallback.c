/*
 * XREFs of PspSetCpuRateControlJobPreCallback @ 0x1404D1480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetCpuRateControlJobPreCallback(__int64 a1, __int64 a2)
{
  if ( a2 )
    *(_QWORD *)(a1 + 1000) = a2 + 128;
  else
    *(_QWORD *)(a1 + 1000) = 0LL;
  return 0LL;
}
