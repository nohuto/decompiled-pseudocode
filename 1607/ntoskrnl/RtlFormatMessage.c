/*
 * XREFs of RtlFormatMessage @ 0x140686F04
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1404F9894 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A568 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     RtlFormatMessageEx @ 0x140686F50 (RtlFormatMessageEx.c)
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
