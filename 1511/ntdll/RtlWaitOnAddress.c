/*
 * XREFs of RtlWaitOnAddress @ 0x180084620
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x18002FFCC (RtlpWaitOnAddress.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  return RtlpWaitOnAddress(Address, CompareAddress, AddressSize, (__int64)Timeout, RtlpWaitOnAddressSpinCount);
}
