/*
 * XREFs of PspGetRateControlHeaderPtr @ 0x1404693C8
 * Callers:
 *     PspQueryRateControlHistory @ 0x14046917C (PspQueryRateControlHistory.c)
 *     PspRemoveRateControl @ 0x1406807A8 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140680A28 (PspSetJobRateControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetRateControlHeaderPtr(__int64 a1, int a2)
{
  __int64 result; // rax

  result = a1 + 992;
  if ( !a2 )
    return a1 + 1296;
  return result;
}
