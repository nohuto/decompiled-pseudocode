/*
 * XREFs of swprintf_s @ 0x1800A2340
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x18005BFF0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x18005C140 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x18005E630 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x180081810 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1800818E0 (RtlIpv4AddressToStringW.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     RtlEthernetAddressToStringW @ 0x1800EE1E0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x1800A2370 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
