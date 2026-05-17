/*
 * XREFs of sprintf_s @ 0x18008F260
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x18000FDD0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x1800776E0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800DF610 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800DF680 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800DF740 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x18008F290 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
