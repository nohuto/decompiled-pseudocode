/*
 * XREFs of RtlWaitOnAddress @ 0x1800783F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x180035EEC (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  return RtlpWaitOnAddress(a1, a2, a3, a4, RtlpWaitOnAddressSpinCount);
}
