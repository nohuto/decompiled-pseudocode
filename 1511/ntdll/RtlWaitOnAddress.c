/*
 * XREFs of RtlWaitOnAddress @ 0x180084620
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x18002FFCC (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  return RtlpWaitOnAddress(a1, a2, a3, a4, RtlpWaitOnAddressSpinCount);
}
