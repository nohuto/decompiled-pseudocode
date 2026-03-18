/*
 * XREFs of RtlFormatMessage @ 0x1406CA6BC
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1404E3234 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x14067B0F8 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     RtlFormatMessageEx @ 0x1406CA708 (RtlFormatMessageEx.c)
 */

NTSTATUS __stdcall RtlFormatMessage(
        PWSTR Message,
        ULONG MaxWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  return RtlFormatMessageEx(
           (int)Message,
           MaxWidth,
           IgnoreInserts,
           ArgumentsAreAnsi,
           ArgumentsAreAnArray,
           (__int64)Arguments,
           Buffer,
           BufferSize,
           (__int64)ReturnLength);
}
