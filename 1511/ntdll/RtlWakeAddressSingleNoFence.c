/*
 * XREFs of RtlWakeAddressSingleNoFence @ 0x1800EABE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlWakeAddressSingleNoFence(unsigned __int64 a1)
{
  return RtlpWakeByAddress(a1, 0);
}
