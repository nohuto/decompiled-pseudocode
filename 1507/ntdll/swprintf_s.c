/*
 * XREFs of swprintf_s @ 0x18008F780
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x18000F9F0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x18000FB40 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x180064E10 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x180072060 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x180072130 (RtlIpv4AddressToStringW.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800BAB28 (CsrpLocalSetupForSecureProcess.c)
 *     RtlEthernetAddressToStringW @ 0x1800DF870 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18008F7B0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
