/*
 * XREFs of iswctype @ 0x140150120
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1400A6894 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1400A6920 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1400A7908 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1400A7970 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x14014E2E4 (iswalnum.c)
 *     iswdigit @ 0x14014E2F0 (iswdigit.c)
 *     iswspace @ 0x14014E2FC (iswspace.c)
 *     towlower @ 0x14014F40C (towlower.c)
 *     _whiteout @ 0x140155F9C (_whiteout.c)
 *     _winput_s @ 0x140155FEC (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x140214BE0 (RtlEthernetStringToAddressW.c)
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
