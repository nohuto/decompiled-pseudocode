/*
 * XREFs of iswctype @ 0x1800876C0
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x18005DBC0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18005DD40 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x18005E5A0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18005E6E0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1800875F0 (iswalnum.c)
 *     iswalpha @ 0x180087600 (iswalpha.c)
 *     iswdigit @ 0x180087630 (iswdigit.c)
 *     iswgraph @ 0x180087640 (iswgraph.c)
 *     iswlower @ 0x180087650 (iswlower.c)
 *     iswprint @ 0x180087660 (iswprint.c)
 *     iswspace @ 0x180087670 (iswspace.c)
 *     iswxdigit @ 0x180087680 (iswxdigit.c)
 *     towlower @ 0x1800898F0 (towlower.c)
 *     _whiteout @ 0x1800924D8 (_whiteout.c)
 *     _winput_s @ 0x180092530 (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800D4F0C (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1800DFA30 (RtlEthernetStringToAddressW.c)
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
