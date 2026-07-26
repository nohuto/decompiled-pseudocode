/*
 * XREFs of EthIndicateReceive @ 0x1C0065D90
 * Callers:
 *     <none>
 * Callees:
 *     ndisLWM5IndicateReceive @ 0x1C0066094 (ndisLWM5IndicateReceive.c)
 */

__int64 __fastcall EthIndicateReceive(int a1, int a2, __int64 a3, int a4, int a5, void *a6, int a7, int a8)
{
  size_t v9; // [rsp+30h] [rbp-18h]

  LODWORD(v9) = a8;
  return ndisLWM5IndicateReceive(a1, a2, a4, a5, a6, a7, v9);
}
