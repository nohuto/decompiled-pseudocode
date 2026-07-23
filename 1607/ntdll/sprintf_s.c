/*
 * XREFs of sprintf_s @ 0x1800A1E20
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800112B0 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv6AddressToStringA @ 0x18007D8D0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x180087280 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800EDF80 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800EDFF0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800EE0B0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x1800A1E50 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
