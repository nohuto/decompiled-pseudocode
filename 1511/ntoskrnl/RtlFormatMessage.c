/*
 * XREFs of RtlFormatMessage @ 0x1406475D8
 * Callers:
 *     PiGetDeviceRegProperty @ 0x140459C20 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x140600514 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     RtlFormatMessageEx @ 0x140647624 (RtlFormatMessageEx.c)
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
