/*
 * XREFs of iswctype @ 0x140146784
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1400E87D8 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1400E8864 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1400E9768 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1400E988C (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x14014494C (iswalnum.c)
 *     iswdigit @ 0x140144958 (iswdigit.c)
 *     iswspace @ 0x140144964 (iswspace.c)
 *     towlower @ 0x140145A70 (towlower.c)
 *     _whiteout @ 0x14014C6A4 (_whiteout.c)
 *     _winput_s @ 0x14014C6F4 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1401FAA88 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
