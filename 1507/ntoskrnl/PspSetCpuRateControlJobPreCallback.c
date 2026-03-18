/*
 * XREFs of PspSetCpuRateControlJobPreCallback @ 0x14055A89C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetCpuRateControlJobPreCallback(__int64 a1, __int64 a2)
{
  if ( a2 )
    *(_QWORD *)(a1 + 1008) = a2 + 128;
  else
    *(_QWORD *)(a1 + 1008) = 0LL;
  return 0LL;
}
