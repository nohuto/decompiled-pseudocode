/*
 * XREFs of RtlWaitOnAddress @ 0x1800783F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x180035EEC (RtlpWaitOnAddress.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  return RtlpWaitOnAddress(Address, CompareAddress, AddressSize, (__int64)Timeout, RtlpWaitOnAddressSpinCount);
}
