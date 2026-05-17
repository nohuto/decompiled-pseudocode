/*
 * XREFs of swprintf_s @ 0x1800A0F20
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x180049330 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180049480 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x18004C9C0 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x18007E180 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x18007E250 (RtlIpv4AddressToStringW.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800C7844 (CsrpLocalSetupForSecureProcess.c)
 *     RtlEthernetAddressToStringW @ 0x1800E4FC0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x1800A0F50 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
