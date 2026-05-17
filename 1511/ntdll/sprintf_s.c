/*
 * XREFs of sprintf_s @ 0x1800A0A00
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x180049710 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x180082F40 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800E4D60 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800E4DD0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800E4E90 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x1800A0A30 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
