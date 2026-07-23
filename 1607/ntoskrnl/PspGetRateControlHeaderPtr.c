/*
 * XREFs of PspGetRateControlHeaderPtr @ 0x140468298
 * Callers:
 *     PspQueryRateControlHistory @ 0x14046804C (PspQueryRateControlHistory.c)
 *     PspRemoveRateControl @ 0x14068088C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140680B0C (PspSetJobRateControl.c)
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
